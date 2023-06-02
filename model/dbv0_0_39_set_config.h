/*
 * dbv0_0_39_set_config.h
 *
 * 
 */

#ifndef _dbv0_0_39_set_config_H_
#define _dbv0_0_39_set_config_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_39_set_config_t dbv0_0_39_set_config_t;

#include "v0_0_39_account.h"
#include "v0_0_39_assoc.h"
#include "v0_0_39_cluster_rec.h"
#include "v0_0_39_qos.h"
#include "v0_0_39_tres.h"
#include "v0_0_39_user.h"
#include "v0_0_39_wckey.h"



typedef struct dbv0_0_39_set_config_t {
    list_t *clusters; //nonprimitive container
    list_t *tres; //primitive container
    list_t *accounts; //nonprimitive container
    list_t *users; //nonprimitive container
    list_t *qos; //nonprimitive container
    list_t *wckeys; //nonprimitive container
    list_t *associations; //nonprimitive container

} dbv0_0_39_set_config_t;

dbv0_0_39_set_config_t *dbv0_0_39_set_config_create(
    list_t *clusters,
    list_t *tres,
    list_t *accounts,
    list_t *users,
    list_t *qos,
    list_t *wckeys,
    list_t *associations
);

void dbv0_0_39_set_config_free(dbv0_0_39_set_config_t *dbv0_0_39_set_config);

dbv0_0_39_set_config_t *dbv0_0_39_set_config_parseFromJSON(cJSON *dbv0_0_39_set_configJSON);

cJSON *dbv0_0_39_set_config_convertToJSON(dbv0_0_39_set_config_t *dbv0_0_39_set_config);

#endif /* _dbv0_0_39_set_config_H_ */

