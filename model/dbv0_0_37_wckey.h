/*
 * dbv0_0_37_wckey.h
 *
 * 
 */

#ifndef _dbv0_0_37_wckey_H_
#define _dbv0_0_37_wckey_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_wckey_t dbv0_0_37_wckey_t;




typedef struct dbv0_0_37_wckey_t {
    list_t *accounts; //primitive container
    char *cluster; // string
    int id; //numeric
    char *name; // string
    char *user; // string
    list_t *flags; //primitive container

} dbv0_0_37_wckey_t;

dbv0_0_37_wckey_t *dbv0_0_37_wckey_create(
    list_t *accounts,
    char *cluster,
    int id,
    char *name,
    char *user,
    list_t *flags
);

void dbv0_0_37_wckey_free(dbv0_0_37_wckey_t *dbv0_0_37_wckey);

dbv0_0_37_wckey_t *dbv0_0_37_wckey_parseFromJSON(cJSON *dbv0_0_37_wckeyJSON);

cJSON *dbv0_0_37_wckey_convertToJSON(dbv0_0_37_wckey_t *dbv0_0_37_wckey);

#endif /* _dbv0_0_37_wckey_H_ */

