/*
 * dbv0_0_38_tres_info.h
 *
 * 
 */

#ifndef _dbv0_0_38_tres_info_H_
#define _dbv0_0_38_tres_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_tres_info_t dbv0_0_38_tres_info_t;

#include "dbv0_0_38_error.h"
#include "dbv0_0_38_meta.h"
#include "dbv0_0_38_tres_list_inner.h"



typedef struct dbv0_0_38_tres_info_t {
    struct dbv0_0_38_meta_t *meta; //model
    list_t *errors; //nonprimitive container
    list_t *tres; //nonprimitive container

} dbv0_0_38_tres_info_t;

dbv0_0_38_tres_info_t *dbv0_0_38_tres_info_create(
    dbv0_0_38_meta_t *meta,
    list_t *errors,
    list_t *tres
);

void dbv0_0_38_tres_info_free(dbv0_0_38_tres_info_t *dbv0_0_38_tres_info);

dbv0_0_38_tres_info_t *dbv0_0_38_tres_info_parseFromJSON(cJSON *dbv0_0_38_tres_infoJSON);

cJSON *dbv0_0_38_tres_info_convertToJSON(dbv0_0_38_tres_info_t *dbv0_0_38_tres_info);

#endif /* _dbv0_0_38_tres_info_H_ */

