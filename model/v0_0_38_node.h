/*
 * v0_0_38_node.h
 *
 * 
 */

#ifndef _v0_0_38_node_H_
#define _v0_0_38_node_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_38_node_t v0_0_38_node_t;




typedef struct v0_0_38_node_t {
    char *architecture; // string
    char *burstbuffer_network_address; // string
    int boards; //numeric
    long boot_time; //numeric
    int cores; //numeric
    int cpu_binding; //numeric
    long cpu_load; //numeric
    int free_memory; //numeric
    int cpus; //numeric
    char *features; // string
    char *active_features; // string
    char *gres; // string
    char *gres_drained; // string
    char *gres_used; // string
    char *mcs_label; // string
    char *name; // string
    char *next_state_after_reboot; // string
    list_t *next_state_after_reboot_flags; //primitive container
    char *address; // string
    char *hostname; // string
    char *state; // string
    list_t *state_flags; //primitive container
    char *operating_system; // string
    char *owner; // string
    list_t *partitions; //primitive container
    int port; //numeric
    int real_memory; //numeric
    char *reason; // string
    int reason_changed_at; //numeric
    char *reason_set_by_user; // string
    long slurmd_start_time; //numeric
    int sockets; //numeric
    int threads; //numeric
    int temporary_disk; //numeric
    int weight; //numeric
    char *tres; // string
    char *tres_used; // string
    double tres_weighted; //numeric
    char *slurmd_version; // string
    long alloc_cpus; //numeric
    long idle_cpus; //numeric
    long alloc_memory; //numeric

} v0_0_38_node_t;

v0_0_38_node_t *v0_0_38_node_create(
    char *architecture,
    char *burstbuffer_network_address,
    int boards,
    long boot_time,
    int cores,
    int cpu_binding,
    long cpu_load,
    int free_memory,
    int cpus,
    char *features,
    char *active_features,
    char *gres,
    char *gres_drained,
    char *gres_used,
    char *mcs_label,
    char *name,
    char *next_state_after_reboot,
    list_t *next_state_after_reboot_flags,
    char *address,
    char *hostname,
    char *state,
    list_t *state_flags,
    char *operating_system,
    char *owner,
    list_t *partitions,
    int port,
    int real_memory,
    char *reason,
    int reason_changed_at,
    char *reason_set_by_user,
    long slurmd_start_time,
    int sockets,
    int threads,
    int temporary_disk,
    int weight,
    char *tres,
    char *tres_used,
    double tres_weighted,
    char *slurmd_version,
    long alloc_cpus,
    long idle_cpus,
    long alloc_memory
);

void v0_0_38_node_free(v0_0_38_node_t *v0_0_38_node);

v0_0_38_node_t *v0_0_38_node_parseFromJSON(cJSON *v0_0_38_nodeJSON);

cJSON *v0_0_38_node_convertToJSON(v0_0_38_node_t *v0_0_38_node);

#endif /* _v0_0_38_node_H_ */

