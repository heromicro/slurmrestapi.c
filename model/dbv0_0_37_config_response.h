/*
 * dbv0_0_37_config_response.h
 *
 * 
 */

#ifndef _dbv0_0_37_config_response_H_
#define _dbv0_0_37_config_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_config_response_t dbv0_0_37_config_response_t;

#include "dbv0_0_37_error.h"



typedef struct dbv0_0_37_config_response_t {
    list_t *errors; //nonprimitive container

} dbv0_0_37_config_response_t;

dbv0_0_37_config_response_t *dbv0_0_37_config_response_create(
    list_t *errors
);

void dbv0_0_37_config_response_free(dbv0_0_37_config_response_t *dbv0_0_37_config_response);

dbv0_0_37_config_response_t *dbv0_0_37_config_response_parseFromJSON(cJSON *dbv0_0_37_config_responseJSON);

cJSON *dbv0_0_37_config_response_convertToJSON(dbv0_0_37_config_response_t *dbv0_0_37_config_response);

#endif /* _dbv0_0_37_config_response_H_ */

