/*
 * v0_0_39_assoc.h
 *
 * 
 */

#ifndef _v0_0_39_assoc_H_
#define _v0_0_39_assoc_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_assoc_t v0_0_39_assoc_t;

#include "v0_0_39_assoc_default.h"
#include "v0_0_39_assoc_max.h"
#include "v0_0_39_assoc_min.h"
#include "v0_0_39_assoc_usage.h"
#include "v0_0_39_uint32_no_val.h"

// Enum FLAGS for v0_0_39_assoc

typedef enum  { slurm_rest_api_v0_0_39_assoc_FLAGS_NULL = 0, slurm_rest_api_v0_0_39_assoc_FLAGS_DELETED } slurm_rest_api_v0_0_39_assoc_FLAGS_e;

char* v0_0_39_assoc_flags_ToString(slurm_rest_api_v0_0_39_assoc_FLAGS_e flags);

slurm_rest_api_v0_0_39_assoc_FLAGS_e v0_0_39_assoc_flags_FromString(char* flags);



typedef struct v0_0_39_assoc_t {
    char *account; // string
    char *cluster; // string
    struct v0_0_39_assoc_default_t *_default; //model
    list_t *flags; //primitive container
    struct v0_0_39_assoc_max_t *max; //model
    int is_default; //boolean
    struct v0_0_39_assoc_min_t *min; //model
    char *parent_account; // string
    char *partition; // string
    struct v0_0_39_uint32_no_val_t *priority; //model
    list_t *qos; //primitive container
    int shares_raw; //numeric
    struct v0_0_39_assoc_usage_t *usage; //model
    char *user; // string

} v0_0_39_assoc_t;

v0_0_39_assoc_t *v0_0_39_assoc_create(
    char *account,
    char *cluster,
    v0_0_39_assoc_default_t *_default,
    list_t *flags,
    v0_0_39_assoc_max_t *max,
    int is_default,
    v0_0_39_assoc_min_t *min,
    char *parent_account,
    char *partition,
    v0_0_39_uint32_no_val_t *priority,
    list_t *qos,
    int shares_raw,
    v0_0_39_assoc_usage_t *usage,
    char *user
);

void v0_0_39_assoc_free(v0_0_39_assoc_t *v0_0_39_assoc);

v0_0_39_assoc_t *v0_0_39_assoc_parseFromJSON(cJSON *v0_0_39_assocJSON);

cJSON *v0_0_39_assoc_convertToJSON(v0_0_39_assoc_t *v0_0_39_assoc);

#endif /* _v0_0_39_assoc_H_ */

