/*
 * v0_0_37_diag.h
 *
 * 
 */

#ifndef _v0_0_37_diag_H_
#define _v0_0_37_diag_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_37_diag_t v0_0_37_diag_t;

#include "v0_0_37_diag_statistics.h"
#include "v0_0_37_error.h"



typedef struct v0_0_37_diag_t {
    list_t *errors; //nonprimitive container
    struct v0_0_37_diag_statistics_t *statistics; //model

} v0_0_37_diag_t;

v0_0_37_diag_t *v0_0_37_diag_create(
    list_t *errors,
    v0_0_37_diag_statistics_t *statistics
);

void v0_0_37_diag_free(v0_0_37_diag_t *v0_0_37_diag);

v0_0_37_diag_t *v0_0_37_diag_parseFromJSON(cJSON *v0_0_37_diagJSON);

cJSON *v0_0_37_diag_convertToJSON(v0_0_37_diag_t *v0_0_37_diag);

#endif /* _v0_0_37_diag_H_ */

