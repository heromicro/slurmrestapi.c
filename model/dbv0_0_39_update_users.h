/*
 * dbv0_0_39_update_users.h
 *
 * 
 */

#ifndef _dbv0_0_39_update_users_H_
#define _dbv0_0_39_update_users_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_39_update_users_t dbv0_0_39_update_users_t;

#include "v0_0_39_user.h"



typedef struct dbv0_0_39_update_users_t {
    list_t *users; //nonprimitive container

} dbv0_0_39_update_users_t;

dbv0_0_39_update_users_t *dbv0_0_39_update_users_create(
    list_t *users
);

void dbv0_0_39_update_users_free(dbv0_0_39_update_users_t *dbv0_0_39_update_users);

dbv0_0_39_update_users_t *dbv0_0_39_update_users_parseFromJSON(cJSON *dbv0_0_39_update_usersJSON);

cJSON *dbv0_0_39_update_users_convertToJSON(dbv0_0_39_update_users_t *dbv0_0_39_update_users);

#endif /* _dbv0_0_39_update_users_H_ */

