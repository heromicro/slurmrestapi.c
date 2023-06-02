/*
 * v0_0_39_accounting.h
 *
 * 
 */

#ifndef _v0_0_39_accounting_H_
#define _v0_0_39_accounting_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_accounting_t v0_0_39_accounting_t;

#include "v0_0_39_accounting_allocated.h"
#include "v0_0_39_tres.h"



typedef struct v0_0_39_accounting_t {
    struct v0_0_39_accounting_allocated_t *allocated; //model
    int id; //numeric
    long start; //numeric
    struct v0_0_39_tres_t *tres; //model

} v0_0_39_accounting_t;

v0_0_39_accounting_t *v0_0_39_accounting_create(
    v0_0_39_accounting_allocated_t *allocated,
    int id,
    long start,
    v0_0_39_tres_t *tres
);

void v0_0_39_accounting_free(v0_0_39_accounting_t *v0_0_39_accounting);

v0_0_39_accounting_t *v0_0_39_accounting_parseFromJSON(cJSON *v0_0_39_accountingJSON);

cJSON *v0_0_39_accounting_convertToJSON(v0_0_39_accounting_t *v0_0_39_accounting);

#endif /* _v0_0_39_accounting_H_ */

