/*
 * v0_0_39_coord.h
 *
 * 
 */

#ifndef _v0_0_39_coord_H_
#define _v0_0_39_coord_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_coord_t v0_0_39_coord_t;




typedef struct v0_0_39_coord_t {
    char *name; // string
    int direct; //boolean

} v0_0_39_coord_t;

v0_0_39_coord_t *v0_0_39_coord_create(
    char *name,
    int direct
);

void v0_0_39_coord_free(v0_0_39_coord_t *v0_0_39_coord);

v0_0_39_coord_t *v0_0_39_coord_parseFromJSON(cJSON *v0_0_39_coordJSON);

cJSON *v0_0_39_coord_convertToJSON(v0_0_39_coord_t *v0_0_39_coord);

#endif /* _v0_0_39_coord_H_ */

