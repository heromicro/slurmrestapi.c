/*
 * dbv0_0_38_config_info.h
 *
 * 
 */

#ifndef _dbv0_0_38_config_info_H_
#define _dbv0_0_38_config_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_config_info_t dbv0_0_38_config_info_t;

#include "dbv0_0_38_account.h"
#include "dbv0_0_38_association.h"
#include "dbv0_0_38_error.h"
#include "dbv0_0_38_meta.h"
#include "dbv0_0_38_qos.h"
#include "dbv0_0_38_tres_list_inner.h"
#include "dbv0_0_38_user.h"
#include "dbv0_0_38_wckey.h"



typedef struct dbv0_0_38_config_info_t {
    struct dbv0_0_38_meta_t *meta; //model
    list_t *errors; //nonprimitive container
    list_t *tres; //primitive container
    list_t *accounts; //nonprimitive container
    list_t *associations; //nonprimitive container
    list_t *users; //nonprimitive container
    list_t *qos; //nonprimitive container
    list_t *wckeys; //nonprimitive container

} dbv0_0_38_config_info_t;

dbv0_0_38_config_info_t *dbv0_0_38_config_info_create(
    dbv0_0_38_meta_t *meta,
    list_t *errors,
    list_t *tres,
    list_t *accounts,
    list_t *associations,
    list_t *users,
    list_t *qos,
    list_t *wckeys
);

void dbv0_0_38_config_info_free(dbv0_0_38_config_info_t *dbv0_0_38_config_info);

dbv0_0_38_config_info_t *dbv0_0_38_config_info_parseFromJSON(cJSON *dbv0_0_38_config_infoJSON);

cJSON *dbv0_0_38_config_info_convertToJSON(dbv0_0_38_config_info_t *dbv0_0_38_config_info);

#endif /* _dbv0_0_38_config_info_H_ */

