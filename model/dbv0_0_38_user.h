/*
 * dbv0_0_38_user.h
 *
 * User description
 */

#ifndef _dbv0_0_38_user_H_
#define _dbv0_0_38_user_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_user_t dbv0_0_38_user_t;

#include "dbv0_0_38_association_short_info.h"
#include "dbv0_0_38_coordinator_info.h"
#include "dbv0_0_38_user_default.h"



typedef struct dbv0_0_38_user_t {
    char *administrator_level; // string
    list_t *associations; //nonprimitive container
    list_t *coordinators; //nonprimitive container
    struct dbv0_0_38_user_default_t *_default; //model
    list_t *flags; //primitive container
    char *name; // string

} dbv0_0_38_user_t;

dbv0_0_38_user_t *dbv0_0_38_user_create(
    char *administrator_level,
    list_t *associations,
    list_t *coordinators,
    dbv0_0_38_user_default_t *_default,
    list_t *flags,
    char *name
);

void dbv0_0_38_user_free(dbv0_0_38_user_t *dbv0_0_38_user);

dbv0_0_38_user_t *dbv0_0_38_user_parseFromJSON(cJSON *dbv0_0_38_userJSON);

cJSON *dbv0_0_38_user_convertToJSON(dbv0_0_38_user_t *dbv0_0_38_user);

#endif /* _dbv0_0_38_user_H_ */

