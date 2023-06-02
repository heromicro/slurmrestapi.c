/*
 * dbv0_0_37_user_default.h
 *
 * Default settings
 */

#ifndef _dbv0_0_37_user_default_H_
#define _dbv0_0_37_user_default_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_user_default_t dbv0_0_37_user_default_t;




typedef struct dbv0_0_37_user_default_t {
    char *account; // string
    char *wckey; // string

} dbv0_0_37_user_default_t;

dbv0_0_37_user_default_t *dbv0_0_37_user_default_create(
    char *account,
    char *wckey
);

void dbv0_0_37_user_default_free(dbv0_0_37_user_default_t *dbv0_0_37_user_default);

dbv0_0_37_user_default_t *dbv0_0_37_user_default_parseFromJSON(cJSON *dbv0_0_37_user_defaultJSON);

cJSON *dbv0_0_37_user_default_convertToJSON(dbv0_0_37_user_default_t *dbv0_0_37_user_default);

#endif /* _dbv0_0_37_user_default_H_ */

