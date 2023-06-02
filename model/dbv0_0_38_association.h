/*
 * dbv0_0_38_association.h
 *
 * Association description
 */

#ifndef _dbv0_0_38_association_H_
#define _dbv0_0_38_association_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_association_t dbv0_0_38_association_t;

#include "dbv0_0_38_association_default.h"
#include "dbv0_0_38_association_max.h"
#include "dbv0_0_38_association_min.h"
#include "dbv0_0_38_association_usage.h"



typedef struct dbv0_0_38_association_t {
    char *account; // string
    char *cluster; // string
    struct dbv0_0_38_association_default_t *_default; //model
    list_t *flags; //primitive container
    struct dbv0_0_38_association_max_t *max; //model
    struct dbv0_0_38_association_min_t *min; //model
    char *parent_account; // string
    char *partition; // string
    int priority; //numeric
    int shares_raw; //numeric
    struct dbv0_0_38_association_usage_t *usage; //model
    char *user; // string
    list_t *qos; //primitive container

} dbv0_0_38_association_t;

dbv0_0_38_association_t *dbv0_0_38_association_create(
    char *account,
    char *cluster,
    dbv0_0_38_association_default_t *_default,
    list_t *flags,
    dbv0_0_38_association_max_t *max,
    dbv0_0_38_association_min_t *min,
    char *parent_account,
    char *partition,
    int priority,
    int shares_raw,
    dbv0_0_38_association_usage_t *usage,
    char *user,
    list_t *qos
);

void dbv0_0_38_association_free(dbv0_0_38_association_t *dbv0_0_38_association);

dbv0_0_38_association_t *dbv0_0_38_association_parseFromJSON(cJSON *dbv0_0_38_associationJSON);

cJSON *dbv0_0_38_association_convertToJSON(dbv0_0_38_association_t *dbv0_0_38_association);

#endif /* _dbv0_0_38_association_H_ */

