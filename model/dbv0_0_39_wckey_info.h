/*
 * dbv0_0_39_wckey_info.h
 *
 * 
 */

#ifndef _dbv0_0_39_wckey_info_H_
#define _dbv0_0_39_wckey_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_39_wckey_info_t dbv0_0_39_wckey_info_t;

#include "dbv0_0_39_error.h"
#include "dbv0_0_39_meta.h"
#include "v0_0_39_wckey.h"



typedef struct dbv0_0_39_wckey_info_t {
    struct dbv0_0_39_meta_t *meta; //model
    list_t *errors; //nonprimitive container
    list_t *wckeys; //nonprimitive container

} dbv0_0_39_wckey_info_t;

dbv0_0_39_wckey_info_t *dbv0_0_39_wckey_info_create(
    dbv0_0_39_meta_t *meta,
    list_t *errors,
    list_t *wckeys
);

void dbv0_0_39_wckey_info_free(dbv0_0_39_wckey_info_t *dbv0_0_39_wckey_info);

dbv0_0_39_wckey_info_t *dbv0_0_39_wckey_info_parseFromJSON(cJSON *dbv0_0_39_wckey_infoJSON);

cJSON *dbv0_0_39_wckey_info_convertToJSON(dbv0_0_39_wckey_info_t *dbv0_0_39_wckey_info);

#endif /* _dbv0_0_39_wckey_info_H_ */

