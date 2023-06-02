#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_job_desc_msg.h"


char* flagsv0_0_39_job_desc_msg_ToString(slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_e flags) {
	char *flagsArray[] =  { "NULL", "KILL_INVALID_DEPENDENCY", "NO_KILL_INVALID_DEPENDENCY", "HAS_STATE_DIRECTORY", "TESTING_BACKFILL", "GRES_BINDING_ENFORCED", "TEST_NOW_ONLY", "SEND_JOB_ENVIRONMENT", "SPREAD_JOB", "PREFER_MINIMUM_NODE_COUNT", "JOB_KILL_HURRY", "SKIP_TRES_STRING_ACCOUNTING", "SIBLING_CLUSTER_UPDATE_ONLY", "HETEROGENEOUS_JOB", "EXACT_TASK_COUNT_REQUESTED", "EXACT_CPU_COUNT_REQUESTED", "TESTING_WHOLE_NODE_BACKFILL", "TOP_PRIORITY_JOB", "ACCRUE_COUNT_CLEARED", "GRED_BINDING_DISABLED", "JOB_WAS_RUNNING", "JOB_ACCRUE_TIME_RESET", "CRON_JOB", "EXACT_MEMORY_REQUESTED", "JOB_RESIZED", "USING_DEFAULT_ACCOUNT", "USING_DEFAULT_PARTITION", "USING_DEFAULT_QOS", "USING_DEFAULT_WCKEY", "DEPENDENT", "MAGNETIC", "PARTITION_ASSIGNED", "BACKFILL_ATTEMPTED", "SCHEDULING_ATTEMPTED", "SAVE_BATCH_SCRIPT" };
	return flagsArray[flags - 1];
}

slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_e flagsv0_0_39_job_desc_msg_FromString(char* flags) {
    int stringToReturn = 0;
    char *flagsArray[] =  { "NULL", "KILL_INVALID_DEPENDENCY", "NO_KILL_INVALID_DEPENDENCY", "HAS_STATE_DIRECTORY", "TESTING_BACKFILL", "GRES_BINDING_ENFORCED", "TEST_NOW_ONLY", "SEND_JOB_ENVIRONMENT", "SPREAD_JOB", "PREFER_MINIMUM_NODE_COUNT", "JOB_KILL_HURRY", "SKIP_TRES_STRING_ACCOUNTING", "SIBLING_CLUSTER_UPDATE_ONLY", "HETEROGENEOUS_JOB", "EXACT_TASK_COUNT_REQUESTED", "EXACT_CPU_COUNT_REQUESTED", "TESTING_WHOLE_NODE_BACKFILL", "TOP_PRIORITY_JOB", "ACCRUE_COUNT_CLEARED", "GRED_BINDING_DISABLED", "JOB_WAS_RUNNING", "JOB_ACCRUE_TIME_RESET", "CRON_JOB", "EXACT_MEMORY_REQUESTED", "JOB_RESIZED", "USING_DEFAULT_ACCOUNT", "USING_DEFAULT_PARTITION", "USING_DEFAULT_QOS", "USING_DEFAULT_WCKEY", "DEPENDENT", "MAGNETIC", "PARTITION_ASSIGNED", "BACKFILL_ATTEMPTED", "SCHEDULING_ATTEMPTED", "SAVE_BATCH_SCRIPT" };
    size_t sizeofArray = sizeof(flagsArray) / sizeof(flagsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(flags, flagsArray[stringToReturn]) == 0) {
            return stringToReturn + 1;
        }
        stringToReturn++;
    }
    return 0;
}
char* cpu_binding_flagsv0_0_39_job_desc_msg_ToString(slurm_rest_api_v0_0_39_job_desc_msg_CPUBINDINGFLAGS_e cpu_binding_flags) {
	char *cpu_binding_flagsArray[] =  { "NULL", "VERBOSE", "CPU_BIND_TO_THREADS", "CPU_BIND_TO_CORES", "CPU_BIND_TO_SOCKETS", "CPU_BIND_TO_LDOMS", "CPU_BIND_NONE", "CPU_BIND_RANK", "CPU_BIND_MAP", "CPU_BIND_MASK", "CPU_BIND_LDRANK", "CPU_BIND_LDMAP", "CPU_BIND_LDMASK", "CPU_BIND_ONE_THREAD_PER_CORE", "CPU_AUTO_BIND_TO_THREADS", "CPU_AUTO_BIND_TO_CORES", "CPU_AUTO_BIND_TO_SOCKETS", "SLURMD_OFF_SPEC", "CPU_BIND_OFF" };
	return cpu_binding_flagsArray[cpu_binding_flags - 1];
}

slurm_rest_api_v0_0_39_job_desc_msg_CPUBINDINGFLAGS_e cpu_binding_flagsv0_0_39_job_desc_msg_FromString(char* cpu_binding_flags) {
    int stringToReturn = 0;
    char *cpu_binding_flagsArray[] =  { "NULL", "VERBOSE", "CPU_BIND_TO_THREADS", "CPU_BIND_TO_CORES", "CPU_BIND_TO_SOCKETS", "CPU_BIND_TO_LDOMS", "CPU_BIND_NONE", "CPU_BIND_RANK", "CPU_BIND_MAP", "CPU_BIND_MASK", "CPU_BIND_LDRANK", "CPU_BIND_LDMAP", "CPU_BIND_LDMASK", "CPU_BIND_ONE_THREAD_PER_CORE", "CPU_AUTO_BIND_TO_THREADS", "CPU_AUTO_BIND_TO_CORES", "CPU_AUTO_BIND_TO_SOCKETS", "SLURMD_OFF_SPEC", "CPU_BIND_OFF" };
    size_t sizeofArray = sizeof(cpu_binding_flagsArray) / sizeof(cpu_binding_flagsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(cpu_binding_flags, cpu_binding_flagsArray[stringToReturn]) == 0) {
            return stringToReturn + 1;
        }
        stringToReturn++;
    }
    return 0;
}
char* mail_typev0_0_39_job_desc_msg_ToString(slurm_rest_api_v0_0_39_job_desc_msg_MAILTYPE_e mail_type) {
	char *mail_typeArray[] =  { "NULL", "BEGIN", "END", "FAIL", "REQUEUE", "TIME&#x3D;100%", "TIME&#x3D;90%", "TIME&#x3D;80%", "TIME&#x3D;50%", "STAGE_OUT", "ARRAY_TASKS", "INVALID_DEPENDENCY" };
	return mail_typeArray[mail_type - 1];
}

slurm_rest_api_v0_0_39_job_desc_msg_MAILTYPE_e mail_typev0_0_39_job_desc_msg_FromString(char* mail_type) {
    int stringToReturn = 0;
    char *mail_typeArray[] =  { "NULL", "BEGIN", "END", "FAIL", "REQUEUE", "TIME&#x3D;100%", "TIME&#x3D;90%", "TIME&#x3D;80%", "TIME&#x3D;50%", "STAGE_OUT", "ARRAY_TASKS", "INVALID_DEPENDENCY" };
    size_t sizeofArray = sizeof(mail_typeArray) / sizeof(mail_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(mail_type, mail_typeArray[stringToReturn]) == 0) {
            return stringToReturn + 1;
        }
        stringToReturn++;
    }
    return 0;
}
char* memory_binding_typev0_0_39_job_desc_msg_ToString(slurm_rest_api_v0_0_39_job_desc_msg_MEMORYBINDINGTYPE_e memory_binding_type) {
	char *memory_binding_typeArray[] =  { "NULL", "VERBOSE", "NONE", "RANK", "MAP", "MASK", "LOCAL", "SORT", "PREFER" };
	return memory_binding_typeArray[memory_binding_type - 1];
}

slurm_rest_api_v0_0_39_job_desc_msg_MEMORYBINDINGTYPE_e memory_binding_typev0_0_39_job_desc_msg_FromString(char* memory_binding_type) {
    int stringToReturn = 0;
    char *memory_binding_typeArray[] =  { "NULL", "VERBOSE", "NONE", "RANK", "MAP", "MASK", "LOCAL", "SORT", "PREFER" };
    size_t sizeofArray = sizeof(memory_binding_typeArray) / sizeof(memory_binding_typeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(memory_binding_type, memory_binding_typeArray[stringToReturn]) == 0) {
            return stringToReturn + 1;
        }
        stringToReturn++;
    }
    return 0;
}
char* open_modev0_0_39_job_desc_msg_ToString(slurm_rest_api_v0_0_39_job_desc_msg_OPENMODE_e open_mode) {
	char *open_modeArray[] =  { "NULL", "APPEND", "TRUNCATE" };
	return open_modeArray[open_mode - 1];
}

slurm_rest_api_v0_0_39_job_desc_msg_OPENMODE_e open_modev0_0_39_job_desc_msg_FromString(char* open_mode) {
    int stringToReturn = 0;
    char *open_modeArray[] =  { "NULL", "APPEND", "TRUNCATE" };
    size_t sizeofArray = sizeof(open_modeArray) / sizeof(open_modeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(open_mode, open_modeArray[stringToReturn]) == 0) {
            return stringToReturn + 1;
        }
        stringToReturn++;
    }
    return 0;
}
char* power_flagsv0_0_39_job_desc_msg_ToString(slurm_rest_api_v0_0_39_job_desc_msg_POWERFLAGS_e power_flags) {
	char *power_flagsArray[] =  { "NULL", "EQUAL_POWER" };
	return power_flagsArray[power_flags - 1];
}

slurm_rest_api_v0_0_39_job_desc_msg_POWERFLAGS_e power_flagsv0_0_39_job_desc_msg_FromString(char* power_flags) {
    int stringToReturn = 0;
    char *power_flagsArray[] =  { "NULL", "EQUAL_POWER" };
    size_t sizeofArray = sizeof(power_flagsArray) / sizeof(power_flagsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(power_flags, power_flagsArray[stringToReturn]) == 0) {
            return stringToReturn + 1;
        }
        stringToReturn++;
    }
    return 0;
}
char* profilev0_0_39_job_desc_msg_ToString(slurm_rest_api_v0_0_39_job_desc_msg_PROFILE_e profile) {
	char *profileArray[] =  { "NULL", "NOT_SET", "NONE", "ENERGY", "LUSTRE", "NETWORK", "TASK" };
	return profileArray[profile - 1];
}

slurm_rest_api_v0_0_39_job_desc_msg_PROFILE_e profilev0_0_39_job_desc_msg_FromString(char* profile) {
    int stringToReturn = 0;
    char *profileArray[] =  { "NULL", "NOT_SET", "NONE", "ENERGY", "LUSTRE", "NETWORK", "TASK" };
    size_t sizeofArray = sizeof(profileArray) / sizeof(profileArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(profile, profileArray[stringToReturn]) == 0) {
            return stringToReturn + 1;
        }
        stringToReturn++;
    }
    return 0;
}
char* sharedv0_0_39_job_desc_msg_ToString(slurm_rest_api_v0_0_39_job_desc_msg_SHARED_e shared) {
	char *sharedArray[] =  { "NULL", "none", "oversubscribe", "user", "mcs" };
	return sharedArray[shared - 1];
}

slurm_rest_api_v0_0_39_job_desc_msg_SHARED_e sharedv0_0_39_job_desc_msg_FromString(char* shared) {
    int stringToReturn = 0;
    char *sharedArray[] =  { "NULL", "none", "oversubscribe", "user", "mcs" };
    size_t sizeofArray = sizeof(sharedArray) / sizeof(sharedArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(shared, sharedArray[stringToReturn]) == 0) {
            return stringToReturn + 1;
        }
        stringToReturn++;
    }
    return 0;
}
char* exclusivev0_0_39_job_desc_msg_ToString(slurm_rest_api_v0_0_39_job_desc_msg_EXCLUSIVE_e exclusive) {
	char *exclusiveArray[] =  { "NULL", "true", "false", "user", "mcs" };
	return exclusiveArray[exclusive - 1];
}

slurm_rest_api_v0_0_39_job_desc_msg_EXCLUSIVE_e exclusivev0_0_39_job_desc_msg_FromString(char* exclusive) {
    int stringToReturn = 0;
    char *exclusiveArray[] =  { "NULL", "true", "false", "user", "mcs" };
    size_t sizeofArray = sizeof(exclusiveArray) / sizeof(exclusiveArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(exclusive, exclusiveArray[stringToReturn]) == 0) {
            return stringToReturn + 1;
        }
        stringToReturn++;
    }
    return 0;
}
char* kill_warning_flagsv0_0_39_job_desc_msg_ToString(slurm_rest_api_v0_0_39_job_desc_msg_KILLWARNINGFLAGS_e kill_warning_flags) {
	char *kill_warning_flagsArray[] =  { "NULL", "BATCH_JOB", "ARRAY_JOB", "FULL_STEPS_ONLY", "FULL_JOB", "FEDERATION_REQUEUE", "HURRY", "OUT_OF_MEMORY", "NO_SIBLING_JOBS", "RESERVATION_JOB", "WARNING_SENT" };
	return kill_warning_flagsArray[kill_warning_flags - 1];
}

slurm_rest_api_v0_0_39_job_desc_msg_KILLWARNINGFLAGS_e kill_warning_flagsv0_0_39_job_desc_msg_FromString(char* kill_warning_flags) {
    int stringToReturn = 0;
    char *kill_warning_flagsArray[] =  { "NULL", "BATCH_JOB", "ARRAY_JOB", "FULL_STEPS_ONLY", "FULL_JOB", "FEDERATION_REQUEUE", "HURRY", "OUT_OF_MEMORY", "NO_SIBLING_JOBS", "RESERVATION_JOB", "WARNING_SENT" };
    size_t sizeofArray = sizeof(kill_warning_flagsArray) / sizeof(kill_warning_flagsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(kill_warning_flags, kill_warning_flagsArray[stringToReturn]) == 0) {
            return stringToReturn + 1;
        }
        stringToReturn++;
    }
    return 0;
}
char* x11v0_0_39_job_desc_msg_ToString(slurm_rest_api_v0_0_39_job_desc_msg_X11_e x11) {
	char *x11Array[] =  { "NULL", "FORWARD_ALL_NODES", "BATCH_NODE", "FIRST_NODE", "LAST_NODE" };
	return x11Array[x11 - 1];
}

slurm_rest_api_v0_0_39_job_desc_msg_X11_e x11v0_0_39_job_desc_msg_FromString(char* x11) {
    int stringToReturn = 0;
    char *x11Array[] =  { "NULL", "FORWARD_ALL_NODES", "BATCH_NODE", "FIRST_NODE", "LAST_NODE" };
    size_t sizeofArray = sizeof(x11Array) / sizeof(x11Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(x11, x11Array[stringToReturn]) == 0) {
            return stringToReturn + 1;
        }
        stringToReturn++;
    }
    return 0;
}

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
    ) {
    v0_0_39_job_desc_msg_t *v0_0_39_job_desc_msg_local_var = malloc(sizeof(v0_0_39_job_desc_msg_t));
    if (!v0_0_39_job_desc_msg_local_var) {
        return NULL;
    }
    v0_0_39_job_desc_msg_local_var->account = account;
    v0_0_39_job_desc_msg_local_var->account_gather_frequency = account_gather_frequency;
    v0_0_39_job_desc_msg_local_var->admin_comment = admin_comment;
    v0_0_39_job_desc_msg_local_var->allocation_node_list = allocation_node_list;
    v0_0_39_job_desc_msg_local_var->allocation_node_port = allocation_node_port;
    v0_0_39_job_desc_msg_local_var->argv = argv;
    v0_0_39_job_desc_msg_local_var->array = array;
    v0_0_39_job_desc_msg_local_var->batch_features = batch_features;
    v0_0_39_job_desc_msg_local_var->begin_time = begin_time;
    v0_0_39_job_desc_msg_local_var->flags = flags;
    v0_0_39_job_desc_msg_local_var->burst_buffer = burst_buffer;
    v0_0_39_job_desc_msg_local_var->clusters = clusters;
    v0_0_39_job_desc_msg_local_var->cluster_constraint = cluster_constraint;
    v0_0_39_job_desc_msg_local_var->comment = comment;
    v0_0_39_job_desc_msg_local_var->contiguous = contiguous;
    v0_0_39_job_desc_msg_local_var->container = container;
    v0_0_39_job_desc_msg_local_var->container_id = container_id;
    v0_0_39_job_desc_msg_local_var->core_specification = core_specification;
    v0_0_39_job_desc_msg_local_var->thread_specification = thread_specification;
    v0_0_39_job_desc_msg_local_var->cpu_binding = cpu_binding;
    v0_0_39_job_desc_msg_local_var->cpu_binding_flags = cpu_binding_flags;
    v0_0_39_job_desc_msg_local_var->cpu_frequency = cpu_frequency;
    v0_0_39_job_desc_msg_local_var->cpus_per_tres = cpus_per_tres;
    v0_0_39_job_desc_msg_local_var->crontab = crontab;
    v0_0_39_job_desc_msg_local_var->deadline = deadline;
    v0_0_39_job_desc_msg_local_var->delay_boot = delay_boot;
    v0_0_39_job_desc_msg_local_var->dependency = dependency;
    v0_0_39_job_desc_msg_local_var->end_time = end_time;
    v0_0_39_job_desc_msg_local_var->environment = environment;
    v0_0_39_job_desc_msg_local_var->excluded_nodes = excluded_nodes;
    v0_0_39_job_desc_msg_local_var->extra = extra;
    v0_0_39_job_desc_msg_local_var->constraints = constraints;
    v0_0_39_job_desc_msg_local_var->group_id = group_id;
    v0_0_39_job_desc_msg_local_var->hetjob_group = hetjob_group;
    v0_0_39_job_desc_msg_local_var->immediate = immediate;
    v0_0_39_job_desc_msg_local_var->job_id = job_id;
    v0_0_39_job_desc_msg_local_var->kill_on_node_fail = kill_on_node_fail;
    v0_0_39_job_desc_msg_local_var->licenses = licenses;
    v0_0_39_job_desc_msg_local_var->mail_type = mail_type;
    v0_0_39_job_desc_msg_local_var->mail_user = mail_user;
    v0_0_39_job_desc_msg_local_var->mcs_label = mcs_label;
    v0_0_39_job_desc_msg_local_var->memory_binding = memory_binding;
    v0_0_39_job_desc_msg_local_var->memory_binding_type = memory_binding_type;
    v0_0_39_job_desc_msg_local_var->memory_per_tres = memory_per_tres;
    v0_0_39_job_desc_msg_local_var->name = name;
    v0_0_39_job_desc_msg_local_var->network = network;
    v0_0_39_job_desc_msg_local_var->nice = nice;
    v0_0_39_job_desc_msg_local_var->tasks = tasks;
    v0_0_39_job_desc_msg_local_var->open_mode = open_mode;
    v0_0_39_job_desc_msg_local_var->reserve_ports = reserve_ports;
    v0_0_39_job_desc_msg_local_var->overcommit = overcommit;
    v0_0_39_job_desc_msg_local_var->partition = partition;
    v0_0_39_job_desc_msg_local_var->distribution_plane_size = distribution_plane_size;
    v0_0_39_job_desc_msg_local_var->power_flags = power_flags;
    v0_0_39_job_desc_msg_local_var->prefer = prefer;
    v0_0_39_job_desc_msg_local_var->priority = priority;
    v0_0_39_job_desc_msg_local_var->profile = profile;
    v0_0_39_job_desc_msg_local_var->qos = qos;
    v0_0_39_job_desc_msg_local_var->reboot = reboot;
    v0_0_39_job_desc_msg_local_var->required_nodes = required_nodes;
    v0_0_39_job_desc_msg_local_var->requeue = requeue;
    v0_0_39_job_desc_msg_local_var->reservation = reservation;
    v0_0_39_job_desc_msg_local_var->script = script;
    v0_0_39_job_desc_msg_local_var->shared = shared;
    v0_0_39_job_desc_msg_local_var->exclusive = exclusive;
    v0_0_39_job_desc_msg_local_var->site_factor = site_factor;
    v0_0_39_job_desc_msg_local_var->spank_environment = spank_environment;
    v0_0_39_job_desc_msg_local_var->distribution = distribution;
    v0_0_39_job_desc_msg_local_var->time_limit = time_limit;
    v0_0_39_job_desc_msg_local_var->time_minimum = time_minimum;
    v0_0_39_job_desc_msg_local_var->tres_bind = tres_bind;
    v0_0_39_job_desc_msg_local_var->tres_freq = tres_freq;
    v0_0_39_job_desc_msg_local_var->tres_per_job = tres_per_job;
    v0_0_39_job_desc_msg_local_var->tres_per_node = tres_per_node;
    v0_0_39_job_desc_msg_local_var->tres_per_socket = tres_per_socket;
    v0_0_39_job_desc_msg_local_var->tres_per_task = tres_per_task;
    v0_0_39_job_desc_msg_local_var->user_id = user_id;
    v0_0_39_job_desc_msg_local_var->wait_all_nodes = wait_all_nodes;
    v0_0_39_job_desc_msg_local_var->kill_warning_flags = kill_warning_flags;
    v0_0_39_job_desc_msg_local_var->kill_warning_signal = kill_warning_signal;
    v0_0_39_job_desc_msg_local_var->kill_warning_delay = kill_warning_delay;
    v0_0_39_job_desc_msg_local_var->current_working_directory = current_working_directory;
    v0_0_39_job_desc_msg_local_var->cpus_per_task = cpus_per_task;
    v0_0_39_job_desc_msg_local_var->minimum_cpus = minimum_cpus;
    v0_0_39_job_desc_msg_local_var->maximum_cpus = maximum_cpus;
    v0_0_39_job_desc_msg_local_var->nodes = nodes;
    v0_0_39_job_desc_msg_local_var->minimum_nodes = minimum_nodes;
    v0_0_39_job_desc_msg_local_var->maximum_nodes = maximum_nodes;
    v0_0_39_job_desc_msg_local_var->minimum_boards_per_node = minimum_boards_per_node;
    v0_0_39_job_desc_msg_local_var->minimum_sockets_per_board = minimum_sockets_per_board;
    v0_0_39_job_desc_msg_local_var->sockets_per_node = sockets_per_node;
    v0_0_39_job_desc_msg_local_var->threads_per_core = threads_per_core;
    v0_0_39_job_desc_msg_local_var->tasks_per_node = tasks_per_node;
    v0_0_39_job_desc_msg_local_var->tasks_per_socket = tasks_per_socket;
    v0_0_39_job_desc_msg_local_var->tasks_per_core = tasks_per_core;
    v0_0_39_job_desc_msg_local_var->tasks_per_board = tasks_per_board;
    v0_0_39_job_desc_msg_local_var->ntasks_per_tres = ntasks_per_tres;
    v0_0_39_job_desc_msg_local_var->minimum_cpus_per_node = minimum_cpus_per_node;
    v0_0_39_job_desc_msg_local_var->memory_per_cpu = memory_per_cpu;
    v0_0_39_job_desc_msg_local_var->memory_per_node = memory_per_node;
    v0_0_39_job_desc_msg_local_var->temporary_disk_per_node = temporary_disk_per_node;
    v0_0_39_job_desc_msg_local_var->selinux_context = selinux_context;
    v0_0_39_job_desc_msg_local_var->required_switches = required_switches;
    v0_0_39_job_desc_msg_local_var->standard_error = standard_error;
    v0_0_39_job_desc_msg_local_var->standard_input = standard_input;
    v0_0_39_job_desc_msg_local_var->standard_output = standard_output;
    v0_0_39_job_desc_msg_local_var->wait_for_switch = wait_for_switch;
    v0_0_39_job_desc_msg_local_var->wckey = wckey;
    v0_0_39_job_desc_msg_local_var->x11 = x11;
    v0_0_39_job_desc_msg_local_var->x11_magic_cookie = x11_magic_cookie;
    v0_0_39_job_desc_msg_local_var->x11_target_host = x11_target_host;
    v0_0_39_job_desc_msg_local_var->x11_target_port = x11_target_port;

    return v0_0_39_job_desc_msg_local_var;
}


void v0_0_39_job_desc_msg_free(v0_0_39_job_desc_msg_t *v0_0_39_job_desc_msg) {
    if(NULL == v0_0_39_job_desc_msg){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_job_desc_msg->account) {
        free(v0_0_39_job_desc_msg->account);
        v0_0_39_job_desc_msg->account = NULL;
    }
    if (v0_0_39_job_desc_msg->account_gather_frequency) {
        free(v0_0_39_job_desc_msg->account_gather_frequency);
        v0_0_39_job_desc_msg->account_gather_frequency = NULL;
    }
    if (v0_0_39_job_desc_msg->admin_comment) {
        free(v0_0_39_job_desc_msg->admin_comment);
        v0_0_39_job_desc_msg->admin_comment = NULL;
    }
    if (v0_0_39_job_desc_msg->allocation_node_list) {
        free(v0_0_39_job_desc_msg->allocation_node_list);
        v0_0_39_job_desc_msg->allocation_node_list = NULL;
    }
    if (v0_0_39_job_desc_msg->argv) {
        list_ForEach(listEntry, v0_0_39_job_desc_msg->argv) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_job_desc_msg->argv);
        v0_0_39_job_desc_msg->argv = NULL;
    }
    if (v0_0_39_job_desc_msg->array) {
        free(v0_0_39_job_desc_msg->array);
        v0_0_39_job_desc_msg->array = NULL;
    }
    if (v0_0_39_job_desc_msg->batch_features) {
        free(v0_0_39_job_desc_msg->batch_features);
        v0_0_39_job_desc_msg->batch_features = NULL;
    }
    if (v0_0_39_job_desc_msg->flags) {
        list_ForEach(listEntry, v0_0_39_job_desc_msg->flags) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_job_desc_msg->flags);
        v0_0_39_job_desc_msg->flags = NULL;
    }
    if (v0_0_39_job_desc_msg->burst_buffer) {
        free(v0_0_39_job_desc_msg->burst_buffer);
        v0_0_39_job_desc_msg->burst_buffer = NULL;
    }
    if (v0_0_39_job_desc_msg->clusters) {
        free(v0_0_39_job_desc_msg->clusters);
        v0_0_39_job_desc_msg->clusters = NULL;
    }
    if (v0_0_39_job_desc_msg->cluster_constraint) {
        free(v0_0_39_job_desc_msg->cluster_constraint);
        v0_0_39_job_desc_msg->cluster_constraint = NULL;
    }
    if (v0_0_39_job_desc_msg->comment) {
        free(v0_0_39_job_desc_msg->comment);
        v0_0_39_job_desc_msg->comment = NULL;
    }
    if (v0_0_39_job_desc_msg->container) {
        free(v0_0_39_job_desc_msg->container);
        v0_0_39_job_desc_msg->container = NULL;
    }
    if (v0_0_39_job_desc_msg->container_id) {
        free(v0_0_39_job_desc_msg->container_id);
        v0_0_39_job_desc_msg->container_id = NULL;
    }
    if (v0_0_39_job_desc_msg->cpu_binding) {
        free(v0_0_39_job_desc_msg->cpu_binding);
        v0_0_39_job_desc_msg->cpu_binding = NULL;
    }
    if (v0_0_39_job_desc_msg->cpu_binding_flags) {
        list_ForEach(listEntry, v0_0_39_job_desc_msg->cpu_binding_flags) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_job_desc_msg->cpu_binding_flags);
        v0_0_39_job_desc_msg->cpu_binding_flags = NULL;
    }
    if (v0_0_39_job_desc_msg->cpu_frequency) {
        free(v0_0_39_job_desc_msg->cpu_frequency);
        v0_0_39_job_desc_msg->cpu_frequency = NULL;
    }
    if (v0_0_39_job_desc_msg->cpus_per_tres) {
        free(v0_0_39_job_desc_msg->cpus_per_tres);
        v0_0_39_job_desc_msg->cpus_per_tres = NULL;
    }
    if (v0_0_39_job_desc_msg->crontab) {
        v0_0_39_cron_entry_free(v0_0_39_job_desc_msg->crontab);
        v0_0_39_job_desc_msg->crontab = NULL;
    }
    if (v0_0_39_job_desc_msg->dependency) {
        free(v0_0_39_job_desc_msg->dependency);
        v0_0_39_job_desc_msg->dependency = NULL;
    }
    if (v0_0_39_job_desc_msg->environment) {
        list_ForEach(listEntry, v0_0_39_job_desc_msg->environment) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_job_desc_msg->environment);
        v0_0_39_job_desc_msg->environment = NULL;
    }
    if (v0_0_39_job_desc_msg->excluded_nodes) {
        list_ForEach(listEntry, v0_0_39_job_desc_msg->excluded_nodes) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_job_desc_msg->excluded_nodes);
        v0_0_39_job_desc_msg->excluded_nodes = NULL;
    }
    if (v0_0_39_job_desc_msg->extra) {
        free(v0_0_39_job_desc_msg->extra);
        v0_0_39_job_desc_msg->extra = NULL;
    }
    if (v0_0_39_job_desc_msg->constraints) {
        free(v0_0_39_job_desc_msg->constraints);
        v0_0_39_job_desc_msg->constraints = NULL;
    }
    if (v0_0_39_job_desc_msg->group_id) {
        free(v0_0_39_job_desc_msg->group_id);
        v0_0_39_job_desc_msg->group_id = NULL;
    }
    if (v0_0_39_job_desc_msg->licenses) {
        free(v0_0_39_job_desc_msg->licenses);
        v0_0_39_job_desc_msg->licenses = NULL;
    }
    if (v0_0_39_job_desc_msg->mail_type) {
        list_ForEach(listEntry, v0_0_39_job_desc_msg->mail_type) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_job_desc_msg->mail_type);
        v0_0_39_job_desc_msg->mail_type = NULL;
    }
    if (v0_0_39_job_desc_msg->mail_user) {
        free(v0_0_39_job_desc_msg->mail_user);
        v0_0_39_job_desc_msg->mail_user = NULL;
    }
    if (v0_0_39_job_desc_msg->mcs_label) {
        free(v0_0_39_job_desc_msg->mcs_label);
        v0_0_39_job_desc_msg->mcs_label = NULL;
    }
    if (v0_0_39_job_desc_msg->memory_binding) {
        free(v0_0_39_job_desc_msg->memory_binding);
        v0_0_39_job_desc_msg->memory_binding = NULL;
    }
    if (v0_0_39_job_desc_msg->memory_binding_type) {
        list_ForEach(listEntry, v0_0_39_job_desc_msg->memory_binding_type) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_job_desc_msg->memory_binding_type);
        v0_0_39_job_desc_msg->memory_binding_type = NULL;
    }
    if (v0_0_39_job_desc_msg->memory_per_tres) {
        free(v0_0_39_job_desc_msg->memory_per_tres);
        v0_0_39_job_desc_msg->memory_per_tres = NULL;
    }
    if (v0_0_39_job_desc_msg->name) {
        free(v0_0_39_job_desc_msg->name);
        v0_0_39_job_desc_msg->name = NULL;
    }
    if (v0_0_39_job_desc_msg->network) {
        free(v0_0_39_job_desc_msg->network);
        v0_0_39_job_desc_msg->network = NULL;
    }
    if (v0_0_39_job_desc_msg->open_mode) {
        list_ForEach(listEntry, v0_0_39_job_desc_msg->open_mode) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_job_desc_msg->open_mode);
        v0_0_39_job_desc_msg->open_mode = NULL;
    }
    if (v0_0_39_job_desc_msg->partition) {
        free(v0_0_39_job_desc_msg->partition);
        v0_0_39_job_desc_msg->partition = NULL;
    }
    if (v0_0_39_job_desc_msg->power_flags) {
        list_ForEach(listEntry, v0_0_39_job_desc_msg->power_flags) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_job_desc_msg->power_flags);
        v0_0_39_job_desc_msg->power_flags = NULL;
    }
    if (v0_0_39_job_desc_msg->prefer) {
        free(v0_0_39_job_desc_msg->prefer);
        v0_0_39_job_desc_msg->prefer = NULL;
    }
    if (v0_0_39_job_desc_msg->profile) {
        list_ForEach(listEntry, v0_0_39_job_desc_msg->profile) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_job_desc_msg->profile);
        v0_0_39_job_desc_msg->profile = NULL;
    }
    if (v0_0_39_job_desc_msg->qos) {
        free(v0_0_39_job_desc_msg->qos);
        v0_0_39_job_desc_msg->qos = NULL;
    }
    if (v0_0_39_job_desc_msg->required_nodes) {
        list_ForEach(listEntry, v0_0_39_job_desc_msg->required_nodes) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_job_desc_msg->required_nodes);
        v0_0_39_job_desc_msg->required_nodes = NULL;
    }
    if (v0_0_39_job_desc_msg->reservation) {
        free(v0_0_39_job_desc_msg->reservation);
        v0_0_39_job_desc_msg->reservation = NULL;
    }
    if (v0_0_39_job_desc_msg->script) {
        free(v0_0_39_job_desc_msg->script);
        v0_0_39_job_desc_msg->script = NULL;
    }
    if (v0_0_39_job_desc_msg->shared) {
        list_ForEach(listEntry, v0_0_39_job_desc_msg->shared) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_job_desc_msg->shared);
        v0_0_39_job_desc_msg->shared = NULL;
    }
    if (v0_0_39_job_desc_msg->exclusive) {
        list_ForEach(listEntry, v0_0_39_job_desc_msg->exclusive) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_job_desc_msg->exclusive);
        v0_0_39_job_desc_msg->exclusive = NULL;
    }
    if (v0_0_39_job_desc_msg->spank_environment) {
        list_ForEach(listEntry, v0_0_39_job_desc_msg->spank_environment) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_job_desc_msg->spank_environment);
        v0_0_39_job_desc_msg->spank_environment = NULL;
    }
    if (v0_0_39_job_desc_msg->distribution) {
        free(v0_0_39_job_desc_msg->distribution);
        v0_0_39_job_desc_msg->distribution = NULL;
    }
    if (v0_0_39_job_desc_msg->time_limit) {
        v0_0_39_uint32_no_val_free(v0_0_39_job_desc_msg->time_limit);
        v0_0_39_job_desc_msg->time_limit = NULL;
    }
    if (v0_0_39_job_desc_msg->time_minimum) {
        v0_0_39_uint32_no_val_free(v0_0_39_job_desc_msg->time_minimum);
        v0_0_39_job_desc_msg->time_minimum = NULL;
    }
    if (v0_0_39_job_desc_msg->tres_bind) {
        free(v0_0_39_job_desc_msg->tres_bind);
        v0_0_39_job_desc_msg->tres_bind = NULL;
    }
    if (v0_0_39_job_desc_msg->tres_freq) {
        free(v0_0_39_job_desc_msg->tres_freq);
        v0_0_39_job_desc_msg->tres_freq = NULL;
    }
    if (v0_0_39_job_desc_msg->tres_per_job) {
        free(v0_0_39_job_desc_msg->tres_per_job);
        v0_0_39_job_desc_msg->tres_per_job = NULL;
    }
    if (v0_0_39_job_desc_msg->tres_per_node) {
        free(v0_0_39_job_desc_msg->tres_per_node);
        v0_0_39_job_desc_msg->tres_per_node = NULL;
    }
    if (v0_0_39_job_desc_msg->tres_per_socket) {
        free(v0_0_39_job_desc_msg->tres_per_socket);
        v0_0_39_job_desc_msg->tres_per_socket = NULL;
    }
    if (v0_0_39_job_desc_msg->tres_per_task) {
        free(v0_0_39_job_desc_msg->tres_per_task);
        v0_0_39_job_desc_msg->tres_per_task = NULL;
    }
    if (v0_0_39_job_desc_msg->user_id) {
        free(v0_0_39_job_desc_msg->user_id);
        v0_0_39_job_desc_msg->user_id = NULL;
    }
    if (v0_0_39_job_desc_msg->kill_warning_flags) {
        list_ForEach(listEntry, v0_0_39_job_desc_msg->kill_warning_flags) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_job_desc_msg->kill_warning_flags);
        v0_0_39_job_desc_msg->kill_warning_flags = NULL;
    }
    if (v0_0_39_job_desc_msg->kill_warning_signal) {
        free(v0_0_39_job_desc_msg->kill_warning_signal);
        v0_0_39_job_desc_msg->kill_warning_signal = NULL;
    }
    if (v0_0_39_job_desc_msg->kill_warning_delay) {
        v0_0_39_uint16_no_val_free(v0_0_39_job_desc_msg->kill_warning_delay);
        v0_0_39_job_desc_msg->kill_warning_delay = NULL;
    }
    if (v0_0_39_job_desc_msg->current_working_directory) {
        free(v0_0_39_job_desc_msg->current_working_directory);
        v0_0_39_job_desc_msg->current_working_directory = NULL;
    }
    if (v0_0_39_job_desc_msg->nodes) {
        free(v0_0_39_job_desc_msg->nodes);
        v0_0_39_job_desc_msg->nodes = NULL;
    }
    if (v0_0_39_job_desc_msg->memory_per_cpu) {
        v0_0_39_uint64_no_val_free(v0_0_39_job_desc_msg->memory_per_cpu);
        v0_0_39_job_desc_msg->memory_per_cpu = NULL;
    }
    if (v0_0_39_job_desc_msg->memory_per_node) {
        v0_0_39_uint64_no_val_free(v0_0_39_job_desc_msg->memory_per_node);
        v0_0_39_job_desc_msg->memory_per_node = NULL;
    }
    if (v0_0_39_job_desc_msg->selinux_context) {
        free(v0_0_39_job_desc_msg->selinux_context);
        v0_0_39_job_desc_msg->selinux_context = NULL;
    }
    if (v0_0_39_job_desc_msg->required_switches) {
        v0_0_39_uint32_no_val_free(v0_0_39_job_desc_msg->required_switches);
        v0_0_39_job_desc_msg->required_switches = NULL;
    }
    if (v0_0_39_job_desc_msg->standard_error) {
        free(v0_0_39_job_desc_msg->standard_error);
        v0_0_39_job_desc_msg->standard_error = NULL;
    }
    if (v0_0_39_job_desc_msg->standard_input) {
        free(v0_0_39_job_desc_msg->standard_input);
        v0_0_39_job_desc_msg->standard_input = NULL;
    }
    if (v0_0_39_job_desc_msg->standard_output) {
        free(v0_0_39_job_desc_msg->standard_output);
        v0_0_39_job_desc_msg->standard_output = NULL;
    }
    if (v0_0_39_job_desc_msg->wckey) {
        free(v0_0_39_job_desc_msg->wckey);
        v0_0_39_job_desc_msg->wckey = NULL;
    }
    if (v0_0_39_job_desc_msg->x11) {
        list_ForEach(listEntry, v0_0_39_job_desc_msg->x11) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_job_desc_msg->x11);
        v0_0_39_job_desc_msg->x11 = NULL;
    }
    if (v0_0_39_job_desc_msg->x11_magic_cookie) {
        free(v0_0_39_job_desc_msg->x11_magic_cookie);
        v0_0_39_job_desc_msg->x11_magic_cookie = NULL;
    }
    if (v0_0_39_job_desc_msg->x11_target_host) {
        free(v0_0_39_job_desc_msg->x11_target_host);
        v0_0_39_job_desc_msg->x11_target_host = NULL;
    }
    free(v0_0_39_job_desc_msg);
}

cJSON *v0_0_39_job_desc_msg_convertToJSON(v0_0_39_job_desc_msg_t *v0_0_39_job_desc_msg) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_job_desc_msg->account
    if(v0_0_39_job_desc_msg->account) {
    if(cJSON_AddStringToObject(item, "account", v0_0_39_job_desc_msg->account) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->account_gather_frequency
    if(v0_0_39_job_desc_msg->account_gather_frequency) {
    if(cJSON_AddStringToObject(item, "account_gather_frequency", v0_0_39_job_desc_msg->account_gather_frequency) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->admin_comment
    if(v0_0_39_job_desc_msg->admin_comment) {
    if(cJSON_AddStringToObject(item, "admin_comment", v0_0_39_job_desc_msg->admin_comment) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->allocation_node_list
    if(v0_0_39_job_desc_msg->allocation_node_list) {
    if(cJSON_AddStringToObject(item, "allocation_node_list", v0_0_39_job_desc_msg->allocation_node_list) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->allocation_node_port
    if(v0_0_39_job_desc_msg->allocation_node_port) {
    if(cJSON_AddNumberToObject(item, "allocation_node_port", v0_0_39_job_desc_msg->allocation_node_port) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_desc_msg->argv
    if(v0_0_39_job_desc_msg->argv) {
    cJSON *argv = cJSON_AddArrayToObject(item, "argv");
    if(argv == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *argvListEntry;
    list_ForEach(argvListEntry, v0_0_39_job_desc_msg->argv) {
    if(cJSON_AddStringToObject(argv, "", (char*)argvListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_job_desc_msg->array
    if(v0_0_39_job_desc_msg->array) {
    if(cJSON_AddStringToObject(item, "array", v0_0_39_job_desc_msg->array) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->batch_features
    if(v0_0_39_job_desc_msg->batch_features) {
    if(cJSON_AddStringToObject(item, "batch_features", v0_0_39_job_desc_msg->batch_features) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->begin_time
    if(v0_0_39_job_desc_msg->begin_time) {
    if(cJSON_AddNumberToObject(item, "begin_time", v0_0_39_job_desc_msg->begin_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_desc_msg->flags
    if(v0_0_39_job_desc_msg->flags != slurm_rest_api_v0_0_39_job_desc_msg_FLAGS_NULL) {
    cJSON *flags = cJSON_AddArrayToObject(item, "flags");
    if(flags == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *flagsListEntry;
    list_ForEach(flagsListEntry, v0_0_39_job_desc_msg->flags) {
    if(cJSON_AddStringToObject(flags, "", (char*)flagsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_job_desc_msg->burst_buffer
    if(v0_0_39_job_desc_msg->burst_buffer) {
    if(cJSON_AddStringToObject(item, "burst_buffer", v0_0_39_job_desc_msg->burst_buffer) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->clusters
    if(v0_0_39_job_desc_msg->clusters) {
    if(cJSON_AddStringToObject(item, "clusters", v0_0_39_job_desc_msg->clusters) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->cluster_constraint
    if(v0_0_39_job_desc_msg->cluster_constraint) {
    if(cJSON_AddStringToObject(item, "cluster_constraint", v0_0_39_job_desc_msg->cluster_constraint) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->comment
    if(v0_0_39_job_desc_msg->comment) {
    if(cJSON_AddStringToObject(item, "comment", v0_0_39_job_desc_msg->comment) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->contiguous
    if(v0_0_39_job_desc_msg->contiguous) {
    if(cJSON_AddBoolToObject(item, "contiguous", v0_0_39_job_desc_msg->contiguous) == NULL) {
    goto fail; //Bool
    }
    }


    // v0_0_39_job_desc_msg->container
    if(v0_0_39_job_desc_msg->container) {
    if(cJSON_AddStringToObject(item, "container", v0_0_39_job_desc_msg->container) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->container_id
    if(v0_0_39_job_desc_msg->container_id) {
    if(cJSON_AddStringToObject(item, "container_id", v0_0_39_job_desc_msg->container_id) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->core_specification
    if(v0_0_39_job_desc_msg->core_specification) {
    if(cJSON_AddNumberToObject(item, "core_specification", v0_0_39_job_desc_msg->core_specification) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_desc_msg->thread_specification
    if(v0_0_39_job_desc_msg->thread_specification) {
    if(cJSON_AddNumberToObject(item, "thread_specification", v0_0_39_job_desc_msg->thread_specification) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_desc_msg->cpu_binding
    if(v0_0_39_job_desc_msg->cpu_binding) {
    if(cJSON_AddStringToObject(item, "cpu_binding", v0_0_39_job_desc_msg->cpu_binding) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->cpu_binding_flags
    if(v0_0_39_job_desc_msg->cpu_binding_flags != slurm_rest_api_v0_0_39_job_desc_msg_CPUBINDINGFLAGS_NULL) {
    cJSON *cpu_binding_flags = cJSON_AddArrayToObject(item, "cpu_binding_flags");
    if(cpu_binding_flags == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *cpu_binding_flagsListEntry;
    list_ForEach(cpu_binding_flagsListEntry, v0_0_39_job_desc_msg->cpu_binding_flags) {
    if(cJSON_AddStringToObject(cpu_binding_flags, "", (char*)cpu_binding_flagsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_job_desc_msg->cpu_frequency
    if(v0_0_39_job_desc_msg->cpu_frequency) {
    if(cJSON_AddStringToObject(item, "cpu_frequency", v0_0_39_job_desc_msg->cpu_frequency) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->cpus_per_tres
    if(v0_0_39_job_desc_msg->cpus_per_tres) {
    if(cJSON_AddStringToObject(item, "cpus_per_tres", v0_0_39_job_desc_msg->cpus_per_tres) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->crontab
    if(v0_0_39_job_desc_msg->crontab) {
    cJSON *crontab_local_JSON = v0_0_39_cron_entry_convertToJSON(v0_0_39_job_desc_msg->crontab);
    if(crontab_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "crontab", crontab_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_desc_msg->deadline
    if(v0_0_39_job_desc_msg->deadline) {
    if(cJSON_AddNumberToObject(item, "deadline", v0_0_39_job_desc_msg->deadline) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_desc_msg->delay_boot
    if(v0_0_39_job_desc_msg->delay_boot) {
    if(cJSON_AddNumberToObject(item, "delay_boot", v0_0_39_job_desc_msg->delay_boot) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_desc_msg->dependency
    if(v0_0_39_job_desc_msg->dependency) {
    if(cJSON_AddStringToObject(item, "dependency", v0_0_39_job_desc_msg->dependency) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->end_time
    if(v0_0_39_job_desc_msg->end_time) {
    if(cJSON_AddNumberToObject(item, "end_time", v0_0_39_job_desc_msg->end_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_desc_msg->environment
    if(v0_0_39_job_desc_msg->environment) {
    cJSON *environment = cJSON_AddArrayToObject(item, "environment");
    if(environment == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *environmentListEntry;
    list_ForEach(environmentListEntry, v0_0_39_job_desc_msg->environment) {
    if(cJSON_AddStringToObject(environment, "", (char*)environmentListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_job_desc_msg->excluded_nodes
    if(v0_0_39_job_desc_msg->excluded_nodes) {
    cJSON *excluded_nodes = cJSON_AddArrayToObject(item, "excluded_nodes");
    if(excluded_nodes == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *excluded_nodesListEntry;
    list_ForEach(excluded_nodesListEntry, v0_0_39_job_desc_msg->excluded_nodes) {
    if(cJSON_AddStringToObject(excluded_nodes, "", (char*)excluded_nodesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_job_desc_msg->extra
    if(v0_0_39_job_desc_msg->extra) {
    if(cJSON_AddStringToObject(item, "extra", v0_0_39_job_desc_msg->extra) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->constraints
    if(v0_0_39_job_desc_msg->constraints) {
    if(cJSON_AddStringToObject(item, "constraints", v0_0_39_job_desc_msg->constraints) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->group_id
    if(v0_0_39_job_desc_msg->group_id) {
    if(cJSON_AddStringToObject(item, "group_id", v0_0_39_job_desc_msg->group_id) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->hetjob_group
    if(v0_0_39_job_desc_msg->hetjob_group) {
    if(cJSON_AddNumberToObject(item, "hetjob_group", v0_0_39_job_desc_msg->hetjob_group) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_desc_msg->immediate
    if(v0_0_39_job_desc_msg->immediate) {
    if(cJSON_AddBoolToObject(item, "immediate", v0_0_39_job_desc_msg->immediate) == NULL) {
    goto fail; //Bool
    }
    }


    // v0_0_39_job_desc_msg->job_id
    if(v0_0_39_job_desc_msg->job_id) {
    if(cJSON_AddNumberToObject(item, "job_id", v0_0_39_job_desc_msg->job_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_desc_msg->kill_on_node_fail
    if(v0_0_39_job_desc_msg->kill_on_node_fail) {
    if(cJSON_AddBoolToObject(item, "kill_on_node_fail", v0_0_39_job_desc_msg->kill_on_node_fail) == NULL) {
    goto fail; //Bool
    }
    }


    // v0_0_39_job_desc_msg->licenses
    if(v0_0_39_job_desc_msg->licenses) {
    if(cJSON_AddStringToObject(item, "licenses", v0_0_39_job_desc_msg->licenses) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->mail_type
    if(v0_0_39_job_desc_msg->mail_type != slurm_rest_api_v0_0_39_job_desc_msg_MAILTYPE_NULL) {
    cJSON *mail_type = cJSON_AddArrayToObject(item, "mail_type");
    if(mail_type == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *mail_typeListEntry;
    list_ForEach(mail_typeListEntry, v0_0_39_job_desc_msg->mail_type) {
    if(cJSON_AddStringToObject(mail_type, "", (char*)mail_typeListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_job_desc_msg->mail_user
    if(v0_0_39_job_desc_msg->mail_user) {
    if(cJSON_AddStringToObject(item, "mail_user", v0_0_39_job_desc_msg->mail_user) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->mcs_label
    if(v0_0_39_job_desc_msg->mcs_label) {
    if(cJSON_AddStringToObject(item, "mcs_label", v0_0_39_job_desc_msg->mcs_label) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->memory_binding
    if(v0_0_39_job_desc_msg->memory_binding) {
    if(cJSON_AddStringToObject(item, "memory_binding", v0_0_39_job_desc_msg->memory_binding) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->memory_binding_type
    if(v0_0_39_job_desc_msg->memory_binding_type != slurm_rest_api_v0_0_39_job_desc_msg_MEMORYBINDINGTYPE_NULL) {
    cJSON *memory_binding_type = cJSON_AddArrayToObject(item, "memory_binding_type");
    if(memory_binding_type == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *memory_binding_typeListEntry;
    list_ForEach(memory_binding_typeListEntry, v0_0_39_job_desc_msg->memory_binding_type) {
    if(cJSON_AddStringToObject(memory_binding_type, "", (char*)memory_binding_typeListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_job_desc_msg->memory_per_tres
    if(v0_0_39_job_desc_msg->memory_per_tres) {
    if(cJSON_AddStringToObject(item, "memory_per_tres", v0_0_39_job_desc_msg->memory_per_tres) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->name
    if(v0_0_39_job_desc_msg->name) {
    if(cJSON_AddStringToObject(item, "name", v0_0_39_job_desc_msg->name) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->network
    if(v0_0_39_job_desc_msg->network) {
    if(cJSON_AddStringToObject(item, "network", v0_0_39_job_desc_msg->network) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->nice
    if(v0_0_39_job_desc_msg->nice) {
    if(cJSON_AddNumberToObject(item, "nice", v0_0_39_job_desc_msg->nice) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_desc_msg->tasks
    if(v0_0_39_job_desc_msg->tasks) {
    if(cJSON_AddNumberToObject(item, "tasks", v0_0_39_job_desc_msg->tasks) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_desc_msg->open_mode
    if(v0_0_39_job_desc_msg->open_mode != slurm_rest_api_v0_0_39_job_desc_msg_OPENMODE_NULL) {
    cJSON *open_mode = cJSON_AddArrayToObject(item, "open_mode");
    if(open_mode == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *open_modeListEntry;
    list_ForEach(open_modeListEntry, v0_0_39_job_desc_msg->open_mode) {
    if(cJSON_AddStringToObject(open_mode, "", (char*)open_modeListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_job_desc_msg->reserve_ports
    if(v0_0_39_job_desc_msg->reserve_ports) {
    if(cJSON_AddNumberToObject(item, "reserve_ports", v0_0_39_job_desc_msg->reserve_ports) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_desc_msg->overcommit
    if(v0_0_39_job_desc_msg->overcommit) {
    if(cJSON_AddBoolToObject(item, "overcommit", v0_0_39_job_desc_msg->overcommit) == NULL) {
    goto fail; //Bool
    }
    }


    // v0_0_39_job_desc_msg->partition
    if(v0_0_39_job_desc_msg->partition) {
    if(cJSON_AddStringToObject(item, "partition", v0_0_39_job_desc_msg->partition) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->distribution_plane_size
    if(v0_0_39_job_desc_msg->distribution_plane_size) {
    if(cJSON_AddNumberToObject(item, "distribution_plane_size", v0_0_39_job_desc_msg->distribution_plane_size) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_desc_msg->power_flags
    if(v0_0_39_job_desc_msg->power_flags != slurm_rest_api_v0_0_39_job_desc_msg_POWERFLAGS_NULL) {
    cJSON *power_flags = cJSON_AddArrayToObject(item, "power_flags");
    if(power_flags == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *power_flagsListEntry;
    list_ForEach(power_flagsListEntry, v0_0_39_job_desc_msg->power_flags) {
    if(cJSON_AddStringToObject(power_flags, "", (char*)power_flagsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_job_desc_msg->prefer
    if(v0_0_39_job_desc_msg->prefer) {
    if(cJSON_AddStringToObject(item, "prefer", v0_0_39_job_desc_msg->prefer) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->priority
    if(v0_0_39_job_desc_msg->priority) {
    if(cJSON_AddNumberToObject(item, "priority", v0_0_39_job_desc_msg->priority) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_desc_msg->profile
    if(v0_0_39_job_desc_msg->profile != slurm_rest_api_v0_0_39_job_desc_msg_PROFILE_NULL) {
    cJSON *profile = cJSON_AddArrayToObject(item, "profile");
    if(profile == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *profileListEntry;
    list_ForEach(profileListEntry, v0_0_39_job_desc_msg->profile) {
    if(cJSON_AddStringToObject(profile, "", (char*)profileListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_job_desc_msg->qos
    if(v0_0_39_job_desc_msg->qos) {
    if(cJSON_AddStringToObject(item, "qos", v0_0_39_job_desc_msg->qos) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->reboot
    if(v0_0_39_job_desc_msg->reboot) {
    if(cJSON_AddBoolToObject(item, "reboot", v0_0_39_job_desc_msg->reboot) == NULL) {
    goto fail; //Bool
    }
    }


    // v0_0_39_job_desc_msg->required_nodes
    if(v0_0_39_job_desc_msg->required_nodes) {
    cJSON *required_nodes = cJSON_AddArrayToObject(item, "required_nodes");
    if(required_nodes == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *required_nodesListEntry;
    list_ForEach(required_nodesListEntry, v0_0_39_job_desc_msg->required_nodes) {
    if(cJSON_AddStringToObject(required_nodes, "", (char*)required_nodesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_job_desc_msg->requeue
    if(v0_0_39_job_desc_msg->requeue) {
    if(cJSON_AddBoolToObject(item, "requeue", v0_0_39_job_desc_msg->requeue) == NULL) {
    goto fail; //Bool
    }
    }


    // v0_0_39_job_desc_msg->reservation
    if(v0_0_39_job_desc_msg->reservation) {
    if(cJSON_AddStringToObject(item, "reservation", v0_0_39_job_desc_msg->reservation) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->script
    if(v0_0_39_job_desc_msg->script) {
    if(cJSON_AddStringToObject(item, "script", v0_0_39_job_desc_msg->script) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->shared
    if(v0_0_39_job_desc_msg->shared != slurm_rest_api_v0_0_39_job_desc_msg_SHARED_NULL) {
    cJSON *shared = cJSON_AddArrayToObject(item, "shared");
    if(shared == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *sharedListEntry;
    list_ForEach(sharedListEntry, v0_0_39_job_desc_msg->shared) {
    if(cJSON_AddStringToObject(shared, "", (char*)sharedListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_job_desc_msg->exclusive
    if(v0_0_39_job_desc_msg->exclusive != slurm_rest_api_v0_0_39_job_desc_msg_EXCLUSIVE_NULL) {
    cJSON *exclusive = cJSON_AddArrayToObject(item, "exclusive");
    if(exclusive == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *exclusiveListEntry;
    list_ForEach(exclusiveListEntry, v0_0_39_job_desc_msg->exclusive) {
    if(cJSON_AddStringToObject(exclusive, "", (char*)exclusiveListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_job_desc_msg->site_factor
    if(v0_0_39_job_desc_msg->site_factor) {
    if(cJSON_AddNumberToObject(item, "site_factor", v0_0_39_job_desc_msg->site_factor) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_desc_msg->spank_environment
    if(v0_0_39_job_desc_msg->spank_environment) {
    cJSON *spank_environment = cJSON_AddArrayToObject(item, "spank_environment");
    if(spank_environment == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *spank_environmentListEntry;
    list_ForEach(spank_environmentListEntry, v0_0_39_job_desc_msg->spank_environment) {
    if(cJSON_AddStringToObject(spank_environment, "", (char*)spank_environmentListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_job_desc_msg->distribution
    if(v0_0_39_job_desc_msg->distribution) {
    if(cJSON_AddStringToObject(item, "distribution", v0_0_39_job_desc_msg->distribution) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->time_limit
    if(v0_0_39_job_desc_msg->time_limit) {
    cJSON *time_limit_local_JSON = v0_0_39_uint32_no_val_convertToJSON(v0_0_39_job_desc_msg->time_limit);
    if(time_limit_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "time_limit", time_limit_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_desc_msg->time_minimum
    if(v0_0_39_job_desc_msg->time_minimum) {
    cJSON *time_minimum_local_JSON = v0_0_39_uint32_no_val_convertToJSON(v0_0_39_job_desc_msg->time_minimum);
    if(time_minimum_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "time_minimum", time_minimum_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_desc_msg->tres_bind
    if(v0_0_39_job_desc_msg->tres_bind) {
    if(cJSON_AddStringToObject(item, "tres_bind", v0_0_39_job_desc_msg->tres_bind) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->tres_freq
    if(v0_0_39_job_desc_msg->tres_freq) {
    if(cJSON_AddStringToObject(item, "tres_freq", v0_0_39_job_desc_msg->tres_freq) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->tres_per_job
    if(v0_0_39_job_desc_msg->tres_per_job) {
    if(cJSON_AddStringToObject(item, "tres_per_job", v0_0_39_job_desc_msg->tres_per_job) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->tres_per_node
    if(v0_0_39_job_desc_msg->tres_per_node) {
    if(cJSON_AddStringToObject(item, "tres_per_node", v0_0_39_job_desc_msg->tres_per_node) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->tres_per_socket
    if(v0_0_39_job_desc_msg->tres_per_socket) {
    if(cJSON_AddStringToObject(item, "tres_per_socket", v0_0_39_job_desc_msg->tres_per_socket) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->tres_per_task
    if(v0_0_39_job_desc_msg->tres_per_task) {
    if(cJSON_AddStringToObject(item, "tres_per_task", v0_0_39_job_desc_msg->tres_per_task) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->user_id
    if(v0_0_39_job_desc_msg->user_id) {
    if(cJSON_AddStringToObject(item, "user_id", v0_0_39_job_desc_msg->user_id) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->wait_all_nodes
    if(v0_0_39_job_desc_msg->wait_all_nodes) {
    if(cJSON_AddBoolToObject(item, "wait_all_nodes", v0_0_39_job_desc_msg->wait_all_nodes) == NULL) {
    goto fail; //Bool
    }
    }


    // v0_0_39_job_desc_msg->kill_warning_flags
    if(v0_0_39_job_desc_msg->kill_warning_flags != slurm_rest_api_v0_0_39_job_desc_msg_KILLWARNINGFLAGS_NULL) {
    cJSON *kill_warning_flags = cJSON_AddArrayToObject(item, "kill_warning_flags");
    if(kill_warning_flags == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *kill_warning_flagsListEntry;
    list_ForEach(kill_warning_flagsListEntry, v0_0_39_job_desc_msg->kill_warning_flags) {
    if(cJSON_AddStringToObject(kill_warning_flags, "", (char*)kill_warning_flagsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_job_desc_msg->kill_warning_signal
    if(v0_0_39_job_desc_msg->kill_warning_signal) {
    if(cJSON_AddStringToObject(item, "kill_warning_signal", v0_0_39_job_desc_msg->kill_warning_signal) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->kill_warning_delay
    if(v0_0_39_job_desc_msg->kill_warning_delay) {
    cJSON *kill_warning_delay_local_JSON = v0_0_39_uint16_no_val_convertToJSON(v0_0_39_job_desc_msg->kill_warning_delay);
    if(kill_warning_delay_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "kill_warning_delay", kill_warning_delay_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_desc_msg->current_working_directory
    if(v0_0_39_job_desc_msg->current_working_directory) {
    if(cJSON_AddStringToObject(item, "current_working_directory", v0_0_39_job_desc_msg->current_working_directory) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->cpus_per_task
    if(v0_0_39_job_desc_msg->cpus_per_task) {
    if(cJSON_AddNumberToObject(item, "cpus_per_task", v0_0_39_job_desc_msg->cpus_per_task) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_desc_msg->minimum_cpus
    if(v0_0_39_job_desc_msg->minimum_cpus) {
    if(cJSON_AddNumberToObject(item, "minimum_cpus", v0_0_39_job_desc_msg->minimum_cpus) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_desc_msg->maximum_cpus
    if(v0_0_39_job_desc_msg->maximum_cpus) {
    if(cJSON_AddNumberToObject(item, "maximum_cpus", v0_0_39_job_desc_msg->maximum_cpus) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_desc_msg->nodes
    if(v0_0_39_job_desc_msg->nodes) {
    if(cJSON_AddStringToObject(item, "nodes", v0_0_39_job_desc_msg->nodes) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->minimum_nodes
    if(v0_0_39_job_desc_msg->minimum_nodes) {
    if(cJSON_AddNumberToObject(item, "minimum_nodes", v0_0_39_job_desc_msg->minimum_nodes) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_desc_msg->maximum_nodes
    if(v0_0_39_job_desc_msg->maximum_nodes) {
    if(cJSON_AddNumberToObject(item, "maximum_nodes", v0_0_39_job_desc_msg->maximum_nodes) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_desc_msg->minimum_boards_per_node
    if(v0_0_39_job_desc_msg->minimum_boards_per_node) {
    if(cJSON_AddNumberToObject(item, "minimum_boards_per_node", v0_0_39_job_desc_msg->minimum_boards_per_node) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_desc_msg->minimum_sockets_per_board
    if(v0_0_39_job_desc_msg->minimum_sockets_per_board) {
    if(cJSON_AddNumberToObject(item, "minimum_sockets_per_board", v0_0_39_job_desc_msg->minimum_sockets_per_board) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_desc_msg->sockets_per_node
    if(v0_0_39_job_desc_msg->sockets_per_node) {
    if(cJSON_AddNumberToObject(item, "sockets_per_node", v0_0_39_job_desc_msg->sockets_per_node) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_desc_msg->threads_per_core
    if(v0_0_39_job_desc_msg->threads_per_core) {
    if(cJSON_AddNumberToObject(item, "threads_per_core", v0_0_39_job_desc_msg->threads_per_core) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_desc_msg->tasks_per_node
    if(v0_0_39_job_desc_msg->tasks_per_node) {
    if(cJSON_AddNumberToObject(item, "tasks_per_node", v0_0_39_job_desc_msg->tasks_per_node) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_desc_msg->tasks_per_socket
    if(v0_0_39_job_desc_msg->tasks_per_socket) {
    if(cJSON_AddNumberToObject(item, "tasks_per_socket", v0_0_39_job_desc_msg->tasks_per_socket) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_desc_msg->tasks_per_core
    if(v0_0_39_job_desc_msg->tasks_per_core) {
    if(cJSON_AddNumberToObject(item, "tasks_per_core", v0_0_39_job_desc_msg->tasks_per_core) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_desc_msg->tasks_per_board
    if(v0_0_39_job_desc_msg->tasks_per_board) {
    if(cJSON_AddNumberToObject(item, "tasks_per_board", v0_0_39_job_desc_msg->tasks_per_board) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_desc_msg->ntasks_per_tres
    if(v0_0_39_job_desc_msg->ntasks_per_tres) {
    if(cJSON_AddNumberToObject(item, "ntasks_per_tres", v0_0_39_job_desc_msg->ntasks_per_tres) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_desc_msg->minimum_cpus_per_node
    if(v0_0_39_job_desc_msg->minimum_cpus_per_node) {
    if(cJSON_AddNumberToObject(item, "minimum_cpus_per_node", v0_0_39_job_desc_msg->minimum_cpus_per_node) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_desc_msg->memory_per_cpu
    if(v0_0_39_job_desc_msg->memory_per_cpu) {
    cJSON *memory_per_cpu_local_JSON = v0_0_39_uint64_no_val_convertToJSON(v0_0_39_job_desc_msg->memory_per_cpu);
    if(memory_per_cpu_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "memory_per_cpu", memory_per_cpu_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_desc_msg->memory_per_node
    if(v0_0_39_job_desc_msg->memory_per_node) {
    cJSON *memory_per_node_local_JSON = v0_0_39_uint64_no_val_convertToJSON(v0_0_39_job_desc_msg->memory_per_node);
    if(memory_per_node_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "memory_per_node", memory_per_node_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_desc_msg->temporary_disk_per_node
    if(v0_0_39_job_desc_msg->temporary_disk_per_node) {
    if(cJSON_AddNumberToObject(item, "temporary_disk_per_node", v0_0_39_job_desc_msg->temporary_disk_per_node) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_desc_msg->selinux_context
    if(v0_0_39_job_desc_msg->selinux_context) {
    if(cJSON_AddStringToObject(item, "selinux_context", v0_0_39_job_desc_msg->selinux_context) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->required_switches
    if(v0_0_39_job_desc_msg->required_switches) {
    cJSON *required_switches_local_JSON = v0_0_39_uint32_no_val_convertToJSON(v0_0_39_job_desc_msg->required_switches);
    if(required_switches_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "required_switches", required_switches_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_desc_msg->standard_error
    if(v0_0_39_job_desc_msg->standard_error) {
    if(cJSON_AddStringToObject(item, "standard_error", v0_0_39_job_desc_msg->standard_error) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->standard_input
    if(v0_0_39_job_desc_msg->standard_input) {
    if(cJSON_AddStringToObject(item, "standard_input", v0_0_39_job_desc_msg->standard_input) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->standard_output
    if(v0_0_39_job_desc_msg->standard_output) {
    if(cJSON_AddStringToObject(item, "standard_output", v0_0_39_job_desc_msg->standard_output) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->wait_for_switch
    if(v0_0_39_job_desc_msg->wait_for_switch) {
    if(cJSON_AddNumberToObject(item, "wait_for_switch", v0_0_39_job_desc_msg->wait_for_switch) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_desc_msg->wckey
    if(v0_0_39_job_desc_msg->wckey) {
    if(cJSON_AddStringToObject(item, "wckey", v0_0_39_job_desc_msg->wckey) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->x11
    if(v0_0_39_job_desc_msg->x11 != slurm_rest_api_v0_0_39_job_desc_msg_X11_NULL) {
    cJSON *x11 = cJSON_AddArrayToObject(item, "x11");
    if(x11 == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *x11ListEntry;
    list_ForEach(x11ListEntry, v0_0_39_job_desc_msg->x11) {
    if(cJSON_AddStringToObject(x11, "", (char*)x11ListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_job_desc_msg->x11_magic_cookie
    if(v0_0_39_job_desc_msg->x11_magic_cookie) {
    if(cJSON_AddStringToObject(item, "x11_magic_cookie", v0_0_39_job_desc_msg->x11_magic_cookie) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->x11_target_host
    if(v0_0_39_job_desc_msg->x11_target_host) {
    if(cJSON_AddStringToObject(item, "x11_target_host", v0_0_39_job_desc_msg->x11_target_host) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_desc_msg->x11_target_port
    if(v0_0_39_job_desc_msg->x11_target_port) {
    if(cJSON_AddNumberToObject(item, "x11_target_port", v0_0_39_job_desc_msg->x11_target_port) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

v0_0_39_job_desc_msg_t *v0_0_39_job_desc_msg_parseFromJSON(cJSON *v0_0_39_job_desc_msgJSON){

    v0_0_39_job_desc_msg_t *v0_0_39_job_desc_msg_local_var = NULL;

    // define the local list for v0_0_39_job_desc_msg->argv
    list_t *argvList = NULL;

    // define the local list for v0_0_39_job_desc_msg->flags
    list_t *flagsList = NULL;

    // define the local list for v0_0_39_job_desc_msg->cpu_binding_flags
    list_t *cpu_binding_flagsList = NULL;

    // define the local variable for v0_0_39_job_desc_msg->crontab
    v0_0_39_cron_entry_t *crontab_local_nonprim = NULL;

    // define the local list for v0_0_39_job_desc_msg->environment
    list_t *environmentList = NULL;

    // define the local list for v0_0_39_job_desc_msg->excluded_nodes
    list_t *excluded_nodesList = NULL;

    // define the local list for v0_0_39_job_desc_msg->mail_type
    list_t *mail_typeList = NULL;

    // define the local list for v0_0_39_job_desc_msg->memory_binding_type
    list_t *memory_binding_typeList = NULL;

    // define the local list for v0_0_39_job_desc_msg->open_mode
    list_t *open_modeList = NULL;

    // define the local list for v0_0_39_job_desc_msg->power_flags
    list_t *power_flagsList = NULL;

    // define the local list for v0_0_39_job_desc_msg->profile
    list_t *profileList = NULL;

    // define the local list for v0_0_39_job_desc_msg->required_nodes
    list_t *required_nodesList = NULL;

    // define the local list for v0_0_39_job_desc_msg->shared
    list_t *sharedList = NULL;

    // define the local list for v0_0_39_job_desc_msg->exclusive
    list_t *exclusiveList = NULL;

    // define the local list for v0_0_39_job_desc_msg->spank_environment
    list_t *spank_environmentList = NULL;

    // define the local variable for v0_0_39_job_desc_msg->time_limit
    v0_0_39_uint32_no_val_t *time_limit_local_nonprim = NULL;

    // define the local variable for v0_0_39_job_desc_msg->time_minimum
    v0_0_39_uint32_no_val_t *time_minimum_local_nonprim = NULL;

    // define the local list for v0_0_39_job_desc_msg->kill_warning_flags
    list_t *kill_warning_flagsList = NULL;

    // define the local variable for v0_0_39_job_desc_msg->kill_warning_delay
    v0_0_39_uint16_no_val_t *kill_warning_delay_local_nonprim = NULL;

    // define the local variable for v0_0_39_job_desc_msg->memory_per_cpu
    v0_0_39_uint64_no_val_t *memory_per_cpu_local_nonprim = NULL;

    // define the local variable for v0_0_39_job_desc_msg->memory_per_node
    v0_0_39_uint64_no_val_t *memory_per_node_local_nonprim = NULL;

    // define the local variable for v0_0_39_job_desc_msg->required_switches
    v0_0_39_uint32_no_val_t *required_switches_local_nonprim = NULL;

    // define the local list for v0_0_39_job_desc_msg->x11
    list_t *x11List = NULL;

    // v0_0_39_job_desc_msg->account
    cJSON *account = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "account");
    if (account) { 
    if(!cJSON_IsString(account) && !cJSON_IsNull(account))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->account_gather_frequency
    cJSON *account_gather_frequency = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "account_gather_frequency");
    if (account_gather_frequency) { 
    if(!cJSON_IsString(account_gather_frequency) && !cJSON_IsNull(account_gather_frequency))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->admin_comment
    cJSON *admin_comment = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "admin_comment");
    if (admin_comment) { 
    if(!cJSON_IsString(admin_comment) && !cJSON_IsNull(admin_comment))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->allocation_node_list
    cJSON *allocation_node_list = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "allocation_node_list");
    if (allocation_node_list) { 
    if(!cJSON_IsString(allocation_node_list) && !cJSON_IsNull(allocation_node_list))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->allocation_node_port
    cJSON *allocation_node_port = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "allocation_node_port");
    if (allocation_node_port) { 
    if(!cJSON_IsNumber(allocation_node_port))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_desc_msg->argv
    cJSON *argv = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "argv");
    if (argv) { 
    cJSON *argv_local = NULL;
    if(!cJSON_IsArray(argv)) {
        goto end;//primitive container
    }
    argvList = list_createList();

    cJSON_ArrayForEach(argv_local, argv)
    {
        if(!cJSON_IsString(argv_local))
        {
            goto end;
        }
        list_addElement(argvList , strdup(argv_local->valuestring));
    }
    }

    // v0_0_39_job_desc_msg->array
    cJSON *array = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "array");
    if (array) { 
    if(!cJSON_IsString(array) && !cJSON_IsNull(array))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->batch_features
    cJSON *batch_features = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "batch_features");
    if (batch_features) { 
    if(!cJSON_IsString(batch_features) && !cJSON_IsNull(batch_features))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->begin_time
    cJSON *begin_time = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "begin_time");
    if (begin_time) { 
    if(!cJSON_IsNumber(begin_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_desc_msg->flags
    cJSON *flags = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "flags");
    if (flags) { 
    cJSON *flags_local = NULL;
    if(!cJSON_IsArray(flags)) {
        goto end;//primitive container
    }
    flagsList = list_createList();

    cJSON_ArrayForEach(flags_local, flags)
    {
        if(!cJSON_IsString(flags_local))
        {
            goto end;
        }
        list_addElement(flagsList , strdup(flags_local->valuestring));
    }
    }

    // v0_0_39_job_desc_msg->burst_buffer
    cJSON *burst_buffer = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "burst_buffer");
    if (burst_buffer) { 
    if(!cJSON_IsString(burst_buffer) && !cJSON_IsNull(burst_buffer))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->clusters
    cJSON *clusters = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "clusters");
    if (clusters) { 
    if(!cJSON_IsString(clusters) && !cJSON_IsNull(clusters))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->cluster_constraint
    cJSON *cluster_constraint = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "cluster_constraint");
    if (cluster_constraint) { 
    if(!cJSON_IsString(cluster_constraint) && !cJSON_IsNull(cluster_constraint))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->comment
    cJSON *comment = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "comment");
    if (comment) { 
    if(!cJSON_IsString(comment) && !cJSON_IsNull(comment))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->contiguous
    cJSON *contiguous = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "contiguous");
    if (contiguous) { 
    if(!cJSON_IsBool(contiguous))
    {
    goto end; //Bool
    }
    }

    // v0_0_39_job_desc_msg->container
    cJSON *container = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "container");
    if (container) { 
    if(!cJSON_IsString(container) && !cJSON_IsNull(container))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->container_id
    cJSON *container_id = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "container_id");
    if (container_id) { 
    if(!cJSON_IsString(container_id) && !cJSON_IsNull(container_id))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->core_specification
    cJSON *core_specification = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "core_specification");
    if (core_specification) { 
    if(!cJSON_IsNumber(core_specification))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_desc_msg->thread_specification
    cJSON *thread_specification = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "thread_specification");
    if (thread_specification) { 
    if(!cJSON_IsNumber(thread_specification))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_desc_msg->cpu_binding
    cJSON *cpu_binding = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "cpu_binding");
    if (cpu_binding) { 
    if(!cJSON_IsString(cpu_binding) && !cJSON_IsNull(cpu_binding))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->cpu_binding_flags
    cJSON *cpu_binding_flags = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "cpu_binding_flags");
    if (cpu_binding_flags) { 
    cJSON *cpu_binding_flags_local = NULL;
    if(!cJSON_IsArray(cpu_binding_flags)) {
        goto end;//primitive container
    }
    cpu_binding_flagsList = list_createList();

    cJSON_ArrayForEach(cpu_binding_flags_local, cpu_binding_flags)
    {
        if(!cJSON_IsString(cpu_binding_flags_local))
        {
            goto end;
        }
        list_addElement(cpu_binding_flagsList , strdup(cpu_binding_flags_local->valuestring));
    }
    }

    // v0_0_39_job_desc_msg->cpu_frequency
    cJSON *cpu_frequency = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "cpu_frequency");
    if (cpu_frequency) { 
    if(!cJSON_IsString(cpu_frequency) && !cJSON_IsNull(cpu_frequency))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->cpus_per_tres
    cJSON *cpus_per_tres = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "cpus_per_tres");
    if (cpus_per_tres) { 
    if(!cJSON_IsString(cpus_per_tres) && !cJSON_IsNull(cpus_per_tres))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->crontab
    cJSON *crontab = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "crontab");
    if (crontab) { 
    crontab_local_nonprim = v0_0_39_cron_entry_parseFromJSON(crontab); //nonprimitive
    }

    // v0_0_39_job_desc_msg->deadline
    cJSON *deadline = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "deadline");
    if (deadline) { 
    if(!cJSON_IsNumber(deadline))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_desc_msg->delay_boot
    cJSON *delay_boot = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "delay_boot");
    if (delay_boot) { 
    if(!cJSON_IsNumber(delay_boot))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_desc_msg->dependency
    cJSON *dependency = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "dependency");
    if (dependency) { 
    if(!cJSON_IsString(dependency) && !cJSON_IsNull(dependency))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->end_time
    cJSON *end_time = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "end_time");
    if (end_time) { 
    if(!cJSON_IsNumber(end_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_desc_msg->environment
    cJSON *environment = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "environment");
    if (environment) { 
    cJSON *environment_local = NULL;
    if(!cJSON_IsArray(environment)) {
        goto end;//primitive container
    }
    environmentList = list_createList();

    cJSON_ArrayForEach(environment_local, environment)
    {
        if(!cJSON_IsString(environment_local))
        {
            goto end;
        }
        list_addElement(environmentList , strdup(environment_local->valuestring));
    }
    }

    // v0_0_39_job_desc_msg->excluded_nodes
    cJSON *excluded_nodes = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "excluded_nodes");
    if (excluded_nodes) { 
    cJSON *excluded_nodes_local = NULL;
    if(!cJSON_IsArray(excluded_nodes)) {
        goto end;//primitive container
    }
    excluded_nodesList = list_createList();

    cJSON_ArrayForEach(excluded_nodes_local, excluded_nodes)
    {
        if(!cJSON_IsString(excluded_nodes_local))
        {
            goto end;
        }
        list_addElement(excluded_nodesList , strdup(excluded_nodes_local->valuestring));
    }
    }

    // v0_0_39_job_desc_msg->extra
    cJSON *extra = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "extra");
    if (extra) { 
    if(!cJSON_IsString(extra) && !cJSON_IsNull(extra))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->constraints
    cJSON *constraints = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "constraints");
    if (constraints) { 
    if(!cJSON_IsString(constraints) && !cJSON_IsNull(constraints))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->group_id
    cJSON *group_id = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "group_id");
    if (group_id) { 
    if(!cJSON_IsString(group_id) && !cJSON_IsNull(group_id))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->hetjob_group
    cJSON *hetjob_group = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "hetjob_group");
    if (hetjob_group) { 
    if(!cJSON_IsNumber(hetjob_group))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_desc_msg->immediate
    cJSON *immediate = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "immediate");
    if (immediate) { 
    if(!cJSON_IsBool(immediate))
    {
    goto end; //Bool
    }
    }

    // v0_0_39_job_desc_msg->job_id
    cJSON *job_id = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "job_id");
    if (job_id) { 
    if(!cJSON_IsNumber(job_id))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_desc_msg->kill_on_node_fail
    cJSON *kill_on_node_fail = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "kill_on_node_fail");
    if (kill_on_node_fail) { 
    if(!cJSON_IsBool(kill_on_node_fail))
    {
    goto end; //Bool
    }
    }

    // v0_0_39_job_desc_msg->licenses
    cJSON *licenses = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "licenses");
    if (licenses) { 
    if(!cJSON_IsString(licenses) && !cJSON_IsNull(licenses))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->mail_type
    cJSON *mail_type = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "mail_type");
    if (mail_type) { 
    cJSON *mail_type_local = NULL;
    if(!cJSON_IsArray(mail_type)) {
        goto end;//primitive container
    }
    mail_typeList = list_createList();

    cJSON_ArrayForEach(mail_type_local, mail_type)
    {
        if(!cJSON_IsString(mail_type_local))
        {
            goto end;
        }
        list_addElement(mail_typeList , strdup(mail_type_local->valuestring));
    }
    }

    // v0_0_39_job_desc_msg->mail_user
    cJSON *mail_user = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "mail_user");
    if (mail_user) { 
    if(!cJSON_IsString(mail_user) && !cJSON_IsNull(mail_user))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->mcs_label
    cJSON *mcs_label = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "mcs_label");
    if (mcs_label) { 
    if(!cJSON_IsString(mcs_label) && !cJSON_IsNull(mcs_label))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->memory_binding
    cJSON *memory_binding = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "memory_binding");
    if (memory_binding) { 
    if(!cJSON_IsString(memory_binding) && !cJSON_IsNull(memory_binding))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->memory_binding_type
    cJSON *memory_binding_type = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "memory_binding_type");
    if (memory_binding_type) { 
    cJSON *memory_binding_type_local = NULL;
    if(!cJSON_IsArray(memory_binding_type)) {
        goto end;//primitive container
    }
    memory_binding_typeList = list_createList();

    cJSON_ArrayForEach(memory_binding_type_local, memory_binding_type)
    {
        if(!cJSON_IsString(memory_binding_type_local))
        {
            goto end;
        }
        list_addElement(memory_binding_typeList , strdup(memory_binding_type_local->valuestring));
    }
    }

    // v0_0_39_job_desc_msg->memory_per_tres
    cJSON *memory_per_tres = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "memory_per_tres");
    if (memory_per_tres) { 
    if(!cJSON_IsString(memory_per_tres) && !cJSON_IsNull(memory_per_tres))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->network
    cJSON *network = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "network");
    if (network) { 
    if(!cJSON_IsString(network) && !cJSON_IsNull(network))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->nice
    cJSON *nice = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "nice");
    if (nice) { 
    if(!cJSON_IsNumber(nice))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_desc_msg->tasks
    cJSON *tasks = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "tasks");
    if (tasks) { 
    if(!cJSON_IsNumber(tasks))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_desc_msg->open_mode
    cJSON *open_mode = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "open_mode");
    if (open_mode) { 
    cJSON *open_mode_local = NULL;
    if(!cJSON_IsArray(open_mode)) {
        goto end;//primitive container
    }
    open_modeList = list_createList();

    cJSON_ArrayForEach(open_mode_local, open_mode)
    {
        if(!cJSON_IsString(open_mode_local))
        {
            goto end;
        }
        list_addElement(open_modeList , strdup(open_mode_local->valuestring));
    }
    }

    // v0_0_39_job_desc_msg->reserve_ports
    cJSON *reserve_ports = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "reserve_ports");
    if (reserve_ports) { 
    if(!cJSON_IsNumber(reserve_ports))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_desc_msg->overcommit
    cJSON *overcommit = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "overcommit");
    if (overcommit) { 
    if(!cJSON_IsBool(overcommit))
    {
    goto end; //Bool
    }
    }

    // v0_0_39_job_desc_msg->partition
    cJSON *partition = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "partition");
    if (partition) { 
    if(!cJSON_IsString(partition) && !cJSON_IsNull(partition))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->distribution_plane_size
    cJSON *distribution_plane_size = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "distribution_plane_size");
    if (distribution_plane_size) { 
    if(!cJSON_IsNumber(distribution_plane_size))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_desc_msg->power_flags
    cJSON *power_flags = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "power_flags");
    if (power_flags) { 
    cJSON *power_flags_local = NULL;
    if(!cJSON_IsArray(power_flags)) {
        goto end;//primitive container
    }
    power_flagsList = list_createList();

    cJSON_ArrayForEach(power_flags_local, power_flags)
    {
        if(!cJSON_IsString(power_flags_local))
        {
            goto end;
        }
        list_addElement(power_flagsList , strdup(power_flags_local->valuestring));
    }
    }

    // v0_0_39_job_desc_msg->prefer
    cJSON *prefer = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "prefer");
    if (prefer) { 
    if(!cJSON_IsString(prefer) && !cJSON_IsNull(prefer))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->priority
    cJSON *priority = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "priority");
    if (priority) { 
    if(!cJSON_IsNumber(priority))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_desc_msg->profile
    cJSON *profile = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "profile");
    if (profile) { 
    cJSON *profile_local = NULL;
    if(!cJSON_IsArray(profile)) {
        goto end;//primitive container
    }
    profileList = list_createList();

    cJSON_ArrayForEach(profile_local, profile)
    {
        if(!cJSON_IsString(profile_local))
        {
            goto end;
        }
        list_addElement(profileList , strdup(profile_local->valuestring));
    }
    }

    // v0_0_39_job_desc_msg->qos
    cJSON *qos = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "qos");
    if (qos) { 
    if(!cJSON_IsString(qos) && !cJSON_IsNull(qos))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->reboot
    cJSON *reboot = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "reboot");
    if (reboot) { 
    if(!cJSON_IsBool(reboot))
    {
    goto end; //Bool
    }
    }

    // v0_0_39_job_desc_msg->required_nodes
    cJSON *required_nodes = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "required_nodes");
    if (required_nodes) { 
    cJSON *required_nodes_local = NULL;
    if(!cJSON_IsArray(required_nodes)) {
        goto end;//primitive container
    }
    required_nodesList = list_createList();

    cJSON_ArrayForEach(required_nodes_local, required_nodes)
    {
        if(!cJSON_IsString(required_nodes_local))
        {
            goto end;
        }
        list_addElement(required_nodesList , strdup(required_nodes_local->valuestring));
    }
    }

    // v0_0_39_job_desc_msg->requeue
    cJSON *requeue = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "requeue");
    if (requeue) { 
    if(!cJSON_IsBool(requeue))
    {
    goto end; //Bool
    }
    }

    // v0_0_39_job_desc_msg->reservation
    cJSON *reservation = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "reservation");
    if (reservation) { 
    if(!cJSON_IsString(reservation) && !cJSON_IsNull(reservation))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->script
    cJSON *script = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "script");
    if (script) { 
    if(!cJSON_IsString(script) && !cJSON_IsNull(script))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->shared
    cJSON *shared = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "shared");
    if (shared) { 
    cJSON *shared_local = NULL;
    if(!cJSON_IsArray(shared)) {
        goto end;//primitive container
    }
    sharedList = list_createList();

    cJSON_ArrayForEach(shared_local, shared)
    {
        if(!cJSON_IsString(shared_local))
        {
            goto end;
        }
        list_addElement(sharedList , strdup(shared_local->valuestring));
    }
    }

    // v0_0_39_job_desc_msg->exclusive
    cJSON *exclusive = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "exclusive");
    if (exclusive) { 
    cJSON *exclusive_local = NULL;
    if(!cJSON_IsArray(exclusive)) {
        goto end;//primitive container
    }
    exclusiveList = list_createList();

    cJSON_ArrayForEach(exclusive_local, exclusive)
    {
        if(!cJSON_IsString(exclusive_local))
        {
            goto end;
        }
        list_addElement(exclusiveList , strdup(exclusive_local->valuestring));
    }
    }

    // v0_0_39_job_desc_msg->site_factor
    cJSON *site_factor = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "site_factor");
    if (site_factor) { 
    if(!cJSON_IsNumber(site_factor))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_desc_msg->spank_environment
    cJSON *spank_environment = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "spank_environment");
    if (spank_environment) { 
    cJSON *spank_environment_local = NULL;
    if(!cJSON_IsArray(spank_environment)) {
        goto end;//primitive container
    }
    spank_environmentList = list_createList();

    cJSON_ArrayForEach(spank_environment_local, spank_environment)
    {
        if(!cJSON_IsString(spank_environment_local))
        {
            goto end;
        }
        list_addElement(spank_environmentList , strdup(spank_environment_local->valuestring));
    }
    }

    // v0_0_39_job_desc_msg->distribution
    cJSON *distribution = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "distribution");
    if (distribution) { 
    if(!cJSON_IsString(distribution) && !cJSON_IsNull(distribution))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->time_limit
    cJSON *time_limit = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "time_limit");
    if (time_limit) { 
    time_limit_local_nonprim = v0_0_39_uint32_no_val_parseFromJSON(time_limit); //nonprimitive
    }

    // v0_0_39_job_desc_msg->time_minimum
    cJSON *time_minimum = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "time_minimum");
    if (time_minimum) { 
    time_minimum_local_nonprim = v0_0_39_uint32_no_val_parseFromJSON(time_minimum); //nonprimitive
    }

    // v0_0_39_job_desc_msg->tres_bind
    cJSON *tres_bind = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "tres_bind");
    if (tres_bind) { 
    if(!cJSON_IsString(tres_bind) && !cJSON_IsNull(tres_bind))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->tres_freq
    cJSON *tres_freq = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "tres_freq");
    if (tres_freq) { 
    if(!cJSON_IsString(tres_freq) && !cJSON_IsNull(tres_freq))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->tres_per_job
    cJSON *tres_per_job = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "tres_per_job");
    if (tres_per_job) { 
    if(!cJSON_IsString(tres_per_job) && !cJSON_IsNull(tres_per_job))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->tres_per_node
    cJSON *tres_per_node = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "tres_per_node");
    if (tres_per_node) { 
    if(!cJSON_IsString(tres_per_node) && !cJSON_IsNull(tres_per_node))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->tres_per_socket
    cJSON *tres_per_socket = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "tres_per_socket");
    if (tres_per_socket) { 
    if(!cJSON_IsString(tres_per_socket) && !cJSON_IsNull(tres_per_socket))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->tres_per_task
    cJSON *tres_per_task = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "tres_per_task");
    if (tres_per_task) { 
    if(!cJSON_IsString(tres_per_task) && !cJSON_IsNull(tres_per_task))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->user_id
    cJSON *user_id = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "user_id");
    if (user_id) { 
    if(!cJSON_IsString(user_id) && !cJSON_IsNull(user_id))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->wait_all_nodes
    cJSON *wait_all_nodes = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "wait_all_nodes");
    if (wait_all_nodes) { 
    if(!cJSON_IsBool(wait_all_nodes))
    {
    goto end; //Bool
    }
    }

    // v0_0_39_job_desc_msg->kill_warning_flags
    cJSON *kill_warning_flags = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "kill_warning_flags");
    if (kill_warning_flags) { 
    cJSON *kill_warning_flags_local = NULL;
    if(!cJSON_IsArray(kill_warning_flags)) {
        goto end;//primitive container
    }
    kill_warning_flagsList = list_createList();

    cJSON_ArrayForEach(kill_warning_flags_local, kill_warning_flags)
    {
        if(!cJSON_IsString(kill_warning_flags_local))
        {
            goto end;
        }
        list_addElement(kill_warning_flagsList , strdup(kill_warning_flags_local->valuestring));
    }
    }

    // v0_0_39_job_desc_msg->kill_warning_signal
    cJSON *kill_warning_signal = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "kill_warning_signal");
    if (kill_warning_signal) { 
    if(!cJSON_IsString(kill_warning_signal) && !cJSON_IsNull(kill_warning_signal))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->kill_warning_delay
    cJSON *kill_warning_delay = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "kill_warning_delay");
    if (kill_warning_delay) { 
    kill_warning_delay_local_nonprim = v0_0_39_uint16_no_val_parseFromJSON(kill_warning_delay); //nonprimitive
    }

    // v0_0_39_job_desc_msg->current_working_directory
    cJSON *current_working_directory = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "current_working_directory");
    if (current_working_directory) { 
    if(!cJSON_IsString(current_working_directory) && !cJSON_IsNull(current_working_directory))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->cpus_per_task
    cJSON *cpus_per_task = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "cpus_per_task");
    if (cpus_per_task) { 
    if(!cJSON_IsNumber(cpus_per_task))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_desc_msg->minimum_cpus
    cJSON *minimum_cpus = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "minimum_cpus");
    if (minimum_cpus) { 
    if(!cJSON_IsNumber(minimum_cpus))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_desc_msg->maximum_cpus
    cJSON *maximum_cpus = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "maximum_cpus");
    if (maximum_cpus) { 
    if(!cJSON_IsNumber(maximum_cpus))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_desc_msg->nodes
    cJSON *nodes = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "nodes");
    if (nodes) { 
    if(!cJSON_IsString(nodes) && !cJSON_IsNull(nodes))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->minimum_nodes
    cJSON *minimum_nodes = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "minimum_nodes");
    if (minimum_nodes) { 
    if(!cJSON_IsNumber(minimum_nodes))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_desc_msg->maximum_nodes
    cJSON *maximum_nodes = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "maximum_nodes");
    if (maximum_nodes) { 
    if(!cJSON_IsNumber(maximum_nodes))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_desc_msg->minimum_boards_per_node
    cJSON *minimum_boards_per_node = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "minimum_boards_per_node");
    if (minimum_boards_per_node) { 
    if(!cJSON_IsNumber(minimum_boards_per_node))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_desc_msg->minimum_sockets_per_board
    cJSON *minimum_sockets_per_board = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "minimum_sockets_per_board");
    if (minimum_sockets_per_board) { 
    if(!cJSON_IsNumber(minimum_sockets_per_board))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_desc_msg->sockets_per_node
    cJSON *sockets_per_node = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "sockets_per_node");
    if (sockets_per_node) { 
    if(!cJSON_IsNumber(sockets_per_node))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_desc_msg->threads_per_core
    cJSON *threads_per_core = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "threads_per_core");
    if (threads_per_core) { 
    if(!cJSON_IsNumber(threads_per_core))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_desc_msg->tasks_per_node
    cJSON *tasks_per_node = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "tasks_per_node");
    if (tasks_per_node) { 
    if(!cJSON_IsNumber(tasks_per_node))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_desc_msg->tasks_per_socket
    cJSON *tasks_per_socket = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "tasks_per_socket");
    if (tasks_per_socket) { 
    if(!cJSON_IsNumber(tasks_per_socket))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_desc_msg->tasks_per_core
    cJSON *tasks_per_core = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "tasks_per_core");
    if (tasks_per_core) { 
    if(!cJSON_IsNumber(tasks_per_core))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_desc_msg->tasks_per_board
    cJSON *tasks_per_board = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "tasks_per_board");
    if (tasks_per_board) { 
    if(!cJSON_IsNumber(tasks_per_board))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_desc_msg->ntasks_per_tres
    cJSON *ntasks_per_tres = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "ntasks_per_tres");
    if (ntasks_per_tres) { 
    if(!cJSON_IsNumber(ntasks_per_tres))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_desc_msg->minimum_cpus_per_node
    cJSON *minimum_cpus_per_node = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "minimum_cpus_per_node");
    if (minimum_cpus_per_node) { 
    if(!cJSON_IsNumber(minimum_cpus_per_node))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_desc_msg->memory_per_cpu
    cJSON *memory_per_cpu = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "memory_per_cpu");
    if (memory_per_cpu) { 
    memory_per_cpu_local_nonprim = v0_0_39_uint64_no_val_parseFromJSON(memory_per_cpu); //nonprimitive
    }

    // v0_0_39_job_desc_msg->memory_per_node
    cJSON *memory_per_node = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "memory_per_node");
    if (memory_per_node) { 
    memory_per_node_local_nonprim = v0_0_39_uint64_no_val_parseFromJSON(memory_per_node); //nonprimitive
    }

    // v0_0_39_job_desc_msg->temporary_disk_per_node
    cJSON *temporary_disk_per_node = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "temporary_disk_per_node");
    if (temporary_disk_per_node) { 
    if(!cJSON_IsNumber(temporary_disk_per_node))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_desc_msg->selinux_context
    cJSON *selinux_context = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "selinux_context");
    if (selinux_context) { 
    if(!cJSON_IsString(selinux_context) && !cJSON_IsNull(selinux_context))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->required_switches
    cJSON *required_switches = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "required_switches");
    if (required_switches) { 
    required_switches_local_nonprim = v0_0_39_uint32_no_val_parseFromJSON(required_switches); //nonprimitive
    }

    // v0_0_39_job_desc_msg->standard_error
    cJSON *standard_error = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "standard_error");
    if (standard_error) { 
    if(!cJSON_IsString(standard_error) && !cJSON_IsNull(standard_error))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->standard_input
    cJSON *standard_input = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "standard_input");
    if (standard_input) { 
    if(!cJSON_IsString(standard_input) && !cJSON_IsNull(standard_input))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->standard_output
    cJSON *standard_output = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "standard_output");
    if (standard_output) { 
    if(!cJSON_IsString(standard_output) && !cJSON_IsNull(standard_output))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->wait_for_switch
    cJSON *wait_for_switch = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "wait_for_switch");
    if (wait_for_switch) { 
    if(!cJSON_IsNumber(wait_for_switch))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_desc_msg->wckey
    cJSON *wckey = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "wckey");
    if (wckey) { 
    if(!cJSON_IsString(wckey) && !cJSON_IsNull(wckey))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->x11
    cJSON *x11 = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "x11");
    if (x11) { 
    cJSON *x11_local = NULL;
    if(!cJSON_IsArray(x11)) {
        goto end;//primitive container
    }
    x11List = list_createList();

    cJSON_ArrayForEach(x11_local, x11)
    {
        if(!cJSON_IsString(x11_local))
        {
            goto end;
        }
        list_addElement(x11List , strdup(x11_local->valuestring));
    }
    }

    // v0_0_39_job_desc_msg->x11_magic_cookie
    cJSON *x11_magic_cookie = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "x11_magic_cookie");
    if (x11_magic_cookie) { 
    if(!cJSON_IsString(x11_magic_cookie) && !cJSON_IsNull(x11_magic_cookie))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->x11_target_host
    cJSON *x11_target_host = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "x11_target_host");
    if (x11_target_host) { 
    if(!cJSON_IsString(x11_target_host) && !cJSON_IsNull(x11_target_host))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_desc_msg->x11_target_port
    cJSON *x11_target_port = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_desc_msgJSON, "x11_target_port");
    if (x11_target_port) { 
    if(!cJSON_IsNumber(x11_target_port))
    {
    goto end; //Numeric
    }
    }


    v0_0_39_job_desc_msg_local_var = v0_0_39_job_desc_msg_create (
        account && !cJSON_IsNull(account) ? strdup(account->valuestring) : NULL,
        account_gather_frequency && !cJSON_IsNull(account_gather_frequency) ? strdup(account_gather_frequency->valuestring) : NULL,
        admin_comment && !cJSON_IsNull(admin_comment) ? strdup(admin_comment->valuestring) : NULL,
        allocation_node_list && !cJSON_IsNull(allocation_node_list) ? strdup(allocation_node_list->valuestring) : NULL,
        allocation_node_port ? allocation_node_port->valuedouble : 0,
        argv ? argvList : NULL,
        array && !cJSON_IsNull(array) ? strdup(array->valuestring) : NULL,
        batch_features && !cJSON_IsNull(batch_features) ? strdup(batch_features->valuestring) : NULL,
        begin_time ? begin_time->valuedouble : 0,
        flags ? flagsList : NULL,
        burst_buffer && !cJSON_IsNull(burst_buffer) ? strdup(burst_buffer->valuestring) : NULL,
        clusters && !cJSON_IsNull(clusters) ? strdup(clusters->valuestring) : NULL,
        cluster_constraint && !cJSON_IsNull(cluster_constraint) ? strdup(cluster_constraint->valuestring) : NULL,
        comment && !cJSON_IsNull(comment) ? strdup(comment->valuestring) : NULL,
        contiguous ? contiguous->valueint : 0,
        container && !cJSON_IsNull(container) ? strdup(container->valuestring) : NULL,
        container_id && !cJSON_IsNull(container_id) ? strdup(container_id->valuestring) : NULL,
        core_specification ? core_specification->valuedouble : 0,
        thread_specification ? thread_specification->valuedouble : 0,
        cpu_binding && !cJSON_IsNull(cpu_binding) ? strdup(cpu_binding->valuestring) : NULL,
        cpu_binding_flags ? cpu_binding_flagsList : NULL,
        cpu_frequency && !cJSON_IsNull(cpu_frequency) ? strdup(cpu_frequency->valuestring) : NULL,
        cpus_per_tres && !cJSON_IsNull(cpus_per_tres) ? strdup(cpus_per_tres->valuestring) : NULL,
        crontab ? crontab_local_nonprim : NULL,
        deadline ? deadline->valuedouble : 0,
        delay_boot ? delay_boot->valuedouble : 0,
        dependency && !cJSON_IsNull(dependency) ? strdup(dependency->valuestring) : NULL,
        end_time ? end_time->valuedouble : 0,
        environment ? environmentList : NULL,
        excluded_nodes ? excluded_nodesList : NULL,
        extra && !cJSON_IsNull(extra) ? strdup(extra->valuestring) : NULL,
        constraints && !cJSON_IsNull(constraints) ? strdup(constraints->valuestring) : NULL,
        group_id && !cJSON_IsNull(group_id) ? strdup(group_id->valuestring) : NULL,
        hetjob_group ? hetjob_group->valuedouble : 0,
        immediate ? immediate->valueint : 0,
        job_id ? job_id->valuedouble : 0,
        kill_on_node_fail ? kill_on_node_fail->valueint : 0,
        licenses && !cJSON_IsNull(licenses) ? strdup(licenses->valuestring) : NULL,
        mail_type ? mail_typeList : NULL,
        mail_user && !cJSON_IsNull(mail_user) ? strdup(mail_user->valuestring) : NULL,
        mcs_label && !cJSON_IsNull(mcs_label) ? strdup(mcs_label->valuestring) : NULL,
        memory_binding && !cJSON_IsNull(memory_binding) ? strdup(memory_binding->valuestring) : NULL,
        memory_binding_type ? memory_binding_typeList : NULL,
        memory_per_tres && !cJSON_IsNull(memory_per_tres) ? strdup(memory_per_tres->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        network && !cJSON_IsNull(network) ? strdup(network->valuestring) : NULL,
        nice ? nice->valuedouble : 0,
        tasks ? tasks->valuedouble : 0,
        open_mode ? open_modeList : NULL,
        reserve_ports ? reserve_ports->valuedouble : 0,
        overcommit ? overcommit->valueint : 0,
        partition && !cJSON_IsNull(partition) ? strdup(partition->valuestring) : NULL,
        distribution_plane_size ? distribution_plane_size->valuedouble : 0,
        power_flags ? power_flagsList : NULL,
        prefer && !cJSON_IsNull(prefer) ? strdup(prefer->valuestring) : NULL,
        priority ? priority->valuedouble : 0,
        profile ? profileList : NULL,
        qos && !cJSON_IsNull(qos) ? strdup(qos->valuestring) : NULL,
        reboot ? reboot->valueint : 0,
        required_nodes ? required_nodesList : NULL,
        requeue ? requeue->valueint : 0,
        reservation && !cJSON_IsNull(reservation) ? strdup(reservation->valuestring) : NULL,
        script && !cJSON_IsNull(script) ? strdup(script->valuestring) : NULL,
        shared ? sharedList : NULL,
        exclusive ? exclusiveList : NULL,
        site_factor ? site_factor->valuedouble : 0,
        spank_environment ? spank_environmentList : NULL,
        distribution && !cJSON_IsNull(distribution) ? strdup(distribution->valuestring) : NULL,
        time_limit ? time_limit_local_nonprim : NULL,
        time_minimum ? time_minimum_local_nonprim : NULL,
        tres_bind && !cJSON_IsNull(tres_bind) ? strdup(tres_bind->valuestring) : NULL,
        tres_freq && !cJSON_IsNull(tres_freq) ? strdup(tres_freq->valuestring) : NULL,
        tres_per_job && !cJSON_IsNull(tres_per_job) ? strdup(tres_per_job->valuestring) : NULL,
        tres_per_node && !cJSON_IsNull(tres_per_node) ? strdup(tres_per_node->valuestring) : NULL,
        tres_per_socket && !cJSON_IsNull(tres_per_socket) ? strdup(tres_per_socket->valuestring) : NULL,
        tres_per_task && !cJSON_IsNull(tres_per_task) ? strdup(tres_per_task->valuestring) : NULL,
        user_id && !cJSON_IsNull(user_id) ? strdup(user_id->valuestring) : NULL,
        wait_all_nodes ? wait_all_nodes->valueint : 0,
        kill_warning_flags ? kill_warning_flagsList : NULL,
        kill_warning_signal && !cJSON_IsNull(kill_warning_signal) ? strdup(kill_warning_signal->valuestring) : NULL,
        kill_warning_delay ? kill_warning_delay_local_nonprim : NULL,
        current_working_directory && !cJSON_IsNull(current_working_directory) ? strdup(current_working_directory->valuestring) : NULL,
        cpus_per_task ? cpus_per_task->valuedouble : 0,
        minimum_cpus ? minimum_cpus->valuedouble : 0,
        maximum_cpus ? maximum_cpus->valuedouble : 0,
        nodes && !cJSON_IsNull(nodes) ? strdup(nodes->valuestring) : NULL,
        minimum_nodes ? minimum_nodes->valuedouble : 0,
        maximum_nodes ? maximum_nodes->valuedouble : 0,
        minimum_boards_per_node ? minimum_boards_per_node->valuedouble : 0,
        minimum_sockets_per_board ? minimum_sockets_per_board->valuedouble : 0,
        sockets_per_node ? sockets_per_node->valuedouble : 0,
        threads_per_core ? threads_per_core->valuedouble : 0,
        tasks_per_node ? tasks_per_node->valuedouble : 0,
        tasks_per_socket ? tasks_per_socket->valuedouble : 0,
        tasks_per_core ? tasks_per_core->valuedouble : 0,
        tasks_per_board ? tasks_per_board->valuedouble : 0,
        ntasks_per_tres ? ntasks_per_tres->valuedouble : 0,
        minimum_cpus_per_node ? minimum_cpus_per_node->valuedouble : 0,
        memory_per_cpu ? memory_per_cpu_local_nonprim : NULL,
        memory_per_node ? memory_per_node_local_nonprim : NULL,
        temporary_disk_per_node ? temporary_disk_per_node->valuedouble : 0,
        selinux_context && !cJSON_IsNull(selinux_context) ? strdup(selinux_context->valuestring) : NULL,
        required_switches ? required_switches_local_nonprim : NULL,
        standard_error && !cJSON_IsNull(standard_error) ? strdup(standard_error->valuestring) : NULL,
        standard_input && !cJSON_IsNull(standard_input) ? strdup(standard_input->valuestring) : NULL,
        standard_output && !cJSON_IsNull(standard_output) ? strdup(standard_output->valuestring) : NULL,
        wait_for_switch ? wait_for_switch->valuedouble : 0,
        wckey && !cJSON_IsNull(wckey) ? strdup(wckey->valuestring) : NULL,
        x11 ? x11List : NULL,
        x11_magic_cookie && !cJSON_IsNull(x11_magic_cookie) ? strdup(x11_magic_cookie->valuestring) : NULL,
        x11_target_host && !cJSON_IsNull(x11_target_host) ? strdup(x11_target_host->valuestring) : NULL,
        x11_target_port ? x11_target_port->valuedouble : 0
        );

    return v0_0_39_job_desc_msg_local_var;
end:
    if (argvList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, argvList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(argvList);
        argvList = NULL;
    }
    if (flagsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, flagsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(flagsList);
        flagsList = NULL;
    }
    if (cpu_binding_flagsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, cpu_binding_flagsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(cpu_binding_flagsList);
        cpu_binding_flagsList = NULL;
    }
    if (crontab_local_nonprim) {
        v0_0_39_cron_entry_free(crontab_local_nonprim);
        crontab_local_nonprim = NULL;
    }
    if (environmentList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, environmentList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(environmentList);
        environmentList = NULL;
    }
    if (excluded_nodesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, excluded_nodesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(excluded_nodesList);
        excluded_nodesList = NULL;
    }
    if (mail_typeList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, mail_typeList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(mail_typeList);
        mail_typeList = NULL;
    }
    if (memory_binding_typeList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, memory_binding_typeList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(memory_binding_typeList);
        memory_binding_typeList = NULL;
    }
    if (open_modeList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, open_modeList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(open_modeList);
        open_modeList = NULL;
    }
    if (power_flagsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, power_flagsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(power_flagsList);
        power_flagsList = NULL;
    }
    if (profileList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, profileList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(profileList);
        profileList = NULL;
    }
    if (required_nodesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, required_nodesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(required_nodesList);
        required_nodesList = NULL;
    }
    if (sharedList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, sharedList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(sharedList);
        sharedList = NULL;
    }
    if (exclusiveList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, exclusiveList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(exclusiveList);
        exclusiveList = NULL;
    }
    if (spank_environmentList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, spank_environmentList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(spank_environmentList);
        spank_environmentList = NULL;
    }
    if (time_limit_local_nonprim) {
        v0_0_39_uint32_no_val_free(time_limit_local_nonprim);
        time_limit_local_nonprim = NULL;
    }
    if (time_minimum_local_nonprim) {
        v0_0_39_uint32_no_val_free(time_minimum_local_nonprim);
        time_minimum_local_nonprim = NULL;
    }
    if (kill_warning_flagsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, kill_warning_flagsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(kill_warning_flagsList);
        kill_warning_flagsList = NULL;
    }
    if (kill_warning_delay_local_nonprim) {
        v0_0_39_uint16_no_val_free(kill_warning_delay_local_nonprim);
        kill_warning_delay_local_nonprim = NULL;
    }
    if (memory_per_cpu_local_nonprim) {
        v0_0_39_uint64_no_val_free(memory_per_cpu_local_nonprim);
        memory_per_cpu_local_nonprim = NULL;
    }
    if (memory_per_node_local_nonprim) {
        v0_0_39_uint64_no_val_free(memory_per_node_local_nonprim);
        memory_per_node_local_nonprim = NULL;
    }
    if (required_switches_local_nonprim) {
        v0_0_39_uint32_no_val_free(required_switches_local_nonprim);
        required_switches_local_nonprim = NULL;
    }
    if (x11List) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, x11List) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(x11List);
        x11List = NULL;
    }
    return NULL;

}
