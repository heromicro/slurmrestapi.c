/*
 * dbv0_0_37_response_associations.h
 *
 * 
 */

#ifndef _dbv0_0_37_response_associations_H_
#define _dbv0_0_37_response_associations_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_response_associations_t dbv0_0_37_response_associations_t;

#include "dbv0_0_37_error.h"



typedef struct dbv0_0_37_response_associations_t {
    list_t *errors; //nonprimitive container

} dbv0_0_37_response_associations_t;

dbv0_0_37_response_associations_t *dbv0_0_37_response_associations_create(
    list_t *errors
);

void dbv0_0_37_response_associations_free(dbv0_0_37_response_associations_t *dbv0_0_37_response_associations);

dbv0_0_37_response_associations_t *dbv0_0_37_response_associations_parseFromJSON(cJSON *dbv0_0_37_response_associationsJSON);

cJSON *dbv0_0_37_response_associations_convertToJSON(dbv0_0_37_response_associations_t *dbv0_0_37_response_associations);

#endif /* _dbv0_0_37_response_associations_H_ */

