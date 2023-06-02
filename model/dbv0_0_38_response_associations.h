/*
 * dbv0_0_38_response_associations.h
 *
 * 
 */

#ifndef _dbv0_0_38_response_associations_H_
#define _dbv0_0_38_response_associations_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_response_associations_t dbv0_0_38_response_associations_t;

#include "dbv0_0_38_error.h"
#include "dbv0_0_38_meta.h"



typedef struct dbv0_0_38_response_associations_t {
    struct dbv0_0_38_meta_t *meta; //model
    list_t *errors; //nonprimitive container

} dbv0_0_38_response_associations_t;

dbv0_0_38_response_associations_t *dbv0_0_38_response_associations_create(
    dbv0_0_38_meta_t *meta,
    list_t *errors
);

void dbv0_0_38_response_associations_free(dbv0_0_38_response_associations_t *dbv0_0_38_response_associations);

dbv0_0_38_response_associations_t *dbv0_0_38_response_associations_parseFromJSON(cJSON *dbv0_0_38_response_associationsJSON);

cJSON *dbv0_0_38_response_associations_convertToJSON(dbv0_0_38_response_associations_t *dbv0_0_38_response_associations);

#endif /* _dbv0_0_38_response_associations_H_ */

