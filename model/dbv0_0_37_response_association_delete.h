/*
 * dbv0_0_37_response_association_delete.h
 *
 * 
 */

#ifndef _dbv0_0_37_response_association_delete_H_
#define _dbv0_0_37_response_association_delete_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_response_association_delete_t dbv0_0_37_response_association_delete_t;

#include "dbv0_0_37_error.h"



typedef struct dbv0_0_37_response_association_delete_t {
    list_t *errors; //nonprimitive container

} dbv0_0_37_response_association_delete_t;

dbv0_0_37_response_association_delete_t *dbv0_0_37_response_association_delete_create(
    list_t *errors
);

void dbv0_0_37_response_association_delete_free(dbv0_0_37_response_association_delete_t *dbv0_0_37_response_association_delete);

dbv0_0_37_response_association_delete_t *dbv0_0_37_response_association_delete_parseFromJSON(cJSON *dbv0_0_37_response_association_deleteJSON);

cJSON *dbv0_0_37_response_association_delete_convertToJSON(dbv0_0_37_response_association_delete_t *dbv0_0_37_response_association_delete);

#endif /* _dbv0_0_37_response_association_delete_H_ */

