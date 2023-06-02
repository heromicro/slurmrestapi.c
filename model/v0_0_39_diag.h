/*
 * v0_0_39_diag.h
 *
 * 
 */

#ifndef _v0_0_39_diag_H_
#define _v0_0_39_diag_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_diag_t v0_0_39_diag_t;

#include "v0_0_39_error.h"
#include "v0_0_39_meta.h"
#include "v0_0_39_stats_msg.h"
#include "v0_0_39_warning.h"



typedef struct v0_0_39_diag_t {
    struct v0_0_39_meta_t *meta; //model
    list_t *errors; //nonprimitive container
    list_t *warnings; //nonprimitive container
    struct v0_0_39_stats_msg_t *statistics; //model

} v0_0_39_diag_t;

v0_0_39_diag_t *v0_0_39_diag_create(
    v0_0_39_meta_t *meta,
    list_t *errors,
    list_t *warnings,
    v0_0_39_stats_msg_t *statistics
);

void v0_0_39_diag_free(v0_0_39_diag_t *v0_0_39_diag);

v0_0_39_diag_t *v0_0_39_diag_parseFromJSON(cJSON *v0_0_39_diagJSON);

cJSON *v0_0_39_diag_convertToJSON(v0_0_39_diag_t *v0_0_39_diag);

#endif /* _v0_0_39_diag_H_ */

