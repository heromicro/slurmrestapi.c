/*
 * dbv0_0_38_wckey.h
 *
 * 
 */

#ifndef _dbv0_0_38_wckey_H_
#define _dbv0_0_38_wckey_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_wckey_t dbv0_0_38_wckey_t;

#include "dbv0_0_38_accounting.h"



typedef struct dbv0_0_38_wckey_t {
    char *cluster; // string
    int id; //numeric
    char *name; // string
    char *user; // string
    list_t *flags; //primitive container
    list_t *accounting; //nonprimitive container

} dbv0_0_38_wckey_t;

dbv0_0_38_wckey_t *dbv0_0_38_wckey_create(
    char *cluster,
    int id,
    char *name,
    char *user,
    list_t *flags,
    list_t *accounting
);

void dbv0_0_38_wckey_free(dbv0_0_38_wckey_t *dbv0_0_38_wckey);

dbv0_0_38_wckey_t *dbv0_0_38_wckey_parseFromJSON(cJSON *dbv0_0_38_wckeyJSON);

cJSON *dbv0_0_38_wckey_convertToJSON(dbv0_0_38_wckey_t *dbv0_0_38_wckey);

#endif /* _dbv0_0_38_wckey_H_ */

