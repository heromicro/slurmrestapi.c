/*
 * dbv0_0_39_config_info.h
 *
 * 
 */

#ifndef _dbv0_0_39_config_info_H_
#define _dbv0_0_39_config_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_39_config_info_t dbv0_0_39_config_info_t;

#include "dbv0_0_39_error.h"
#include "dbv0_0_39_meta.h"
#include "dbv0_0_39_warning.h"
#include "v0_0_39_account.h"
#include "v0_0_39_assoc.h"
#include "v0_0_39_cluster_rec.h"
#include "v0_0_39_qos.h"
#include "v0_0_39_tres.h"
#include "v0_0_39_user.h"
#include "v0_0_39_wckey.h"



typedef struct dbv0_0_39_config_info_t {
    struct dbv0_0_39_meta_t *meta; //model
    list_t *errors; //nonprimitive container
    list_t *warnings; //nonprimitive container
    list_t *tres; //nonprimitive container
    list_t *accounts; //nonprimitive container
    list_t *associations; //nonprimitive container
    list_t *users; //nonprimitive container
    list_t *qos; //nonprimitive container
    list_t *wckeys; //nonprimitive container
    list_t *clusters; //nonprimitive container

} dbv0_0_39_config_info_t;

dbv0_0_39_config_info_t *dbv0_0_39_config_info_create(
    dbv0_0_39_meta_t *meta,
    list_t *errors,
    list_t *warnings,
    list_t *tres,
    list_t *accounts,
    list_t *associations,
    list_t *users,
    list_t *qos,
    list_t *wckeys,
    list_t *clusters
);

void dbv0_0_39_config_info_free(dbv0_0_39_config_info_t *dbv0_0_39_config_info);

dbv0_0_39_config_info_t *dbv0_0_39_config_info_parseFromJSON(cJSON *dbv0_0_39_config_infoJSON);

cJSON *dbv0_0_39_config_info_convertToJSON(dbv0_0_39_config_info_t *dbv0_0_39_config_info);

#endif /* _dbv0_0_39_config_info_H_ */

