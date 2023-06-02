/*
 * dbv0_0_37_error.h
 *
 * 
 */

#ifndef _dbv0_0_37_error_H_
#define _dbv0_0_37_error_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_error_t dbv0_0_37_error_t;




typedef struct dbv0_0_37_error_t {
    int errno; //numeric
    char *error; // string

} dbv0_0_37_error_t;

dbv0_0_37_error_t *dbv0_0_37_error_create(
    int errno,
    char *error
);

void dbv0_0_37_error_free(dbv0_0_37_error_t *dbv0_0_37_error);

dbv0_0_37_error_t *dbv0_0_37_error_parseFromJSON(cJSON *dbv0_0_37_errorJSON);

cJSON *dbv0_0_37_error_convertToJSON(dbv0_0_37_error_t *dbv0_0_37_error);

#endif /* _dbv0_0_37_error_H_ */

