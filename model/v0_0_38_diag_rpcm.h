/*
 * v0_0_38_diag_rpcm.h
 *
 * 
 */

#ifndef _v0_0_38_diag_rpcm_H_
#define _v0_0_38_diag_rpcm_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_38_diag_rpcm_t v0_0_38_diag_rpcm_t;




typedef struct v0_0_38_diag_rpcm_t {
    char *message_type; // string
    int type_id; //numeric
    int count; //numeric
    int average_time; //numeric
    int total_time; //numeric

} v0_0_38_diag_rpcm_t;

v0_0_38_diag_rpcm_t *v0_0_38_diag_rpcm_create(
    char *message_type,
    int type_id,
    int count,
    int average_time,
    int total_time
);

void v0_0_38_diag_rpcm_free(v0_0_38_diag_rpcm_t *v0_0_38_diag_rpcm);

v0_0_38_diag_rpcm_t *v0_0_38_diag_rpcm_parseFromJSON(cJSON *v0_0_38_diag_rpcmJSON);

cJSON *v0_0_38_diag_rpcm_convertToJSON(v0_0_38_diag_rpcm_t *v0_0_38_diag_rpcm);

#endif /* _v0_0_38_diag_rpcm_H_ */

