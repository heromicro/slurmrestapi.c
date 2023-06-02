/*
 * dbv0_0_39_warning.h
 *
 * 
 */

#ifndef _dbv0_0_39_warning_H_
#define _dbv0_0_39_warning_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_39_warning_t dbv0_0_39_warning_t;




typedef struct dbv0_0_39_warning_t {
    char *warning; // string
    char *source; // string
    char *description; // string

} dbv0_0_39_warning_t;

dbv0_0_39_warning_t *dbv0_0_39_warning_create(
    char *warning,
    char *source,
    char *description
);

void dbv0_0_39_warning_free(dbv0_0_39_warning_t *dbv0_0_39_warning);

dbv0_0_39_warning_t *dbv0_0_39_warning_parseFromJSON(cJSON *dbv0_0_39_warningJSON);

cJSON *dbv0_0_39_warning_convertToJSON(dbv0_0_39_warning_t *dbv0_0_39_warning);

#endif /* _dbv0_0_39_warning_H_ */

