/*
 * dbv0_0_37_response_tres.h
 *
 * 
 */

#ifndef _dbv0_0_37_response_tres_H_
#define _dbv0_0_37_response_tres_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_response_tres_t dbv0_0_37_response_tres_t;

#include "dbv0_0_37_error.h"



typedef struct dbv0_0_37_response_tres_t {
    list_t *errors; //nonprimitive container

} dbv0_0_37_response_tres_t;

dbv0_0_37_response_tres_t *dbv0_0_37_response_tres_create(
    list_t *errors
);

void dbv0_0_37_response_tres_free(dbv0_0_37_response_tres_t *dbv0_0_37_response_tres);

dbv0_0_37_response_tres_t *dbv0_0_37_response_tres_parseFromJSON(cJSON *dbv0_0_37_response_tresJSON);

cJSON *dbv0_0_37_response_tres_convertToJSON(dbv0_0_37_response_tres_t *dbv0_0_37_response_tres);

#endif /* _dbv0_0_37_response_tres_H_ */

