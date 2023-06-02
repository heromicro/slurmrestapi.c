/*
 * v0_0_39_update_node_msg.h
 *
 * 
 */

#ifndef _v0_0_39_update_node_msg_H_
#define _v0_0_39_update_node_msg_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_update_node_msg_t v0_0_39_update_node_msg_t;

#include "v0_0_39_uint32_no_val.h"

// Enum STATE for v0_0_39_update_node_msg

typedef enum  { slurm_rest_api_v0_0_39_update_node_msg_STATE_NULL = 0, slurm_rest_api_v0_0_39_update_node_msg_STATE_INVALID, slurm_rest_api_v0_0_39_update_node_msg_STATE_UNKNOWN, slurm_rest_api_v0_0_39_update_node_msg_STATE_DOWN, slurm_rest_api_v0_0_39_update_node_msg_STATE_IDLE, slurm_rest_api_v0_0_39_update_node_msg_STATE_ALLOCATED, slurm_rest_api_v0_0_39_update_node_msg_STATE_ERROR, slurm_rest_api_v0_0_39_update_node_msg_STATE_MIXED, slurm_rest_api_v0_0_39_update_node_msg_STATE_FUTURE, slurm_rest_api_v0_0_39_update_node_msg_STATE_PERFCTRS, slurm_rest_api_v0_0_39_update_node_msg_STATE_RESERVED, slurm_rest_api_v0_0_39_update_node_msg_STATE_UNDRAIN, slurm_rest_api_v0_0_39_update_node_msg_STATE_CLOUD, slurm_rest_api_v0_0_39_update_node_msg_STATE_RESUME, slurm_rest_api_v0_0_39_update_node_msg_STATE_DRAIN, slurm_rest_api_v0_0_39_update_node_msg_STATE_COMPLETING, slurm_rest_api_v0_0_39_update_node_msg_STATE_NOT_RESPONDING, slurm_rest_api_v0_0_39_update_node_msg_STATE_POWERED_DOWN, slurm_rest_api_v0_0_39_update_node_msg_STATE_FAIL, slurm_rest_api_v0_0_39_update_node_msg_STATE_POWERING_UP, slurm_rest_api_v0_0_39_update_node_msg_STATE_MAINTENANCE, slurm_rest_api_v0_0_39_update_node_msg_STATE_REBOOT_REQUESTED, slurm_rest_api_v0_0_39_update_node_msg_STATE_REBOOT_CANCELED, slurm_rest_api_v0_0_39_update_node_msg_STATE_POWERING_DOWN, slurm_rest_api_v0_0_39_update_node_msg_STATE_DYNAMIC_FUTURE, slurm_rest_api_v0_0_39_update_node_msg_STATE_REBOOT_ISSUED, slurm_rest_api_v0_0_39_update_node_msg_STATE_PLANNED, slurm_rest_api_v0_0_39_update_node_msg_STATE_INVALID_REG, slurm_rest_api_v0_0_39_update_node_msg_STATE_POWER_DOWN, slurm_rest_api_v0_0_39_update_node_msg_STATE_POWER_UP, slurm_rest_api_v0_0_39_update_node_msg_STATE_POWER_DRAIN, slurm_rest_api_v0_0_39_update_node_msg_STATE_DYNAMIC_NORM } slurm_rest_api_v0_0_39_update_node_msg_STATE_e;

char* v0_0_39_update_node_msg_state_ToString(slurm_rest_api_v0_0_39_update_node_msg_STATE_e state);

slurm_rest_api_v0_0_39_update_node_msg_STATE_e v0_0_39_update_node_msg_state_FromString(char* state);



typedef struct v0_0_39_update_node_msg_t {
    char *comment; // string
    int cpu_bind; //numeric
    char *extra; // string
    list_t *features; //primitive container
    list_t *features_act; //primitive container
    char *gres; // string
    list_t *address; //primitive container
    list_t *hostname; //primitive container
    list_t *name; //primitive container
    list_t *state; //primitive container
    char *reason; // string
    char *reason_uid; // string
    struct v0_0_39_uint32_no_val_t *resume_after; //model
    struct v0_0_39_uint32_no_val_t *weight; //model

} v0_0_39_update_node_msg_t;

v0_0_39_update_node_msg_t *v0_0_39_update_node_msg_create(
    char *comment,
    int cpu_bind,
    char *extra,
    list_t *features,
    list_t *features_act,
    char *gres,
    list_t *address,
    list_t *hostname,
    list_t *name,
    list_t *state,
    char *reason,
    char *reason_uid,
    v0_0_39_uint32_no_val_t *resume_after,
    v0_0_39_uint32_no_val_t *weight
);

void v0_0_39_update_node_msg_free(v0_0_39_update_node_msg_t *v0_0_39_update_node_msg);

v0_0_39_update_node_msg_t *v0_0_39_update_node_msg_parseFromJSON(cJSON *v0_0_39_update_node_msgJSON);

cJSON *v0_0_39_update_node_msg_convertToJSON(v0_0_39_update_node_msg_t *v0_0_39_update_node_msg);

#endif /* _v0_0_39_update_node_msg_H_ */

