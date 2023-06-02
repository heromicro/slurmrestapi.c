/*
 * v0_0_37_job_properties.h
 *
 * 
 */

#ifndef _v0_0_37_job_properties_H_
#define _v0_0_37_job_properties_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_37_job_properties_t v0_0_37_job_properties_t;

#include "object.h"

// Enum EXCLUSIVE for v0_0_37_job_properties

typedef enum  { slurm_rest_api_v0_0_37_job_properties_EXCLUSIVE_NULL = 0, slurm_rest_api_v0_0_37_job_properties_EXCLUSIVE_user, slurm_rest_api_v0_0_37_job_properties_EXCLUSIVE_mcs, slurm_rest_api_v0_0_37_job_properties_EXCLUSIVE__true, slurm_rest_api_v0_0_37_job_properties_EXCLUSIVE__false } slurm_rest_api_v0_0_37_job_properties_EXCLUSIVE_e;

char* v0_0_37_job_properties_exclusive_ToString(slurm_rest_api_v0_0_37_job_properties_EXCLUSIVE_e exclusive);

slurm_rest_api_v0_0_37_job_properties_EXCLUSIVE_e v0_0_37_job_properties_exclusive_FromString(char* exclusive);

// Enum GRESFLAGS for v0_0_37_job_properties

typedef enum  { slurm_rest_api_v0_0_37_job_properties_GRESFLAGS_NULL = 0, slurm_rest_api_v0_0_37_job_properties_GRESFLAGS_disable_binding, slurm_rest_api_v0_0_37_job_properties_GRESFLAGS_enforce_binding } slurm_rest_api_v0_0_37_job_properties_GRESFLAGS_e;

char* v0_0_37_job_properties_gres_flags_ToString(slurm_rest_api_v0_0_37_job_properties_GRESFLAGS_e gres_flags);

slurm_rest_api_v0_0_37_job_properties_GRESFLAGS_e v0_0_37_job_properties_gres_flags_FromString(char* gres_flags);

// Enum OPENMODE for v0_0_37_job_properties

typedef enum  { slurm_rest_api_v0_0_37_job_properties_OPENMODE_NULL = 0, slurm_rest_api_v0_0_37_job_properties_OPENMODE_append, slurm_rest_api_v0_0_37_job_properties_OPENMODE_truncate } slurm_rest_api_v0_0_37_job_properties_OPENMODE_e;

char* v0_0_37_job_properties_open_mode_ToString(slurm_rest_api_v0_0_37_job_properties_OPENMODE_e open_mode);

slurm_rest_api_v0_0_37_job_properties_OPENMODE_e v0_0_37_job_properties_open_mode_FromString(char* open_mode);



typedef struct v0_0_37_job_properties_t {
    char *account; // string
    char *account_gather_frequency; // string
    list_t *argv; //primitive container
    char *array; // string
    char *batch_features; // string
    long begin_time; //numeric
    char *burst_buffer; // string
    char *cluster_constraint; // string
    char *comment; // string
    char *constraints; // string
    int core_specification; //numeric
    int cores_per_socket; //numeric
    char *cpu_binding; // string
    char *cpu_binding_hint; // string
    char *cpu_frequency; // string
    char *cpus_per_gpu; // string
    int cpus_per_task; //numeric
    char *current_working_directory; // string
    char *deadline; // string
    int delay_boot; //numeric
    char *dependency; // string
    char *distribution; // string
    object_t *environment; //object
    slurm_rest_api_v0_0_37_job_properties_EXCLUSIVE_e exclusive; //enum
    int get_user_environment; //boolean
    char *gres; // string
    slurm_rest_api_v0_0_37_job_properties_GRESFLAGS_e gres_flags; //enum
    char *gpu_binding; // string
    char *gpu_frequency; // string
    char *gpus; // string
    char *gpus_per_node; // string
    char *gpus_per_socket; // string
    char *gpus_per_task; // string
    int hold; //boolean
    int kill_on_invalid_dependency; //boolean
    char *licenses; // string
    char *mail_type; // string
    char *mail_user; // string
    char *mcs_label; // string
    char *memory_binding; // string
    int memory_per_cpu; //numeric
    int memory_per_gpu; //numeric
    int memory_per_node; //numeric
    int minimum_cpus_per_node; //numeric
    int minimum_nodes; //boolean
    char *name; // string
    char *nice; // string
    int no_kill; //boolean
    list_t *nodes; //primitive container
    slurm_rest_api_v0_0_37_job_properties_OPENMODE_e open_mode; //enum
    char *partition; // string
    char *priority; // string
    char *qos; // string
    int requeue; //boolean
    char *reservation; // string
    char *signal; // string
    int sockets_per_node; //numeric
    int spread_job; //boolean
    char *standard_error; // string
    char *standard_input; // string
    char *standard_output; // string
    int tasks; //numeric
    int tasks_per_core; //numeric
    int tasks_per_node; //numeric
    int tasks_per_socket; //numeric
    int thread_specification; //numeric
    int threads_per_core; //numeric
    int time_limit; //numeric
    int time_minimum; //numeric
    int wait_all_nodes; //boolean
    char *wckey; // string

} v0_0_37_job_properties_t;

v0_0_37_job_properties_t *v0_0_37_job_properties_create(
    char *account,
    char *account_gather_frequency,
    list_t *argv,
    char *array,
    char *batch_features,
    long begin_time,
    char *burst_buffer,
    char *cluster_constraint,
    char *comment,
    char *constraints,
    int core_specification,
    int cores_per_socket,
    char *cpu_binding,
    char *cpu_binding_hint,
    char *cpu_frequency,
    char *cpus_per_gpu,
    int cpus_per_task,
    char *current_working_directory,
    char *deadline,
    int delay_boot,
    char *dependency,
    char *distribution,
    object_t *environment,
    slurm_rest_api_v0_0_37_job_properties_EXCLUSIVE_e exclusive,
    int get_user_environment,
    char *gres,
    slurm_rest_api_v0_0_37_job_properties_GRESFLAGS_e gres_flags,
    char *gpu_binding,
    char *gpu_frequency,
    char *gpus,
    char *gpus_per_node,
    char *gpus_per_socket,
    char *gpus_per_task,
    int hold,
    int kill_on_invalid_dependency,
    char *licenses,
    char *mail_type,
    char *mail_user,
    char *mcs_label,
    char *memory_binding,
    int memory_per_cpu,
    int memory_per_gpu,
    int memory_per_node,
    int minimum_cpus_per_node,
    int minimum_nodes,
    char *name,
    char *nice,
    int no_kill,
    list_t *nodes,
    slurm_rest_api_v0_0_37_job_properties_OPENMODE_e open_mode,
    char *partition,
    char *priority,
    char *qos,
    int requeue,
    char *reservation,
    char *signal,
    int sockets_per_node,
    int spread_job,
    char *standard_error,
    char *standard_input,
    char *standard_output,
    int tasks,
    int tasks_per_core,
    int tasks_per_node,
    int tasks_per_socket,
    int thread_specification,
    int threads_per_core,
    int time_limit,
    int time_minimum,
    int wait_all_nodes,
    char *wckey
);

void v0_0_37_job_properties_free(v0_0_37_job_properties_t *v0_0_37_job_properties);

v0_0_37_job_properties_t *v0_0_37_job_properties_parseFromJSON(cJSON *v0_0_37_job_propertiesJSON);

cJSON *v0_0_37_job_properties_convertToJSON(v0_0_37_job_properties_t *v0_0_37_job_properties);

#endif /* _v0_0_37_job_properties_H_ */

