/*
 * dbv0_0_38_accounting.h
 *
 * 
 */

#ifndef _dbv0_0_38_accounting_H_
#define _dbv0_0_38_accounting_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_accounting_t dbv0_0_38_accounting_t;

#include "dbv0_0_38_tres_list_inner.h"



typedef struct dbv0_0_38_accounting_t {
    int allocated; //numeric
    int id; //numeric
    int start; //numeric
    list_t *tres; //nonprimitive container

} dbv0_0_38_accounting_t;

dbv0_0_38_accounting_t *dbv0_0_38_accounting_create(
    int allocated,
    int id,
    int start,
    list_t *tres
);

void dbv0_0_38_accounting_free(dbv0_0_38_accounting_t *dbv0_0_38_accounting);

dbv0_0_38_accounting_t *dbv0_0_38_accounting_parseFromJSON(cJSON *dbv0_0_38_accountingJSON);

cJSON *dbv0_0_38_accounting_convertToJSON(dbv0_0_38_accounting_t *dbv0_0_38_accounting);

#endif /* _dbv0_0_38_accounting_H_ */

