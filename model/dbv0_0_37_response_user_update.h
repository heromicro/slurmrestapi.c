/*
 * dbv0_0_37_response_user_update.h
 *
 * 
 */

#ifndef _dbv0_0_37_response_user_update_H_
#define _dbv0_0_37_response_user_update_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_response_user_update_t dbv0_0_37_response_user_update_t;

#include "dbv0_0_37_error.h"



typedef struct dbv0_0_37_response_user_update_t {
    list_t *errors; //nonprimitive container

} dbv0_0_37_response_user_update_t;

dbv0_0_37_response_user_update_t *dbv0_0_37_response_user_update_create(
    list_t *errors
);

void dbv0_0_37_response_user_update_free(dbv0_0_37_response_user_update_t *dbv0_0_37_response_user_update);

dbv0_0_37_response_user_update_t *dbv0_0_37_response_user_update_parseFromJSON(cJSON *dbv0_0_37_response_user_updateJSON);

cJSON *dbv0_0_37_response_user_update_convertToJSON(dbv0_0_37_response_user_update_t *dbv0_0_37_response_user_update);

#endif /* _dbv0_0_37_response_user_update_H_ */

