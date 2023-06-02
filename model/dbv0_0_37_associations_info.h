/*
 * dbv0_0_37_associations_info.h
 *
 * 
 */

#ifndef _dbv0_0_37_associations_info_H_
#define _dbv0_0_37_associations_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_associations_info_t dbv0_0_37_associations_info_t;

#include "dbv0_0_37_association.h"
#include "dbv0_0_37_error.h"



typedef struct dbv0_0_37_associations_info_t {
    list_t *errors; //nonprimitive container
    list_t *associations; //nonprimitive container

} dbv0_0_37_associations_info_t;

dbv0_0_37_associations_info_t *dbv0_0_37_associations_info_create(
    list_t *errors,
    list_t *associations
);

void dbv0_0_37_associations_info_free(dbv0_0_37_associations_info_t *dbv0_0_37_associations_info);

dbv0_0_37_associations_info_t *dbv0_0_37_associations_info_parseFromJSON(cJSON *dbv0_0_37_associations_infoJSON);

cJSON *dbv0_0_37_associations_info_convertToJSON(dbv0_0_37_associations_info_t *dbv0_0_37_associations_info);

#endif /* _dbv0_0_37_associations_info_H_ */

