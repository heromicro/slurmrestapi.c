/*
 * dbv0_0_39_response_associations_delete.h
 *
 * 
 */

#ifndef _dbv0_0_39_response_associations_delete_H_
#define _dbv0_0_39_response_associations_delete_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_39_response_associations_delete_t dbv0_0_39_response_associations_delete_t;

#include "dbv0_0_39_error.h"
#include "dbv0_0_39_meta.h"
#include "dbv0_0_39_warning.h"



typedef struct dbv0_0_39_response_associations_delete_t {
    struct dbv0_0_39_meta_t *meta; //model
    list_t *errors; //nonprimitive container
    list_t *warnings; //nonprimitive container
    list_t *removed_associations; //primitive container

} dbv0_0_39_response_associations_delete_t;

dbv0_0_39_response_associations_delete_t *dbv0_0_39_response_associations_delete_create(
    dbv0_0_39_meta_t *meta,
    list_t *errors,
    list_t *warnings,
    list_t *removed_associations
);

void dbv0_0_39_response_associations_delete_free(dbv0_0_39_response_associations_delete_t *dbv0_0_39_response_associations_delete);

dbv0_0_39_response_associations_delete_t *dbv0_0_39_response_associations_delete_parseFromJSON(cJSON *dbv0_0_39_response_associations_deleteJSON);

cJSON *dbv0_0_39_response_associations_delete_convertToJSON(dbv0_0_39_response_associations_delete_t *dbv0_0_39_response_associations_delete);

#endif /* _dbv0_0_39_response_associations_delete_H_ */

