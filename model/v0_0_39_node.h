/*
 * v0_0_39_node.h
 *
 * 
 */

#ifndef _v0_0_39_node_H_
#define _v0_0_39_node_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_node_t v0_0_39_node_t;

#include "v0_0_39_acct_gather_energy.h"
#include "v0_0_39_ext_sensors_data.h"
#include "v0_0_39_power_mgmt_data.h"
#include "v0_0_39_uint32_no_val.h"
#include "v0_0_39_uint64_no_val.h"

// Enum NEXTSTATEAFTERREBOOT for v0_0_39_node

typedef enum  { slurm_rest_api_v0_0_39_node_NEXTSTATEAFTERREBOOT_NULL = 0, slurm_rest_api_v0_0_39_node_NEXTSTATEAFTERREBOOT_INVALID, slurm_rest_api_v0_0_39_node_NEXTSTATEAFTERREBOOT_UNKNOWN, slurm_rest_api_v0_0_39_node_NEXTSTATEAFTERREBOOT_DOWN, slurm_rest_api_v0_0_39_node_NEXTSTATEAFTERREBOOT_IDLE, slurm_rest_api_v0_0_39_node_NEXTSTATEAFTERREBOOT_ALLOCATED, slurm_rest_api_v0_0_39_node_NEXTSTATEAFTERREBOOT_ERROR, slurm_rest_api_v0_0_39_node_NEXTSTATEAFTERREBOOT_MIXED, slurm_rest_api_v0_0_39_node_NEXTSTATEAFTERREBOOT_FUTURE, slurm_rest_api_v0_0_39_node_NEXTSTATEAFTERREBOOT_PERFCTRS, slurm_rest_api_v0_0_39_node_NEXTSTATEAFTERREBOOT_RESERVED, slurm_rest_api_v0_0_39_node_NEXTSTATEAFTERREBOOT_UNDRAIN, slurm_rest_api_v0_0_39_node_NEXTSTATEAFTERREBOOT_CLOUD, slurm_rest_api_v0_0_39_node_NEXTSTATEAFTERREBOOT_RESUME, slurm_rest_api_v0_0_39_node_NEXTSTATEAFTERREBOOT_DRAIN, slurm_rest_api_v0_0_39_node_NEXTSTATEAFTERREBOOT_COMPLETING, slurm_rest_api_v0_0_39_node_NEXTSTATEAFTERREBOOT_NOT_RESPONDING, slurm_rest_api_v0_0_39_node_NEXTSTATEAFTERREBOOT_POWERED_DOWN, slurm_rest_api_v0_0_39_node_NEXTSTATEAFTERREBOOT_FAIL, slurm_rest_api_v0_0_39_node_NEXTSTATEAFTERREBOOT_POWERING_UP, slurm_rest_api_v0_0_39_node_NEXTSTATEAFTERREBOOT_MAINTENANCE, slurm_rest_api_v0_0_39_node_NEXTSTATEAFTERREBOOT_REBOOT_REQUESTED, slurm_rest_api_v0_0_39_node_NEXTSTATEAFTERREBOOT_REBOOT_CANCELED, slurm_rest_api_v0_0_39_node_NEXTSTATEAFTERREBOOT_POWERING_DOWN, slurm_rest_api_v0_0_39_node_NEXTSTATEAFTERREBOOT_DYNAMIC_FUTURE, slurm_rest_api_v0_0_39_node_NEXTSTATEAFTERREBOOT_REBOOT_ISSUED, slurm_rest_api_v0_0_39_node_NEXTSTATEAFTERREBOOT_PLANNED, slurm_rest_api_v0_0_39_node_NEXTSTATEAFTERREBOOT_INVALID_REG, slurm_rest_api_v0_0_39_node_NEXTSTATEAFTERREBOOT_POWER_DOWN, slurm_rest_api_v0_0_39_node_NEXTSTATEAFTERREBOOT_POWER_UP, slurm_rest_api_v0_0_39_node_NEXTSTATEAFTERREBOOT_POWER_DRAIN, slurm_rest_api_v0_0_39_node_NEXTSTATEAFTERREBOOT_DYNAMIC_NORM } slurm_rest_api_v0_0_39_node_NEXTSTATEAFTERREBOOT_e;

char* v0_0_39_node_next_state_after_reboot_ToString(slurm_rest_api_v0_0_39_node_NEXTSTATEAFTERREBOOT_e next_state_after_reboot);

slurm_rest_api_v0_0_39_node_NEXTSTATEAFTERREBOOT_e v0_0_39_node_next_state_after_reboot_FromString(char* next_state_after_reboot);

// Enum STATE for v0_0_39_node

typedef enum  { slurm_rest_api_v0_0_39_node_STATE_NULL = 0, slurm_rest_api_v0_0_39_node_STATE_INVALID, slurm_rest_api_v0_0_39_node_STATE_UNKNOWN, slurm_rest_api_v0_0_39_node_STATE_DOWN, slurm_rest_api_v0_0_39_node_STATE_IDLE, slurm_rest_api_v0_0_39_node_STATE_ALLOCATED, slurm_rest_api_v0_0_39_node_STATE_ERROR, slurm_rest_api_v0_0_39_node_STATE_MIXED, slurm_rest_api_v0_0_39_node_STATE_FUTURE, slurm_rest_api_v0_0_39_node_STATE_PERFCTRS, slurm_rest_api_v0_0_39_node_STATE_RESERVED, slurm_rest_api_v0_0_39_node_STATE_UNDRAIN, slurm_rest_api_v0_0_39_node_STATE_CLOUD, slurm_rest_api_v0_0_39_node_STATE_RESUME, slurm_rest_api_v0_0_39_node_STATE_DRAIN, slurm_rest_api_v0_0_39_node_STATE_COMPLETING, slurm_rest_api_v0_0_39_node_STATE_NOT_RESPONDING, slurm_rest_api_v0_0_39_node_STATE_POWERED_DOWN, slurm_rest_api_v0_0_39_node_STATE_FAIL, slurm_rest_api_v0_0_39_node_STATE_POWERING_UP, slurm_rest_api_v0_0_39_node_STATE_MAINTENANCE, slurm_rest_api_v0_0_39_node_STATE_REBOOT_REQUESTED, slurm_rest_api_v0_0_39_node_STATE_REBOOT_CANCELED, slurm_rest_api_v0_0_39_node_STATE_POWERING_DOWN, slurm_rest_api_v0_0_39_node_STATE_DYNAMIC_FUTURE, slurm_rest_api_v0_0_39_node_STATE_REBOOT_ISSUED, slurm_rest_api_v0_0_39_node_STATE_PLANNED, slurm_rest_api_v0_0_39_node_STATE_INVALID_REG, slurm_rest_api_v0_0_39_node_STATE_POWER_DOWN, slurm_rest_api_v0_0_39_node_STATE_POWER_UP, slurm_rest_api_v0_0_39_node_STATE_POWER_DRAIN, slurm_rest_api_v0_0_39_node_STATE_DYNAMIC_NORM } slurm_rest_api_v0_0_39_node_STATE_e;

char* v0_0_39_node_state_ToString(slurm_rest_api_v0_0_39_node_STATE_e state);

slurm_rest_api_v0_0_39_node_STATE_e v0_0_39_node_state_FromString(char* state);



typedef struct v0_0_39_node_t {
    char *architecture; // string
    char *burstbuffer_network_address; // string
    int boards; //numeric
    long boot_time; //numeric
    char *cluster_name; // string
    int cores; //numeric
    int specialized_cores; //numeric
    int cpu_binding; //numeric
    struct v0_0_39_uint32_no_val_t *cpu_load; //model
    struct v0_0_39_uint64_no_val_t *free_mem; //model
    int cpus; //numeric
    int effective_cpus; //numeric
    char *specialized_cpus; // string
    struct v0_0_39_acct_gather_energy_t *energy; //model
    struct v0_0_39_ext_sensors_data_t *external_sensors; //model
    char *extra; // string
    struct v0_0_39_power_mgmt_data_t *power; //model
    list_t *features; //primitive container
    list_t *active_features; //primitive container
    char *gres; // string
    char *gres_drained; // string
    char *gres_used; // string
    long last_busy; //numeric
    char *mcs_label; // string
    long specialized_memory; //numeric
    char *name; // string
    list_t *next_state_after_reboot; //primitive container
    char *address; // string
    char *hostname; // string
    list_t *state; //primitive container
    char *operating_system; // string
    char *owner; // string
    list_t *partitions; //primitive container
    int port; //numeric
    long real_memory; //numeric
    char *comment; // string
    char *reason; // string
    long reason_changed_at; //numeric
    char *reason_set_by_user; // string
    struct v0_0_39_uint64_no_val_t *resume_after; //model
    char *reservation; // string
    long alloc_memory; //numeric
    int alloc_cpus; //numeric
    int alloc_idle_cpus; //numeric
    char *tres_used; // string
    double tres_weighted; //numeric
    long slurmd_start_time; //numeric
    int sockets; //numeric
    int threads; //numeric
    int temporary_disk; //numeric
    int weight; //numeric
    char *tres; // string
    char *version; // string

} v0_0_39_node_t;

v0_0_39_node_t *v0_0_39_node_create(
    char *architecture,
    char *burstbuffer_network_address,
    int boards,
    long boot_time,
    char *cluster_name,
    int cores,
    int specialized_cores,
    int cpu_binding,
    v0_0_39_uint32_no_val_t *cpu_load,
    v0_0_39_uint64_no_val_t *free_mem,
    int cpus,
    int effective_cpus,
    char *specialized_cpus,
    v0_0_39_acct_gather_energy_t *energy,
    v0_0_39_ext_sensors_data_t *external_sensors,
    char *extra,
    v0_0_39_power_mgmt_data_t *power,
    list_t *features,
    list_t *active_features,
    char *gres,
    char *gres_drained,
    char *gres_used,
    long last_busy,
    char *mcs_label,
    long specialized_memory,
    char *name,
    list_t *next_state_after_reboot,
    char *address,
    char *hostname,
    list_t *state,
    char *operating_system,
    char *owner,
    list_t *partitions,
    int port,
    long real_memory,
    char *comment,
    char *reason,
    long reason_changed_at,
    char *reason_set_by_user,
    v0_0_39_uint64_no_val_t *resume_after,
    char *reservation,
    long alloc_memory,
    int alloc_cpus,
    int alloc_idle_cpus,
    char *tres_used,
    double tres_weighted,
    long slurmd_start_time,
    int sockets,
    int threads,
    int temporary_disk,
    int weight,
    char *tres,
    char *version
);

void v0_0_39_node_free(v0_0_39_node_t *v0_0_39_node);

v0_0_39_node_t *v0_0_39_node_parseFromJSON(cJSON *v0_0_39_nodeJSON);

cJSON *v0_0_39_node_convertToJSON(v0_0_39_node_t *v0_0_39_node);

#endif /* _v0_0_39_node_H_ */

