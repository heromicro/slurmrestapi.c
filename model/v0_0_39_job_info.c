#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_job_info.h"


char* flagsv0_0_39_job_info_ToString(slurm_rest_api_v0_0_39_job_info_FLAGS_e flags) {
	char *flagsArray[] =  { "NULL", "KILL_INVALID_DEPENDENCY", "NO_KILL_INVALID_DEPENDENCY", "HAS_STATE_DIRECTORY", "TESTING_BACKFILL", "GRES_BINDING_ENFORCED", "TEST_NOW_ONLY", "SEND_JOB_ENVIRONMENT", "SPREAD_JOB", "PREFER_MINIMUM_NODE_COUNT", "JOB_KILL_HURRY", "SKIP_TRES_STRING_ACCOUNTING", "SIBLING_CLUSTER_UPDATE_ONLY", "HETEROGENEOUS_JOB", "EXACT_TASK_COUNT_REQUESTED", "EXACT_CPU_COUNT_REQUESTED", "TESTING_WHOLE_NODE_BACKFILL", "TOP_PRIORITY_JOB", "ACCRUE_COUNT_CLEARED", "GRED_BINDING_DISABLED", "JOB_WAS_RUNNING", "JOB_ACCRUE_TIME_RESET", "CRON_JOB", "EXACT_MEMORY_REQUESTED", "JOB_RESIZED", "USING_DEFAULT_ACCOUNT", "USING_DEFAULT_PARTITION", "USING_DEFAULT_QOS", "USING_DEFAULT_WCKEY", "DEPENDENT", "MAGNETIC", "PARTITION_ASSIGNED", "BACKFILL_ATTEMPTED", "SCHEDULING_ATTEMPTED", "SAVE_BATCH_SCRIPT" };
	return flagsArray[flags - 1];
}

slurm_rest_api_v0_0_39_job_info_FLAGS_e flagsv0_0_39_job_info_FromString(char* flags) {
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
char* mail_typev0_0_39_job_info_ToString(slurm_rest_api_v0_0_39_job_info_MAILTYPE_e mail_type) {
	char *mail_typeArray[] =  { "NULL", "BEGIN", "END", "FAIL", "REQUEUE", "TIME&#x3D;100%", "TIME&#x3D;90%", "TIME&#x3D;80%", "TIME&#x3D;50%", "STAGE_OUT", "ARRAY_TASKS", "INVALID_DEPENDENCY" };
	return mail_typeArray[mail_type - 1];
}

slurm_rest_api_v0_0_39_job_info_MAILTYPE_e mail_typev0_0_39_job_info_FromString(char* mail_type) {
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
char* profilev0_0_39_job_info_ToString(slurm_rest_api_v0_0_39_job_info_PROFILE_e profile) {
	char *profileArray[] =  { "NULL", "NOT_SET", "NONE", "ENERGY", "LUSTRE", "NETWORK", "TASK" };
	return profileArray[profile - 1];
}

slurm_rest_api_v0_0_39_job_info_PROFILE_e profilev0_0_39_job_info_FromString(char* profile) {
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
char* sharedv0_0_39_job_info_ToString(slurm_rest_api_v0_0_39_job_info_SHARED_e shared) {
	char *sharedArray[] =  { "NULL", "none", "oversubscribe", "user", "mcs" };
	return sharedArray[shared - 1];
}

slurm_rest_api_v0_0_39_job_info_SHARED_e sharedv0_0_39_job_info_FromString(char* shared) {
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
char* exclusivev0_0_39_job_info_ToString(slurm_rest_api_v0_0_39_job_info_EXCLUSIVE_e exclusive) {
	char *exclusiveArray[] =  { "NULL", "true", "false", "user", "mcs" };
	return exclusiveArray[exclusive - 1];
}

slurm_rest_api_v0_0_39_job_info_EXCLUSIVE_e exclusivev0_0_39_job_info_FromString(char* exclusive) {
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
char* show_flagsv0_0_39_job_info_ToString(slurm_rest_api_v0_0_39_job_info_SHOWFLAGS_e show_flags) {
	char *show_flagsArray[] =  { "NULL", "ALL", "DETAIL", "MIXED", "LOCAL", "SIBLING", "FEDERATION", "FUTURE" };
	return show_flagsArray[show_flags - 1];
}

slurm_rest_api_v0_0_39_job_info_SHOWFLAGS_e show_flagsv0_0_39_job_info_FromString(char* show_flags) {
    int stringToReturn = 0;
    char *show_flagsArray[] =  { "NULL", "ALL", "DETAIL", "MIXED", "LOCAL", "SIBLING", "FEDERATION", "FUTURE" };
    size_t sizeofArray = sizeof(show_flagsArray) / sizeof(show_flagsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(show_flags, show_flagsArray[stringToReturn]) == 0) {
            return stringToReturn + 1;
        }
        stringToReturn++;
    }
    return 0;
}

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
    ) {
    v0_0_39_job_info_t *v0_0_39_job_info_local_var = malloc(sizeof(v0_0_39_job_info_t));
    if (!v0_0_39_job_info_local_var) {
        return NULL;
    }
    v0_0_39_job_info_local_var->account = account;
    v0_0_39_job_info_local_var->accrue_time = accrue_time;
    v0_0_39_job_info_local_var->admin_comment = admin_comment;
    v0_0_39_job_info_local_var->allocating_node = allocating_node;
    v0_0_39_job_info_local_var->array_job_id = array_job_id;
    v0_0_39_job_info_local_var->array_task_id = array_task_id;
    v0_0_39_job_info_local_var->array_max_tasks = array_max_tasks;
    v0_0_39_job_info_local_var->array_task_string = array_task_string;
    v0_0_39_job_info_local_var->association_id = association_id;
    v0_0_39_job_info_local_var->batch_features = batch_features;
    v0_0_39_job_info_local_var->batch_flag = batch_flag;
    v0_0_39_job_info_local_var->batch_host = batch_host;
    v0_0_39_job_info_local_var->flags = flags;
    v0_0_39_job_info_local_var->burst_buffer = burst_buffer;
    v0_0_39_job_info_local_var->burst_buffer_state = burst_buffer_state;
    v0_0_39_job_info_local_var->cluster = cluster;
    v0_0_39_job_info_local_var->cluster_features = cluster_features;
    v0_0_39_job_info_local_var->command = command;
    v0_0_39_job_info_local_var->comment = comment;
    v0_0_39_job_info_local_var->container = container;
    v0_0_39_job_info_local_var->container_id = container_id;
    v0_0_39_job_info_local_var->contiguous = contiguous;
    v0_0_39_job_info_local_var->core_spec = core_spec;
    v0_0_39_job_info_local_var->thread_spec = thread_spec;
    v0_0_39_job_info_local_var->cores_per_socket = cores_per_socket;
    v0_0_39_job_info_local_var->billable_tres = billable_tres;
    v0_0_39_job_info_local_var->cpus_per_task = cpus_per_task;
    v0_0_39_job_info_local_var->cpu_frequency_minimum = cpu_frequency_minimum;
    v0_0_39_job_info_local_var->cpu_frequency_maximum = cpu_frequency_maximum;
    v0_0_39_job_info_local_var->cpu_frequency_governor = cpu_frequency_governor;
    v0_0_39_job_info_local_var->cpus_per_tres = cpus_per_tres;
    v0_0_39_job_info_local_var->cron = cron;
    v0_0_39_job_info_local_var->deadline = deadline;
    v0_0_39_job_info_local_var->delay_boot = delay_boot;
    v0_0_39_job_info_local_var->dependency = dependency;
    v0_0_39_job_info_local_var->derived_exit_code = derived_exit_code;
    v0_0_39_job_info_local_var->eligible_time = eligible_time;
    v0_0_39_job_info_local_var->end_time = end_time;
    v0_0_39_job_info_local_var->excluded_nodes = excluded_nodes;
    v0_0_39_job_info_local_var->exit_code = exit_code;
    v0_0_39_job_info_local_var->extra = extra;
    v0_0_39_job_info_local_var->failed_node = failed_node;
    v0_0_39_job_info_local_var->features = features;
    v0_0_39_job_info_local_var->federation_origin = federation_origin;
    v0_0_39_job_info_local_var->federation_siblings_active = federation_siblings_active;
    v0_0_39_job_info_local_var->federation_siblings_viable = federation_siblings_viable;
    v0_0_39_job_info_local_var->gres_detail = gres_detail;
    v0_0_39_job_info_local_var->group_id = group_id;
    v0_0_39_job_info_local_var->group_name = group_name;
    v0_0_39_job_info_local_var->het_job_id = het_job_id;
    v0_0_39_job_info_local_var->het_job_id_set = het_job_id_set;
    v0_0_39_job_info_local_var->het_job_offset = het_job_offset;
    v0_0_39_job_info_local_var->job_id = job_id;
    v0_0_39_job_info_local_var->job_resources = job_resources;
    v0_0_39_job_info_local_var->job_size_str = job_size_str;
    v0_0_39_job_info_local_var->job_state = job_state;
    v0_0_39_job_info_local_var->last_sched_evaluation = last_sched_evaluation;
    v0_0_39_job_info_local_var->licenses = licenses;
    v0_0_39_job_info_local_var->mail_type = mail_type;
    v0_0_39_job_info_local_var->mail_user = mail_user;
    v0_0_39_job_info_local_var->max_cpus = max_cpus;
    v0_0_39_job_info_local_var->max_nodes = max_nodes;
    v0_0_39_job_info_local_var->mcs_label = mcs_label;
    v0_0_39_job_info_local_var->memory_per_tres = memory_per_tres;
    v0_0_39_job_info_local_var->name = name;
    v0_0_39_job_info_local_var->network = network;
    v0_0_39_job_info_local_var->nodes = nodes;
    v0_0_39_job_info_local_var->nice = nice;
    v0_0_39_job_info_local_var->tasks_per_core = tasks_per_core;
    v0_0_39_job_info_local_var->tasks_per_tres = tasks_per_tres;
    v0_0_39_job_info_local_var->tasks_per_node = tasks_per_node;
    v0_0_39_job_info_local_var->tasks_per_socket = tasks_per_socket;
    v0_0_39_job_info_local_var->tasks_per_board = tasks_per_board;
    v0_0_39_job_info_local_var->cpus = cpus;
    v0_0_39_job_info_local_var->node_count = node_count;
    v0_0_39_job_info_local_var->tasks = tasks;
    v0_0_39_job_info_local_var->partition = partition;
    v0_0_39_job_info_local_var->prefer = prefer;
    v0_0_39_job_info_local_var->memory_per_cpu = memory_per_cpu;
    v0_0_39_job_info_local_var->memory_per_node = memory_per_node;
    v0_0_39_job_info_local_var->minimum_cpus_per_node = minimum_cpus_per_node;
    v0_0_39_job_info_local_var->minimum_tmp_disk_per_node = minimum_tmp_disk_per_node;
    v0_0_39_job_info_local_var->power = power;
    v0_0_39_job_info_local_var->preempt_time = preempt_time;
    v0_0_39_job_info_local_var->preemptable_time = preemptable_time;
    v0_0_39_job_info_local_var->pre_sus_time = pre_sus_time;
    v0_0_39_job_info_local_var->priority = priority;
    v0_0_39_job_info_local_var->profile = profile;
    v0_0_39_job_info_local_var->qos = qos;
    v0_0_39_job_info_local_var->reboot = reboot;
    v0_0_39_job_info_local_var->required_nodes = required_nodes;
    v0_0_39_job_info_local_var->minimum_switches = minimum_switches;
    v0_0_39_job_info_local_var->requeue = requeue;
    v0_0_39_job_info_local_var->resize_time = resize_time;
    v0_0_39_job_info_local_var->restart_cnt = restart_cnt;
    v0_0_39_job_info_local_var->resv_name = resv_name;
    v0_0_39_job_info_local_var->scheduled_nodes = scheduled_nodes;
    v0_0_39_job_info_local_var->selinux_context = selinux_context;
    v0_0_39_job_info_local_var->shared = shared;
    v0_0_39_job_info_local_var->exclusive = exclusive;
    v0_0_39_job_info_local_var->show_flags = show_flags;
    v0_0_39_job_info_local_var->sockets_per_board = sockets_per_board;
    v0_0_39_job_info_local_var->sockets_per_node = sockets_per_node;
    v0_0_39_job_info_local_var->start_time = start_time;
    v0_0_39_job_info_local_var->state_description = state_description;
    v0_0_39_job_info_local_var->state_reason = state_reason;
    v0_0_39_job_info_local_var->standard_error = standard_error;
    v0_0_39_job_info_local_var->standard_input = standard_input;
    v0_0_39_job_info_local_var->standard_output = standard_output;
    v0_0_39_job_info_local_var->submit_time = submit_time;
    v0_0_39_job_info_local_var->suspend_time = suspend_time;
    v0_0_39_job_info_local_var->system_comment = system_comment;
    v0_0_39_job_info_local_var->time_limit = time_limit;
    v0_0_39_job_info_local_var->time_minimum = time_minimum;
    v0_0_39_job_info_local_var->threads_per_core = threads_per_core;
    v0_0_39_job_info_local_var->tres_bind = tres_bind;
    v0_0_39_job_info_local_var->tres_freq = tres_freq;
    v0_0_39_job_info_local_var->tres_per_job = tres_per_job;
    v0_0_39_job_info_local_var->tres_per_node = tres_per_node;
    v0_0_39_job_info_local_var->tres_per_socket = tres_per_socket;
    v0_0_39_job_info_local_var->tres_per_task = tres_per_task;
    v0_0_39_job_info_local_var->tres_req_str = tres_req_str;
    v0_0_39_job_info_local_var->tres_alloc_str = tres_alloc_str;
    v0_0_39_job_info_local_var->user_id = user_id;
    v0_0_39_job_info_local_var->user_name = user_name;
    v0_0_39_job_info_local_var->maximum_switch_wait_time = maximum_switch_wait_time;
    v0_0_39_job_info_local_var->wckey = wckey;
    v0_0_39_job_info_local_var->current_working_directory = current_working_directory;

    return v0_0_39_job_info_local_var;
}


void v0_0_39_job_info_free(v0_0_39_job_info_t *v0_0_39_job_info) {
    if(NULL == v0_0_39_job_info){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_job_info->account) {
        free(v0_0_39_job_info->account);
        v0_0_39_job_info->account = NULL;
    }
    if (v0_0_39_job_info->admin_comment) {
        free(v0_0_39_job_info->admin_comment);
        v0_0_39_job_info->admin_comment = NULL;
    }
    if (v0_0_39_job_info->allocating_node) {
        free(v0_0_39_job_info->allocating_node);
        v0_0_39_job_info->allocating_node = NULL;
    }
    if (v0_0_39_job_info->array_job_id) {
        v0_0_39_uint32_no_val_free(v0_0_39_job_info->array_job_id);
        v0_0_39_job_info->array_job_id = NULL;
    }
    if (v0_0_39_job_info->array_task_id) {
        v0_0_39_uint32_no_val_free(v0_0_39_job_info->array_task_id);
        v0_0_39_job_info->array_task_id = NULL;
    }
    if (v0_0_39_job_info->array_max_tasks) {
        v0_0_39_uint32_no_val_free(v0_0_39_job_info->array_max_tasks);
        v0_0_39_job_info->array_max_tasks = NULL;
    }
    if (v0_0_39_job_info->array_task_string) {
        free(v0_0_39_job_info->array_task_string);
        v0_0_39_job_info->array_task_string = NULL;
    }
    if (v0_0_39_job_info->batch_features) {
        free(v0_0_39_job_info->batch_features);
        v0_0_39_job_info->batch_features = NULL;
    }
    if (v0_0_39_job_info->batch_host) {
        free(v0_0_39_job_info->batch_host);
        v0_0_39_job_info->batch_host = NULL;
    }
    if (v0_0_39_job_info->flags) {
        list_ForEach(listEntry, v0_0_39_job_info->flags) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_job_info->flags);
        v0_0_39_job_info->flags = NULL;
    }
    if (v0_0_39_job_info->burst_buffer) {
        free(v0_0_39_job_info->burst_buffer);
        v0_0_39_job_info->burst_buffer = NULL;
    }
    if (v0_0_39_job_info->burst_buffer_state) {
        free(v0_0_39_job_info->burst_buffer_state);
        v0_0_39_job_info->burst_buffer_state = NULL;
    }
    if (v0_0_39_job_info->cluster) {
        free(v0_0_39_job_info->cluster);
        v0_0_39_job_info->cluster = NULL;
    }
    if (v0_0_39_job_info->cluster_features) {
        free(v0_0_39_job_info->cluster_features);
        v0_0_39_job_info->cluster_features = NULL;
    }
    if (v0_0_39_job_info->command) {
        free(v0_0_39_job_info->command);
        v0_0_39_job_info->command = NULL;
    }
    if (v0_0_39_job_info->comment) {
        free(v0_0_39_job_info->comment);
        v0_0_39_job_info->comment = NULL;
    }
    if (v0_0_39_job_info->container) {
        free(v0_0_39_job_info->container);
        v0_0_39_job_info->container = NULL;
    }
    if (v0_0_39_job_info->container_id) {
        free(v0_0_39_job_info->container_id);
        v0_0_39_job_info->container_id = NULL;
    }
    if (v0_0_39_job_info->cores_per_socket) {
        v0_0_39_uint16_no_val_free(v0_0_39_job_info->cores_per_socket);
        v0_0_39_job_info->cores_per_socket = NULL;
    }
    if (v0_0_39_job_info->billable_tres) {
        v0_0_39_float64_no_val_free(v0_0_39_job_info->billable_tres);
        v0_0_39_job_info->billable_tres = NULL;
    }
    if (v0_0_39_job_info->cpus_per_task) {
        v0_0_39_uint16_no_val_free(v0_0_39_job_info->cpus_per_task);
        v0_0_39_job_info->cpus_per_task = NULL;
    }
    if (v0_0_39_job_info->cpu_frequency_minimum) {
        v0_0_39_uint32_no_val_free(v0_0_39_job_info->cpu_frequency_minimum);
        v0_0_39_job_info->cpu_frequency_minimum = NULL;
    }
    if (v0_0_39_job_info->cpu_frequency_maximum) {
        v0_0_39_uint32_no_val_free(v0_0_39_job_info->cpu_frequency_maximum);
        v0_0_39_job_info->cpu_frequency_maximum = NULL;
    }
    if (v0_0_39_job_info->cpu_frequency_governor) {
        v0_0_39_uint32_no_val_free(v0_0_39_job_info->cpu_frequency_governor);
        v0_0_39_job_info->cpu_frequency_governor = NULL;
    }
    if (v0_0_39_job_info->cpus_per_tres) {
        free(v0_0_39_job_info->cpus_per_tres);
        v0_0_39_job_info->cpus_per_tres = NULL;
    }
    if (v0_0_39_job_info->cron) {
        free(v0_0_39_job_info->cron);
        v0_0_39_job_info->cron = NULL;
    }
    if (v0_0_39_job_info->delay_boot) {
        v0_0_39_uint32_no_val_free(v0_0_39_job_info->delay_boot);
        v0_0_39_job_info->delay_boot = NULL;
    }
    if (v0_0_39_job_info->dependency) {
        free(v0_0_39_job_info->dependency);
        v0_0_39_job_info->dependency = NULL;
    }
    if (v0_0_39_job_info->excluded_nodes) {
        free(v0_0_39_job_info->excluded_nodes);
        v0_0_39_job_info->excluded_nodes = NULL;
    }
    if (v0_0_39_job_info->extra) {
        free(v0_0_39_job_info->extra);
        v0_0_39_job_info->extra = NULL;
    }
    if (v0_0_39_job_info->failed_node) {
        free(v0_0_39_job_info->failed_node);
        v0_0_39_job_info->failed_node = NULL;
    }
    if (v0_0_39_job_info->features) {
        free(v0_0_39_job_info->features);
        v0_0_39_job_info->features = NULL;
    }
    if (v0_0_39_job_info->federation_origin) {
        free(v0_0_39_job_info->federation_origin);
        v0_0_39_job_info->federation_origin = NULL;
    }
    if (v0_0_39_job_info->federation_siblings_active) {
        free(v0_0_39_job_info->federation_siblings_active);
        v0_0_39_job_info->federation_siblings_active = NULL;
    }
    if (v0_0_39_job_info->federation_siblings_viable) {
        free(v0_0_39_job_info->federation_siblings_viable);
        v0_0_39_job_info->federation_siblings_viable = NULL;
    }
    if (v0_0_39_job_info->gres_detail) {
        list_ForEach(listEntry, v0_0_39_job_info->gres_detail) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_job_info->gres_detail);
        v0_0_39_job_info->gres_detail = NULL;
    }
    if (v0_0_39_job_info->group_name) {
        free(v0_0_39_job_info->group_name);
        v0_0_39_job_info->group_name = NULL;
    }
    if (v0_0_39_job_info->het_job_id) {
        v0_0_39_uint32_no_val_free(v0_0_39_job_info->het_job_id);
        v0_0_39_job_info->het_job_id = NULL;
    }
    if (v0_0_39_job_info->het_job_id_set) {
        free(v0_0_39_job_info->het_job_id_set);
        v0_0_39_job_info->het_job_id_set = NULL;
    }
    if (v0_0_39_job_info->het_job_offset) {
        v0_0_39_uint32_no_val_free(v0_0_39_job_info->het_job_offset);
        v0_0_39_job_info->het_job_offset = NULL;
    }
    if (v0_0_39_job_info->job_resources) {
        v0_0_39_job_res_free(v0_0_39_job_info->job_resources);
        v0_0_39_job_info->job_resources = NULL;
    }
    if (v0_0_39_job_info->job_size_str) {
        list_ForEach(listEntry, v0_0_39_job_info->job_size_str) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_job_info->job_size_str);
        v0_0_39_job_info->job_size_str = NULL;
    }
    if (v0_0_39_job_info->job_state) {
        free(v0_0_39_job_info->job_state);
        v0_0_39_job_info->job_state = NULL;
    }
    if (v0_0_39_job_info->licenses) {
        free(v0_0_39_job_info->licenses);
        v0_0_39_job_info->licenses = NULL;
    }
    if (v0_0_39_job_info->mail_type) {
        list_ForEach(listEntry, v0_0_39_job_info->mail_type) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_job_info->mail_type);
        v0_0_39_job_info->mail_type = NULL;
    }
    if (v0_0_39_job_info->mail_user) {
        free(v0_0_39_job_info->mail_user);
        v0_0_39_job_info->mail_user = NULL;
    }
    if (v0_0_39_job_info->max_cpus) {
        v0_0_39_uint32_no_val_free(v0_0_39_job_info->max_cpus);
        v0_0_39_job_info->max_cpus = NULL;
    }
    if (v0_0_39_job_info->max_nodes) {
        v0_0_39_uint32_no_val_free(v0_0_39_job_info->max_nodes);
        v0_0_39_job_info->max_nodes = NULL;
    }
    if (v0_0_39_job_info->mcs_label) {
        free(v0_0_39_job_info->mcs_label);
        v0_0_39_job_info->mcs_label = NULL;
    }
    if (v0_0_39_job_info->memory_per_tres) {
        free(v0_0_39_job_info->memory_per_tres);
        v0_0_39_job_info->memory_per_tres = NULL;
    }
    if (v0_0_39_job_info->name) {
        free(v0_0_39_job_info->name);
        v0_0_39_job_info->name = NULL;
    }
    if (v0_0_39_job_info->network) {
        free(v0_0_39_job_info->network);
        v0_0_39_job_info->network = NULL;
    }
    if (v0_0_39_job_info->nodes) {
        free(v0_0_39_job_info->nodes);
        v0_0_39_job_info->nodes = NULL;
    }
    if (v0_0_39_job_info->tasks_per_core) {
        v0_0_39_uint16_no_val_free(v0_0_39_job_info->tasks_per_core);
        v0_0_39_job_info->tasks_per_core = NULL;
    }
    if (v0_0_39_job_info->tasks_per_tres) {
        v0_0_39_uint16_no_val_free(v0_0_39_job_info->tasks_per_tres);
        v0_0_39_job_info->tasks_per_tres = NULL;
    }
    if (v0_0_39_job_info->tasks_per_node) {
        v0_0_39_uint16_no_val_free(v0_0_39_job_info->tasks_per_node);
        v0_0_39_job_info->tasks_per_node = NULL;
    }
    if (v0_0_39_job_info->tasks_per_socket) {
        v0_0_39_uint16_no_val_free(v0_0_39_job_info->tasks_per_socket);
        v0_0_39_job_info->tasks_per_socket = NULL;
    }
    if (v0_0_39_job_info->tasks_per_board) {
        v0_0_39_uint16_no_val_free(v0_0_39_job_info->tasks_per_board);
        v0_0_39_job_info->tasks_per_board = NULL;
    }
    if (v0_0_39_job_info->cpus) {
        v0_0_39_uint32_no_val_free(v0_0_39_job_info->cpus);
        v0_0_39_job_info->cpus = NULL;
    }
    if (v0_0_39_job_info->node_count) {
        v0_0_39_uint32_no_val_free(v0_0_39_job_info->node_count);
        v0_0_39_job_info->node_count = NULL;
    }
    if (v0_0_39_job_info->tasks) {
        v0_0_39_uint32_no_val_free(v0_0_39_job_info->tasks);
        v0_0_39_job_info->tasks = NULL;
    }
    if (v0_0_39_job_info->partition) {
        free(v0_0_39_job_info->partition);
        v0_0_39_job_info->partition = NULL;
    }
    if (v0_0_39_job_info->prefer) {
        free(v0_0_39_job_info->prefer);
        v0_0_39_job_info->prefer = NULL;
    }
    if (v0_0_39_job_info->memory_per_cpu) {
        v0_0_39_uint64_no_val_free(v0_0_39_job_info->memory_per_cpu);
        v0_0_39_job_info->memory_per_cpu = NULL;
    }
    if (v0_0_39_job_info->memory_per_node) {
        v0_0_39_uint64_no_val_free(v0_0_39_job_info->memory_per_node);
        v0_0_39_job_info->memory_per_node = NULL;
    }
    if (v0_0_39_job_info->minimum_cpus_per_node) {
        v0_0_39_uint16_no_val_free(v0_0_39_job_info->minimum_cpus_per_node);
        v0_0_39_job_info->minimum_cpus_per_node = NULL;
    }
    if (v0_0_39_job_info->minimum_tmp_disk_per_node) {
        v0_0_39_uint32_no_val_free(v0_0_39_job_info->minimum_tmp_disk_per_node);
        v0_0_39_job_info->minimum_tmp_disk_per_node = NULL;
    }
    if (v0_0_39_job_info->power) {
        v0_0_39_job_info_power_free(v0_0_39_job_info->power);
        v0_0_39_job_info->power = NULL;
    }
    if (v0_0_39_job_info->priority) {
        v0_0_39_uint32_no_val_free(v0_0_39_job_info->priority);
        v0_0_39_job_info->priority = NULL;
    }
    if (v0_0_39_job_info->profile) {
        list_ForEach(listEntry, v0_0_39_job_info->profile) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_job_info->profile);
        v0_0_39_job_info->profile = NULL;
    }
    if (v0_0_39_job_info->qos) {
        free(v0_0_39_job_info->qos);
        v0_0_39_job_info->qos = NULL;
    }
    if (v0_0_39_job_info->required_nodes) {
        free(v0_0_39_job_info->required_nodes);
        v0_0_39_job_info->required_nodes = NULL;
    }
    if (v0_0_39_job_info->resv_name) {
        free(v0_0_39_job_info->resv_name);
        v0_0_39_job_info->resv_name = NULL;
    }
    if (v0_0_39_job_info->scheduled_nodes) {
        free(v0_0_39_job_info->scheduled_nodes);
        v0_0_39_job_info->scheduled_nodes = NULL;
    }
    if (v0_0_39_job_info->selinux_context) {
        free(v0_0_39_job_info->selinux_context);
        v0_0_39_job_info->selinux_context = NULL;
    }
    if (v0_0_39_job_info->shared) {
        list_ForEach(listEntry, v0_0_39_job_info->shared) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_job_info->shared);
        v0_0_39_job_info->shared = NULL;
    }
    if (v0_0_39_job_info->exclusive) {
        list_ForEach(listEntry, v0_0_39_job_info->exclusive) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_job_info->exclusive);
        v0_0_39_job_info->exclusive = NULL;
    }
    if (v0_0_39_job_info->show_flags) {
        list_ForEach(listEntry, v0_0_39_job_info->show_flags) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_job_info->show_flags);
        v0_0_39_job_info->show_flags = NULL;
    }
    if (v0_0_39_job_info->sockets_per_node) {
        v0_0_39_uint16_no_val_free(v0_0_39_job_info->sockets_per_node);
        v0_0_39_job_info->sockets_per_node = NULL;
    }
    if (v0_0_39_job_info->state_description) {
        free(v0_0_39_job_info->state_description);
        v0_0_39_job_info->state_description = NULL;
    }
    if (v0_0_39_job_info->state_reason) {
        free(v0_0_39_job_info->state_reason);
        v0_0_39_job_info->state_reason = NULL;
    }
    if (v0_0_39_job_info->standard_error) {
        free(v0_0_39_job_info->standard_error);
        v0_0_39_job_info->standard_error = NULL;
    }
    if (v0_0_39_job_info->standard_input) {
        free(v0_0_39_job_info->standard_input);
        v0_0_39_job_info->standard_input = NULL;
    }
    if (v0_0_39_job_info->standard_output) {
        free(v0_0_39_job_info->standard_output);
        v0_0_39_job_info->standard_output = NULL;
    }
    if (v0_0_39_job_info->system_comment) {
        free(v0_0_39_job_info->system_comment);
        v0_0_39_job_info->system_comment = NULL;
    }
    if (v0_0_39_job_info->time_limit) {
        v0_0_39_uint32_no_val_free(v0_0_39_job_info->time_limit);
        v0_0_39_job_info->time_limit = NULL;
    }
    if (v0_0_39_job_info->time_minimum) {
        v0_0_39_uint32_no_val_free(v0_0_39_job_info->time_minimum);
        v0_0_39_job_info->time_minimum = NULL;
    }
    if (v0_0_39_job_info->threads_per_core) {
        v0_0_39_uint16_no_val_free(v0_0_39_job_info->threads_per_core);
        v0_0_39_job_info->threads_per_core = NULL;
    }
    if (v0_0_39_job_info->tres_bind) {
        free(v0_0_39_job_info->tres_bind);
        v0_0_39_job_info->tres_bind = NULL;
    }
    if (v0_0_39_job_info->tres_freq) {
        free(v0_0_39_job_info->tres_freq);
        v0_0_39_job_info->tres_freq = NULL;
    }
    if (v0_0_39_job_info->tres_per_job) {
        free(v0_0_39_job_info->tres_per_job);
        v0_0_39_job_info->tres_per_job = NULL;
    }
    if (v0_0_39_job_info->tres_per_node) {
        free(v0_0_39_job_info->tres_per_node);
        v0_0_39_job_info->tres_per_node = NULL;
    }
    if (v0_0_39_job_info->tres_per_socket) {
        free(v0_0_39_job_info->tres_per_socket);
        v0_0_39_job_info->tres_per_socket = NULL;
    }
    if (v0_0_39_job_info->tres_per_task) {
        free(v0_0_39_job_info->tres_per_task);
        v0_0_39_job_info->tres_per_task = NULL;
    }
    if (v0_0_39_job_info->tres_req_str) {
        free(v0_0_39_job_info->tres_req_str);
        v0_0_39_job_info->tres_req_str = NULL;
    }
    if (v0_0_39_job_info->tres_alloc_str) {
        free(v0_0_39_job_info->tres_alloc_str);
        v0_0_39_job_info->tres_alloc_str = NULL;
    }
    if (v0_0_39_job_info->user_name) {
        free(v0_0_39_job_info->user_name);
        v0_0_39_job_info->user_name = NULL;
    }
    if (v0_0_39_job_info->wckey) {
        free(v0_0_39_job_info->wckey);
        v0_0_39_job_info->wckey = NULL;
    }
    if (v0_0_39_job_info->current_working_directory) {
        free(v0_0_39_job_info->current_working_directory);
        v0_0_39_job_info->current_working_directory = NULL;
    }
    free(v0_0_39_job_info);
}

cJSON *v0_0_39_job_info_convertToJSON(v0_0_39_job_info_t *v0_0_39_job_info) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_job_info->account
    if(v0_0_39_job_info->account) {
    if(cJSON_AddStringToObject(item, "account", v0_0_39_job_info->account) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->accrue_time
    if(v0_0_39_job_info->accrue_time) {
    if(cJSON_AddNumberToObject(item, "accrue_time", v0_0_39_job_info->accrue_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_info->admin_comment
    if(v0_0_39_job_info->admin_comment) {
    if(cJSON_AddStringToObject(item, "admin_comment", v0_0_39_job_info->admin_comment) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->allocating_node
    if(v0_0_39_job_info->allocating_node) {
    if(cJSON_AddStringToObject(item, "allocating_node", v0_0_39_job_info->allocating_node) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->array_job_id
    if(v0_0_39_job_info->array_job_id) {
    cJSON *array_job_id_local_JSON = v0_0_39_uint32_no_val_convertToJSON(v0_0_39_job_info->array_job_id);
    if(array_job_id_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "array_job_id", array_job_id_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_info->array_task_id
    if(v0_0_39_job_info->array_task_id) {
    cJSON *array_task_id_local_JSON = v0_0_39_uint32_no_val_convertToJSON(v0_0_39_job_info->array_task_id);
    if(array_task_id_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "array_task_id", array_task_id_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_info->array_max_tasks
    if(v0_0_39_job_info->array_max_tasks) {
    cJSON *array_max_tasks_local_JSON = v0_0_39_uint32_no_val_convertToJSON(v0_0_39_job_info->array_max_tasks);
    if(array_max_tasks_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "array_max_tasks", array_max_tasks_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_info->array_task_string
    if(v0_0_39_job_info->array_task_string) {
    if(cJSON_AddStringToObject(item, "array_task_string", v0_0_39_job_info->array_task_string) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->association_id
    if(v0_0_39_job_info->association_id) {
    if(cJSON_AddNumberToObject(item, "association_id", v0_0_39_job_info->association_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_info->batch_features
    if(v0_0_39_job_info->batch_features) {
    if(cJSON_AddStringToObject(item, "batch_features", v0_0_39_job_info->batch_features) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->batch_flag
    if(v0_0_39_job_info->batch_flag) {
    if(cJSON_AddBoolToObject(item, "batch_flag", v0_0_39_job_info->batch_flag) == NULL) {
    goto fail; //Bool
    }
    }


    // v0_0_39_job_info->batch_host
    if(v0_0_39_job_info->batch_host) {
    if(cJSON_AddStringToObject(item, "batch_host", v0_0_39_job_info->batch_host) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->flags
    if(v0_0_39_job_info->flags != slurm_rest_api_v0_0_39_job_info_FLAGS_NULL) {
    cJSON *flags = cJSON_AddArrayToObject(item, "flags");
    if(flags == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *flagsListEntry;
    list_ForEach(flagsListEntry, v0_0_39_job_info->flags) {
    if(cJSON_AddStringToObject(flags, "", (char*)flagsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_job_info->burst_buffer
    if(v0_0_39_job_info->burst_buffer) {
    if(cJSON_AddStringToObject(item, "burst_buffer", v0_0_39_job_info->burst_buffer) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->burst_buffer_state
    if(v0_0_39_job_info->burst_buffer_state) {
    if(cJSON_AddStringToObject(item, "burst_buffer_state", v0_0_39_job_info->burst_buffer_state) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->cluster
    if(v0_0_39_job_info->cluster) {
    if(cJSON_AddStringToObject(item, "cluster", v0_0_39_job_info->cluster) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->cluster_features
    if(v0_0_39_job_info->cluster_features) {
    if(cJSON_AddStringToObject(item, "cluster_features", v0_0_39_job_info->cluster_features) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->command
    if(v0_0_39_job_info->command) {
    if(cJSON_AddStringToObject(item, "command", v0_0_39_job_info->command) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->comment
    if(v0_0_39_job_info->comment) {
    if(cJSON_AddStringToObject(item, "comment", v0_0_39_job_info->comment) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->container
    if(v0_0_39_job_info->container) {
    if(cJSON_AddStringToObject(item, "container", v0_0_39_job_info->container) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->container_id
    if(v0_0_39_job_info->container_id) {
    if(cJSON_AddStringToObject(item, "container_id", v0_0_39_job_info->container_id) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->contiguous
    if(v0_0_39_job_info->contiguous) {
    if(cJSON_AddBoolToObject(item, "contiguous", v0_0_39_job_info->contiguous) == NULL) {
    goto fail; //Bool
    }
    }


    // v0_0_39_job_info->core_spec
    if(v0_0_39_job_info->core_spec) {
    if(cJSON_AddNumberToObject(item, "core_spec", v0_0_39_job_info->core_spec) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_info->thread_spec
    if(v0_0_39_job_info->thread_spec) {
    if(cJSON_AddNumberToObject(item, "thread_spec", v0_0_39_job_info->thread_spec) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_info->cores_per_socket
    if(v0_0_39_job_info->cores_per_socket) {
    cJSON *cores_per_socket_local_JSON = v0_0_39_uint16_no_val_convertToJSON(v0_0_39_job_info->cores_per_socket);
    if(cores_per_socket_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "cores_per_socket", cores_per_socket_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_info->billable_tres
    if(v0_0_39_job_info->billable_tres) {
    cJSON *billable_tres_local_JSON = v0_0_39_float64_no_val_convertToJSON(v0_0_39_job_info->billable_tres);
    if(billable_tres_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "billable_tres", billable_tres_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_info->cpus_per_task
    if(v0_0_39_job_info->cpus_per_task) {
    cJSON *cpus_per_task_local_JSON = v0_0_39_uint16_no_val_convertToJSON(v0_0_39_job_info->cpus_per_task);
    if(cpus_per_task_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "cpus_per_task", cpus_per_task_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_info->cpu_frequency_minimum
    if(v0_0_39_job_info->cpu_frequency_minimum) {
    cJSON *cpu_frequency_minimum_local_JSON = v0_0_39_uint32_no_val_convertToJSON(v0_0_39_job_info->cpu_frequency_minimum);
    if(cpu_frequency_minimum_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "cpu_frequency_minimum", cpu_frequency_minimum_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_info->cpu_frequency_maximum
    if(v0_0_39_job_info->cpu_frequency_maximum) {
    cJSON *cpu_frequency_maximum_local_JSON = v0_0_39_uint32_no_val_convertToJSON(v0_0_39_job_info->cpu_frequency_maximum);
    if(cpu_frequency_maximum_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "cpu_frequency_maximum", cpu_frequency_maximum_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_info->cpu_frequency_governor
    if(v0_0_39_job_info->cpu_frequency_governor) {
    cJSON *cpu_frequency_governor_local_JSON = v0_0_39_uint32_no_val_convertToJSON(v0_0_39_job_info->cpu_frequency_governor);
    if(cpu_frequency_governor_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "cpu_frequency_governor", cpu_frequency_governor_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_info->cpus_per_tres
    if(v0_0_39_job_info->cpus_per_tres) {
    if(cJSON_AddStringToObject(item, "cpus_per_tres", v0_0_39_job_info->cpus_per_tres) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->cron
    if(v0_0_39_job_info->cron) {
    if(cJSON_AddStringToObject(item, "cron", v0_0_39_job_info->cron) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->deadline
    if(v0_0_39_job_info->deadline) {
    if(cJSON_AddNumberToObject(item, "deadline", v0_0_39_job_info->deadline) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_info->delay_boot
    if(v0_0_39_job_info->delay_boot) {
    cJSON *delay_boot_local_JSON = v0_0_39_uint32_no_val_convertToJSON(v0_0_39_job_info->delay_boot);
    if(delay_boot_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "delay_boot", delay_boot_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_info->dependency
    if(v0_0_39_job_info->dependency) {
    if(cJSON_AddStringToObject(item, "dependency", v0_0_39_job_info->dependency) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->derived_exit_code
    if(v0_0_39_job_info->derived_exit_code) {
    if(cJSON_AddNumberToObject(item, "derived_exit_code", v0_0_39_job_info->derived_exit_code) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_info->eligible_time
    if(v0_0_39_job_info->eligible_time) {
    if(cJSON_AddNumberToObject(item, "eligible_time", v0_0_39_job_info->eligible_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_info->end_time
    if(v0_0_39_job_info->end_time) {
    if(cJSON_AddNumberToObject(item, "end_time", v0_0_39_job_info->end_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_info->excluded_nodes
    if(v0_0_39_job_info->excluded_nodes) {
    if(cJSON_AddStringToObject(item, "excluded_nodes", v0_0_39_job_info->excluded_nodes) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->exit_code
    if(v0_0_39_job_info->exit_code) {
    if(cJSON_AddNumberToObject(item, "exit_code", v0_0_39_job_info->exit_code) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_info->extra
    if(v0_0_39_job_info->extra) {
    if(cJSON_AddStringToObject(item, "extra", v0_0_39_job_info->extra) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->failed_node
    if(v0_0_39_job_info->failed_node) {
    if(cJSON_AddStringToObject(item, "failed_node", v0_0_39_job_info->failed_node) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->features
    if(v0_0_39_job_info->features) {
    if(cJSON_AddStringToObject(item, "features", v0_0_39_job_info->features) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->federation_origin
    if(v0_0_39_job_info->federation_origin) {
    if(cJSON_AddStringToObject(item, "federation_origin", v0_0_39_job_info->federation_origin) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->federation_siblings_active
    if(v0_0_39_job_info->federation_siblings_active) {
    if(cJSON_AddStringToObject(item, "federation_siblings_active", v0_0_39_job_info->federation_siblings_active) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->federation_siblings_viable
    if(v0_0_39_job_info->federation_siblings_viable) {
    if(cJSON_AddStringToObject(item, "federation_siblings_viable", v0_0_39_job_info->federation_siblings_viable) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->gres_detail
    if(v0_0_39_job_info->gres_detail) {
    cJSON *gres_detail = cJSON_AddArrayToObject(item, "gres_detail");
    if(gres_detail == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *gres_detailListEntry;
    list_ForEach(gres_detailListEntry, v0_0_39_job_info->gres_detail) {
    if(cJSON_AddStringToObject(gres_detail, "", (char*)gres_detailListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_job_info->group_id
    if(v0_0_39_job_info->group_id) {
    if(cJSON_AddNumberToObject(item, "group_id", v0_0_39_job_info->group_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_info->group_name
    if(v0_0_39_job_info->group_name) {
    if(cJSON_AddStringToObject(item, "group_name", v0_0_39_job_info->group_name) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->het_job_id
    if(v0_0_39_job_info->het_job_id) {
    cJSON *het_job_id_local_JSON = v0_0_39_uint32_no_val_convertToJSON(v0_0_39_job_info->het_job_id);
    if(het_job_id_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "het_job_id", het_job_id_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_info->het_job_id_set
    if(v0_0_39_job_info->het_job_id_set) {
    if(cJSON_AddStringToObject(item, "het_job_id_set", v0_0_39_job_info->het_job_id_set) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->het_job_offset
    if(v0_0_39_job_info->het_job_offset) {
    cJSON *het_job_offset_local_JSON = v0_0_39_uint32_no_val_convertToJSON(v0_0_39_job_info->het_job_offset);
    if(het_job_offset_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "het_job_offset", het_job_offset_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_info->job_id
    if(v0_0_39_job_info->job_id) {
    if(cJSON_AddNumberToObject(item, "job_id", v0_0_39_job_info->job_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_info->job_resources
    if(v0_0_39_job_info->job_resources) {
    cJSON *job_resources_local_JSON = v0_0_39_job_res_convertToJSON(v0_0_39_job_info->job_resources);
    if(job_resources_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "job_resources", job_resources_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_info->job_size_str
    if(v0_0_39_job_info->job_size_str) {
    cJSON *job_size_str = cJSON_AddArrayToObject(item, "job_size_str");
    if(job_size_str == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *job_size_strListEntry;
    list_ForEach(job_size_strListEntry, v0_0_39_job_info->job_size_str) {
    if(cJSON_AddStringToObject(job_size_str, "", (char*)job_size_strListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_job_info->job_state
    if(v0_0_39_job_info->job_state) {
    if(cJSON_AddStringToObject(item, "job_state", v0_0_39_job_info->job_state) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->last_sched_evaluation
    if(v0_0_39_job_info->last_sched_evaluation) {
    if(cJSON_AddNumberToObject(item, "last_sched_evaluation", v0_0_39_job_info->last_sched_evaluation) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_info->licenses
    if(v0_0_39_job_info->licenses) {
    if(cJSON_AddStringToObject(item, "licenses", v0_0_39_job_info->licenses) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->mail_type
    if(v0_0_39_job_info->mail_type != slurm_rest_api_v0_0_39_job_info_MAILTYPE_NULL) {
    cJSON *mail_type = cJSON_AddArrayToObject(item, "mail_type");
    if(mail_type == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *mail_typeListEntry;
    list_ForEach(mail_typeListEntry, v0_0_39_job_info->mail_type) {
    if(cJSON_AddStringToObject(mail_type, "", (char*)mail_typeListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_job_info->mail_user
    if(v0_0_39_job_info->mail_user) {
    if(cJSON_AddStringToObject(item, "mail_user", v0_0_39_job_info->mail_user) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->max_cpus
    if(v0_0_39_job_info->max_cpus) {
    cJSON *max_cpus_local_JSON = v0_0_39_uint32_no_val_convertToJSON(v0_0_39_job_info->max_cpus);
    if(max_cpus_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "max_cpus", max_cpus_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_info->max_nodes
    if(v0_0_39_job_info->max_nodes) {
    cJSON *max_nodes_local_JSON = v0_0_39_uint32_no_val_convertToJSON(v0_0_39_job_info->max_nodes);
    if(max_nodes_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "max_nodes", max_nodes_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_info->mcs_label
    if(v0_0_39_job_info->mcs_label) {
    if(cJSON_AddStringToObject(item, "mcs_label", v0_0_39_job_info->mcs_label) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->memory_per_tres
    if(v0_0_39_job_info->memory_per_tres) {
    if(cJSON_AddStringToObject(item, "memory_per_tres", v0_0_39_job_info->memory_per_tres) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->name
    if(v0_0_39_job_info->name) {
    if(cJSON_AddStringToObject(item, "name", v0_0_39_job_info->name) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->network
    if(v0_0_39_job_info->network) {
    if(cJSON_AddStringToObject(item, "network", v0_0_39_job_info->network) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->nodes
    if(v0_0_39_job_info->nodes) {
    if(cJSON_AddStringToObject(item, "nodes", v0_0_39_job_info->nodes) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->nice
    if(v0_0_39_job_info->nice) {
    if(cJSON_AddNumberToObject(item, "nice", v0_0_39_job_info->nice) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_info->tasks_per_core
    if(v0_0_39_job_info->tasks_per_core) {
    cJSON *tasks_per_core_local_JSON = v0_0_39_uint16_no_val_convertToJSON(v0_0_39_job_info->tasks_per_core);
    if(tasks_per_core_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "tasks_per_core", tasks_per_core_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_info->tasks_per_tres
    if(v0_0_39_job_info->tasks_per_tres) {
    cJSON *tasks_per_tres_local_JSON = v0_0_39_uint16_no_val_convertToJSON(v0_0_39_job_info->tasks_per_tres);
    if(tasks_per_tres_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "tasks_per_tres", tasks_per_tres_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_info->tasks_per_node
    if(v0_0_39_job_info->tasks_per_node) {
    cJSON *tasks_per_node_local_JSON = v0_0_39_uint16_no_val_convertToJSON(v0_0_39_job_info->tasks_per_node);
    if(tasks_per_node_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "tasks_per_node", tasks_per_node_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_info->tasks_per_socket
    if(v0_0_39_job_info->tasks_per_socket) {
    cJSON *tasks_per_socket_local_JSON = v0_0_39_uint16_no_val_convertToJSON(v0_0_39_job_info->tasks_per_socket);
    if(tasks_per_socket_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "tasks_per_socket", tasks_per_socket_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_info->tasks_per_board
    if(v0_0_39_job_info->tasks_per_board) {
    cJSON *tasks_per_board_local_JSON = v0_0_39_uint16_no_val_convertToJSON(v0_0_39_job_info->tasks_per_board);
    if(tasks_per_board_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "tasks_per_board", tasks_per_board_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_info->cpus
    if(v0_0_39_job_info->cpus) {
    cJSON *cpus_local_JSON = v0_0_39_uint32_no_val_convertToJSON(v0_0_39_job_info->cpus);
    if(cpus_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "cpus", cpus_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_info->node_count
    if(v0_0_39_job_info->node_count) {
    cJSON *node_count_local_JSON = v0_0_39_uint32_no_val_convertToJSON(v0_0_39_job_info->node_count);
    if(node_count_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "node_count", node_count_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_info->tasks
    if(v0_0_39_job_info->tasks) {
    cJSON *tasks_local_JSON = v0_0_39_uint32_no_val_convertToJSON(v0_0_39_job_info->tasks);
    if(tasks_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "tasks", tasks_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_info->partition
    if(v0_0_39_job_info->partition) {
    if(cJSON_AddStringToObject(item, "partition", v0_0_39_job_info->partition) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->prefer
    if(v0_0_39_job_info->prefer) {
    if(cJSON_AddStringToObject(item, "prefer", v0_0_39_job_info->prefer) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->memory_per_cpu
    if(v0_0_39_job_info->memory_per_cpu) {
    cJSON *memory_per_cpu_local_JSON = v0_0_39_uint64_no_val_convertToJSON(v0_0_39_job_info->memory_per_cpu);
    if(memory_per_cpu_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "memory_per_cpu", memory_per_cpu_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_info->memory_per_node
    if(v0_0_39_job_info->memory_per_node) {
    cJSON *memory_per_node_local_JSON = v0_0_39_uint64_no_val_convertToJSON(v0_0_39_job_info->memory_per_node);
    if(memory_per_node_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "memory_per_node", memory_per_node_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_info->minimum_cpus_per_node
    if(v0_0_39_job_info->minimum_cpus_per_node) {
    cJSON *minimum_cpus_per_node_local_JSON = v0_0_39_uint16_no_val_convertToJSON(v0_0_39_job_info->minimum_cpus_per_node);
    if(minimum_cpus_per_node_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "minimum_cpus_per_node", minimum_cpus_per_node_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_info->minimum_tmp_disk_per_node
    if(v0_0_39_job_info->minimum_tmp_disk_per_node) {
    cJSON *minimum_tmp_disk_per_node_local_JSON = v0_0_39_uint32_no_val_convertToJSON(v0_0_39_job_info->minimum_tmp_disk_per_node);
    if(minimum_tmp_disk_per_node_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "minimum_tmp_disk_per_node", minimum_tmp_disk_per_node_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_info->power
    if(v0_0_39_job_info->power) {
    cJSON *power_local_JSON = v0_0_39_job_info_power_convertToJSON(v0_0_39_job_info->power);
    if(power_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "power", power_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_info->preempt_time
    if(v0_0_39_job_info->preempt_time) {
    if(cJSON_AddNumberToObject(item, "preempt_time", v0_0_39_job_info->preempt_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_info->preemptable_time
    if(v0_0_39_job_info->preemptable_time) {
    if(cJSON_AddNumberToObject(item, "preemptable_time", v0_0_39_job_info->preemptable_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_info->pre_sus_time
    if(v0_0_39_job_info->pre_sus_time) {
    if(cJSON_AddNumberToObject(item, "pre_sus_time", v0_0_39_job_info->pre_sus_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_info->priority
    if(v0_0_39_job_info->priority) {
    cJSON *priority_local_JSON = v0_0_39_uint32_no_val_convertToJSON(v0_0_39_job_info->priority);
    if(priority_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "priority", priority_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_info->profile
    if(v0_0_39_job_info->profile != slurm_rest_api_v0_0_39_job_info_PROFILE_NULL) {
    cJSON *profile = cJSON_AddArrayToObject(item, "profile");
    if(profile == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *profileListEntry;
    list_ForEach(profileListEntry, v0_0_39_job_info->profile) {
    if(cJSON_AddStringToObject(profile, "", (char*)profileListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_job_info->qos
    if(v0_0_39_job_info->qos) {
    if(cJSON_AddStringToObject(item, "qos", v0_0_39_job_info->qos) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->reboot
    if(v0_0_39_job_info->reboot) {
    if(cJSON_AddBoolToObject(item, "reboot", v0_0_39_job_info->reboot) == NULL) {
    goto fail; //Bool
    }
    }


    // v0_0_39_job_info->required_nodes
    if(v0_0_39_job_info->required_nodes) {
    if(cJSON_AddStringToObject(item, "required_nodes", v0_0_39_job_info->required_nodes) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->minimum_switches
    if(v0_0_39_job_info->minimum_switches) {
    if(cJSON_AddNumberToObject(item, "minimum_switches", v0_0_39_job_info->minimum_switches) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_info->requeue
    if(v0_0_39_job_info->requeue) {
    if(cJSON_AddBoolToObject(item, "requeue", v0_0_39_job_info->requeue) == NULL) {
    goto fail; //Bool
    }
    }


    // v0_0_39_job_info->resize_time
    if(v0_0_39_job_info->resize_time) {
    if(cJSON_AddNumberToObject(item, "resize_time", v0_0_39_job_info->resize_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_info->restart_cnt
    if(v0_0_39_job_info->restart_cnt) {
    if(cJSON_AddNumberToObject(item, "restart_cnt", v0_0_39_job_info->restart_cnt) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_info->resv_name
    if(v0_0_39_job_info->resv_name) {
    if(cJSON_AddStringToObject(item, "resv_name", v0_0_39_job_info->resv_name) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->scheduled_nodes
    if(v0_0_39_job_info->scheduled_nodes) {
    if(cJSON_AddStringToObject(item, "scheduled_nodes", v0_0_39_job_info->scheduled_nodes) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->selinux_context
    if(v0_0_39_job_info->selinux_context) {
    if(cJSON_AddStringToObject(item, "selinux_context", v0_0_39_job_info->selinux_context) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->shared
    if(v0_0_39_job_info->shared != slurm_rest_api_v0_0_39_job_info_SHARED_NULL) {
    cJSON *shared = cJSON_AddArrayToObject(item, "shared");
    if(shared == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *sharedListEntry;
    list_ForEach(sharedListEntry, v0_0_39_job_info->shared) {
    if(cJSON_AddStringToObject(shared, "", (char*)sharedListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_job_info->exclusive
    if(v0_0_39_job_info->exclusive != slurm_rest_api_v0_0_39_job_info_EXCLUSIVE_NULL) {
    cJSON *exclusive = cJSON_AddArrayToObject(item, "exclusive");
    if(exclusive == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *exclusiveListEntry;
    list_ForEach(exclusiveListEntry, v0_0_39_job_info->exclusive) {
    if(cJSON_AddStringToObject(exclusive, "", (char*)exclusiveListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_job_info->show_flags
    if(v0_0_39_job_info->show_flags != slurm_rest_api_v0_0_39_job_info_SHOWFLAGS_NULL) {
    cJSON *show_flags = cJSON_AddArrayToObject(item, "show_flags");
    if(show_flags == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *show_flagsListEntry;
    list_ForEach(show_flagsListEntry, v0_0_39_job_info->show_flags) {
    if(cJSON_AddStringToObject(show_flags, "", (char*)show_flagsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_job_info->sockets_per_board
    if(v0_0_39_job_info->sockets_per_board) {
    if(cJSON_AddNumberToObject(item, "sockets_per_board", v0_0_39_job_info->sockets_per_board) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_info->sockets_per_node
    if(v0_0_39_job_info->sockets_per_node) {
    cJSON *sockets_per_node_local_JSON = v0_0_39_uint16_no_val_convertToJSON(v0_0_39_job_info->sockets_per_node);
    if(sockets_per_node_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "sockets_per_node", sockets_per_node_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_info->start_time
    if(v0_0_39_job_info->start_time) {
    if(cJSON_AddNumberToObject(item, "start_time", v0_0_39_job_info->start_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_info->state_description
    if(v0_0_39_job_info->state_description) {
    if(cJSON_AddStringToObject(item, "state_description", v0_0_39_job_info->state_description) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->state_reason
    if(v0_0_39_job_info->state_reason) {
    if(cJSON_AddStringToObject(item, "state_reason", v0_0_39_job_info->state_reason) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->standard_error
    if(v0_0_39_job_info->standard_error) {
    if(cJSON_AddStringToObject(item, "standard_error", v0_0_39_job_info->standard_error) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->standard_input
    if(v0_0_39_job_info->standard_input) {
    if(cJSON_AddStringToObject(item, "standard_input", v0_0_39_job_info->standard_input) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->standard_output
    if(v0_0_39_job_info->standard_output) {
    if(cJSON_AddStringToObject(item, "standard_output", v0_0_39_job_info->standard_output) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->submit_time
    if(v0_0_39_job_info->submit_time) {
    if(cJSON_AddNumberToObject(item, "submit_time", v0_0_39_job_info->submit_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_info->suspend_time
    if(v0_0_39_job_info->suspend_time) {
    if(cJSON_AddNumberToObject(item, "suspend_time", v0_0_39_job_info->suspend_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_info->system_comment
    if(v0_0_39_job_info->system_comment) {
    if(cJSON_AddStringToObject(item, "system_comment", v0_0_39_job_info->system_comment) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->time_limit
    if(v0_0_39_job_info->time_limit) {
    cJSON *time_limit_local_JSON = v0_0_39_uint32_no_val_convertToJSON(v0_0_39_job_info->time_limit);
    if(time_limit_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "time_limit", time_limit_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_info->time_minimum
    if(v0_0_39_job_info->time_minimum) {
    cJSON *time_minimum_local_JSON = v0_0_39_uint32_no_val_convertToJSON(v0_0_39_job_info->time_minimum);
    if(time_minimum_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "time_minimum", time_minimum_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_info->threads_per_core
    if(v0_0_39_job_info->threads_per_core) {
    cJSON *threads_per_core_local_JSON = v0_0_39_uint16_no_val_convertToJSON(v0_0_39_job_info->threads_per_core);
    if(threads_per_core_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "threads_per_core", threads_per_core_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job_info->tres_bind
    if(v0_0_39_job_info->tres_bind) {
    if(cJSON_AddStringToObject(item, "tres_bind", v0_0_39_job_info->tres_bind) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->tres_freq
    if(v0_0_39_job_info->tres_freq) {
    if(cJSON_AddStringToObject(item, "tres_freq", v0_0_39_job_info->tres_freq) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->tres_per_job
    if(v0_0_39_job_info->tres_per_job) {
    if(cJSON_AddStringToObject(item, "tres_per_job", v0_0_39_job_info->tres_per_job) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->tres_per_node
    if(v0_0_39_job_info->tres_per_node) {
    if(cJSON_AddStringToObject(item, "tres_per_node", v0_0_39_job_info->tres_per_node) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->tres_per_socket
    if(v0_0_39_job_info->tres_per_socket) {
    if(cJSON_AddStringToObject(item, "tres_per_socket", v0_0_39_job_info->tres_per_socket) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->tres_per_task
    if(v0_0_39_job_info->tres_per_task) {
    if(cJSON_AddStringToObject(item, "tres_per_task", v0_0_39_job_info->tres_per_task) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->tres_req_str
    if(v0_0_39_job_info->tres_req_str) {
    if(cJSON_AddStringToObject(item, "tres_req_str", v0_0_39_job_info->tres_req_str) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->tres_alloc_str
    if(v0_0_39_job_info->tres_alloc_str) {
    if(cJSON_AddStringToObject(item, "tres_alloc_str", v0_0_39_job_info->tres_alloc_str) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->user_id
    if(v0_0_39_job_info->user_id) {
    if(cJSON_AddNumberToObject(item, "user_id", v0_0_39_job_info->user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_info->user_name
    if(v0_0_39_job_info->user_name) {
    if(cJSON_AddStringToObject(item, "user_name", v0_0_39_job_info->user_name) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->maximum_switch_wait_time
    if(v0_0_39_job_info->maximum_switch_wait_time) {
    if(cJSON_AddNumberToObject(item, "maximum_switch_wait_time", v0_0_39_job_info->maximum_switch_wait_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_info->wckey
    if(v0_0_39_job_info->wckey) {
    if(cJSON_AddStringToObject(item, "wckey", v0_0_39_job_info->wckey) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_info->current_working_directory
    if(v0_0_39_job_info->current_working_directory) {
    if(cJSON_AddStringToObject(item, "current_working_directory", v0_0_39_job_info->current_working_directory) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

v0_0_39_job_info_t *v0_0_39_job_info_parseFromJSON(cJSON *v0_0_39_job_infoJSON){

    v0_0_39_job_info_t *v0_0_39_job_info_local_var = NULL;

    // define the local variable for v0_0_39_job_info->array_job_id
    v0_0_39_uint32_no_val_t *array_job_id_local_nonprim = NULL;

    // define the local variable for v0_0_39_job_info->array_task_id
    v0_0_39_uint32_no_val_t *array_task_id_local_nonprim = NULL;

    // define the local variable for v0_0_39_job_info->array_max_tasks
    v0_0_39_uint32_no_val_t *array_max_tasks_local_nonprim = NULL;

    // define the local list for v0_0_39_job_info->flags
    list_t *flagsList = NULL;

    // define the local variable for v0_0_39_job_info->cores_per_socket
    v0_0_39_uint16_no_val_t *cores_per_socket_local_nonprim = NULL;

    // define the local variable for v0_0_39_job_info->billable_tres
    v0_0_39_float64_no_val_t *billable_tres_local_nonprim = NULL;

    // define the local variable for v0_0_39_job_info->cpus_per_task
    v0_0_39_uint16_no_val_t *cpus_per_task_local_nonprim = NULL;

    // define the local variable for v0_0_39_job_info->cpu_frequency_minimum
    v0_0_39_uint32_no_val_t *cpu_frequency_minimum_local_nonprim = NULL;

    // define the local variable for v0_0_39_job_info->cpu_frequency_maximum
    v0_0_39_uint32_no_val_t *cpu_frequency_maximum_local_nonprim = NULL;

    // define the local variable for v0_0_39_job_info->cpu_frequency_governor
    v0_0_39_uint32_no_val_t *cpu_frequency_governor_local_nonprim = NULL;

    // define the local variable for v0_0_39_job_info->delay_boot
    v0_0_39_uint32_no_val_t *delay_boot_local_nonprim = NULL;

    // define the local list for v0_0_39_job_info->gres_detail
    list_t *gres_detailList = NULL;

    // define the local variable for v0_0_39_job_info->het_job_id
    v0_0_39_uint32_no_val_t *het_job_id_local_nonprim = NULL;

    // define the local variable for v0_0_39_job_info->het_job_offset
    v0_0_39_uint32_no_val_t *het_job_offset_local_nonprim = NULL;

    // define the local variable for v0_0_39_job_info->job_resources
    v0_0_39_job_res_t *job_resources_local_nonprim = NULL;

    // define the local list for v0_0_39_job_info->job_size_str
    list_t *job_size_strList = NULL;

    // define the local list for v0_0_39_job_info->mail_type
    list_t *mail_typeList = NULL;

    // define the local variable for v0_0_39_job_info->max_cpus
    v0_0_39_uint32_no_val_t *max_cpus_local_nonprim = NULL;

    // define the local variable for v0_0_39_job_info->max_nodes
    v0_0_39_uint32_no_val_t *max_nodes_local_nonprim = NULL;

    // define the local variable for v0_0_39_job_info->tasks_per_core
    v0_0_39_uint16_no_val_t *tasks_per_core_local_nonprim = NULL;

    // define the local variable for v0_0_39_job_info->tasks_per_tres
    v0_0_39_uint16_no_val_t *tasks_per_tres_local_nonprim = NULL;

    // define the local variable for v0_0_39_job_info->tasks_per_node
    v0_0_39_uint16_no_val_t *tasks_per_node_local_nonprim = NULL;

    // define the local variable for v0_0_39_job_info->tasks_per_socket
    v0_0_39_uint16_no_val_t *tasks_per_socket_local_nonprim = NULL;

    // define the local variable for v0_0_39_job_info->tasks_per_board
    v0_0_39_uint16_no_val_t *tasks_per_board_local_nonprim = NULL;

    // define the local variable for v0_0_39_job_info->cpus
    v0_0_39_uint32_no_val_t *cpus_local_nonprim = NULL;

    // define the local variable for v0_0_39_job_info->node_count
    v0_0_39_uint32_no_val_t *node_count_local_nonprim = NULL;

    // define the local variable for v0_0_39_job_info->tasks
    v0_0_39_uint32_no_val_t *tasks_local_nonprim = NULL;

    // define the local variable for v0_0_39_job_info->memory_per_cpu
    v0_0_39_uint64_no_val_t *memory_per_cpu_local_nonprim = NULL;

    // define the local variable for v0_0_39_job_info->memory_per_node
    v0_0_39_uint64_no_val_t *memory_per_node_local_nonprim = NULL;

    // define the local variable for v0_0_39_job_info->minimum_cpus_per_node
    v0_0_39_uint16_no_val_t *minimum_cpus_per_node_local_nonprim = NULL;

    // define the local variable for v0_0_39_job_info->minimum_tmp_disk_per_node
    v0_0_39_uint32_no_val_t *minimum_tmp_disk_per_node_local_nonprim = NULL;

    // define the local variable for v0_0_39_job_info->power
    v0_0_39_job_info_power_t *power_local_nonprim = NULL;

    // define the local variable for v0_0_39_job_info->priority
    v0_0_39_uint32_no_val_t *priority_local_nonprim = NULL;

    // define the local list for v0_0_39_job_info->profile
    list_t *profileList = NULL;

    // define the local list for v0_0_39_job_info->shared
    list_t *sharedList = NULL;

    // define the local list for v0_0_39_job_info->exclusive
    list_t *exclusiveList = NULL;

    // define the local list for v0_0_39_job_info->show_flags
    list_t *show_flagsList = NULL;

    // define the local variable for v0_0_39_job_info->sockets_per_node
    v0_0_39_uint16_no_val_t *sockets_per_node_local_nonprim = NULL;

    // define the local variable for v0_0_39_job_info->time_limit
    v0_0_39_uint32_no_val_t *time_limit_local_nonprim = NULL;

    // define the local variable for v0_0_39_job_info->time_minimum
    v0_0_39_uint32_no_val_t *time_minimum_local_nonprim = NULL;

    // define the local variable for v0_0_39_job_info->threads_per_core
    v0_0_39_uint16_no_val_t *threads_per_core_local_nonprim = NULL;

    // v0_0_39_job_info->account
    cJSON *account = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "account");
    if (account) { 
    if(!cJSON_IsString(account) && !cJSON_IsNull(account))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->accrue_time
    cJSON *accrue_time = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "accrue_time");
    if (accrue_time) { 
    if(!cJSON_IsNumber(accrue_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_info->admin_comment
    cJSON *admin_comment = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "admin_comment");
    if (admin_comment) { 
    if(!cJSON_IsString(admin_comment) && !cJSON_IsNull(admin_comment))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->allocating_node
    cJSON *allocating_node = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "allocating_node");
    if (allocating_node) { 
    if(!cJSON_IsString(allocating_node) && !cJSON_IsNull(allocating_node))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->array_job_id
    cJSON *array_job_id = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "array_job_id");
    if (array_job_id) { 
    array_job_id_local_nonprim = v0_0_39_uint32_no_val_parseFromJSON(array_job_id); //nonprimitive
    }

    // v0_0_39_job_info->array_task_id
    cJSON *array_task_id = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "array_task_id");
    if (array_task_id) { 
    array_task_id_local_nonprim = v0_0_39_uint32_no_val_parseFromJSON(array_task_id); //nonprimitive
    }

    // v0_0_39_job_info->array_max_tasks
    cJSON *array_max_tasks = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "array_max_tasks");
    if (array_max_tasks) { 
    array_max_tasks_local_nonprim = v0_0_39_uint32_no_val_parseFromJSON(array_max_tasks); //nonprimitive
    }

    // v0_0_39_job_info->array_task_string
    cJSON *array_task_string = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "array_task_string");
    if (array_task_string) { 
    if(!cJSON_IsString(array_task_string) && !cJSON_IsNull(array_task_string))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->association_id
    cJSON *association_id = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "association_id");
    if (association_id) { 
    if(!cJSON_IsNumber(association_id))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_info->batch_features
    cJSON *batch_features = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "batch_features");
    if (batch_features) { 
    if(!cJSON_IsString(batch_features) && !cJSON_IsNull(batch_features))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->batch_flag
    cJSON *batch_flag = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "batch_flag");
    if (batch_flag) { 
    if(!cJSON_IsBool(batch_flag))
    {
    goto end; //Bool
    }
    }

    // v0_0_39_job_info->batch_host
    cJSON *batch_host = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "batch_host");
    if (batch_host) { 
    if(!cJSON_IsString(batch_host) && !cJSON_IsNull(batch_host))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->flags
    cJSON *flags = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "flags");
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

    // v0_0_39_job_info->burst_buffer
    cJSON *burst_buffer = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "burst_buffer");
    if (burst_buffer) { 
    if(!cJSON_IsString(burst_buffer) && !cJSON_IsNull(burst_buffer))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->burst_buffer_state
    cJSON *burst_buffer_state = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "burst_buffer_state");
    if (burst_buffer_state) { 
    if(!cJSON_IsString(burst_buffer_state) && !cJSON_IsNull(burst_buffer_state))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->cluster
    cJSON *cluster = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "cluster");
    if (cluster) { 
    if(!cJSON_IsString(cluster) && !cJSON_IsNull(cluster))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->cluster_features
    cJSON *cluster_features = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "cluster_features");
    if (cluster_features) { 
    if(!cJSON_IsString(cluster_features) && !cJSON_IsNull(cluster_features))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->command
    cJSON *command = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "command");
    if (command) { 
    if(!cJSON_IsString(command) && !cJSON_IsNull(command))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->comment
    cJSON *comment = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "comment");
    if (comment) { 
    if(!cJSON_IsString(comment) && !cJSON_IsNull(comment))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->container
    cJSON *container = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "container");
    if (container) { 
    if(!cJSON_IsString(container) && !cJSON_IsNull(container))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->container_id
    cJSON *container_id = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "container_id");
    if (container_id) { 
    if(!cJSON_IsString(container_id) && !cJSON_IsNull(container_id))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->contiguous
    cJSON *contiguous = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "contiguous");
    if (contiguous) { 
    if(!cJSON_IsBool(contiguous))
    {
    goto end; //Bool
    }
    }

    // v0_0_39_job_info->core_spec
    cJSON *core_spec = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "core_spec");
    if (core_spec) { 
    if(!cJSON_IsNumber(core_spec))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_info->thread_spec
    cJSON *thread_spec = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "thread_spec");
    if (thread_spec) { 
    if(!cJSON_IsNumber(thread_spec))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_info->cores_per_socket
    cJSON *cores_per_socket = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "cores_per_socket");
    if (cores_per_socket) { 
    cores_per_socket_local_nonprim = v0_0_39_uint16_no_val_parseFromJSON(cores_per_socket); //nonprimitive
    }

    // v0_0_39_job_info->billable_tres
    cJSON *billable_tres = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "billable_tres");
    if (billable_tres) { 
    billable_tres_local_nonprim = v0_0_39_float64_no_val_parseFromJSON(billable_tres); //nonprimitive
    }

    // v0_0_39_job_info->cpus_per_task
    cJSON *cpus_per_task = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "cpus_per_task");
    if (cpus_per_task) { 
    cpus_per_task_local_nonprim = v0_0_39_uint16_no_val_parseFromJSON(cpus_per_task); //nonprimitive
    }

    // v0_0_39_job_info->cpu_frequency_minimum
    cJSON *cpu_frequency_minimum = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "cpu_frequency_minimum");
    if (cpu_frequency_minimum) { 
    cpu_frequency_minimum_local_nonprim = v0_0_39_uint32_no_val_parseFromJSON(cpu_frequency_minimum); //nonprimitive
    }

    // v0_0_39_job_info->cpu_frequency_maximum
    cJSON *cpu_frequency_maximum = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "cpu_frequency_maximum");
    if (cpu_frequency_maximum) { 
    cpu_frequency_maximum_local_nonprim = v0_0_39_uint32_no_val_parseFromJSON(cpu_frequency_maximum); //nonprimitive
    }

    // v0_0_39_job_info->cpu_frequency_governor
    cJSON *cpu_frequency_governor = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "cpu_frequency_governor");
    if (cpu_frequency_governor) { 
    cpu_frequency_governor_local_nonprim = v0_0_39_uint32_no_val_parseFromJSON(cpu_frequency_governor); //nonprimitive
    }

    // v0_0_39_job_info->cpus_per_tres
    cJSON *cpus_per_tres = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "cpus_per_tres");
    if (cpus_per_tres) { 
    if(!cJSON_IsString(cpus_per_tres) && !cJSON_IsNull(cpus_per_tres))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->cron
    cJSON *cron = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "cron");
    if (cron) { 
    if(!cJSON_IsString(cron) && !cJSON_IsNull(cron))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->deadline
    cJSON *deadline = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "deadline");
    if (deadline) { 
    if(!cJSON_IsNumber(deadline))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_info->delay_boot
    cJSON *delay_boot = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "delay_boot");
    if (delay_boot) { 
    delay_boot_local_nonprim = v0_0_39_uint32_no_val_parseFromJSON(delay_boot); //nonprimitive
    }

    // v0_0_39_job_info->dependency
    cJSON *dependency = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "dependency");
    if (dependency) { 
    if(!cJSON_IsString(dependency) && !cJSON_IsNull(dependency))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->derived_exit_code
    cJSON *derived_exit_code = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "derived_exit_code");
    if (derived_exit_code) { 
    if(!cJSON_IsNumber(derived_exit_code))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_info->eligible_time
    cJSON *eligible_time = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "eligible_time");
    if (eligible_time) { 
    if(!cJSON_IsNumber(eligible_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_info->end_time
    cJSON *end_time = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "end_time");
    if (end_time) { 
    if(!cJSON_IsNumber(end_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_info->excluded_nodes
    cJSON *excluded_nodes = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "excluded_nodes");
    if (excluded_nodes) { 
    if(!cJSON_IsString(excluded_nodes) && !cJSON_IsNull(excluded_nodes))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->exit_code
    cJSON *exit_code = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "exit_code");
    if (exit_code) { 
    if(!cJSON_IsNumber(exit_code))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_info->extra
    cJSON *extra = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "extra");
    if (extra) { 
    if(!cJSON_IsString(extra) && !cJSON_IsNull(extra))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->failed_node
    cJSON *failed_node = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "failed_node");
    if (failed_node) { 
    if(!cJSON_IsString(failed_node) && !cJSON_IsNull(failed_node))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->features
    cJSON *features = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "features");
    if (features) { 
    if(!cJSON_IsString(features) && !cJSON_IsNull(features))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->federation_origin
    cJSON *federation_origin = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "federation_origin");
    if (federation_origin) { 
    if(!cJSON_IsString(federation_origin) && !cJSON_IsNull(federation_origin))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->federation_siblings_active
    cJSON *federation_siblings_active = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "federation_siblings_active");
    if (federation_siblings_active) { 
    if(!cJSON_IsString(federation_siblings_active) && !cJSON_IsNull(federation_siblings_active))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->federation_siblings_viable
    cJSON *federation_siblings_viable = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "federation_siblings_viable");
    if (federation_siblings_viable) { 
    if(!cJSON_IsString(federation_siblings_viable) && !cJSON_IsNull(federation_siblings_viable))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->gres_detail
    cJSON *gres_detail = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "gres_detail");
    if (gres_detail) { 
    cJSON *gres_detail_local = NULL;
    if(!cJSON_IsArray(gres_detail)) {
        goto end;//primitive container
    }
    gres_detailList = list_createList();

    cJSON_ArrayForEach(gres_detail_local, gres_detail)
    {
        if(!cJSON_IsString(gres_detail_local))
        {
            goto end;
        }
        list_addElement(gres_detailList , strdup(gres_detail_local->valuestring));
    }
    }

    // v0_0_39_job_info->group_id
    cJSON *group_id = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "group_id");
    if (group_id) { 
    if(!cJSON_IsNumber(group_id))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_info->group_name
    cJSON *group_name = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "group_name");
    if (group_name) { 
    if(!cJSON_IsString(group_name) && !cJSON_IsNull(group_name))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->het_job_id
    cJSON *het_job_id = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "het_job_id");
    if (het_job_id) { 
    het_job_id_local_nonprim = v0_0_39_uint32_no_val_parseFromJSON(het_job_id); //nonprimitive
    }

    // v0_0_39_job_info->het_job_id_set
    cJSON *het_job_id_set = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "het_job_id_set");
    if (het_job_id_set) { 
    if(!cJSON_IsString(het_job_id_set) && !cJSON_IsNull(het_job_id_set))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->het_job_offset
    cJSON *het_job_offset = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "het_job_offset");
    if (het_job_offset) { 
    het_job_offset_local_nonprim = v0_0_39_uint32_no_val_parseFromJSON(het_job_offset); //nonprimitive
    }

    // v0_0_39_job_info->job_id
    cJSON *job_id = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "job_id");
    if (job_id) { 
    if(!cJSON_IsNumber(job_id))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_info->job_resources
    cJSON *job_resources = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "job_resources");
    if (job_resources) { 
    job_resources_local_nonprim = v0_0_39_job_res_parseFromJSON(job_resources); //nonprimitive
    }

    // v0_0_39_job_info->job_size_str
    cJSON *job_size_str = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "job_size_str");
    if (job_size_str) { 
    cJSON *job_size_str_local = NULL;
    if(!cJSON_IsArray(job_size_str)) {
        goto end;//primitive container
    }
    job_size_strList = list_createList();

    cJSON_ArrayForEach(job_size_str_local, job_size_str)
    {
        if(!cJSON_IsString(job_size_str_local))
        {
            goto end;
        }
        list_addElement(job_size_strList , strdup(job_size_str_local->valuestring));
    }
    }

    // v0_0_39_job_info->job_state
    cJSON *job_state = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "job_state");
    if (job_state) { 
    if(!cJSON_IsString(job_state) && !cJSON_IsNull(job_state))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->last_sched_evaluation
    cJSON *last_sched_evaluation = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "last_sched_evaluation");
    if (last_sched_evaluation) { 
    if(!cJSON_IsNumber(last_sched_evaluation))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_info->licenses
    cJSON *licenses = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "licenses");
    if (licenses) { 
    if(!cJSON_IsString(licenses) && !cJSON_IsNull(licenses))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->mail_type
    cJSON *mail_type = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "mail_type");
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

    // v0_0_39_job_info->mail_user
    cJSON *mail_user = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "mail_user");
    if (mail_user) { 
    if(!cJSON_IsString(mail_user) && !cJSON_IsNull(mail_user))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->max_cpus
    cJSON *max_cpus = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "max_cpus");
    if (max_cpus) { 
    max_cpus_local_nonprim = v0_0_39_uint32_no_val_parseFromJSON(max_cpus); //nonprimitive
    }

    // v0_0_39_job_info->max_nodes
    cJSON *max_nodes = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "max_nodes");
    if (max_nodes) { 
    max_nodes_local_nonprim = v0_0_39_uint32_no_val_parseFromJSON(max_nodes); //nonprimitive
    }

    // v0_0_39_job_info->mcs_label
    cJSON *mcs_label = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "mcs_label");
    if (mcs_label) { 
    if(!cJSON_IsString(mcs_label) && !cJSON_IsNull(mcs_label))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->memory_per_tres
    cJSON *memory_per_tres = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "memory_per_tres");
    if (memory_per_tres) { 
    if(!cJSON_IsString(memory_per_tres) && !cJSON_IsNull(memory_per_tres))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->network
    cJSON *network = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "network");
    if (network) { 
    if(!cJSON_IsString(network) && !cJSON_IsNull(network))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->nodes
    cJSON *nodes = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "nodes");
    if (nodes) { 
    if(!cJSON_IsString(nodes) && !cJSON_IsNull(nodes))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->nice
    cJSON *nice = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "nice");
    if (nice) { 
    if(!cJSON_IsNumber(nice))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_info->tasks_per_core
    cJSON *tasks_per_core = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "tasks_per_core");
    if (tasks_per_core) { 
    tasks_per_core_local_nonprim = v0_0_39_uint16_no_val_parseFromJSON(tasks_per_core); //nonprimitive
    }

    // v0_0_39_job_info->tasks_per_tres
    cJSON *tasks_per_tres = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "tasks_per_tres");
    if (tasks_per_tres) { 
    tasks_per_tres_local_nonprim = v0_0_39_uint16_no_val_parseFromJSON(tasks_per_tres); //nonprimitive
    }

    // v0_0_39_job_info->tasks_per_node
    cJSON *tasks_per_node = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "tasks_per_node");
    if (tasks_per_node) { 
    tasks_per_node_local_nonprim = v0_0_39_uint16_no_val_parseFromJSON(tasks_per_node); //nonprimitive
    }

    // v0_0_39_job_info->tasks_per_socket
    cJSON *tasks_per_socket = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "tasks_per_socket");
    if (tasks_per_socket) { 
    tasks_per_socket_local_nonprim = v0_0_39_uint16_no_val_parseFromJSON(tasks_per_socket); //nonprimitive
    }

    // v0_0_39_job_info->tasks_per_board
    cJSON *tasks_per_board = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "tasks_per_board");
    if (tasks_per_board) { 
    tasks_per_board_local_nonprim = v0_0_39_uint16_no_val_parseFromJSON(tasks_per_board); //nonprimitive
    }

    // v0_0_39_job_info->cpus
    cJSON *cpus = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "cpus");
    if (cpus) { 
    cpus_local_nonprim = v0_0_39_uint32_no_val_parseFromJSON(cpus); //nonprimitive
    }

    // v0_0_39_job_info->node_count
    cJSON *node_count = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "node_count");
    if (node_count) { 
    node_count_local_nonprim = v0_0_39_uint32_no_val_parseFromJSON(node_count); //nonprimitive
    }

    // v0_0_39_job_info->tasks
    cJSON *tasks = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "tasks");
    if (tasks) { 
    tasks_local_nonprim = v0_0_39_uint32_no_val_parseFromJSON(tasks); //nonprimitive
    }

    // v0_0_39_job_info->partition
    cJSON *partition = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "partition");
    if (partition) { 
    if(!cJSON_IsString(partition) && !cJSON_IsNull(partition))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->prefer
    cJSON *prefer = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "prefer");
    if (prefer) { 
    if(!cJSON_IsString(prefer) && !cJSON_IsNull(prefer))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->memory_per_cpu
    cJSON *memory_per_cpu = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "memory_per_cpu");
    if (memory_per_cpu) { 
    memory_per_cpu_local_nonprim = v0_0_39_uint64_no_val_parseFromJSON(memory_per_cpu); //nonprimitive
    }

    // v0_0_39_job_info->memory_per_node
    cJSON *memory_per_node = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "memory_per_node");
    if (memory_per_node) { 
    memory_per_node_local_nonprim = v0_0_39_uint64_no_val_parseFromJSON(memory_per_node); //nonprimitive
    }

    // v0_0_39_job_info->minimum_cpus_per_node
    cJSON *minimum_cpus_per_node = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "minimum_cpus_per_node");
    if (minimum_cpus_per_node) { 
    minimum_cpus_per_node_local_nonprim = v0_0_39_uint16_no_val_parseFromJSON(minimum_cpus_per_node); //nonprimitive
    }

    // v0_0_39_job_info->minimum_tmp_disk_per_node
    cJSON *minimum_tmp_disk_per_node = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "minimum_tmp_disk_per_node");
    if (minimum_tmp_disk_per_node) { 
    minimum_tmp_disk_per_node_local_nonprim = v0_0_39_uint32_no_val_parseFromJSON(minimum_tmp_disk_per_node); //nonprimitive
    }

    // v0_0_39_job_info->power
    cJSON *power = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "power");
    if (power) { 
    power_local_nonprim = v0_0_39_job_info_power_parseFromJSON(power); //nonprimitive
    }

    // v0_0_39_job_info->preempt_time
    cJSON *preempt_time = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "preempt_time");
    if (preempt_time) { 
    if(!cJSON_IsNumber(preempt_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_info->preemptable_time
    cJSON *preemptable_time = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "preemptable_time");
    if (preemptable_time) { 
    if(!cJSON_IsNumber(preemptable_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_info->pre_sus_time
    cJSON *pre_sus_time = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "pre_sus_time");
    if (pre_sus_time) { 
    if(!cJSON_IsNumber(pre_sus_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_info->priority
    cJSON *priority = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "priority");
    if (priority) { 
    priority_local_nonprim = v0_0_39_uint32_no_val_parseFromJSON(priority); //nonprimitive
    }

    // v0_0_39_job_info->profile
    cJSON *profile = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "profile");
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

    // v0_0_39_job_info->qos
    cJSON *qos = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "qos");
    if (qos) { 
    if(!cJSON_IsString(qos) && !cJSON_IsNull(qos))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->reboot
    cJSON *reboot = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "reboot");
    if (reboot) { 
    if(!cJSON_IsBool(reboot))
    {
    goto end; //Bool
    }
    }

    // v0_0_39_job_info->required_nodes
    cJSON *required_nodes = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "required_nodes");
    if (required_nodes) { 
    if(!cJSON_IsString(required_nodes) && !cJSON_IsNull(required_nodes))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->minimum_switches
    cJSON *minimum_switches = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "minimum_switches");
    if (minimum_switches) { 
    if(!cJSON_IsNumber(minimum_switches))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_info->requeue
    cJSON *requeue = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "requeue");
    if (requeue) { 
    if(!cJSON_IsBool(requeue))
    {
    goto end; //Bool
    }
    }

    // v0_0_39_job_info->resize_time
    cJSON *resize_time = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "resize_time");
    if (resize_time) { 
    if(!cJSON_IsNumber(resize_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_info->restart_cnt
    cJSON *restart_cnt = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "restart_cnt");
    if (restart_cnt) { 
    if(!cJSON_IsNumber(restart_cnt))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_info->resv_name
    cJSON *resv_name = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "resv_name");
    if (resv_name) { 
    if(!cJSON_IsString(resv_name) && !cJSON_IsNull(resv_name))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->scheduled_nodes
    cJSON *scheduled_nodes = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "scheduled_nodes");
    if (scheduled_nodes) { 
    if(!cJSON_IsString(scheduled_nodes) && !cJSON_IsNull(scheduled_nodes))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->selinux_context
    cJSON *selinux_context = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "selinux_context");
    if (selinux_context) { 
    if(!cJSON_IsString(selinux_context) && !cJSON_IsNull(selinux_context))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->shared
    cJSON *shared = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "shared");
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

    // v0_0_39_job_info->exclusive
    cJSON *exclusive = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "exclusive");
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

    // v0_0_39_job_info->show_flags
    cJSON *show_flags = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "show_flags");
    if (show_flags) { 
    cJSON *show_flags_local = NULL;
    if(!cJSON_IsArray(show_flags)) {
        goto end;//primitive container
    }
    show_flagsList = list_createList();

    cJSON_ArrayForEach(show_flags_local, show_flags)
    {
        if(!cJSON_IsString(show_flags_local))
        {
            goto end;
        }
        list_addElement(show_flagsList , strdup(show_flags_local->valuestring));
    }
    }

    // v0_0_39_job_info->sockets_per_board
    cJSON *sockets_per_board = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "sockets_per_board");
    if (sockets_per_board) { 
    if(!cJSON_IsNumber(sockets_per_board))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_info->sockets_per_node
    cJSON *sockets_per_node = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "sockets_per_node");
    if (sockets_per_node) { 
    sockets_per_node_local_nonprim = v0_0_39_uint16_no_val_parseFromJSON(sockets_per_node); //nonprimitive
    }

    // v0_0_39_job_info->start_time
    cJSON *start_time = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "start_time");
    if (start_time) { 
    if(!cJSON_IsNumber(start_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_info->state_description
    cJSON *state_description = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "state_description");
    if (state_description) { 
    if(!cJSON_IsString(state_description) && !cJSON_IsNull(state_description))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->state_reason
    cJSON *state_reason = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "state_reason");
    if (state_reason) { 
    if(!cJSON_IsString(state_reason) && !cJSON_IsNull(state_reason))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->standard_error
    cJSON *standard_error = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "standard_error");
    if (standard_error) { 
    if(!cJSON_IsString(standard_error) && !cJSON_IsNull(standard_error))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->standard_input
    cJSON *standard_input = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "standard_input");
    if (standard_input) { 
    if(!cJSON_IsString(standard_input) && !cJSON_IsNull(standard_input))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->standard_output
    cJSON *standard_output = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "standard_output");
    if (standard_output) { 
    if(!cJSON_IsString(standard_output) && !cJSON_IsNull(standard_output))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->submit_time
    cJSON *submit_time = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "submit_time");
    if (submit_time) { 
    if(!cJSON_IsNumber(submit_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_info->suspend_time
    cJSON *suspend_time = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "suspend_time");
    if (suspend_time) { 
    if(!cJSON_IsNumber(suspend_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_info->system_comment
    cJSON *system_comment = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "system_comment");
    if (system_comment) { 
    if(!cJSON_IsString(system_comment) && !cJSON_IsNull(system_comment))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->time_limit
    cJSON *time_limit = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "time_limit");
    if (time_limit) { 
    time_limit_local_nonprim = v0_0_39_uint32_no_val_parseFromJSON(time_limit); //nonprimitive
    }

    // v0_0_39_job_info->time_minimum
    cJSON *time_minimum = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "time_minimum");
    if (time_minimum) { 
    time_minimum_local_nonprim = v0_0_39_uint32_no_val_parseFromJSON(time_minimum); //nonprimitive
    }

    // v0_0_39_job_info->threads_per_core
    cJSON *threads_per_core = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "threads_per_core");
    if (threads_per_core) { 
    threads_per_core_local_nonprim = v0_0_39_uint16_no_val_parseFromJSON(threads_per_core); //nonprimitive
    }

    // v0_0_39_job_info->tres_bind
    cJSON *tres_bind = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "tres_bind");
    if (tres_bind) { 
    if(!cJSON_IsString(tres_bind) && !cJSON_IsNull(tres_bind))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->tres_freq
    cJSON *tres_freq = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "tres_freq");
    if (tres_freq) { 
    if(!cJSON_IsString(tres_freq) && !cJSON_IsNull(tres_freq))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->tres_per_job
    cJSON *tres_per_job = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "tres_per_job");
    if (tres_per_job) { 
    if(!cJSON_IsString(tres_per_job) && !cJSON_IsNull(tres_per_job))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->tres_per_node
    cJSON *tres_per_node = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "tres_per_node");
    if (tres_per_node) { 
    if(!cJSON_IsString(tres_per_node) && !cJSON_IsNull(tres_per_node))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->tres_per_socket
    cJSON *tres_per_socket = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "tres_per_socket");
    if (tres_per_socket) { 
    if(!cJSON_IsString(tres_per_socket) && !cJSON_IsNull(tres_per_socket))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->tres_per_task
    cJSON *tres_per_task = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "tres_per_task");
    if (tres_per_task) { 
    if(!cJSON_IsString(tres_per_task) && !cJSON_IsNull(tres_per_task))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->tres_req_str
    cJSON *tres_req_str = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "tres_req_str");
    if (tres_req_str) { 
    if(!cJSON_IsString(tres_req_str) && !cJSON_IsNull(tres_req_str))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->tres_alloc_str
    cJSON *tres_alloc_str = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "tres_alloc_str");
    if (tres_alloc_str) { 
    if(!cJSON_IsString(tres_alloc_str) && !cJSON_IsNull(tres_alloc_str))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->user_id
    cJSON *user_id = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "user_id");
    if (user_id) { 
    if(!cJSON_IsNumber(user_id))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_info->user_name
    cJSON *user_name = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "user_name");
    if (user_name) { 
    if(!cJSON_IsString(user_name) && !cJSON_IsNull(user_name))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->maximum_switch_wait_time
    cJSON *maximum_switch_wait_time = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "maximum_switch_wait_time");
    if (maximum_switch_wait_time) { 
    if(!cJSON_IsNumber(maximum_switch_wait_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_info->wckey
    cJSON *wckey = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "wckey");
    if (wckey) { 
    if(!cJSON_IsString(wckey) && !cJSON_IsNull(wckey))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_info->current_working_directory
    cJSON *current_working_directory = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_infoJSON, "current_working_directory");
    if (current_working_directory) { 
    if(!cJSON_IsString(current_working_directory) && !cJSON_IsNull(current_working_directory))
    {
    goto end; //String
    }
    }


    v0_0_39_job_info_local_var = v0_0_39_job_info_create (
        account && !cJSON_IsNull(account) ? strdup(account->valuestring) : NULL,
        accrue_time ? accrue_time->valuedouble : 0,
        admin_comment && !cJSON_IsNull(admin_comment) ? strdup(admin_comment->valuestring) : NULL,
        allocating_node && !cJSON_IsNull(allocating_node) ? strdup(allocating_node->valuestring) : NULL,
        array_job_id ? array_job_id_local_nonprim : NULL,
        array_task_id ? array_task_id_local_nonprim : NULL,
        array_max_tasks ? array_max_tasks_local_nonprim : NULL,
        array_task_string && !cJSON_IsNull(array_task_string) ? strdup(array_task_string->valuestring) : NULL,
        association_id ? association_id->valuedouble : 0,
        batch_features && !cJSON_IsNull(batch_features) ? strdup(batch_features->valuestring) : NULL,
        batch_flag ? batch_flag->valueint : 0,
        batch_host && !cJSON_IsNull(batch_host) ? strdup(batch_host->valuestring) : NULL,
        flags ? flagsList : NULL,
        burst_buffer && !cJSON_IsNull(burst_buffer) ? strdup(burst_buffer->valuestring) : NULL,
        burst_buffer_state && !cJSON_IsNull(burst_buffer_state) ? strdup(burst_buffer_state->valuestring) : NULL,
        cluster && !cJSON_IsNull(cluster) ? strdup(cluster->valuestring) : NULL,
        cluster_features && !cJSON_IsNull(cluster_features) ? strdup(cluster_features->valuestring) : NULL,
        command && !cJSON_IsNull(command) ? strdup(command->valuestring) : NULL,
        comment && !cJSON_IsNull(comment) ? strdup(comment->valuestring) : NULL,
        container && !cJSON_IsNull(container) ? strdup(container->valuestring) : NULL,
        container_id && !cJSON_IsNull(container_id) ? strdup(container_id->valuestring) : NULL,
        contiguous ? contiguous->valueint : 0,
        core_spec ? core_spec->valuedouble : 0,
        thread_spec ? thread_spec->valuedouble : 0,
        cores_per_socket ? cores_per_socket_local_nonprim : NULL,
        billable_tres ? billable_tres_local_nonprim : NULL,
        cpus_per_task ? cpus_per_task_local_nonprim : NULL,
        cpu_frequency_minimum ? cpu_frequency_minimum_local_nonprim : NULL,
        cpu_frequency_maximum ? cpu_frequency_maximum_local_nonprim : NULL,
        cpu_frequency_governor ? cpu_frequency_governor_local_nonprim : NULL,
        cpus_per_tres && !cJSON_IsNull(cpus_per_tres) ? strdup(cpus_per_tres->valuestring) : NULL,
        cron && !cJSON_IsNull(cron) ? strdup(cron->valuestring) : NULL,
        deadline ? deadline->valuedouble : 0,
        delay_boot ? delay_boot_local_nonprim : NULL,
        dependency && !cJSON_IsNull(dependency) ? strdup(dependency->valuestring) : NULL,
        derived_exit_code ? derived_exit_code->valuedouble : 0,
        eligible_time ? eligible_time->valuedouble : 0,
        end_time ? end_time->valuedouble : 0,
        excluded_nodes && !cJSON_IsNull(excluded_nodes) ? strdup(excluded_nodes->valuestring) : NULL,
        exit_code ? exit_code->valuedouble : 0,
        extra && !cJSON_IsNull(extra) ? strdup(extra->valuestring) : NULL,
        failed_node && !cJSON_IsNull(failed_node) ? strdup(failed_node->valuestring) : NULL,
        features && !cJSON_IsNull(features) ? strdup(features->valuestring) : NULL,
        federation_origin && !cJSON_IsNull(federation_origin) ? strdup(federation_origin->valuestring) : NULL,
        federation_siblings_active && !cJSON_IsNull(federation_siblings_active) ? strdup(federation_siblings_active->valuestring) : NULL,
        federation_siblings_viable && !cJSON_IsNull(federation_siblings_viable) ? strdup(federation_siblings_viable->valuestring) : NULL,
        gres_detail ? gres_detailList : NULL,
        group_id ? group_id->valuedouble : 0,
        group_name && !cJSON_IsNull(group_name) ? strdup(group_name->valuestring) : NULL,
        het_job_id ? het_job_id_local_nonprim : NULL,
        het_job_id_set && !cJSON_IsNull(het_job_id_set) ? strdup(het_job_id_set->valuestring) : NULL,
        het_job_offset ? het_job_offset_local_nonprim : NULL,
        job_id ? job_id->valuedouble : 0,
        job_resources ? job_resources_local_nonprim : NULL,
        job_size_str ? job_size_strList : NULL,
        job_state && !cJSON_IsNull(job_state) ? strdup(job_state->valuestring) : NULL,
        last_sched_evaluation ? last_sched_evaluation->valuedouble : 0,
        licenses && !cJSON_IsNull(licenses) ? strdup(licenses->valuestring) : NULL,
        mail_type ? mail_typeList : NULL,
        mail_user && !cJSON_IsNull(mail_user) ? strdup(mail_user->valuestring) : NULL,
        max_cpus ? max_cpus_local_nonprim : NULL,
        max_nodes ? max_nodes_local_nonprim : NULL,
        mcs_label && !cJSON_IsNull(mcs_label) ? strdup(mcs_label->valuestring) : NULL,
        memory_per_tres && !cJSON_IsNull(memory_per_tres) ? strdup(memory_per_tres->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        network && !cJSON_IsNull(network) ? strdup(network->valuestring) : NULL,
        nodes && !cJSON_IsNull(nodes) ? strdup(nodes->valuestring) : NULL,
        nice ? nice->valuedouble : 0,
        tasks_per_core ? tasks_per_core_local_nonprim : NULL,
        tasks_per_tres ? tasks_per_tres_local_nonprim : NULL,
        tasks_per_node ? tasks_per_node_local_nonprim : NULL,
        tasks_per_socket ? tasks_per_socket_local_nonprim : NULL,
        tasks_per_board ? tasks_per_board_local_nonprim : NULL,
        cpus ? cpus_local_nonprim : NULL,
        node_count ? node_count_local_nonprim : NULL,
        tasks ? tasks_local_nonprim : NULL,
        partition && !cJSON_IsNull(partition) ? strdup(partition->valuestring) : NULL,
        prefer && !cJSON_IsNull(prefer) ? strdup(prefer->valuestring) : NULL,
        memory_per_cpu ? memory_per_cpu_local_nonprim : NULL,
        memory_per_node ? memory_per_node_local_nonprim : NULL,
        minimum_cpus_per_node ? minimum_cpus_per_node_local_nonprim : NULL,
        minimum_tmp_disk_per_node ? minimum_tmp_disk_per_node_local_nonprim : NULL,
        power ? power_local_nonprim : NULL,
        preempt_time ? preempt_time->valuedouble : 0,
        preemptable_time ? preemptable_time->valuedouble : 0,
        pre_sus_time ? pre_sus_time->valuedouble : 0,
        priority ? priority_local_nonprim : NULL,
        profile ? profileList : NULL,
        qos && !cJSON_IsNull(qos) ? strdup(qos->valuestring) : NULL,
        reboot ? reboot->valueint : 0,
        required_nodes && !cJSON_IsNull(required_nodes) ? strdup(required_nodes->valuestring) : NULL,
        minimum_switches ? minimum_switches->valuedouble : 0,
        requeue ? requeue->valueint : 0,
        resize_time ? resize_time->valuedouble : 0,
        restart_cnt ? restart_cnt->valuedouble : 0,
        resv_name && !cJSON_IsNull(resv_name) ? strdup(resv_name->valuestring) : NULL,
        scheduled_nodes && !cJSON_IsNull(scheduled_nodes) ? strdup(scheduled_nodes->valuestring) : NULL,
        selinux_context && !cJSON_IsNull(selinux_context) ? strdup(selinux_context->valuestring) : NULL,
        shared ? sharedList : NULL,
        exclusive ? exclusiveList : NULL,
        show_flags ? show_flagsList : NULL,
        sockets_per_board ? sockets_per_board->valuedouble : 0,
        sockets_per_node ? sockets_per_node_local_nonprim : NULL,
        start_time ? start_time->valuedouble : 0,
        state_description && !cJSON_IsNull(state_description) ? strdup(state_description->valuestring) : NULL,
        state_reason && !cJSON_IsNull(state_reason) ? strdup(state_reason->valuestring) : NULL,
        standard_error && !cJSON_IsNull(standard_error) ? strdup(standard_error->valuestring) : NULL,
        standard_input && !cJSON_IsNull(standard_input) ? strdup(standard_input->valuestring) : NULL,
        standard_output && !cJSON_IsNull(standard_output) ? strdup(standard_output->valuestring) : NULL,
        submit_time ? submit_time->valuedouble : 0,
        suspend_time ? suspend_time->valuedouble : 0,
        system_comment && !cJSON_IsNull(system_comment) ? strdup(system_comment->valuestring) : NULL,
        time_limit ? time_limit_local_nonprim : NULL,
        time_minimum ? time_minimum_local_nonprim : NULL,
        threads_per_core ? threads_per_core_local_nonprim : NULL,
        tres_bind && !cJSON_IsNull(tres_bind) ? strdup(tres_bind->valuestring) : NULL,
        tres_freq && !cJSON_IsNull(tres_freq) ? strdup(tres_freq->valuestring) : NULL,
        tres_per_job && !cJSON_IsNull(tres_per_job) ? strdup(tres_per_job->valuestring) : NULL,
        tres_per_node && !cJSON_IsNull(tres_per_node) ? strdup(tres_per_node->valuestring) : NULL,
        tres_per_socket && !cJSON_IsNull(tres_per_socket) ? strdup(tres_per_socket->valuestring) : NULL,
        tres_per_task && !cJSON_IsNull(tres_per_task) ? strdup(tres_per_task->valuestring) : NULL,
        tres_req_str && !cJSON_IsNull(tres_req_str) ? strdup(tres_req_str->valuestring) : NULL,
        tres_alloc_str && !cJSON_IsNull(tres_alloc_str) ? strdup(tres_alloc_str->valuestring) : NULL,
        user_id ? user_id->valuedouble : 0,
        user_name && !cJSON_IsNull(user_name) ? strdup(user_name->valuestring) : NULL,
        maximum_switch_wait_time ? maximum_switch_wait_time->valuedouble : 0,
        wckey && !cJSON_IsNull(wckey) ? strdup(wckey->valuestring) : NULL,
        current_working_directory && !cJSON_IsNull(current_working_directory) ? strdup(current_working_directory->valuestring) : NULL
        );

    return v0_0_39_job_info_local_var;
end:
    if (array_job_id_local_nonprim) {
        v0_0_39_uint32_no_val_free(array_job_id_local_nonprim);
        array_job_id_local_nonprim = NULL;
    }
    if (array_task_id_local_nonprim) {
        v0_0_39_uint32_no_val_free(array_task_id_local_nonprim);
        array_task_id_local_nonprim = NULL;
    }
    if (array_max_tasks_local_nonprim) {
        v0_0_39_uint32_no_val_free(array_max_tasks_local_nonprim);
        array_max_tasks_local_nonprim = NULL;
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
    if (cores_per_socket_local_nonprim) {
        v0_0_39_uint16_no_val_free(cores_per_socket_local_nonprim);
        cores_per_socket_local_nonprim = NULL;
    }
    if (billable_tres_local_nonprim) {
        v0_0_39_float64_no_val_free(billable_tres_local_nonprim);
        billable_tres_local_nonprim = NULL;
    }
    if (cpus_per_task_local_nonprim) {
        v0_0_39_uint16_no_val_free(cpus_per_task_local_nonprim);
        cpus_per_task_local_nonprim = NULL;
    }
    if (cpu_frequency_minimum_local_nonprim) {
        v0_0_39_uint32_no_val_free(cpu_frequency_minimum_local_nonprim);
        cpu_frequency_minimum_local_nonprim = NULL;
    }
    if (cpu_frequency_maximum_local_nonprim) {
        v0_0_39_uint32_no_val_free(cpu_frequency_maximum_local_nonprim);
        cpu_frequency_maximum_local_nonprim = NULL;
    }
    if (cpu_frequency_governor_local_nonprim) {
        v0_0_39_uint32_no_val_free(cpu_frequency_governor_local_nonprim);
        cpu_frequency_governor_local_nonprim = NULL;
    }
    if (delay_boot_local_nonprim) {
        v0_0_39_uint32_no_val_free(delay_boot_local_nonprim);
        delay_boot_local_nonprim = NULL;
    }
    if (gres_detailList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, gres_detailList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(gres_detailList);
        gres_detailList = NULL;
    }
    if (het_job_id_local_nonprim) {
        v0_0_39_uint32_no_val_free(het_job_id_local_nonprim);
        het_job_id_local_nonprim = NULL;
    }
    if (het_job_offset_local_nonprim) {
        v0_0_39_uint32_no_val_free(het_job_offset_local_nonprim);
        het_job_offset_local_nonprim = NULL;
    }
    if (job_resources_local_nonprim) {
        v0_0_39_job_res_free(job_resources_local_nonprim);
        job_resources_local_nonprim = NULL;
    }
    if (job_size_strList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, job_size_strList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(job_size_strList);
        job_size_strList = NULL;
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
    if (max_cpus_local_nonprim) {
        v0_0_39_uint32_no_val_free(max_cpus_local_nonprim);
        max_cpus_local_nonprim = NULL;
    }
    if (max_nodes_local_nonprim) {
        v0_0_39_uint32_no_val_free(max_nodes_local_nonprim);
        max_nodes_local_nonprim = NULL;
    }
    if (tasks_per_core_local_nonprim) {
        v0_0_39_uint16_no_val_free(tasks_per_core_local_nonprim);
        tasks_per_core_local_nonprim = NULL;
    }
    if (tasks_per_tres_local_nonprim) {
        v0_0_39_uint16_no_val_free(tasks_per_tres_local_nonprim);
        tasks_per_tres_local_nonprim = NULL;
    }
    if (tasks_per_node_local_nonprim) {
        v0_0_39_uint16_no_val_free(tasks_per_node_local_nonprim);
        tasks_per_node_local_nonprim = NULL;
    }
    if (tasks_per_socket_local_nonprim) {
        v0_0_39_uint16_no_val_free(tasks_per_socket_local_nonprim);
        tasks_per_socket_local_nonprim = NULL;
    }
    if (tasks_per_board_local_nonprim) {
        v0_0_39_uint16_no_val_free(tasks_per_board_local_nonprim);
        tasks_per_board_local_nonprim = NULL;
    }
    if (cpus_local_nonprim) {
        v0_0_39_uint32_no_val_free(cpus_local_nonprim);
        cpus_local_nonprim = NULL;
    }
    if (node_count_local_nonprim) {
        v0_0_39_uint32_no_val_free(node_count_local_nonprim);
        node_count_local_nonprim = NULL;
    }
    if (tasks_local_nonprim) {
        v0_0_39_uint32_no_val_free(tasks_local_nonprim);
        tasks_local_nonprim = NULL;
    }
    if (memory_per_cpu_local_nonprim) {
        v0_0_39_uint64_no_val_free(memory_per_cpu_local_nonprim);
        memory_per_cpu_local_nonprim = NULL;
    }
    if (memory_per_node_local_nonprim) {
        v0_0_39_uint64_no_val_free(memory_per_node_local_nonprim);
        memory_per_node_local_nonprim = NULL;
    }
    if (minimum_cpus_per_node_local_nonprim) {
        v0_0_39_uint16_no_val_free(minimum_cpus_per_node_local_nonprim);
        minimum_cpus_per_node_local_nonprim = NULL;
    }
    if (minimum_tmp_disk_per_node_local_nonprim) {
        v0_0_39_uint32_no_val_free(minimum_tmp_disk_per_node_local_nonprim);
        minimum_tmp_disk_per_node_local_nonprim = NULL;
    }
    if (power_local_nonprim) {
        v0_0_39_job_info_power_free(power_local_nonprim);
        power_local_nonprim = NULL;
    }
    if (priority_local_nonprim) {
        v0_0_39_uint32_no_val_free(priority_local_nonprim);
        priority_local_nonprim = NULL;
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
    if (show_flagsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, show_flagsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(show_flagsList);
        show_flagsList = NULL;
    }
    if (sockets_per_node_local_nonprim) {
        v0_0_39_uint16_no_val_free(sockets_per_node_local_nonprim);
        sockets_per_node_local_nonprim = NULL;
    }
    if (time_limit_local_nonprim) {
        v0_0_39_uint32_no_val_free(time_limit_local_nonprim);
        time_limit_local_nonprim = NULL;
    }
    if (time_minimum_local_nonprim) {
        v0_0_39_uint32_no_val_free(time_minimum_local_nonprim);
        time_minimum_local_nonprim = NULL;
    }
    if (threads_per_core_local_nonprim) {
        v0_0_39_uint16_no_val_free(threads_per_core_local_nonprim);
        threads_per_core_local_nonprim = NULL;
    }
    return NULL;

}
