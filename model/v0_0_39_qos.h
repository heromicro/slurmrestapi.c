/*
 * v0_0_39_qos.h
 *
 * 
 */

#ifndef _v0_0_39_qos_H_
#define _v0_0_39_qos_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_qos_t v0_0_39_qos_t;

#include "v0_0_39_float64_no_val.h"
#include "v0_0_39_qos_limits.h"
#include "v0_0_39_qos_preempt.h"

// Enum FLAGS for v0_0_39_qos

typedef enum  { slurm_rest_api_v0_0_39_qos_FLAGS_NULL = 0, slurm_rest_api_v0_0_39_qos_FLAGS_NOT_SET, slurm_rest_api_v0_0_39_qos_FLAGS_ADD, slurm_rest_api_v0_0_39_qos_FLAGS__REMOVE, slurm_rest_api_v0_0_39_qos_FLAGS_PARTITION_MINIMUM_NODE, slurm_rest_api_v0_0_39_qos_FLAGS_PARTITION_MAXIMUM_NODE, slurm_rest_api_v0_0_39_qos_FLAGS_PARTITION_TIME_LIMIT, slurm_rest_api_v0_0_39_qos_FLAGS_ENFORCE_USAGE_THRESHOLD, slurm_rest_api_v0_0_39_qos_FLAGS_NO_RESERVE, slurm_rest_api_v0_0_39_qos_FLAGS_REQUIRED_RESERVATION, slurm_rest_api_v0_0_39_qos_FLAGS_DENY_LIMIT, slurm_rest_api_v0_0_39_qos_FLAGS_OVERRIDE_PARTITION_QOS, slurm_rest_api_v0_0_39_qos_FLAGS_NO_DECAY, slurm_rest_api_v0_0_39_qos_FLAGS_USAGE_FACTOR_SAFE } slurm_rest_api_v0_0_39_qos_FLAGS_e;

char* v0_0_39_qos_flags_ToString(slurm_rest_api_v0_0_39_qos_FLAGS_e flags);

slurm_rest_api_v0_0_39_qos_FLAGS_e v0_0_39_qos_flags_FromString(char* flags);



typedef struct v0_0_39_qos_t {
    char *description; // string
    list_t *flags; //primitive container
    int id; //numeric
    struct v0_0_39_qos_limits_t *limits; //model
    char *name; // string
    struct v0_0_39_qos_preempt_t *preempt; //model
    int priority; //numeric
    struct v0_0_39_float64_no_val_t *usage_factor; //model
    struct v0_0_39_float64_no_val_t *usage_threshold; //model

} v0_0_39_qos_t;

v0_0_39_qos_t *v0_0_39_qos_create(
    char *description,
    list_t *flags,
    int id,
    v0_0_39_qos_limits_t *limits,
    char *name,
    v0_0_39_qos_preempt_t *preempt,
    int priority,
    v0_0_39_float64_no_val_t *usage_factor,
    v0_0_39_float64_no_val_t *usage_threshold
);

void v0_0_39_qos_free(v0_0_39_qos_t *v0_0_39_qos);

v0_0_39_qos_t *v0_0_39_qos_parseFromJSON(cJSON *v0_0_39_qosJSON);

cJSON *v0_0_39_qos_convertToJSON(v0_0_39_qos_t *v0_0_39_qos);

#endif /* _v0_0_39_qos_H_ */

