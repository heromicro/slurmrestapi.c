/*
 * v0_0_38_diag_rpcu.h
 *
 * 
 */

#ifndef _v0_0_38_diag_rpcu_H_
#define _v0_0_38_diag_rpcu_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_38_diag_rpcu_t v0_0_38_diag_rpcu_t;




typedef struct v0_0_38_diag_rpcu_t {
    char *user; // string
    int user_id; //numeric
    int count; //numeric
    int average_time; //numeric
    int total_time; //numeric

} v0_0_38_diag_rpcu_t;

v0_0_38_diag_rpcu_t *v0_0_38_diag_rpcu_create(
    char *user,
    int user_id,
    int count,
    int average_time,
    int total_time
);

void v0_0_38_diag_rpcu_free(v0_0_38_diag_rpcu_t *v0_0_38_diag_rpcu);

v0_0_38_diag_rpcu_t *v0_0_38_diag_rpcu_parseFromJSON(cJSON *v0_0_38_diag_rpcuJSON);

cJSON *v0_0_38_diag_rpcu_convertToJSON(v0_0_38_diag_rpcu_t *v0_0_38_diag_rpcu);

#endif /* _v0_0_38_diag_rpcu_H_ */

