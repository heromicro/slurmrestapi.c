/*
 * v0_0_39_job_info.h
 *
 * 
 */

#ifndef _v0_0_39_job_info_H_
#define _v0_0_39_job_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_job_info_t v0_0_39_job_info_t;

#include "v0_0_39_float64_no_val.h"
#include "v0_0_39_job_info_power.h"
#include "v0_0_39_job_res.h"
#include "v0_0_39_uint16_no_val.h"
#include "v0_0_39_uint32_no_val.h"
#include "v0_0_39_uint64_no_val.h"

// Enum FLAGS for v0_0_39_job_info

typedef enum  { slurm_rest_api_v0_0_39_job_info_FLAGS_NULL = 0, slurm_rest_api_v0_0_39_job_info_FLAGS_KILL_INVALID_DEPENDENCY, slurm_rest_api_v0_0_39_job_info_FLAGS_NO_KILL_INVALID_DEPENDENCY, slurm_rest_api_v0_0_39_job_info_FLAGS_HAS_STATE_DIRECTORY, slurm_rest_api_v0_0_39_job_info_FLAGS_TESTING_BACKFILL, slurm_rest_api_v0_0_39_job_info_FLAGS_GRES_BINDING_ENFORCED, slurm_rest_api_v0_0_39_job_info_FLAGS_TEST_NOW_ONLY, slurm_rest_api_v0_0_39_job_info_FLAGS_SEND_JOB_ENVIRONMENT, slurm_rest_api_v0_0_39_job_info_FLAGS_SPREAD_JOB, slurm_rest_api_v0_0_39_job_info_FLAGS_PREFER_MINIMUM_NODE_COUNT, slurm_rest_api_v0_0_39_job_info_FLAGS_JOB_KILL_HURRY, slurm_rest_api_v0_0_39_job_info_FLAGS_SKIP_TRES_STRING_ACCOUNTING, slurm_rest_api_v0_0_39_job_info_FLAGS_SIBLING_CLUSTER_UPDATE_ONLY, slurm_rest_api_v0_0_39_job_info_FLAGS_HETEROGENEOUS_JOB, slurm_rest_api_v0_0_39_job_info_FLAGS_EXACT_TASK_COUNT_REQUESTED, slurm_rest_api_v0_0_39_job_info_FLAGS_EXACT_CPU_COUNT_REQUESTED, slurm_rest_api_v0_0_39_job_info_FLAGS_TESTING_WHOLE_NODE_BACKFILL, slurm_rest_api_v0_0_39_job_info_FLAGS_TOP_PRIORITY_JOB, slurm_rest_api_v0_0_39_job_info_FLAGS_ACCRUE_COUNT_CLEARED, slurm_rest_api_v0_0_39_job_info_FLAGS_GRED_BINDING_DISABLED, slurm_rest_api_v0_0_39_job_info_FLAGS_JOB_WAS_RUNNING, slurm_rest_api_v0_0_39_job_info_FLAGS_JOB_ACCRUE_TIME_RESET, slurm_rest_api_v0_0_39_job_info_FLAGS_CRON_JOB, slurm_rest_api_v0_0_39_job_info_FLAGS_EXACT_MEMORY_REQUESTED, slurm_rest_api_v0_0_39_job_info_FLAGS_JOB_RESIZED, slurm_rest_api_v0_0_39_job_info_FLAGS_USING_DEFAULT_ACCOUNT, slurm_rest_api_v0_0_39_job_info_FLAGS_USING_DEFAULT_PARTITION, slurm_rest_api_v0_0_39_job_info_FLAGS_USING_DEFAULT_QOS, slurm_rest_api_v0_0_39_job_info_FLAGS_USING_DEFAULT_WCKEY, slurm_rest_api_v0_0_39_job_info_FLAGS_DEPENDENT, slurm_rest_api_v0_0_39_job_info_FLAGS_MAGNETIC, slurm_rest_api_v0_0_39_job_info_FLAGS_PARTITION_ASSIGNED, slurm_rest_api_v0_0_39_job_info_FLAGS_BACKFILL_ATTEMPTED, slurm_rest_api_v0_0_39_job_info_FLAGS_SCHEDULING_ATTEMPTED, slurm_rest_api_v0_0_39_job_info_FLAGS_SAVE_BATCH_SCRIPT } slurm_rest_api_v0_0_39_job_info_FLAGS_e;

char* v0_0_39_job_info_flags_ToString(slurm_rest_api_v0_0_39_job_info_FLAGS_e flags);

slurm_rest_api_v0_0_39_job_info_FLAGS_e v0_0_39_job_info_flags_FromString(char* flags);

// Enum MAILTYPE for v0_0_39_job_info

typedef enum  { slurm_rest_api_v0_0_39_job_info_MAILTYPE_NULL = 0, slurm_rest_api_v0_0_39_job_info_MAILTYPE_BEGIN, slurm_rest_api_v0_0_39_job_info_MAILTYPE_END, slurm_rest_api_v0_0_39_job_info_MAILTYPE_FAIL, slurm_rest_api_v0_0_39_job_info_MAILTYPE_REQUEUE, slurm_rest_api_v0_0_39_job_info_MAILTYPE_TIME=100%, slurm_rest_api_v0_0_39_job_info_MAILTYPE_TIME=90%, slurm_rest_api_v0_0_39_job_info_MAILTYPE_TIME=80%, slurm_rest_api_v0_0_39_job_info_MAILTYPE_TIME=50%, slurm_rest_api_v0_0_39_job_info_MAILTYPE_STAGE_OUT, slurm_rest_api_v0_0_39_job_info_MAILTYPE_ARRAY_TASKS, slurm_rest_api_v0_0_39_job_info_MAILTYPE_INVALID_DEPENDENCY } slurm_rest_api_v0_0_39_job_info_MAILTYPE_e;

char* v0_0_39_job_info_mail_type_ToString(slurm_rest_api_v0_0_39_job_info_MAILTYPE_e mail_type);

slurm_rest_api_v0_0_39_job_info_MAILTYPE_e v0_0_39_job_info_mail_type_FromString(char* mail_type);

// Enum PROFILE for v0_0_39_job_info

typedef enum  { slurm_rest_api_v0_0_39_job_info_PROFILE_NULL = 0, slurm_rest_api_v0_0_39_job_info_PROFILE_NOT_SET, slurm_rest_api_v0_0_39_job_info_PROFILE_NONE, slurm_rest_api_v0_0_39_job_info_PROFILE_ENERGY, slurm_rest_api_v0_0_39_job_info_PROFILE_LUSTRE, slurm_rest_api_v0_0_39_job_info_PROFILE_NETWORK, slurm_rest_api_v0_0_39_job_info_PROFILE_TASK } slurm_rest_api_v0_0_39_job_info_PROFILE_e;

char* v0_0_39_job_info_profile_ToString(slurm_rest_api_v0_0_39_job_info_PROFILE_e profile);

slurm_rest_api_v0_0_39_job_info_PROFILE_e v0_0_39_job_info_profile_FromString(char* profile);

// Enum SHARED for v0_0_39_job_info

typedef enum  { slurm_rest_api_v0_0_39_job_info_SHARED_NULL = 0, slurm_rest_api_v0_0_39_job_info_SHARED_none, slurm_rest_api_v0_0_39_job_info_SHARED_oversubscribe, slurm_rest_api_v0_0_39_job_info_SHARED_user, slurm_rest_api_v0_0_39_job_info_SHARED_mcs } slurm_rest_api_v0_0_39_job_info_SHARED_e;

char* v0_0_39_job_info_shared_ToString(slurm_rest_api_v0_0_39_job_info_SHARED_e shared);

slurm_rest_api_v0_0_39_job_info_SHARED_e v0_0_39_job_info_shared_FromString(char* shared);

// Enum EXCLUSIVE for v0_0_39_job_info

typedef enum  { slurm_rest_api_v0_0_39_job_info_EXCLUSIVE_NULL = 0, slurm_rest_api_v0_0_39_job_info_EXCLUSIVE__true, slurm_rest_api_v0_0_39_job_info_EXCLUSIVE__false, slurm_rest_api_v0_0_39_job_info_EXCLUSIVE_user, slurm_rest_api_v0_0_39_job_info_EXCLUSIVE_mcs } slurm_rest_api_v0_0_39_job_info_EXCLUSIVE_e;

char* v0_0_39_job_info_exclusive_ToString(slurm_rest_api_v0_0_39_job_info_EXCLUSIVE_e exclusive);

slurm_rest_api_v0_0_39_job_info_EXCLUSIVE_e v0_0_39_job_info_exclusive_FromString(char* exclusive);

// Enum SHOWFLAGS for v0_0_39_job_info

typedef enum  { slurm_rest_api_v0_0_39_job_info_SHOWFLAGS_NULL = 0, slurm_rest_api_v0_0_39_job_info_SHOWFLAGS_ALL, slurm_rest_api_v0_0_39_job_info_SHOWFLAGS_DETAIL, slurm_rest_api_v0_0_39_job_info_SHOWFLAGS_MIXED, slurm_rest_api_v0_0_39_job_info_SHOWFLAGS_LOCAL, slurm_rest_api_v0_0_39_job_info_SHOWFLAGS_SIBLING, slurm_rest_api_v0_0_39_job_info_SHOWFLAGS_FEDERATION, slurm_rest_api_v0_0_39_job_info_SHOWFLAGS_FUTURE } slurm_rest_api_v0_0_39_job_info_SHOWFLAGS_e;

char* v0_0_39_job_info_show_flags_ToString(slurm_rest_api_v0_0_39_job_info_SHOWFLAGS_e show_flags);

slurm_rest_api_v0_0_39_job_info_SHOWFLAGS_e v0_0_39_job_info_show_flags_FromString(char* show_flags);



typedef struct v0_0_39_job_info_t {
    char *account; // string
    long accrue_time; //numeric
    char *admin_comment; // string
    char *allocating_node; // string
    struct v0_0_39_uint32_no_val_t *array_job_id; //model
    struct v0_0_39_uint32_no_val_t *array_task_id; //model
    struct v0_0_39_uint32_no_val_t *array_max_tasks; //model
    char *array_task_string; // string
    int association_id; //numeric
    char *batch_features; // string
    int batch_flag; //boolean
    char *batch_host; // string
    list_t *flags; //primitive container
    char *burst_buffer; // string
    char *burst_buffer_state; // string
    char *cluster; // string
    char *cluster_features; // string
    char *command; // string
    char *comment; // string
    char *container; // string
    char *container_id; // string
    int contiguous; //boolean
    int core_spec; //numeric
    int thread_spec; //numeric
    struct v0_0_39_uint16_no_val_t *cores_per_socket; //model
    struct v0_0_39_float64_no_val_t *billable_tres; //model
    struct v0_0_39_uint16_no_val_t *cpus_per_task; //model
    struct v0_0_39_uint32_no_val_t *cpu_frequency_minimum; //model
    struct v0_0_39_uint32_no_val_t *cpu_frequency_maximum; //model
    struct v0_0_39_uint32_no_val_t *cpu_frequency_governor; //model
    char *cpus_per_tres; // string
    char *cron; // string
    long deadline; //numeric
    struct v0_0_39_uint32_no_val_t *delay_boot; //model
    char *dependency; // string
    int derived_exit_code; //numeric
    long eligible_time; //numeric
    long end_time; //numeric
    char *excluded_nodes; // string
    int exit_code; //numeric
    char *extra; // string
    char *failed_node; // string
    char *features; // string
    char *federation_origin; // string
    char *federation_siblings_active; // string
    char *federation_siblings_viable; // string
    list_t *gres_detail; //primitive container
    int group_id; //numeric
    char *group_name; // string
    struct v0_0_39_uint32_no_val_t *het_job_id; //model
    char *het_job_id_set; // string
    struct v0_0_39_uint32_no_val_t *het_job_offset; //model
    int job_id; //numeric
    struct v0_0_39_job_res_t *job_resources; //model
    list_t *job_size_str; //primitive container
    char *job_state; // string
    long last_sched_evaluation; //numeric
    char *licenses; // string
    list_t *mail_type; //primitive container
    char *mail_user; // string
    struct v0_0_39_uint32_no_val_t *max_cpus; //model
    struct v0_0_39_uint32_no_val_t *max_nodes; //model
    char *mcs_label; // string
    char *memory_per_tres; // string
    char *name; // string
    char *network; // string
    char *nodes; // string
    int nice; //numeric
    struct v0_0_39_uint16_no_val_t *tasks_per_core; //model
    struct v0_0_39_uint16_no_val_t *tasks_per_tres; //model
    struct v0_0_39_uint16_no_val_t *tasks_per_node; //model
    struct v0_0_39_uint16_no_val_t *tasks_per_socket; //model
    struct v0_0_39_uint16_no_val_t *tasks_per_board; //model
    struct v0_0_39_uint32_no_val_t *cpus; //model
    struct v0_0_39_uint32_no_val_t *node_count; //model
    struct v0_0_39_uint32_no_val_t *tasks; //model
    char *partition; // string
    char *prefer; // string
    struct v0_0_39_uint64_no_val_t *memory_per_cpu; //model
    struct v0_0_39_uint64_no_val_t *memory_per_node; //model
    struct v0_0_39_uint16_no_val_t *minimum_cpus_per_node; //model
    struct v0_0_39_uint32_no_val_t *minimum_tmp_disk_per_node; //model
    struct v0_0_39_job_info_power_t *power; //model
    long preempt_time; //numeric
    long preemptable_time; //numeric
    long pre_sus_time; //numeric
    struct v0_0_39_uint32_no_val_t *priority; //model
    list_t *profile; //primitive container
    char *qos; // string
    int reboot; //boolean
    char *required_nodes; // string
    int minimum_switches; //numeric
    int requeue; //boolean
    long resize_time; //numeric
    int restart_cnt; //numeric
    char *resv_name; // string
    char *scheduled_nodes; // string
    char *selinux_context; // string
    list_t *shared; //primitive container
    list_t *exclusive; //primitive container
    list_t *show_flags; //primitive container
    int sockets_per_board; //numeric
    struct v0_0_39_uint16_no_val_t *sockets_per_node; //model
    long start_time; //numeric
    char *state_description; // string
    char *state_reason; // string
    char *standard_error; // string
    char *standard_input; // string
    char *standard_output; // string
    long submit_time; //numeric
    long suspend_time; //numeric
    char *system_comment; // string
    struct v0_0_39_uint32_no_val_t *time_limit; //model
    struct v0_0_39_uint32_no_val_t *time_minimum; //model
    struct v0_0_39_uint16_no_val_t *threads_per_core; //model
    char *tres_bind; // string
    char *tres_freq; // string
    char *tres_per_job; // string
    char *tres_per_node; // string
    char *tres_per_socket; // string
    char *tres_per_task; // string
    char *tres_req_str; // string
    char *tres_alloc_str; // string
    int user_id; //numeric
    char *user_name; // string
    int maximum_switch_wait_time; //numeric
    char *wckey; // string
    char *current_working_directory; // string

} v0_0_39_job_info_t;

v0_0_39_job_info_t *v0_0_39_job_info_create(
    char *account,
    long accrue_time,
    char *admin_comment,
    char *allocating_node,
    v0_0_39_uint32_no_val_t *array_job_id,
    v0_0_39_uint32_no_val_t *array_task_id,
    v0_0_39_uint32_no_val_t *array_max_tasks,
    char *array_task_string,
    int association_id,
    char *batch_features,
    int batch_flag,
    char *batch_host,
    list_t *flags,
    char *burst_buffer,
    char *burst_buffer_state,
    char *cluster,
    char *cluster_features,
    char *command,
    char *comment,
    char *container,
    char *container_id,
    int contiguous,
    int core_spec,
    int thread_spec,
    v0_0_39_uint16_no_val_t *cores_per_socket,
    v0_0_39_float64_no_val_t *billable_tres,
    v0_0_39_uint16_no_val_t *cpus_per_task,
    v0_0_39_uint32_no_val_t *cpu_frequency_minimum,
    v0_0_39_uint32_no_val_t *cpu_frequency_maximum,
    v0_0_39_uint32_no_val_t *cpu_frequency_governor,
    char *cpus_per_tres,
    char *cron,
    long deadline,
    v0_0_39_uint32_no_val_t *delay_boot,
    char *dependency,
    int derived_exit_code,
    long eligible_time,
    long end_time,
    char *excluded_nodes,
    int exit_code,
    char *extra,
    char *failed_node,
    char *features,
    char *federation_origin,
    char *federation_siblings_active,
    char *federation_siblings_viable,
    list_t *gres_detail,
    int group_id,
    char *group_name,
    v0_0_39_uint32_no_val_t *het_job_id,
    char *het_job_id_set,
    v0_0_39_uint32_no_val_t *het_job_offset,
    int job_id,
    v0_0_39_job_res_t *job_resources,
    list_t *job_size_str,
    char *job_state,
    long last_sched_evaluation,
    char *licenses,
    list_t *mail_type,
    char *mail_user,
    v0_0_39_uint32_no_val_t *max_cpus,
    v0_0_39_uint32_no_val_t *max_nodes,
    char *mcs_label,
    char *memory_per_tres,
    char *name,
    char *network,
    char *nodes,
    int nice,
    v0_0_39_uint16_no_val_t *tasks_per_core,
    v0_0_39_uint16_no_val_t *tasks_per_tres,
    v0_0_39_uint16_no_val_t *tasks_per_node,
    v0_0_39_uint16_no_val_t *tasks_per_socket,
    v0_0_39_uint16_no_val_t *tasks_per_board,
    v0_0_39_uint32_no_val_t *cpus,
    v0_0_39_uint32_no_val_t *node_count,
    v0_0_39_uint32_no_val_t *tasks,
    char *partition,
    char *prefer,
    v0_0_39_uint64_no_val_t *memory_per_cpu,
    v0_0_39_uint64_no_val_t *memory_per_node,
    v0_0_39_uint16_no_val_t *minimum_cpus_per_node,
    v0_0_39_uint32_no_val_t *minimum_tmp_disk_per_node,
    v0_0_39_job_info_power_t *power,
    long preempt_time,
    long preemptable_time,
    long pre_sus_time,
    v0_0_39_uint32_no_val_t *priority,
    list_t *profile,
    char *qos,
    int reboot,
    char *required_nodes,
    int minimum_switches,
    int requeue,
    long resize_time,
    int restart_cnt,
    char *resv_name,
    char *scheduled_nodes,
    char *selinux_context,
    list_t *shared,
    list_t *exclusive,
    list_t *show_flags,
    int sockets_per_board,
    v0_0_39_uint16_no_val_t *sockets_per_node,
    long start_time,
    char *state_description,
    char *state_reason,
    char *standard_error,
    char *standard_input,
    char *standard_output,
    long submit_time,
    long suspend_time,
    char *system_comment,
    v0_0_39_uint32_no_val_t *time_limit,
    v0_0_39_uint32_no_val_t *time_minimum,
    v0_0_39_uint16_no_val_t *threads_per_core,
    char *tres_bind,
    char *tres_freq,
    char *tres_per_job,
    char *tres_per_node,
    char *tres_per_socket,
    char *tres_per_task,
    char *tres_req_str,
    char *tres_alloc_str,
    int user_id,
    char *user_name,
    int maximum_switch_wait_time,
    char *wckey,
    char *current_working_directory
);

void v0_0_39_job_info_free(v0_0_39_job_info_t *v0_0_39_job_info);

v0_0_39_job_info_t *v0_0_39_job_info_parseFromJSON(cJSON *v0_0_39_job_infoJSON);

cJSON *v0_0_39_job_info_convertToJSON(v0_0_39_job_info_t *v0_0_39_job_info);

#endif /* _v0_0_39_job_info_H_ */

