/*
 * dbv0_0_37_association_max_tres_group.h
 *
 * Max TRES per group
 */

#ifndef _dbv0_0_37_association_max_tres_group_H_
#define _dbv0_0_37_association_max_tres_group_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_association_max_tres_group_t dbv0_0_37_association_max_tres_group_t;

#include "dbv0_0_37_tres_list_inner.h"



typedef struct dbv0_0_37_association_max_tres_group_t {
    list_t *minutes; //nonprimitive container
    list_t *active; //nonprimitive container

} dbv0_0_37_association_max_tres_group_t;

dbv0_0_37_association_max_tres_group_t *dbv0_0_37_association_max_tres_group_create(
    list_t *minutes,
    list_t *active
);

void dbv0_0_37_association_max_tres_group_free(dbv0_0_37_association_max_tres_group_t *dbv0_0_37_association_max_tres_group);

dbv0_0_37_association_max_tres_group_t *dbv0_0_37_association_max_tres_group_parseFromJSON(cJSON *dbv0_0_37_association_max_tres_groupJSON);

cJSON *dbv0_0_37_association_max_tres_group_convertToJSON(dbv0_0_37_association_max_tres_group_t *dbv0_0_37_association_max_tres_group);

#endif /* _dbv0_0_37_association_max_tres_group_H_ */

