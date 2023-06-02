/*
 * dbv0_0_38_account_response.h
 *
 * 
 */

#ifndef _dbv0_0_38_account_response_H_
#define _dbv0_0_38_account_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_account_response_t dbv0_0_38_account_response_t;

#include "dbv0_0_38_error.h"
#include "dbv0_0_38_meta.h"



typedef struct dbv0_0_38_account_response_t {
    struct dbv0_0_38_meta_t *meta; //model
    list_t *errors; //nonprimitive container

} dbv0_0_38_account_response_t;

dbv0_0_38_account_response_t *dbv0_0_38_account_response_create(
    dbv0_0_38_meta_t *meta,
    list_t *errors
);

void dbv0_0_38_account_response_free(dbv0_0_38_account_response_t *dbv0_0_38_account_response);

dbv0_0_38_account_response_t *dbv0_0_38_account_response_parseFromJSON(cJSON *dbv0_0_38_account_responseJSON);

cJSON *dbv0_0_38_account_response_convertToJSON(dbv0_0_38_account_response_t *dbv0_0_38_account_response);

#endif /* _dbv0_0_38_account_response_H_ */

