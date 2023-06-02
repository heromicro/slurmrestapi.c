/*
 * v0_0_39_accounting_allocated.h
 *
 * 
 */

#ifndef _v0_0_39_accounting_allocated_H_
#define _v0_0_39_accounting_allocated_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_accounting_allocated_t v0_0_39_accounting_allocated_t;




typedef struct v0_0_39_accounting_allocated_t {
    long seconds; //numeric

} v0_0_39_accounting_allocated_t;

v0_0_39_accounting_allocated_t *v0_0_39_accounting_allocated_create(
    long seconds
);

void v0_0_39_accounting_allocated_free(v0_0_39_accounting_allocated_t *v0_0_39_accounting_allocated);

v0_0_39_accounting_allocated_t *v0_0_39_accounting_allocated_parseFromJSON(cJSON *v0_0_39_accounting_allocatedJSON);

cJSON *v0_0_39_accounting_allocated_convertToJSON(v0_0_39_accounting_allocated_t *v0_0_39_accounting_allocated);

#endif /* _v0_0_39_accounting_allocated_H_ */

