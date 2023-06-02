/*
 * v0_0_39_tres.h
 *
 * 
 */

#ifndef _v0_0_39_tres_H_
#define _v0_0_39_tres_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_tres_t v0_0_39_tres_t;




typedef struct v0_0_39_tres_t {
    char *type; // string
    char *name; // string
    int id; //numeric
    long count; //numeric

} v0_0_39_tres_t;

v0_0_39_tres_t *v0_0_39_tres_create(
    char *type,
    char *name,
    int id,
    long count
);

void v0_0_39_tres_free(v0_0_39_tres_t *v0_0_39_tres);

v0_0_39_tres_t *v0_0_39_tres_parseFromJSON(cJSON *v0_0_39_tresJSON);

cJSON *v0_0_39_tres_convertToJSON(v0_0_39_tres_t *v0_0_39_tres);

#endif /* _v0_0_39_tres_H_ */

