/*
 * v0_0_38_diag.h
 *
 * 
 */

#ifndef _v0_0_38_diag_H_
#define _v0_0_38_diag_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_38_diag_t v0_0_38_diag_t;

#include "v0_0_38_diag_statistics.h"
#include "v0_0_38_error.h"
#include "v0_0_38_meta.h"



typedef struct v0_0_38_diag_t {
    struct v0_0_38_meta_t *meta; //model
    list_t *errors; //nonprimitive container
    struct v0_0_38_diag_statistics_t *statistics; //model

} v0_0_38_diag_t;

v0_0_38_diag_t *v0_0_38_diag_create(
    v0_0_38_meta_t *meta,
    list_t *errors,
    v0_0_38_diag_statistics_t *statistics
);

void v0_0_38_diag_free(v0_0_38_diag_t *v0_0_38_diag);

v0_0_38_diag_t *v0_0_38_diag_parseFromJSON(cJSON *v0_0_38_diagJSON);

cJSON *v0_0_38_diag_convertToJSON(v0_0_38_diag_t *v0_0_38_diag);

#endif /* _v0_0_38_diag_H_ */

