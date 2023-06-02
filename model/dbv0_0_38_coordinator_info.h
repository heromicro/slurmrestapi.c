/*
 * dbv0_0_38_coordinator_info.h
 *
 * 
 */

#ifndef _dbv0_0_38_coordinator_info_H_
#define _dbv0_0_38_coordinator_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_coordinator_info_t dbv0_0_38_coordinator_info_t;




typedef struct dbv0_0_38_coordinator_info_t {
    char *name; // string
    int direct; //numeric

} dbv0_0_38_coordinator_info_t;

dbv0_0_38_coordinator_info_t *dbv0_0_38_coordinator_info_create(
    char *name,
    int direct
);

void dbv0_0_38_coordinator_info_free(dbv0_0_38_coordinator_info_t *dbv0_0_38_coordinator_info);

dbv0_0_38_coordinator_info_t *dbv0_0_38_coordinator_info_parseFromJSON(cJSON *dbv0_0_38_coordinator_infoJSON);

cJSON *dbv0_0_38_coordinator_info_convertToJSON(dbv0_0_38_coordinator_info_t *dbv0_0_38_coordinator_info);

#endif /* _dbv0_0_38_coordinator_info_H_ */

