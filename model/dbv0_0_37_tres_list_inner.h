/*
 * dbv0_0_37_tres_list_inner.h
 *
 * 
 */

#ifndef _dbv0_0_37_tres_list_inner_H_
#define _dbv0_0_37_tres_list_inner_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_tres_list_inner_t dbv0_0_37_tres_list_inner_t;




typedef struct dbv0_0_37_tres_list_inner_t {
    char *type; // string
    char *name; // string
    int id; //numeric
    int count; //numeric

} dbv0_0_37_tres_list_inner_t;

dbv0_0_37_tres_list_inner_t *dbv0_0_37_tres_list_inner_create(
    char *type,
    char *name,
    int id,
    int count
);

void dbv0_0_37_tres_list_inner_free(dbv0_0_37_tres_list_inner_t *dbv0_0_37_tres_list_inner);

dbv0_0_37_tres_list_inner_t *dbv0_0_37_tres_list_inner_parseFromJSON(cJSON *dbv0_0_37_tres_list_innerJSON);

cJSON *dbv0_0_37_tres_list_inner_convertToJSON(dbv0_0_37_tres_list_inner_t *dbv0_0_37_tres_list_inner);

#endif /* _dbv0_0_37_tres_list_inner_H_ */

