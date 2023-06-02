/*
 * dbv0_0_37_user.h
 *
 * User description
 */

#ifndef _dbv0_0_37_user_H_
#define _dbv0_0_37_user_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_user_t dbv0_0_37_user_t;

#include "dbv0_0_37_coordinator_info.h"
#include "dbv0_0_37_user_associations.h"
#include "dbv0_0_37_user_default.h"



typedef struct dbv0_0_37_user_t {
    char *administrator_level; // string
    struct dbv0_0_37_user_associations_t *associations; //model
    list_t *coordinators; //nonprimitive container
    struct dbv0_0_37_user_default_t *_default; //model
    char *name; // string

} dbv0_0_37_user_t;

dbv0_0_37_user_t *dbv0_0_37_user_create(
    char *administrator_level,
    dbv0_0_37_user_associations_t *associations,
    list_t *coordinators,
    dbv0_0_37_user_default_t *_default,
    char *name
);

void dbv0_0_37_user_free(dbv0_0_37_user_t *dbv0_0_37_user);

dbv0_0_37_user_t *dbv0_0_37_user_parseFromJSON(cJSON *dbv0_0_37_userJSON);

cJSON *dbv0_0_37_user_convertToJSON(dbv0_0_37_user_t *dbv0_0_37_user);

#endif /* _dbv0_0_37_user_H_ */

