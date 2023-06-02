/*
 * dbv0_0_38_association_short_info.h
 *
 * 
 */

#ifndef _dbv0_0_38_association_short_info_H_
#define _dbv0_0_38_association_short_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_association_short_info_t dbv0_0_38_association_short_info_t;




typedef struct dbv0_0_38_association_short_info_t {
    char *account; // string
    char *cluster; // string
    char *partition; // string
    char *user; // string

} dbv0_0_38_association_short_info_t;

dbv0_0_38_association_short_info_t *dbv0_0_38_association_short_info_create(
    char *account,
    char *cluster,
    char *partition,
    char *user
);

void dbv0_0_38_association_short_info_free(dbv0_0_38_association_short_info_t *dbv0_0_38_association_short_info);

dbv0_0_38_association_short_info_t *dbv0_0_38_association_short_info_parseFromJSON(cJSON *dbv0_0_38_association_short_infoJSON);

cJSON *dbv0_0_38_association_short_info_convertToJSON(dbv0_0_38_association_short_info_t *dbv0_0_38_association_short_info);

#endif /* _dbv0_0_38_association_short_info_H_ */

