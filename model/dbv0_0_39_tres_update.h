/*
 * dbv0_0_39_tres_update.h
 *
 * 
 */

#ifndef _dbv0_0_39_tres_update_H_
#define _dbv0_0_39_tres_update_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_39_tres_update_t dbv0_0_39_tres_update_t;

#include "v0_0_39_tres.h"



typedef struct dbv0_0_39_tres_update_t {
    list_t *tres; //nonprimitive container

} dbv0_0_39_tres_update_t;

dbv0_0_39_tres_update_t *dbv0_0_39_tres_update_create(
    list_t *tres
);

void dbv0_0_39_tres_update_free(dbv0_0_39_tres_update_t *dbv0_0_39_tres_update);

dbv0_0_39_tres_update_t *dbv0_0_39_tres_update_parseFromJSON(cJSON *dbv0_0_39_tres_updateJSON);

cJSON *dbv0_0_39_tres_update_convertToJSON(dbv0_0_39_tres_update_t *dbv0_0_39_tres_update);

#endif /* _dbv0_0_39_tres_update_H_ */

