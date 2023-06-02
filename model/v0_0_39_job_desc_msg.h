/*
 * v0_0_39_job_desc_msg.h
 *
 * 
 */

#ifndef _v0_0_39_job_desc_msg_H_
#define _v0_0_39_job_desc_msg_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_job_desc_msg_t v0_0_39_job_desc_msg_t;

#include "v0_0_39_cron_entry.h"
#include "v0_0_39_uint16_no_val.h"
#include "v0_0_39_uint32_no_val.h"
#include "v0_0_39_uint64_no_val.h"

// Enum FLAGS for v0_0_39_job_desc_msg

typedef enum  { slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_NULL = 0, slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_KILL_INVALID_DEPENDENCY, slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_NO_KILL_INVALID_DEPENDENCY, slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_HAS_STATE_DIRECTORY, slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_TESTING_BACKFILL, slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_GRES_BINDING_ENFORCED, slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_TEST_NOW_ONLY, slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_SEND_JOB_ENVIRONMENT, slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_SPREAD_JOB, slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_PREFER_MINIMUM_NODE_COUNT, slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_JOB_KILL_HURRY, slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_SKIP_TRES_STRING_ACCOUNTING, slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_SIBLING_CLUSTER_UPDATE_ONLY, slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_HETEROGENEOUS_JOB, slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_EXACT_TASK_COUNT_REQUESTED, slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_EXACT_CPU_COUNT_REQUESTED, slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_TESTING_WHOLE_NODE_BACKFILL, slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_TOP_PRIORITY_JOB, slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_ACCRUE_COUNT_CLEARED, slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_GRED_BINDING_DISABLED, slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_JOB_WAS_RUNNING, slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_JOB_ACCRUE_TIME_RESET, slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_CRON_JOB, slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_EXACT_MEMORY_REQUESTED, slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_JOB_RESIZED, slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_USING_DEFAULT_ACCOUNT, slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_USING_DEFAULT_PARTITION, slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_USING_DEFAULT_QOS, slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_USING_DEFAULT_WCKEY, slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_DEPENDENT, slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_MAGNETIC, slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_PARTITION_ASSIGNED, slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_BACKFILL_ATTEMPTED, slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_SCHEDULING_ATTEMPTED, slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_SAVE_BATCH_SCRIPT } slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_e;

char* v0_0_39_job_desc_msg_flags_ToString(slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_e flags);

slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_e v0_0_39_job_desc_msg_flags_FromString(char* flags);

// Enum CPUBINDINGFLAGS for v0_0_39_job_desc_msg

typedef enum  { slurm_rest_api_v0_0_39_job_desc_msg_CPUBINDINGFLAGS_NULL = 0, slurm_rest_api_v0_0_39_job_desc_msg_CPUBINDINGFLAGS_VERBOSE, slurm_rest_api_v0_0_39_job_desc_msg_CPUBINDINGFLAGS_CPU_BIND_TO_THREADS, slurm_rest_api_v0_0_39_job_desc_msg_CPUBINDINGFLAGS_CPU_BIND_TO_CORES, slurm_rest_api_v0_0_39_job_desc_msg_CPUBINDINGFLAGS_CPU_BIND_TO_SOCKETS, slurm_rest_api_v0_0_39_job_desc_msg_CPUBINDINGFLAGS_CPU_BIND_TO_LDOMS, slurm_rest_api_v0_0_39_job_desc_msg_CPUBINDINGFLAGS_CPU_BIND_NONE, slurm_rest_api_v0_0_39_job_desc_msg_CPUBINDINGFLAGS_CPU_BIND_RANK, slurm_rest_api_v0_0_39_job_desc_msg_CPUBINDINGFLAGS_CPU_BIND_MAP, slurm_rest_api_v0_0_39_job_desc_msg_CPUBINDINGFLAGS_CPU_BIND_MASK, slurm_rest_api_v0_0_39_job_desc_msg_CPUBINDINGFLAGS_CPU_BIND_LDRANK, slurm_rest_api_v0_0_39_job_desc_msg_CPUBINDINGFLAGS_CPU_BIND_LDMAP, slurm_rest_api_v0_0_39_job_desc_msg_CPUBINDINGFLAGS_CPU_BIND_LDMASK, slurm_rest_api_v0_0_39_job_desc_msg_CPUBINDINGFLAGS_CPU_BIND_ONE_THREAD_PER_CORE, slurm_rest_api_v0_0_39_job_desc_msg_CPUBINDINGFLAGS_CPU_AUTO_BIND_TO_THREADS, slurm_rest_api_v0_0_39_job_desc_msg_CPUBINDINGFLAGS_CPU_AUTO_BIND_TO_CORES, slurm_rest_api_v0_0_39_job_desc_msg_CPUBINDINGFLAGS_CPU_AUTO_BIND_TO_SOCKETS, slurm_rest_api_v0_0_39_job_desc_msg_CPUBINDINGFLAGS_SLURMD_OFF_SPEC, slurm_rest_api_v0_0_39_job_desc_msg_CPUBINDINGFLAGS_CPU_BIND_OFF } slurm_rest_api_v0_0_39_job_desc_msg_CPUBINDINGFLAGS_e;

char* v0_0_39_job_desc_msg_cpu_binding_flags_ToString(slurm_rest_api_v0_0_39_job_desc_msg_CPUBINDINGFLAGS_e cpu_binding_flags);

slurm_rest_api_v0_0_39_job_desc_msg_CPUBINDINGFLAGS_e v0_0_39_job_desc_msg_cpu_binding_flags_FromString(char* cpu_binding_flags);

// Enum MAILTYPE for v0_0_39_job_desc_msg

typedef enum  { slurm_rest_api_v0_0_39_job_desc_msg_MAILTYPE_NULL = 0, slurm_rest_api_v0_0_39_job_desc_msg_MAILTYPE_BEGIN, slurm_rest_api_v0_0_39_job_desc_msg_MAILTYPE_END, slurm_rest_api_v0_0_39_job_desc_msg_MAILTYPE_FAIL, slurm_rest_api_v0_0_39_job_desc_msg_MAILTYPE_REQUEUE, slurm_rest_api_v0_0_39_job_desc_msg_MAILTYPE_TIME=100%, slurm_rest_api_v0_0_39_job_desc_msg_MAILTYPE_TIME=90%, slurm_rest_api_v0_0_39_job_desc_msg_MAILTYPE_TIME=80%, slurm_rest_api_v0_0_39_job_desc_msg_MAILTYPE_TIME=50%, slurm_rest_api_v0_0_39_job_desc_msg_MAILTYPE_STAGE_OUT, slurm_rest_api_v0_0_39_job_desc_msg_MAILTYPE_ARRAY_TASKS, slurm_rest_api_v0_0_39_job_desc_msg_MAILTYPE_INVALID_DEPENDENCY } slurm_rest_api_v0_0_39_job_desc_msg_MAILTYPE_e;

char* v0_0_39_job_desc_msg_mail_type_ToString(slurm_rest_api_v0_0_39_job_desc_msg_MAILTYPE_e mail_type);

slurm_rest_api_v0_0_39_job_desc_msg_MAILTYPE_e v0_0_39_job_desc_msg_mail_type_FromString(char* mail_type);

// Enum MEMORYBINDINGTYPE for v0_0_39_job_desc_msg

typedef enum  { slurm_rest_api_v0_0_39_job_desc_msg_MEMORYBINDINGTYPE_NULL = 0, slurm_rest_api_v0_0_39_job_desc_msg_MEMORYBINDINGTYPE_VERBOSE, slurm_rest_api_v0_0_39_job_desc_msg_MEMORYBINDINGTYPE_NONE, slurm_rest_api_v0_0_39_job_desc_msg_MEMORYBINDINGTYPE_RANK, slurm_rest_api_v0_0_39_job_desc_msg_MEMORYBINDINGTYPE_MAP, slurm_rest_api_v0_0_39_job_desc_msg_MEMORYBINDINGTYPE_MASK, slurm_rest_api_v0_0_39_job_desc_msg_MEMORYBINDINGTYPE_LOCAL, slurm_rest_api_v0_0_39_job_desc_msg_MEMORYBINDINGTYPE_SORT, slurm_rest_api_v0_0_39_job_desc_msg_MEMORYBINDINGTYPE_PREFER } slurm_rest_api_v0_0_39_job_desc_msg_MEMORYBINDINGTYPE_e;

char* v0_0_39_job_desc_msg_memory_binding_type_ToString(slurm_rest_api_v0_0_39_job_desc_msg_MEMORYBINDINGTYPE_e memory_binding_type);

slurm_rest_api_v0_0_39_job_desc_msg_MEMORYBINDINGTYPE_e v0_0_39_job_desc_msg_memory_binding_type_FromString(char* memory_binding_type);

// Enum OPENMODE for v0_0_39_job_desc_msg

typedef enum  { slurm_rest_api_v0_0_39_job_desc_msg_OPENMODE_NULL = 0, slurm_rest_api_v0_0_39_job_desc_msg_OPENMODE_APPEND, slurm_rest_api_v0_0_39_job_desc_msg_OPENMODE_TRUNCATE } slurm_rest_api_v0_0_39_job_desc_msg_OPENMODE_e;

char* v0_0_39_job_desc_msg_open_mode_ToString(slurm_rest_api_v0_0_39_job_desc_msg_OPENMODE_e open_mode);

slurm_rest_api_v0_0_39_job_desc_msg_OPENMODE_e v0_0_39_job_desc_msg_open_mode_FromString(char* open_mode);

// Enum POWERFLAGS for v0_0_39_job_desc_msg

typedef enum  { slurm_rest_api_v0_0_39_job_desc_msg_POWERFLAGS_NULL = 0, slurm_rest_api_v0_0_39_job_desc_msg_POWERFLAGS_EQUAL_POWER } slurm_rest_api_v0_0_39_job_desc_msg_POWERFLAGS_e;

char* v0_0_39_job_desc_msg_power_flags_ToString(slurm_rest_api_v0_0_39_job_desc_msg_POWERFLAGS_e power_flags);

slurm_rest_api_v0_0_39_job_desc_msg_POWERFLAGS_e v0_0_39_job_desc_msg_power_flags_FromString(char* power_flags);

// Enum PROFILE for v0_0_39_job_desc_msg

typedef enum  { slurm_rest_api_v0_0_39_job_desc_msg_PROFILE_NULL = 0, slurm_rest_api_v0_0_39_job_desc_msg_PROFILE_NOT_SET, slurm_rest_api_v0_0_39_job_desc_msg_PROFILE_NONE, slurm_rest_api_v0_0_39_job_desc_msg_PROFILE_ENERGY, slurm_rest_api_v0_0_39_job_desc_msg_PROFILE_LUSTRE, slurm_rest_api_v0_0_39_job_desc_msg_PROFILE_NETWORK, slurm_rest_api_v0_0_39_job_desc_msg_PROFILE_TASK } slurm_rest_api_v0_0_39_job_desc_msg_PROFILE_e;

char* v0_0_39_job_desc_msg_profile_ToString(slurm_rest_api_v0_0_39_job_desc_msg_PROFILE_e profile);

slurm_rest_api_v0_0_39_job_desc_msg_PROFILE_e v0_0_39_job_desc_msg_profile_FromString(char* profile);

// Enum SHARED for v0_0_39_job_desc_msg

typedef enum  { slurm_rest_api_v0_0_39_job_desc_msg_SHARED_NULL = 0, slurm_rest_api_v0_0_39_job_desc_msg_SHARED_none, slurm_rest_api_v0_0_39_job_desc_msg_SHARED_oversubscribe, slurm_rest_api_v0_0_39_job_desc_msg_SHARED_user, slurm_rest_api_v0_0_39_job_desc_msg_SHARED_mcs } slurm_rest_api_v0_0_39_job_desc_msg_SHARED_e;

char* v0_0_39_job_desc_msg_shared_ToString(slurm_rest_api_v0_0_39_job_desc_msg_SHARED_e shared);

slurm_rest_api_v0_0_39_job_desc_msg_SHARED_e v0_0_39_job_desc_msg_shared_FromString(char* shared);

// Enum EXCLUSIVE for v0_0_39_job_desc_msg

typedef enum  { slurm_rest_api_v0_0_39_job_desc_msg_EXCLUSIVE_NULL = 0, slurm_rest_api_v0_0_39_job_desc_msg_EXCLUSIVE__true, slurm_rest_api_v0_0_39_job_desc_msg_EXCLUSIVE__false, slurm_rest_api_v0_0_39_job_desc_msg_EXCLUSIVE_user, slurm_rest_api_v0_0_39_job_desc_msg_EXCLUSIVE_mcs } slurm_rest_api_v0_0_39_job_desc_msg_EXCLUSIVE_e;

char* v0_0_39_job_desc_msg_exclusive_ToString(slurm_rest_api_v0_0_39_job_desc_msg_EXCLUSIVE_e exclusive);

slurm_rest_api_v0_0_39_job_desc_msg_EXCLUSIVE_e v0_0_39_job_desc_msg_exclusive_FromString(char* exclusive);

// Enum KILLWARNINGFLAGS for v0_0_39_job_desc_msg

typedef enum  { slurm_rest_api_v0_0_39_job_desc_msg_KILLWARNINGFLAGS_NULL = 0, slurm_rest_api_v0_0_39_job_desc_msg_KILLWARNINGFLAGS_BATCH_JOB, slurm_rest_api_v0_0_39_job_desc_msg_KILLWARNINGFLAGS_ARRAY_JOB, slurm_rest_api_v0_0_39_job_desc_msg_KILLWARNINGFLAGS_FULL_STEPS_ONLY, slurm_rest_api_v0_0_39_job_desc_msg_KILLWARNINGFLAGS_FULL_JOB, slurm_rest_api_v0_0_39_job_desc_msg_KILLWARNINGFLAGS_FEDERATION_REQUEUE, slurm_rest_api_v0_0_39_job_desc_msg_KILLWARNINGFLAGS_HURRY, slurm_rest_api_v0_0_39_job_desc_msg_KILLWARNINGFLAGS_OUT_OF_MEMORY, slurm_rest_api_v0_0_39_job_desc_msg_KILLWARNINGFLAGS_NO_SIBLING_JOBS, slurm_rest_api_v0_0_39_job_desc_msg_KILLWARNINGFLAGS_RESERVATION_JOB, slurm_rest_api_v0_0_39_job_desc_msg_KILLWARNINGFLAGS_WARNING_SENT } slurm_rest_api_v0_0_39_job_desc_msg_KILLWARNINGFLAGS_e;

char* v0_0_39_job_desc_msg_kill_warning_flags_ToString(slurm_rest_api_v0_0_39_job_desc_msg_KILLWARNINGFLAGS_e kill_warning_flags);

slurm_rest_api_v0_0_39_job_desc_msg_KILLWARNINGFLAGS_e v0_0_39_job_desc_msg_kill_warning_flags_FromString(char* kill_warning_flags);

// Enum X11 for v0_0_39_job_desc_msg

typedef enum  { slurm_rest_api_v0_0_39_job_desc_msg_X11_NULL = 0, slurm_rest_api_v0_0_39_job_desc_msg_X11_FORWARD_ALL_NODES, slurm_rest_api_v0_0_39_job_desc_msg_X11_BATCH_NODE, slurm_rest_api_v0_0_39_job_desc_msg_X11_FIRST_NODE, slurm_rest_api_v0_0_39_job_desc_msg_X11_LAST_NODE } slurm_rest_api_v0_0_39_job_desc_msg_X11_e;

char* v0_0_39_job_desc_msg_x11_ToString(slurm_rest_api_v0_0_39_job_desc_msg_X11_e x11);

slurm_rest_api_v0_0_39_job_desc_msg_X11_e v0_0_39_job_desc_msg_x11_FromString(char* x11);



typedef struct v0_0_39_job_desc_msg_t {
    char *account; // string
    char *account_gather_frequency; // string
    char *admin_comment; // string
    char *allocation_node_list; // string
    int allocation_node_port; //numeric
    list_t *argv; //primitive container
    char *array; // string
    char *batch_features; // string
    long begin_time; //numeric
    list_t *flags; //primitive container
    char *burst_buffer; // string
    char *clusters; // string
    char *cluster_constraint; // string
    char *comment; // string
    int contiguous; //boolean
    char *container; // string
    char *container_id; // string
    int core_specification; //numeric
    int thread_specification; //numeric
    char *cpu_binding; // string
    list_t *cpu_binding_flags; //primitive container
    char *cpu_frequency; // string
    char *cpus_per_tres; // string
    struct v0_0_39_cron_entry_t *crontab; //model
    long deadline; //numeric
    int delay_boot; //numeric
    char *dependency; // string
    long end_time; //numeric
    list_t *environment; //primitive container
    list_t *excluded_nodes; //primitive container
    char *extra; // string
    char *constraints; // string
    char *group_id; // string
    int hetjob_group; //numeric
    int immediate; //boolean
    int job_id; //numeric
    int kill_on_node_fail; //boolean
    char *licenses; // string
    list_t *mail_type; //primitive container
    char *mail_user; // string
    char *mcs_label; // string
    char *memory_binding; // string
    list_t *memory_binding_type; //primitive container
    char *memory_per_tres; // string
    char *name; // string
    char *network; // string
    int nice; //numeric
    int tasks; //numeric
    list_t *open_mode; //primitive container
    int reserve_ports; //numeric
    int overcommit; //boolean
    char *partition; // string
    int distribution_plane_size; //numeric
    list_t *power_flags; //primitive container
    char *prefer; // string
    int priority; //numeric
    list_t *profile; //primitive container
    char *qos; // string
    int reboot; //boolean
    list_t *required_nodes; //primitive container
    int requeue; //boolean
    char *reservation; // string
    char *script; // string
    list_t *shared; //primitive container
    list_t *exclusive; //primitive container
    int site_factor; //numeric
    list_t *spank_environment; //primitive container
    char *distribution; // string
    struct v0_0_39_uint32_no_val_t *time_limit; //model
    struct v0_0_39_uint32_no_val_t *time_minimum; //model
    char *tres_bind; // string
    char *tres_freq; // string
    char *tres_per_job; // string
    char *tres_per_node; // string
    char *tres_per_socket; // string
    char *tres_per_task; // string
    char *user_id; // string
    int wait_all_nodes; //boolean
    list_t *kill_warning_flags; //primitive container
    char *kill_warning_signal; // string
    struct v0_0_39_uint16_no_val_t *kill_warning_delay; //model
    char *current_working_directory; // string
    int cpus_per_task; //numeric
    int minimum_cpus; //numeric
    int maximum_cpus; //numeric
    char *nodes; // string
    int minimum_nodes; //numeric
    int maximum_nodes; //numeric
    int minimum_boards_per_node; //numeric
    int minimum_sockets_per_board; //numeric
    int sockets_per_node; //numeric
    int threads_per_core; //numeric
    int tasks_per_node; //numeric
    int tasks_per_socket; //numeric
    int tasks_per_core; //numeric
    int tasks_per_board; //numeric
    int ntasks_per_tres; //numeric
    int minimum_cpus_per_node; //numeric
    struct v0_0_39_uint64_no_val_t *memory_per_cpu; //model
    struct v0_0_39_uint64_no_val_t *memory_per_node; //model
    int temporary_disk_per_node; //numeric
    char *selinux_context; // string
    struct v0_0_39_uint32_no_val_t *required_switches; //model
    char *standard_error; // string
    char *standard_input; // string
    char *standard_output; // string
    int wait_for_switch; //numeric
    char *wckey; // string
    list_t *x11; //primitive container
    char *x11_magic_cookie; // string
    char *x11_target_host; // string
    int x11_target_port; //numeric

} v0_0_39_job_desc_msg_t;

v0_0_39_job_desc_msg_t *v0_0_39_job_desc_msg_create(
    char *account,
    char *account_gather_frequency,
    char *admin_comment,
    char *allocation_node_list,
    int allocation_node_port,
    list_t *argv,
    char *array,
    char *batch_features,
    long begin_time,
    list_t *flags,
    char *burst_buffer,
    char *clusters,
    char *cluster_constraint,
    char *comment,
    int contiguous,
    char *container,
    char *container_id,
    int core_specification,
    int thread_specification,
    char *cpu_binding,
    list_t *cpu_binding_flags,
    char *cpu_frequency,
    char *cpus_per_tres,
    v0_0_39_cron_entry_t *crontab,
    long deadline,
    int delay_boot,
    char *dependency,
    long end_time,
    list_t *environment,
    list_t *excluded_nodes,
    char *extra,
    char *constraints,
    char *group_id,
    int hetjob_group,
    int immediate,
    int job_id,
    int kill_on_node_fail,
    char *licenses,
    list_t *mail_type,
    char *mail_user,
    char *mcs_label,
    char *memory_binding,
    list_t *memory_binding_type,
    char *memory_per_tres,
    char *name,
    char *network,
    int nice,
    int tasks,
    list_t *open_mode,
    int reserve_ports,
    int overcommit,
    char *partition,
    int distribution_plane_size,
    list_t *power_flags,
    char *prefer,
    int priority,
    list_t *profile,
    char *qos,
    int reboot,
    list_t *required_nodes,
    int requeue,
    char *reservation,
    char *script,
    list_t *shared,
    list_t *exclusive,
    int site_factor,
    list_t *spank_environment,
    char *distribution,
    v0_0_39_uint32_no_val_t *time_limit,
    v0_0_39_uint32_no_val_t *time_minimum,
    char *tres_bind,
    char *tres_freq,
    char *tres_per_job,
    char *tres_per_node,
    char *tres_per_socket,
    char *tres_per_task,
    char *user_id,
    int wait_all_nodes,
    list_t *kill_warning_flags,
    char *kill_warning_signal,
    v0_0_39_uint16_no_val_t *kill_warning_delay,
    char *current_working_directory,
    int cpus_per_task,
    int minimum_cpus,
    int maximum_cpus,
    char *nodes,
    int minimum_nodes,
    int maximum_nodes,
    int minimum_boards_per_node,
    int minimum_sockets_per_board,
    int sockets_per_node,
    int threads_per_core,
    int tasks_per_node,
    int tasks_per_socket,
    int tasks_per_core,
    int tasks_per_board,
    int ntasks_per_tres,
    int minimum_cpus_per_node,
    v0_0_39_uint64_no_val_t *memory_per_cpu,
    v0_0_39_uint64_no_val_t *memory_per_node,
    int temporary_disk_per_node,
    char *selinux_context,
    v0_0_39_uint32_no_val_t *required_switches,
    char *standard_error,
    char *standard_input,
    char *standard_output,
    int wait_for_switch,
    char *wckey,
    list_t *x11,
    char *x11_magic_cookie,
    char *x11_target_host,
    int x11_target_port
);

void v0_0_39_job_desc_msg_free(v0_0_39_job_desc_msg_t *v0_0_39_job_desc_msg);

v0_0_39_job_desc_msg_t *v0_0_39_job_desc_msg_parseFromJSON(cJSON *v0_0_39_job_desc_msgJSON);

cJSON *v0_0_39_job_desc_msg_convertToJSON(v0_0_39_job_desc_msg_t *v0_0_39_job_desc_msg);

#endif /* _v0_0_39_job_desc_msg_H_ */

