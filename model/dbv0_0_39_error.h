/*
 * dbv0_0_39_error.h
 *
 * 
 */

#ifndef _dbv0_0_39_error_H_
#define _dbv0_0_39_error_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_39_error_t dbv0_0_39_error_t;




typedef struct dbv0_0_39_error_t {
    int error_number; //numeric
    char *error; // string
    char *source; // string
    char *description; // string

} dbv0_0_39_error_t;

dbv0_0_39_error_t *dbv0_0_39_error_create(
    int error_number,
    char *error,
    char *source,
    char *description
);

void dbv0_0_39_error_free(dbv0_0_39_error_t *dbv0_0_39_error);

dbv0_0_39_error_t *dbv0_0_39_error_parseFromJSON(cJSON *dbv0_0_39_errorJSON);

cJSON *dbv0_0_39_error_convertToJSON(dbv0_0_39_error_t *dbv0_0_39_error);

#endif /* _dbv0_0_39_error_H_ */

