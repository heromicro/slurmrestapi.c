/*
 * dbv0_0_37_user_info.h
 *
 * 
 */

#ifndef _dbv0_0_37_user_info_H_
#define _dbv0_0_37_user_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_user_info_t dbv0_0_37_user_info_t;

#include "dbv0_0_37_error.h"
#include "dbv0_0_37_user.h"



typedef struct dbv0_0_37_user_info_t {
    list_t *errors; //nonprimitive container
    list_t *users; //nonprimitive container

} dbv0_0_37_user_info_t;

dbv0_0_37_user_info_t *dbv0_0_37_user_info_create(
    list_t *errors,
    list_t *users
);

void dbv0_0_37_user_info_free(dbv0_0_37_user_info_t *dbv0_0_37_user_info);

dbv0_0_37_user_info_t *dbv0_0_37_user_info_parseFromJSON(cJSON *dbv0_0_37_user_infoJSON);

cJSON *dbv0_0_37_user_info_convertToJSON(dbv0_0_37_user_info_t *dbv0_0_37_user_info);

#endif /* _dbv0_0_37_user_info_H_ */

