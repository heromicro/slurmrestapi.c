/*
 * dbv0_0_38_response_wckey_add.h
 *
 * 
 */

#ifndef _dbv0_0_38_response_wckey_add_H_
#define _dbv0_0_38_response_wckey_add_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_response_wckey_add_t dbv0_0_38_response_wckey_add_t;

#include "dbv0_0_38_error.h"
#include "dbv0_0_38_meta.h"



typedef struct dbv0_0_38_response_wckey_add_t {
    struct dbv0_0_38_meta_t *meta; //model
    list_t *errors; //nonprimitive container

} dbv0_0_38_response_wckey_add_t;

dbv0_0_38_response_wckey_add_t *dbv0_0_38_response_wckey_add_create(
    dbv0_0_38_meta_t *meta,
    list_t *errors
);

void dbv0_0_38_response_wckey_add_free(dbv0_0_38_response_wckey_add_t *dbv0_0_38_response_wckey_add);

dbv0_0_38_response_wckey_add_t *dbv0_0_38_response_wckey_add_parseFromJSON(cJSON *dbv0_0_38_response_wckey_addJSON);

cJSON *dbv0_0_38_response_wckey_add_convertToJSON(dbv0_0_38_response_wckey_add_t *dbv0_0_38_response_wckey_add);

#endif /* _dbv0_0_38_response_wckey_add_H_ */

