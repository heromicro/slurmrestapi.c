#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_38_job_response_properties.h"



v0_0_38_job_response_properties_t *v0_0_38_job_response_properties_create(
    char *account,
    long accrue_time,
    char *admin_comment,
    int array_job_id,
    int array_task_id,
    int array_max_tasks,
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
    int contiguous,
    char *core_spec,
    char *thread_spec,
    char *cores_per_socket,
    double billable_tres,
    char *cpus_per_task,
    char *cpu_frequency_minimum,
    char *cpu_frequency_maximum,
    char *cpu_frequency_governor,
    char *cpus_per_tres,
    int deadline,
    int delay_boot,
    char *dependency,
    int derived_exit_code,
    long eligible_time,
    long end_time,
    char *excluded_nodes,
    int exit_code,
    char *features,
    char *federation_origin,
    char *federation_siblings_active,
    char *federation_siblings_viable,
    list_t *gres_detail,
    int group_id,
    int job_id,
    v0_0_38_job_resources_t *job_resources,
    char *job_state,
    int last_sched_evaluation,
    char *licenses,
    int max_cpus,
    int max_nodes,
    char *mcs_label,
    char *memory_per_tres,
    char *name,
    char *nodes,
    int nice,
    int tasks_per_core,
    int tasks_per_socket,
    int tasks_per_board,
    int cpus,
    int node_count,
    int tasks,
    int het_job_id,
    char *het_job_id_set,
    int het_job_offset,
    char *partition,
    int memory_per_node,
    int memory_per_cpu,
    int minimum_cpus_per_node,
    int minimum_tmp_disk_per_node,
    long preempt_time,
    long pre_sus_time,
    int priority,
    list_t *profile,
    char *qos,
    int reboot,
    char *required_nodes,
    int requeue,
    long resize_time,
    int restart_cnt,
    char *resv_name,
    char *shared,
    list_t *show_flags,
    int sockets_per_board,
    int sockets_per_node,
    long start_time,
    char *state_description,
    char *state_reason,
    char *standard_error,
    char *standard_input,
    char *standard_output,
    long submit_time,
    long suspend_time,
    char *system_comment,
    long time_limit,
    long time_minimum,
    int threads_per_core,
    char *tres_bind,
    char *tres_freq,
    char *tres_per_job,
    char *tres_per_node,
    char *tres_per_socket,
    char *tres_per_task,
    char *tres_req_str,
    char *tres_alloc_str,
    long user_id,
    char *user_name,
    char *wckey,
    char *current_working_directory
    ) {
    v0_0_38_job_response_properties_t *v0_0_38_job_response_properties_local_var = malloc(sizeof(v0_0_38_job_response_properties_t));
    if (!v0_0_38_job_response_properties_local_var) {
        return NULL;
    }
    v0_0_38_job_response_properties_local_var->account = account;
    v0_0_38_job_response_properties_local_var->accrue_time = accrue_time;
    v0_0_38_job_response_properties_local_var->admin_comment = admin_comment;
    v0_0_38_job_response_properties_local_var->array_job_id = array_job_id;
    v0_0_38_job_response_properties_local_var->array_task_id = array_task_id;
    v0_0_38_job_response_properties_local_var->array_max_tasks = array_max_tasks;
    v0_0_38_job_response_properties_local_var->array_task_string = array_task_string;
    v0_0_38_job_response_properties_local_var->association_id = association_id;
    v0_0_38_job_response_properties_local_var->batch_features = batch_features;
    v0_0_38_job_response_properties_local_var->batch_flag = batch_flag;
    v0_0_38_job_response_properties_local_var->batch_host = batch_host;
    v0_0_38_job_response_properties_local_var->flags = flags;
    v0_0_38_job_response_properties_local_var->burst_buffer = burst_buffer;
    v0_0_38_job_response_properties_local_var->burst_buffer_state = burst_buffer_state;
    v0_0_38_job_response_properties_local_var->cluster = cluster;
    v0_0_38_job_response_properties_local_var->cluster_features = cluster_features;
    v0_0_38_job_response_properties_local_var->command = command;
    v0_0_38_job_response_properties_local_var->comment = comment;
    v0_0_38_job_response_properties_local_var->container = container;
    v0_0_38_job_response_properties_local_var->contiguous = contiguous;
    v0_0_38_job_response_properties_local_var->core_spec = core_spec;
    v0_0_38_job_response_properties_local_var->thread_spec = thread_spec;
    v0_0_38_job_response_properties_local_var->cores_per_socket = cores_per_socket;
    v0_0_38_job_response_properties_local_var->billable_tres = billable_tres;
    v0_0_38_job_response_properties_local_var->cpus_per_task = cpus_per_task;
    v0_0_38_job_response_properties_local_var->cpu_frequency_minimum = cpu_frequency_minimum;
    v0_0_38_job_response_properties_local_var->cpu_frequency_maximum = cpu_frequency_maximum;
    v0_0_38_job_response_properties_local_var->cpu_frequency_governor = cpu_frequency_governor;
    v0_0_38_job_response_properties_local_var->cpus_per_tres = cpus_per_tres;
    v0_0_38_job_response_properties_local_var->deadline = deadline;
    v0_0_38_job_response_properties_local_var->delay_boot = delay_boot;
    v0_0_38_job_response_properties_local_var->dependency = dependency;
    v0_0_38_job_response_properties_local_var->derived_exit_code = derived_exit_code;
    v0_0_38_job_response_properties_local_var->eligible_time = eligible_time;
    v0_0_38_job_response_properties_local_var->end_time = end_time;
    v0_0_38_job_response_properties_local_var->excluded_nodes = excluded_nodes;
    v0_0_38_job_response_properties_local_var->exit_code = exit_code;
    v0_0_38_job_response_properties_local_var->features = features;
    v0_0_38_job_response_properties_local_var->federation_origin = federation_origin;
    v0_0_38_job_response_properties_local_var->federation_siblings_active = federation_siblings_active;
    v0_0_38_job_response_properties_local_var->federation_siblings_viable = federation_siblings_viable;
    v0_0_38_job_response_properties_local_var->gres_detail = gres_detail;
    v0_0_38_job_response_properties_local_var->group_id = group_id;
    v0_0_38_job_response_properties_local_var->job_id = job_id;
    v0_0_38_job_response_properties_local_var->job_resources = job_resources;
    v0_0_38_job_response_properties_local_var->job_state = job_state;
    v0_0_38_job_response_properties_local_var->last_sched_evaluation = last_sched_evaluation;
    v0_0_38_job_response_properties_local_var->licenses = licenses;
    v0_0_38_job_response_properties_local_var->max_cpus = max_cpus;
    v0_0_38_job_response_properties_local_var->max_nodes = max_nodes;
    v0_0_38_job_response_properties_local_var->mcs_label = mcs_label;
    v0_0_38_job_response_properties_local_var->memory_per_tres = memory_per_tres;
    v0_0_38_job_response_properties_local_var->name = name;
    v0_0_38_job_response_properties_local_var->nodes = nodes;
    v0_0_38_job_response_properties_local_var->nice = nice;
    v0_0_38_job_response_properties_local_var->tasks_per_core = tasks_per_core;
    v0_0_38_job_response_properties_local_var->tasks_per_socket = tasks_per_socket;
    v0_0_38_job_response_properties_local_var->tasks_per_board = tasks_per_board;
    v0_0_38_job_response_properties_local_var->cpus = cpus;
    v0_0_38_job_response_properties_local_var->node_count = node_count;
    v0_0_38_job_response_properties_local_var->tasks = tasks;
    v0_0_38_job_response_properties_local_var->het_job_id = het_job_id;
    v0_0_38_job_response_properties_local_var->het_job_id_set = het_job_id_set;
    v0_0_38_job_response_properties_local_var->het_job_offset = het_job_offset;
    v0_0_38_job_response_properties_local_var->partition = partition;
    v0_0_38_job_response_properties_local_var->memory_per_node = memory_per_node;
    v0_0_38_job_response_properties_local_var->memory_per_cpu = memory_per_cpu;
    v0_0_38_job_response_properties_local_var->minimum_cpus_per_node = minimum_cpus_per_node;
    v0_0_38_job_response_properties_local_var->minimum_tmp_disk_per_node = minimum_tmp_disk_per_node;
    v0_0_38_job_response_properties_local_var->preempt_time = preempt_time;
    v0_0_38_job_response_properties_local_var->pre_sus_time = pre_sus_time;
    v0_0_38_job_response_properties_local_var->priority = priority;
    v0_0_38_job_response_properties_local_var->profile = profile;
    v0_0_38_job_response_properties_local_var->qos = qos;
    v0_0_38_job_response_properties_local_var->reboot = reboot;
    v0_0_38_job_response_properties_local_var->required_nodes = required_nodes;
    v0_0_38_job_response_properties_local_var->requeue = requeue;
    v0_0_38_job_response_properties_local_var->resize_time = resize_time;
    v0_0_38_job_response_properties_local_var->restart_cnt = restart_cnt;
    v0_0_38_job_response_properties_local_var->resv_name = resv_name;
    v0_0_38_job_response_properties_local_var->shared = shared;
    v0_0_38_job_response_properties_local_var->show_flags = show_flags;
    v0_0_38_job_response_properties_local_var->sockets_per_board = sockets_per_board;
    v0_0_38_job_response_properties_local_var->sockets_per_node = sockets_per_node;
    v0_0_38_job_response_properties_local_var->start_time = start_time;
    v0_0_38_job_response_properties_local_var->state_description = state_description;
    v0_0_38_job_response_properties_local_var->state_reason = state_reason;
    v0_0_38_job_response_properties_local_var->standard_error = standard_error;
    v0_0_38_job_response_properties_local_var->standard_input = standard_input;
    v0_0_38_job_response_properties_local_var->standard_output = standard_output;
    v0_0_38_job_response_properties_local_var->submit_time = submit_time;
    v0_0_38_job_response_properties_local_var->suspend_time = suspend_time;
    v0_0_38_job_response_properties_local_var->system_comment = system_comment;
    v0_0_38_job_response_properties_local_var->time_limit = time_limit;
    v0_0_38_job_response_properties_local_var->time_minimum = time_minimum;
    v0_0_38_job_response_properties_local_var->threads_per_core = threads_per_core;
    v0_0_38_job_response_properties_local_var->tres_bind = tres_bind;
    v0_0_38_job_response_properties_local_var->tres_freq = tres_freq;
    v0_0_38_job_response_properties_local_var->tres_per_job = tres_per_job;
    v0_0_38_job_response_properties_local_var->tres_per_node = tres_per_node;
    v0_0_38_job_response_properties_local_var->tres_per_socket = tres_per_socket;
    v0_0_38_job_response_properties_local_var->tres_per_task = tres_per_task;
    v0_0_38_job_response_properties_local_var->tres_req_str = tres_req_str;
    v0_0_38_job_response_properties_local_var->tres_alloc_str = tres_alloc_str;
    v0_0_38_job_response_properties_local_var->user_id = user_id;
    v0_0_38_job_response_properties_local_var->user_name = user_name;
    v0_0_38_job_response_properties_local_var->wckey = wckey;
    v0_0_38_job_response_properties_local_var->current_working_directory = current_working_directory;

    return v0_0_38_job_response_properties_local_var;
}


void v0_0_38_job_response_properties_free(v0_0_38_job_response_properties_t *v0_0_38_job_response_properties) {
    if(NULL == v0_0_38_job_response_properties){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_38_job_response_properties->account) {
        free(v0_0_38_job_response_properties->account);
        v0_0_38_job_response_properties->account = NULL;
    }
    if (v0_0_38_job_response_properties->admin_comment) {
        free(v0_0_38_job_response_properties->admin_comment);
        v0_0_38_job_response_properties->admin_comment = NULL;
    }
    if (v0_0_38_job_response_properties->array_task_string) {
        free(v0_0_38_job_response_properties->array_task_string);
        v0_0_38_job_response_properties->array_task_string = NULL;
    }
    if (v0_0_38_job_response_properties->batch_features) {
        free(v0_0_38_job_response_properties->batch_features);
        v0_0_38_job_response_properties->batch_features = NULL;
    }
    if (v0_0_38_job_response_properties->batch_host) {
        free(v0_0_38_job_response_properties->batch_host);
        v0_0_38_job_response_properties->batch_host = NULL;
    }
    if (v0_0_38_job_response_properties->flags) {
        list_ForEach(listEntry, v0_0_38_job_response_properties->flags) {
            free(listEntry->data);
        }
        list_freeList(v0_0_38_job_response_properties->flags);
        v0_0_38_job_response_properties->flags = NULL;
    }
    if (v0_0_38_job_response_properties->burst_buffer) {
        free(v0_0_38_job_response_properties->burst_buffer);
        v0_0_38_job_response_properties->burst_buffer = NULL;
    }
    if (v0_0_38_job_response_properties->burst_buffer_state) {
        free(v0_0_38_job_response_properties->burst_buffer_state);
        v0_0_38_job_response_properties->burst_buffer_state = NULL;
    }
    if (v0_0_38_job_response_properties->cluster) {
        free(v0_0_38_job_response_properties->cluster);
        v0_0_38_job_response_properties->cluster = NULL;
    }
    if (v0_0_38_job_response_properties->cluster_features) {
        free(v0_0_38_job_response_properties->cluster_features);
        v0_0_38_job_response_properties->cluster_features = NULL;
    }
    if (v0_0_38_job_response_properties->command) {
        free(v0_0_38_job_response_properties->command);
        v0_0_38_job_response_properties->command = NULL;
    }
    if (v0_0_38_job_response_properties->comment) {
        free(v0_0_38_job_response_properties->comment);
        v0_0_38_job_response_properties->comment = NULL;
    }
    if (v0_0_38_job_response_properties->container) {
        free(v0_0_38_job_response_properties->container);
        v0_0_38_job_response_properties->container = NULL;
    }
    if (v0_0_38_job_response_properties->core_spec) {
        free(v0_0_38_job_response_properties->core_spec);
        v0_0_38_job_response_properties->core_spec = NULL;
    }
    if (v0_0_38_job_response_properties->thread_spec) {
        free(v0_0_38_job_response_properties->thread_spec);
        v0_0_38_job_response_properties->thread_spec = NULL;
    }
    if (v0_0_38_job_response_properties->cores_per_socket) {
        free(v0_0_38_job_response_properties->cores_per_socket);
        v0_0_38_job_response_properties->cores_per_socket = NULL;
    }
    if (v0_0_38_job_response_properties->cpus_per_task) {
        free(v0_0_38_job_response_properties->cpus_per_task);
        v0_0_38_job_response_properties->cpus_per_task = NULL;
    }
    if (v0_0_38_job_response_properties->cpu_frequency_minimum) {
        free(v0_0_38_job_response_properties->cpu_frequency_minimum);
        v0_0_38_job_response_properties->cpu_frequency_minimum = NULL;
    }
    if (v0_0_38_job_response_properties->cpu_frequency_maximum) {
        free(v0_0_38_job_response_properties->cpu_frequency_maximum);
        v0_0_38_job_response_properties->cpu_frequency_maximum = NULL;
    }
    if (v0_0_38_job_response_properties->cpu_frequency_governor) {
        free(v0_0_38_job_response_properties->cpu_frequency_governor);
        v0_0_38_job_response_properties->cpu_frequency_governor = NULL;
    }
    if (v0_0_38_job_response_properties->cpus_per_tres) {
        free(v0_0_38_job_response_properties->cpus_per_tres);
        v0_0_38_job_response_properties->cpus_per_tres = NULL;
    }
    if (v0_0_38_job_response_properties->dependency) {
        free(v0_0_38_job_response_properties->dependency);
        v0_0_38_job_response_properties->dependency = NULL;
    }
    if (v0_0_38_job_response_properties->excluded_nodes) {
        free(v0_0_38_job_response_properties->excluded_nodes);
        v0_0_38_job_response_properties->excluded_nodes = NULL;
    }
    if (v0_0_38_job_response_properties->features) {
        free(v0_0_38_job_response_properties->features);
        v0_0_38_job_response_properties->features = NULL;
    }
    if (v0_0_38_job_response_properties->federation_origin) {
        free(v0_0_38_job_response_properties->federation_origin);
        v0_0_38_job_response_properties->federation_origin = NULL;
    }
    if (v0_0_38_job_response_properties->federation_siblings_active) {
        free(v0_0_38_job_response_properties->federation_siblings_active);
        v0_0_38_job_response_properties->federation_siblings_active = NULL;
    }
    if (v0_0_38_job_response_properties->federation_siblings_viable) {
        free(v0_0_38_job_response_properties->federation_siblings_viable);
        v0_0_38_job_response_properties->federation_siblings_viable = NULL;
    }
    if (v0_0_38_job_response_properties->gres_detail) {
        list_ForEach(listEntry, v0_0_38_job_response_properties->gres_detail) {
            free(listEntry->data);
        }
        list_freeList(v0_0_38_job_response_properties->gres_detail);
        v0_0_38_job_response_properties->gres_detail = NULL;
    }
    if (v0_0_38_job_response_properties->job_resources) {
        v0_0_38_job_resources_free(v0_0_38_job_response_properties->job_resources);
        v0_0_38_job_response_properties->job_resources = NULL;
    }
    if (v0_0_38_job_response_properties->job_state) {
        free(v0_0_38_job_response_properties->job_state);
        v0_0_38_job_response_properties->job_state = NULL;
    }
    if (v0_0_38_job_response_properties->licenses) {
        free(v0_0_38_job_response_properties->licenses);
        v0_0_38_job_response_properties->licenses = NULL;
    }
    if (v0_0_38_job_response_properties->mcs_label) {
        free(v0_0_38_job_response_properties->mcs_label);
        v0_0_38_job_response_properties->mcs_label = NULL;
    }
    if (v0_0_38_job_response_properties->memory_per_tres) {
        free(v0_0_38_job_response_properties->memory_per_tres);
        v0_0_38_job_response_properties->memory_per_tres = NULL;
    }
    if (v0_0_38_job_response_properties->name) {
        free(v0_0_38_job_response_properties->name);
        v0_0_38_job_response_properties->name = NULL;
    }
    if (v0_0_38_job_response_properties->nodes) {
        free(v0_0_38_job_response_properties->nodes);
        v0_0_38_job_response_properties->nodes = NULL;
    }
    if (v0_0_38_job_response_properties->het_job_id_set) {
        free(v0_0_38_job_response_properties->het_job_id_set);
        v0_0_38_job_response_properties->het_job_id_set = NULL;
    }
    if (v0_0_38_job_response_properties->partition) {
        free(v0_0_38_job_response_properties->partition);
        v0_0_38_job_response_properties->partition = NULL;
    }
    if (v0_0_38_job_response_properties->profile) {
        list_ForEach(listEntry, v0_0_38_job_response_properties->profile) {
            free(listEntry->data);
        }
        list_freeList(v0_0_38_job_response_properties->profile);
        v0_0_38_job_response_properties->profile = NULL;
    }
    if (v0_0_38_job_response_properties->qos) {
        free(v0_0_38_job_response_properties->qos);
        v0_0_38_job_response_properties->qos = NULL;
    }
    if (v0_0_38_job_response_properties->required_nodes) {
        free(v0_0_38_job_response_properties->required_nodes);
        v0_0_38_job_response_properties->required_nodes = NULL;
    }
    if (v0_0_38_job_response_properties->resv_name) {
        free(v0_0_38_job_response_properties->resv_name);
        v0_0_38_job_response_properties->resv_name = NULL;
    }
    if (v0_0_38_job_response_properties->shared) {
        free(v0_0_38_job_response_properties->shared);
        v0_0_38_job_response_properties->shared = NULL;
    }
    if (v0_0_38_job_response_properties->show_flags) {
        list_ForEach(listEntry, v0_0_38_job_response_properties->show_flags) {
            free(listEntry->data);
        }
        list_freeList(v0_0_38_job_response_properties->show_flags);
        v0_0_38_job_response_properties->show_flags = NULL;
    }
    if (v0_0_38_job_response_properties->state_description) {
        free(v0_0_38_job_response_properties->state_description);
        v0_0_38_job_response_properties->state_description = NULL;
    }
    if (v0_0_38_job_response_properties->state_reason) {
        free(v0_0_38_job_response_properties->state_reason);
        v0_0_38_job_response_properties->state_reason = NULL;
    }
    if (v0_0_38_job_response_properties->standard_error) {
        free(v0_0_38_job_response_properties->standard_error);
        v0_0_38_job_response_properties->standard_error = NULL;
    }
    if (v0_0_38_job_response_properties->standard_input) {
        free(v0_0_38_job_response_properties->standard_input);
        v0_0_38_job_response_properties->standard_input = NULL;
    }
    if (v0_0_38_job_response_properties->standard_output) {
        free(v0_0_38_job_response_properties->standard_output);
        v0_0_38_job_response_properties->standard_output = NULL;
    }
    if (v0_0_38_job_response_properties->system_comment) {
        free(v0_0_38_job_response_properties->system_comment);
        v0_0_38_job_response_properties->system_comment = NULL;
    }
    if (v0_0_38_job_response_properties->tres_bind) {
        free(v0_0_38_job_response_properties->tres_bind);
        v0_0_38_job_response_properties->tres_bind = NULL;
    }
    if (v0_0_38_job_response_properties->tres_freq) {
        free(v0_0_38_job_response_properties->tres_freq);
        v0_0_38_job_response_properties->tres_freq = NULL;
    }
    if (v0_0_38_job_response_properties->tres_per_job) {
        free(v0_0_38_job_response_properties->tres_per_job);
        v0_0_38_job_response_properties->tres_per_job = NULL;
    }
    if (v0_0_38_job_response_properties->tres_per_node) {
        free(v0_0_38_job_response_properties->tres_per_node);
        v0_0_38_job_response_properties->tres_per_node = NULL;
    }
    if (v0_0_38_job_response_properties->tres_per_socket) {
        free(v0_0_38_job_response_properties->tres_per_socket);
        v0_0_38_job_response_properties->tres_per_socket = NULL;
    }
    if (v0_0_38_job_response_properties->tres_per_task) {
        free(v0_0_38_job_response_properties->tres_per_task);
        v0_0_38_job_response_properties->tres_per_task = NULL;
    }
    if (v0_0_38_job_response_properties->tres_req_str) {
        free(v0_0_38_job_response_properties->tres_req_str);
        v0_0_38_job_response_properties->tres_req_str = NULL;
    }
    if (v0_0_38_job_response_properties->tres_alloc_str) {
        free(v0_0_38_job_response_properties->tres_alloc_str);
        v0_0_38_job_response_properties->tres_alloc_str = NULL;
    }
    if (v0_0_38_job_response_properties->user_name) {
        free(v0_0_38_job_response_properties->user_name);
        v0_0_38_job_response_properties->user_name = NULL;
    }
    if (v0_0_38_job_response_properties->wckey) {
        free(v0_0_38_job_response_properties->wckey);
        v0_0_38_job_response_properties->wckey = NULL;
    }
    if (v0_0_38_job_response_properties->current_working_directory) {
        free(v0_0_38_job_response_properties->current_working_directory);
        v0_0_38_job_response_properties->current_working_directory = NULL;
    }
    free(v0_0_38_job_response_properties);
}

cJSON *v0_0_38_job_response_properties_convertToJSON(v0_0_38_job_response_properties_t *v0_0_38_job_response_properties) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_38_job_response_properties->account
    if(v0_0_38_job_response_properties->account) {
    if(cJSON_AddStringToObject(item, "account", v0_0_38_job_response_properties->account) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->accrue_time
    if(v0_0_38_job_response_properties->accrue_time) {
    if(cJSON_AddNumberToObject(item, "accrue_time", v0_0_38_job_response_properties->accrue_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->admin_comment
    if(v0_0_38_job_response_properties->admin_comment) {
    if(cJSON_AddStringToObject(item, "admin_comment", v0_0_38_job_response_properties->admin_comment) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->array_job_id
    if(v0_0_38_job_response_properties->array_job_id) {
    if(cJSON_AddNumberToObject(item, "array_job_id", v0_0_38_job_response_properties->array_job_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->array_task_id
    if(v0_0_38_job_response_properties->array_task_id) {
    if(cJSON_AddNumberToObject(item, "array_task_id", v0_0_38_job_response_properties->array_task_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->array_max_tasks
    if(v0_0_38_job_response_properties->array_max_tasks) {
    if(cJSON_AddNumberToObject(item, "array_max_tasks", v0_0_38_job_response_properties->array_max_tasks) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->array_task_string
    if(v0_0_38_job_response_properties->array_task_string) {
    if(cJSON_AddStringToObject(item, "array_task_string", v0_0_38_job_response_properties->array_task_string) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->association_id
    if(v0_0_38_job_response_properties->association_id) {
    if(cJSON_AddNumberToObject(item, "association_id", v0_0_38_job_response_properties->association_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->batch_features
    if(v0_0_38_job_response_properties->batch_features) {
    if(cJSON_AddStringToObject(item, "batch_features", v0_0_38_job_response_properties->batch_features) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->batch_flag
    if(v0_0_38_job_response_properties->batch_flag) {
    if(cJSON_AddBoolToObject(item, "batch_flag", v0_0_38_job_response_properties->batch_flag) == NULL) {
    goto fail; //Bool
    }
    }


    // v0_0_38_job_response_properties->batch_host
    if(v0_0_38_job_response_properties->batch_host) {
    if(cJSON_AddStringToObject(item, "batch_host", v0_0_38_job_response_properties->batch_host) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->flags
    if(v0_0_38_job_response_properties->flags) {
    cJSON *flags = cJSON_AddArrayToObject(item, "flags");
    if(flags == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *flagsListEntry;
    list_ForEach(flagsListEntry, v0_0_38_job_response_properties->flags) {
    if(cJSON_AddStringToObject(flags, "", (char*)flagsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_38_job_response_properties->burst_buffer
    if(v0_0_38_job_response_properties->burst_buffer) {
    if(cJSON_AddStringToObject(item, "burst_buffer", v0_0_38_job_response_properties->burst_buffer) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->burst_buffer_state
    if(v0_0_38_job_response_properties->burst_buffer_state) {
    if(cJSON_AddStringToObject(item, "burst_buffer_state", v0_0_38_job_response_properties->burst_buffer_state) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->cluster
    if(v0_0_38_job_response_properties->cluster) {
    if(cJSON_AddStringToObject(item, "cluster", v0_0_38_job_response_properties->cluster) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->cluster_features
    if(v0_0_38_job_response_properties->cluster_features) {
    if(cJSON_AddStringToObject(item, "cluster_features", v0_0_38_job_response_properties->cluster_features) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->command
    if(v0_0_38_job_response_properties->command) {
    if(cJSON_AddStringToObject(item, "command", v0_0_38_job_response_properties->command) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->comment
    if(v0_0_38_job_response_properties->comment) {
    if(cJSON_AddStringToObject(item, "comment", v0_0_38_job_response_properties->comment) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->container
    if(v0_0_38_job_response_properties->container) {
    if(cJSON_AddStringToObject(item, "container", v0_0_38_job_response_properties->container) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->contiguous
    if(v0_0_38_job_response_properties->contiguous) {
    if(cJSON_AddBoolToObject(item, "contiguous", v0_0_38_job_response_properties->contiguous) == NULL) {
    goto fail; //Bool
    }
    }


    // v0_0_38_job_response_properties->core_spec
    if(v0_0_38_job_response_properties->core_spec) {
    if(cJSON_AddStringToObject(item, "core_spec", v0_0_38_job_response_properties->core_spec) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->thread_spec
    if(v0_0_38_job_response_properties->thread_spec) {
    if(cJSON_AddStringToObject(item, "thread_spec", v0_0_38_job_response_properties->thread_spec) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->cores_per_socket
    if(v0_0_38_job_response_properties->cores_per_socket) {
    if(cJSON_AddStringToObject(item, "cores_per_socket", v0_0_38_job_response_properties->cores_per_socket) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->billable_tres
    if(v0_0_38_job_response_properties->billable_tres) {
    if(cJSON_AddNumberToObject(item, "billable_tres", v0_0_38_job_response_properties->billable_tres) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->cpus_per_task
    if(v0_0_38_job_response_properties->cpus_per_task) {
    if(cJSON_AddStringToObject(item, "cpus_per_task", v0_0_38_job_response_properties->cpus_per_task) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->cpu_frequency_minimum
    if(v0_0_38_job_response_properties->cpu_frequency_minimum) {
    if(cJSON_AddStringToObject(item, "cpu_frequency_minimum", v0_0_38_job_response_properties->cpu_frequency_minimum) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->cpu_frequency_maximum
    if(v0_0_38_job_response_properties->cpu_frequency_maximum) {
    if(cJSON_AddStringToObject(item, "cpu_frequency_maximum", v0_0_38_job_response_properties->cpu_frequency_maximum) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->cpu_frequency_governor
    if(v0_0_38_job_response_properties->cpu_frequency_governor) {
    if(cJSON_AddStringToObject(item, "cpu_frequency_governor", v0_0_38_job_response_properties->cpu_frequency_governor) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->cpus_per_tres
    if(v0_0_38_job_response_properties->cpus_per_tres) {
    if(cJSON_AddStringToObject(item, "cpus_per_tres", v0_0_38_job_response_properties->cpus_per_tres) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->deadline
    if(v0_0_38_job_response_properties->deadline) {
    if(cJSON_AddNumberToObject(item, "deadline", v0_0_38_job_response_properties->deadline) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->delay_boot
    if(v0_0_38_job_response_properties->delay_boot) {
    if(cJSON_AddNumberToObject(item, "delay_boot", v0_0_38_job_response_properties->delay_boot) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->dependency
    if(v0_0_38_job_response_properties->dependency) {
    if(cJSON_AddStringToObject(item, "dependency", v0_0_38_job_response_properties->dependency) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->derived_exit_code
    if(v0_0_38_job_response_properties->derived_exit_code) {
    if(cJSON_AddNumberToObject(item, "derived_exit_code", v0_0_38_job_response_properties->derived_exit_code) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->eligible_time
    if(v0_0_38_job_response_properties->eligible_time) {
    if(cJSON_AddNumberToObject(item, "eligible_time", v0_0_38_job_response_properties->eligible_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->end_time
    if(v0_0_38_job_response_properties->end_time) {
    if(cJSON_AddNumberToObject(item, "end_time", v0_0_38_job_response_properties->end_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->excluded_nodes
    if(v0_0_38_job_response_properties->excluded_nodes) {
    if(cJSON_AddStringToObject(item, "excluded_nodes", v0_0_38_job_response_properties->excluded_nodes) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->exit_code
    if(v0_0_38_job_response_properties->exit_code) {
    if(cJSON_AddNumberToObject(item, "exit_code", v0_0_38_job_response_properties->exit_code) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->features
    if(v0_0_38_job_response_properties->features) {
    if(cJSON_AddStringToObject(item, "features", v0_0_38_job_response_properties->features) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->federation_origin
    if(v0_0_38_job_response_properties->federation_origin) {
    if(cJSON_AddStringToObject(item, "federation_origin", v0_0_38_job_response_properties->federation_origin) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->federation_siblings_active
    if(v0_0_38_job_response_properties->federation_siblings_active) {
    if(cJSON_AddStringToObject(item, "federation_siblings_active", v0_0_38_job_response_properties->federation_siblings_active) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->federation_siblings_viable
    if(v0_0_38_job_response_properties->federation_siblings_viable) {
    if(cJSON_AddStringToObject(item, "federation_siblings_viable", v0_0_38_job_response_properties->federation_siblings_viable) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->gres_detail
    if(v0_0_38_job_response_properties->gres_detail) {
    cJSON *gres_detail = cJSON_AddArrayToObject(item, "gres_detail");
    if(gres_detail == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *gres_detailListEntry;
    list_ForEach(gres_detailListEntry, v0_0_38_job_response_properties->gres_detail) {
    if(cJSON_AddStringToObject(gres_detail, "", (char*)gres_detailListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_38_job_response_properties->group_id
    if(v0_0_38_job_response_properties->group_id) {
    if(cJSON_AddNumberToObject(item, "group_id", v0_0_38_job_response_properties->group_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->job_id
    if(v0_0_38_job_response_properties->job_id) {
    if(cJSON_AddNumberToObject(item, "job_id", v0_0_38_job_response_properties->job_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->job_resources
    if(v0_0_38_job_response_properties->job_resources) {
    cJSON *job_resources_local_JSON = v0_0_38_job_resources_convertToJSON(v0_0_38_job_response_properties->job_resources);
    if(job_resources_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "job_resources", job_resources_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_38_job_response_properties->job_state
    if(v0_0_38_job_response_properties->job_state) {
    if(cJSON_AddStringToObject(item, "job_state", v0_0_38_job_response_properties->job_state) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->last_sched_evaluation
    if(v0_0_38_job_response_properties->last_sched_evaluation) {
    if(cJSON_AddNumberToObject(item, "last_sched_evaluation", v0_0_38_job_response_properties->last_sched_evaluation) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->licenses
    if(v0_0_38_job_response_properties->licenses) {
    if(cJSON_AddStringToObject(item, "licenses", v0_0_38_job_response_properties->licenses) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->max_cpus
    if(v0_0_38_job_response_properties->max_cpus) {
    if(cJSON_AddNumberToObject(item, "max_cpus", v0_0_38_job_response_properties->max_cpus) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->max_nodes
    if(v0_0_38_job_response_properties->max_nodes) {
    if(cJSON_AddNumberToObject(item, "max_nodes", v0_0_38_job_response_properties->max_nodes) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->mcs_label
    if(v0_0_38_job_response_properties->mcs_label) {
    if(cJSON_AddStringToObject(item, "mcs_label", v0_0_38_job_response_properties->mcs_label) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->memory_per_tres
    if(v0_0_38_job_response_properties->memory_per_tres) {
    if(cJSON_AddStringToObject(item, "memory_per_tres", v0_0_38_job_response_properties->memory_per_tres) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->name
    if(v0_0_38_job_response_properties->name) {
    if(cJSON_AddStringToObject(item, "name", v0_0_38_job_response_properties->name) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->nodes
    if(v0_0_38_job_response_properties->nodes) {
    if(cJSON_AddStringToObject(item, "nodes", v0_0_38_job_response_properties->nodes) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->nice
    if(v0_0_38_job_response_properties->nice) {
    if(cJSON_AddNumberToObject(item, "nice", v0_0_38_job_response_properties->nice) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->tasks_per_core
    if(v0_0_38_job_response_properties->tasks_per_core) {
    if(cJSON_AddNumberToObject(item, "tasks_per_core", v0_0_38_job_response_properties->tasks_per_core) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->tasks_per_socket
    if(v0_0_38_job_response_properties->tasks_per_socket) {
    if(cJSON_AddNumberToObject(item, "tasks_per_socket", v0_0_38_job_response_properties->tasks_per_socket) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->tasks_per_board
    if(v0_0_38_job_response_properties->tasks_per_board) {
    if(cJSON_AddNumberToObject(item, "tasks_per_board", v0_0_38_job_response_properties->tasks_per_board) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->cpus
    if(v0_0_38_job_response_properties->cpus) {
    if(cJSON_AddNumberToObject(item, "cpus", v0_0_38_job_response_properties->cpus) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->node_count
    if(v0_0_38_job_response_properties->node_count) {
    if(cJSON_AddNumberToObject(item, "node_count", v0_0_38_job_response_properties->node_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->tasks
    if(v0_0_38_job_response_properties->tasks) {
    if(cJSON_AddNumberToObject(item, "tasks", v0_0_38_job_response_properties->tasks) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->het_job_id
    if(v0_0_38_job_response_properties->het_job_id) {
    if(cJSON_AddNumberToObject(item, "het_job_id", v0_0_38_job_response_properties->het_job_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->het_job_id_set
    if(v0_0_38_job_response_properties->het_job_id_set) {
    if(cJSON_AddStringToObject(item, "het_job_id_set", v0_0_38_job_response_properties->het_job_id_set) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->het_job_offset
    if(v0_0_38_job_response_properties->het_job_offset) {
    if(cJSON_AddNumberToObject(item, "het_job_offset", v0_0_38_job_response_properties->het_job_offset) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->partition
    if(v0_0_38_job_response_properties->partition) {
    if(cJSON_AddStringToObject(item, "partition", v0_0_38_job_response_properties->partition) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->memory_per_node
    if(v0_0_38_job_response_properties->memory_per_node) {
    if(cJSON_AddNumberToObject(item, "memory_per_node", v0_0_38_job_response_properties->memory_per_node) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->memory_per_cpu
    if(v0_0_38_job_response_properties->memory_per_cpu) {
    if(cJSON_AddNumberToObject(item, "memory_per_cpu", v0_0_38_job_response_properties->memory_per_cpu) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->minimum_cpus_per_node
    if(v0_0_38_job_response_properties->minimum_cpus_per_node) {
    if(cJSON_AddNumberToObject(item, "minimum_cpus_per_node", v0_0_38_job_response_properties->minimum_cpus_per_node) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->minimum_tmp_disk_per_node
    if(v0_0_38_job_response_properties->minimum_tmp_disk_per_node) {
    if(cJSON_AddNumberToObject(item, "minimum_tmp_disk_per_node", v0_0_38_job_response_properties->minimum_tmp_disk_per_node) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->preempt_time
    if(v0_0_38_job_response_properties->preempt_time) {
    if(cJSON_AddNumberToObject(item, "preempt_time", v0_0_38_job_response_properties->preempt_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->pre_sus_time
    if(v0_0_38_job_response_properties->pre_sus_time) {
    if(cJSON_AddNumberToObject(item, "pre_sus_time", v0_0_38_job_response_properties->pre_sus_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->priority
    if(v0_0_38_job_response_properties->priority) {
    if(cJSON_AddNumberToObject(item, "priority", v0_0_38_job_response_properties->priority) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->profile
    if(v0_0_38_job_response_properties->profile) {
    cJSON *profile = cJSON_AddArrayToObject(item, "profile");
    if(profile == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *profileListEntry;
    list_ForEach(profileListEntry, v0_0_38_job_response_properties->profile) {
    if(cJSON_AddStringToObject(profile, "", (char*)profileListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_38_job_response_properties->qos
    if(v0_0_38_job_response_properties->qos) {
    if(cJSON_AddStringToObject(item, "qos", v0_0_38_job_response_properties->qos) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->reboot
    if(v0_0_38_job_response_properties->reboot) {
    if(cJSON_AddBoolToObject(item, "reboot", v0_0_38_job_response_properties->reboot) == NULL) {
    goto fail; //Bool
    }
    }


    // v0_0_38_job_response_properties->required_nodes
    if(v0_0_38_job_response_properties->required_nodes) {
    if(cJSON_AddStringToObject(item, "required_nodes", v0_0_38_job_response_properties->required_nodes) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->requeue
    if(v0_0_38_job_response_properties->requeue) {
    if(cJSON_AddBoolToObject(item, "requeue", v0_0_38_job_response_properties->requeue) == NULL) {
    goto fail; //Bool
    }
    }


    // v0_0_38_job_response_properties->resize_time
    if(v0_0_38_job_response_properties->resize_time) {
    if(cJSON_AddNumberToObject(item, "resize_time", v0_0_38_job_response_properties->resize_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->restart_cnt
    if(v0_0_38_job_response_properties->restart_cnt) {
    if(cJSON_AddNumberToObject(item, "restart_cnt", v0_0_38_job_response_properties->restart_cnt) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->resv_name
    if(v0_0_38_job_response_properties->resv_name) {
    if(cJSON_AddStringToObject(item, "resv_name", v0_0_38_job_response_properties->resv_name) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->shared
    if(v0_0_38_job_response_properties->shared) {
    if(cJSON_AddStringToObject(item, "shared", v0_0_38_job_response_properties->shared) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->show_flags
    if(v0_0_38_job_response_properties->show_flags) {
    cJSON *show_flags = cJSON_AddArrayToObject(item, "show_flags");
    if(show_flags == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *show_flagsListEntry;
    list_ForEach(show_flagsListEntry, v0_0_38_job_response_properties->show_flags) {
    if(cJSON_AddStringToObject(show_flags, "", (char*)show_flagsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_38_job_response_properties->sockets_per_board
    if(v0_0_38_job_response_properties->sockets_per_board) {
    if(cJSON_AddNumberToObject(item, "sockets_per_board", v0_0_38_job_response_properties->sockets_per_board) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->sockets_per_node
    if(v0_0_38_job_response_properties->sockets_per_node) {
    if(cJSON_AddNumberToObject(item, "sockets_per_node", v0_0_38_job_response_properties->sockets_per_node) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->start_time
    if(v0_0_38_job_response_properties->start_time) {
    if(cJSON_AddNumberToObject(item, "start_time", v0_0_38_job_response_properties->start_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->state_description
    if(v0_0_38_job_response_properties->state_description) {
    if(cJSON_AddStringToObject(item, "state_description", v0_0_38_job_response_properties->state_description) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->state_reason
    if(v0_0_38_job_response_properties->state_reason) {
    if(cJSON_AddStringToObject(item, "state_reason", v0_0_38_job_response_properties->state_reason) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->standard_error
    if(v0_0_38_job_response_properties->standard_error) {
    if(cJSON_AddStringToObject(item, "standard_error", v0_0_38_job_response_properties->standard_error) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->standard_input
    if(v0_0_38_job_response_properties->standard_input) {
    if(cJSON_AddStringToObject(item, "standard_input", v0_0_38_job_response_properties->standard_input) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->standard_output
    if(v0_0_38_job_response_properties->standard_output) {
    if(cJSON_AddStringToObject(item, "standard_output", v0_0_38_job_response_properties->standard_output) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->submit_time
    if(v0_0_38_job_response_properties->submit_time) {
    if(cJSON_AddNumberToObject(item, "submit_time", v0_0_38_job_response_properties->submit_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->suspend_time
    if(v0_0_38_job_response_properties->suspend_time) {
    if(cJSON_AddNumberToObject(item, "suspend_time", v0_0_38_job_response_properties->suspend_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->system_comment
    if(v0_0_38_job_response_properties->system_comment) {
    if(cJSON_AddStringToObject(item, "system_comment", v0_0_38_job_response_properties->system_comment) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->time_limit
    if(v0_0_38_job_response_properties->time_limit) {
    if(cJSON_AddNumberToObject(item, "time_limit", v0_0_38_job_response_properties->time_limit) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->time_minimum
    if(v0_0_38_job_response_properties->time_minimum) {
    if(cJSON_AddNumberToObject(item, "time_minimum", v0_0_38_job_response_properties->time_minimum) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->threads_per_core
    if(v0_0_38_job_response_properties->threads_per_core) {
    if(cJSON_AddNumberToObject(item, "threads_per_core", v0_0_38_job_response_properties->threads_per_core) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->tres_bind
    if(v0_0_38_job_response_properties->tres_bind) {
    if(cJSON_AddStringToObject(item, "tres_bind", v0_0_38_job_response_properties->tres_bind) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->tres_freq
    if(v0_0_38_job_response_properties->tres_freq) {
    if(cJSON_AddStringToObject(item, "tres_freq", v0_0_38_job_response_properties->tres_freq) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->tres_per_job
    if(v0_0_38_job_response_properties->tres_per_job) {
    if(cJSON_AddStringToObject(item, "tres_per_job", v0_0_38_job_response_properties->tres_per_job) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->tres_per_node
    if(v0_0_38_job_response_properties->tres_per_node) {
    if(cJSON_AddStringToObject(item, "tres_per_node", v0_0_38_job_response_properties->tres_per_node) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->tres_per_socket
    if(v0_0_38_job_response_properties->tres_per_socket) {
    if(cJSON_AddStringToObject(item, "tres_per_socket", v0_0_38_job_response_properties->tres_per_socket) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->tres_per_task
    if(v0_0_38_job_response_properties->tres_per_task) {
    if(cJSON_AddStringToObject(item, "tres_per_task", v0_0_38_job_response_properties->tres_per_task) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->tres_req_str
    if(v0_0_38_job_response_properties->tres_req_str) {
    if(cJSON_AddStringToObject(item, "tres_req_str", v0_0_38_job_response_properties->tres_req_str) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->tres_alloc_str
    if(v0_0_38_job_response_properties->tres_alloc_str) {
    if(cJSON_AddStringToObject(item, "tres_alloc_str", v0_0_38_job_response_properties->tres_alloc_str) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->user_id
    if(v0_0_38_job_response_properties->user_id) {
    if(cJSON_AddNumberToObject(item, "user_id", v0_0_38_job_response_properties->user_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_response_properties->user_name
    if(v0_0_38_job_response_properties->user_name) {
    if(cJSON_AddStringToObject(item, "user_name", v0_0_38_job_response_properties->user_name) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->wckey
    if(v0_0_38_job_response_properties->wckey) {
    if(cJSON_AddStringToObject(item, "wckey", v0_0_38_job_response_properties->wckey) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_response_properties->current_working_directory
    if(v0_0_38_job_response_properties->current_working_directory) {
    if(cJSON_AddStringToObject(item, "current_working_directory", v0_0_38_job_response_properties->current_working_directory) == NULL) {
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

v0_0_38_job_response_properties_t *v0_0_38_job_response_properties_parseFromJSON(cJSON *v0_0_38_job_response_propertiesJSON){

    v0_0_38_job_response_properties_t *v0_0_38_job_response_properties_local_var = NULL;

    // define the local list for v0_0_38_job_response_properties->flags
    list_t *flagsList = NULL;

    // define the local list for v0_0_38_job_response_properties->gres_detail
    list_t *gres_detailList = NULL;

    // define the local variable for v0_0_38_job_response_properties->job_resources
    v0_0_38_job_resources_t *job_resources_local_nonprim = NULL;

    // define the local list for v0_0_38_job_response_properties->profile
    list_t *profileList = NULL;

    // define the local list for v0_0_38_job_response_properties->show_flags
    list_t *show_flagsList = NULL;

    // v0_0_38_job_response_properties->account
    cJSON *account = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "account");
    if (account) { 
    if(!cJSON_IsString(account) && !cJSON_IsNull(account))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->accrue_time
    cJSON *accrue_time = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "accrue_time");
    if (accrue_time) { 
    if(!cJSON_IsNumber(accrue_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->admin_comment
    cJSON *admin_comment = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "admin_comment");
    if (admin_comment) { 
    if(!cJSON_IsString(admin_comment) && !cJSON_IsNull(admin_comment))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->array_job_id
    cJSON *array_job_id = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "array_job_id");
    if (array_job_id) { 
    if(!cJSON_IsNumber(array_job_id))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->array_task_id
    cJSON *array_task_id = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "array_task_id");
    if (array_task_id) { 
    if(!cJSON_IsNumber(array_task_id))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->array_max_tasks
    cJSON *array_max_tasks = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "array_max_tasks");
    if (array_max_tasks) { 
    if(!cJSON_IsNumber(array_max_tasks))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->array_task_string
    cJSON *array_task_string = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "array_task_string");
    if (array_task_string) { 
    if(!cJSON_IsString(array_task_string) && !cJSON_IsNull(array_task_string))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->association_id
    cJSON *association_id = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "association_id");
    if (association_id) { 
    if(!cJSON_IsNumber(association_id))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->batch_features
    cJSON *batch_features = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "batch_features");
    if (batch_features) { 
    if(!cJSON_IsString(batch_features) && !cJSON_IsNull(batch_features))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->batch_flag
    cJSON *batch_flag = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "batch_flag");
    if (batch_flag) { 
    if(!cJSON_IsBool(batch_flag))
    {
    goto end; //Bool
    }
    }

    // v0_0_38_job_response_properties->batch_host
    cJSON *batch_host = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "batch_host");
    if (batch_host) { 
    if(!cJSON_IsString(batch_host) && !cJSON_IsNull(batch_host))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->flags
    cJSON *flags = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "flags");
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

    // v0_0_38_job_response_properties->burst_buffer
    cJSON *burst_buffer = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "burst_buffer");
    if (burst_buffer) { 
    if(!cJSON_IsString(burst_buffer) && !cJSON_IsNull(burst_buffer))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->burst_buffer_state
    cJSON *burst_buffer_state = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "burst_buffer_state");
    if (burst_buffer_state) { 
    if(!cJSON_IsString(burst_buffer_state) && !cJSON_IsNull(burst_buffer_state))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->cluster
    cJSON *cluster = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "cluster");
    if (cluster) { 
    if(!cJSON_IsString(cluster) && !cJSON_IsNull(cluster))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->cluster_features
    cJSON *cluster_features = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "cluster_features");
    if (cluster_features) { 
    if(!cJSON_IsString(cluster_features) && !cJSON_IsNull(cluster_features))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->command
    cJSON *command = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "command");
    if (command) { 
    if(!cJSON_IsString(command) && !cJSON_IsNull(command))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->comment
    cJSON *comment = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "comment");
    if (comment) { 
    if(!cJSON_IsString(comment) && !cJSON_IsNull(comment))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->container
    cJSON *container = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "container");
    if (container) { 
    if(!cJSON_IsString(container) && !cJSON_IsNull(container))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->contiguous
    cJSON *contiguous = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "contiguous");
    if (contiguous) { 
    if(!cJSON_IsBool(contiguous))
    {
    goto end; //Bool
    }
    }

    // v0_0_38_job_response_properties->core_spec
    cJSON *core_spec = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "core_spec");
    if (core_spec) { 
    if(!cJSON_IsString(core_spec) && !cJSON_IsNull(core_spec))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->thread_spec
    cJSON *thread_spec = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "thread_spec");
    if (thread_spec) { 
    if(!cJSON_IsString(thread_spec) && !cJSON_IsNull(thread_spec))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->cores_per_socket
    cJSON *cores_per_socket = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "cores_per_socket");
    if (cores_per_socket) { 
    if(!cJSON_IsString(cores_per_socket) && !cJSON_IsNull(cores_per_socket))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->billable_tres
    cJSON *billable_tres = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "billable_tres");
    if (billable_tres) { 
    if(!cJSON_IsNumber(billable_tres))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->cpus_per_task
    cJSON *cpus_per_task = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "cpus_per_task");
    if (cpus_per_task) { 
    if(!cJSON_IsString(cpus_per_task) && !cJSON_IsNull(cpus_per_task))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->cpu_frequency_minimum
    cJSON *cpu_frequency_minimum = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "cpu_frequency_minimum");
    if (cpu_frequency_minimum) { 
    if(!cJSON_IsString(cpu_frequency_minimum) && !cJSON_IsNull(cpu_frequency_minimum))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->cpu_frequency_maximum
    cJSON *cpu_frequency_maximum = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "cpu_frequency_maximum");
    if (cpu_frequency_maximum) { 
    if(!cJSON_IsString(cpu_frequency_maximum) && !cJSON_IsNull(cpu_frequency_maximum))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->cpu_frequency_governor
    cJSON *cpu_frequency_governor = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "cpu_frequency_governor");
    if (cpu_frequency_governor) { 
    if(!cJSON_IsString(cpu_frequency_governor) && !cJSON_IsNull(cpu_frequency_governor))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->cpus_per_tres
    cJSON *cpus_per_tres = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "cpus_per_tres");
    if (cpus_per_tres) { 
    if(!cJSON_IsString(cpus_per_tres) && !cJSON_IsNull(cpus_per_tres))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->deadline
    cJSON *deadline = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "deadline");
    if (deadline) { 
    if(!cJSON_IsNumber(deadline))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->delay_boot
    cJSON *delay_boot = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "delay_boot");
    if (delay_boot) { 
    if(!cJSON_IsNumber(delay_boot))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->dependency
    cJSON *dependency = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "dependency");
    if (dependency) { 
    if(!cJSON_IsString(dependency) && !cJSON_IsNull(dependency))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->derived_exit_code
    cJSON *derived_exit_code = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "derived_exit_code");
    if (derived_exit_code) { 
    if(!cJSON_IsNumber(derived_exit_code))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->eligible_time
    cJSON *eligible_time = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "eligible_time");
    if (eligible_time) { 
    if(!cJSON_IsNumber(eligible_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->end_time
    cJSON *end_time = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "end_time");
    if (end_time) { 
    if(!cJSON_IsNumber(end_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->excluded_nodes
    cJSON *excluded_nodes = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "excluded_nodes");
    if (excluded_nodes) { 
    if(!cJSON_IsString(excluded_nodes) && !cJSON_IsNull(excluded_nodes))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->exit_code
    cJSON *exit_code = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "exit_code");
    if (exit_code) { 
    if(!cJSON_IsNumber(exit_code))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->features
    cJSON *features = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "features");
    if (features) { 
    if(!cJSON_IsString(features) && !cJSON_IsNull(features))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->federation_origin
    cJSON *federation_origin = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "federation_origin");
    if (federation_origin) { 
    if(!cJSON_IsString(federation_origin) && !cJSON_IsNull(federation_origin))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->federation_siblings_active
    cJSON *federation_siblings_active = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "federation_siblings_active");
    if (federation_siblings_active) { 
    if(!cJSON_IsString(federation_siblings_active) && !cJSON_IsNull(federation_siblings_active))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->federation_siblings_viable
    cJSON *federation_siblings_viable = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "federation_siblings_viable");
    if (federation_siblings_viable) { 
    if(!cJSON_IsString(federation_siblings_viable) && !cJSON_IsNull(federation_siblings_viable))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->gres_detail
    cJSON *gres_detail = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "gres_detail");
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

    // v0_0_38_job_response_properties->group_id
    cJSON *group_id = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "group_id");
    if (group_id) { 
    if(!cJSON_IsNumber(group_id))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->job_id
    cJSON *job_id = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "job_id");
    if (job_id) { 
    if(!cJSON_IsNumber(job_id))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->job_resources
    cJSON *job_resources = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "job_resources");
    if (job_resources) { 
    job_resources_local_nonprim = v0_0_38_job_resources_parseFromJSON(job_resources); //nonprimitive
    }

    // v0_0_38_job_response_properties->job_state
    cJSON *job_state = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "job_state");
    if (job_state) { 
    if(!cJSON_IsString(job_state) && !cJSON_IsNull(job_state))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->last_sched_evaluation
    cJSON *last_sched_evaluation = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "last_sched_evaluation");
    if (last_sched_evaluation) { 
    if(!cJSON_IsNumber(last_sched_evaluation))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->licenses
    cJSON *licenses = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "licenses");
    if (licenses) { 
    if(!cJSON_IsString(licenses) && !cJSON_IsNull(licenses))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->max_cpus
    cJSON *max_cpus = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "max_cpus");
    if (max_cpus) { 
    if(!cJSON_IsNumber(max_cpus))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->max_nodes
    cJSON *max_nodes = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "max_nodes");
    if (max_nodes) { 
    if(!cJSON_IsNumber(max_nodes))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->mcs_label
    cJSON *mcs_label = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "mcs_label");
    if (mcs_label) { 
    if(!cJSON_IsString(mcs_label) && !cJSON_IsNull(mcs_label))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->memory_per_tres
    cJSON *memory_per_tres = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "memory_per_tres");
    if (memory_per_tres) { 
    if(!cJSON_IsString(memory_per_tres) && !cJSON_IsNull(memory_per_tres))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->nodes
    cJSON *nodes = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "nodes");
    if (nodes) { 
    if(!cJSON_IsString(nodes) && !cJSON_IsNull(nodes))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->nice
    cJSON *nice = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "nice");
    if (nice) { 
    if(!cJSON_IsNumber(nice))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->tasks_per_core
    cJSON *tasks_per_core = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "tasks_per_core");
    if (tasks_per_core) { 
    if(!cJSON_IsNumber(tasks_per_core))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->tasks_per_socket
    cJSON *tasks_per_socket = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "tasks_per_socket");
    if (tasks_per_socket) { 
    if(!cJSON_IsNumber(tasks_per_socket))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->tasks_per_board
    cJSON *tasks_per_board = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "tasks_per_board");
    if (tasks_per_board) { 
    if(!cJSON_IsNumber(tasks_per_board))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->cpus
    cJSON *cpus = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "cpus");
    if (cpus) { 
    if(!cJSON_IsNumber(cpus))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->node_count
    cJSON *node_count = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "node_count");
    if (node_count) { 
    if(!cJSON_IsNumber(node_count))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->tasks
    cJSON *tasks = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "tasks");
    if (tasks) { 
    if(!cJSON_IsNumber(tasks))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->het_job_id
    cJSON *het_job_id = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "het_job_id");
    if (het_job_id) { 
    if(!cJSON_IsNumber(het_job_id))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->het_job_id_set
    cJSON *het_job_id_set = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "het_job_id_set");
    if (het_job_id_set) { 
    if(!cJSON_IsString(het_job_id_set) && !cJSON_IsNull(het_job_id_set))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->het_job_offset
    cJSON *het_job_offset = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "het_job_offset");
    if (het_job_offset) { 
    if(!cJSON_IsNumber(het_job_offset))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->partition
    cJSON *partition = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "partition");
    if (partition) { 
    if(!cJSON_IsString(partition) && !cJSON_IsNull(partition))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->memory_per_node
    cJSON *memory_per_node = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "memory_per_node");
    if (memory_per_node) { 
    if(!cJSON_IsNumber(memory_per_node))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->memory_per_cpu
    cJSON *memory_per_cpu = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "memory_per_cpu");
    if (memory_per_cpu) { 
    if(!cJSON_IsNumber(memory_per_cpu))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->minimum_cpus_per_node
    cJSON *minimum_cpus_per_node = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "minimum_cpus_per_node");
    if (minimum_cpus_per_node) { 
    if(!cJSON_IsNumber(minimum_cpus_per_node))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->minimum_tmp_disk_per_node
    cJSON *minimum_tmp_disk_per_node = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "minimum_tmp_disk_per_node");
    if (minimum_tmp_disk_per_node) { 
    if(!cJSON_IsNumber(minimum_tmp_disk_per_node))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->preempt_time
    cJSON *preempt_time = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "preempt_time");
    if (preempt_time) { 
    if(!cJSON_IsNumber(preempt_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->pre_sus_time
    cJSON *pre_sus_time = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "pre_sus_time");
    if (pre_sus_time) { 
    if(!cJSON_IsNumber(pre_sus_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->priority
    cJSON *priority = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "priority");
    if (priority) { 
    if(!cJSON_IsNumber(priority))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->profile
    cJSON *profile = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "profile");
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

    // v0_0_38_job_response_properties->qos
    cJSON *qos = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "qos");
    if (qos) { 
    if(!cJSON_IsString(qos) && !cJSON_IsNull(qos))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->reboot
    cJSON *reboot = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "reboot");
    if (reboot) { 
    if(!cJSON_IsBool(reboot))
    {
    goto end; //Bool
    }
    }

    // v0_0_38_job_response_properties->required_nodes
    cJSON *required_nodes = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "required_nodes");
    if (required_nodes) { 
    if(!cJSON_IsString(required_nodes) && !cJSON_IsNull(required_nodes))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->requeue
    cJSON *requeue = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "requeue");
    if (requeue) { 
    if(!cJSON_IsBool(requeue))
    {
    goto end; //Bool
    }
    }

    // v0_0_38_job_response_properties->resize_time
    cJSON *resize_time = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "resize_time");
    if (resize_time) { 
    if(!cJSON_IsNumber(resize_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->restart_cnt
    cJSON *restart_cnt = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "restart_cnt");
    if (restart_cnt) { 
    if(!cJSON_IsNumber(restart_cnt))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->resv_name
    cJSON *resv_name = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "resv_name");
    if (resv_name) { 
    if(!cJSON_IsString(resv_name) && !cJSON_IsNull(resv_name))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->shared
    cJSON *shared = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "shared");
    if (shared) { 
    if(!cJSON_IsString(shared) && !cJSON_IsNull(shared))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->show_flags
    cJSON *show_flags = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "show_flags");
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

    // v0_0_38_job_response_properties->sockets_per_board
    cJSON *sockets_per_board = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "sockets_per_board");
    if (sockets_per_board) { 
    if(!cJSON_IsNumber(sockets_per_board))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->sockets_per_node
    cJSON *sockets_per_node = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "sockets_per_node");
    if (sockets_per_node) { 
    if(!cJSON_IsNumber(sockets_per_node))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->start_time
    cJSON *start_time = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "start_time");
    if (start_time) { 
    if(!cJSON_IsNumber(start_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->state_description
    cJSON *state_description = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "state_description");
    if (state_description) { 
    if(!cJSON_IsString(state_description) && !cJSON_IsNull(state_description))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->state_reason
    cJSON *state_reason = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "state_reason");
    if (state_reason) { 
    if(!cJSON_IsString(state_reason) && !cJSON_IsNull(state_reason))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->standard_error
    cJSON *standard_error = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "standard_error");
    if (standard_error) { 
    if(!cJSON_IsString(standard_error) && !cJSON_IsNull(standard_error))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->standard_input
    cJSON *standard_input = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "standard_input");
    if (standard_input) { 
    if(!cJSON_IsString(standard_input) && !cJSON_IsNull(standard_input))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->standard_output
    cJSON *standard_output = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "standard_output");
    if (standard_output) { 
    if(!cJSON_IsString(standard_output) && !cJSON_IsNull(standard_output))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->submit_time
    cJSON *submit_time = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "submit_time");
    if (submit_time) { 
    if(!cJSON_IsNumber(submit_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->suspend_time
    cJSON *suspend_time = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "suspend_time");
    if (suspend_time) { 
    if(!cJSON_IsNumber(suspend_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->system_comment
    cJSON *system_comment = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "system_comment");
    if (system_comment) { 
    if(!cJSON_IsString(system_comment) && !cJSON_IsNull(system_comment))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->time_limit
    cJSON *time_limit = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "time_limit");
    if (time_limit) { 
    if(!cJSON_IsNumber(time_limit))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->time_minimum
    cJSON *time_minimum = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "time_minimum");
    if (time_minimum) { 
    if(!cJSON_IsNumber(time_minimum))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->threads_per_core
    cJSON *threads_per_core = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "threads_per_core");
    if (threads_per_core) { 
    if(!cJSON_IsNumber(threads_per_core))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->tres_bind
    cJSON *tres_bind = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "tres_bind");
    if (tres_bind) { 
    if(!cJSON_IsString(tres_bind) && !cJSON_IsNull(tres_bind))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->tres_freq
    cJSON *tres_freq = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "tres_freq");
    if (tres_freq) { 
    if(!cJSON_IsString(tres_freq) && !cJSON_IsNull(tres_freq))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->tres_per_job
    cJSON *tres_per_job = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "tres_per_job");
    if (tres_per_job) { 
    if(!cJSON_IsString(tres_per_job) && !cJSON_IsNull(tres_per_job))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->tres_per_node
    cJSON *tres_per_node = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "tres_per_node");
    if (tres_per_node) { 
    if(!cJSON_IsString(tres_per_node) && !cJSON_IsNull(tres_per_node))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->tres_per_socket
    cJSON *tres_per_socket = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "tres_per_socket");
    if (tres_per_socket) { 
    if(!cJSON_IsString(tres_per_socket) && !cJSON_IsNull(tres_per_socket))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->tres_per_task
    cJSON *tres_per_task = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "tres_per_task");
    if (tres_per_task) { 
    if(!cJSON_IsString(tres_per_task) && !cJSON_IsNull(tres_per_task))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->tres_req_str
    cJSON *tres_req_str = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "tres_req_str");
    if (tres_req_str) { 
    if(!cJSON_IsString(tres_req_str) && !cJSON_IsNull(tres_req_str))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->tres_alloc_str
    cJSON *tres_alloc_str = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "tres_alloc_str");
    if (tres_alloc_str) { 
    if(!cJSON_IsString(tres_alloc_str) && !cJSON_IsNull(tres_alloc_str))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->user_id
    cJSON *user_id = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "user_id");
    if (user_id) { 
    if(!cJSON_IsNumber(user_id))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_response_properties->user_name
    cJSON *user_name = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "user_name");
    if (user_name) { 
    if(!cJSON_IsString(user_name) && !cJSON_IsNull(user_name))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->wckey
    cJSON *wckey = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "wckey");
    if (wckey) { 
    if(!cJSON_IsString(wckey) && !cJSON_IsNull(wckey))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_response_properties->current_working_directory
    cJSON *current_working_directory = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_response_propertiesJSON, "current_working_directory");
    if (current_working_directory) { 
    if(!cJSON_IsString(current_working_directory) && !cJSON_IsNull(current_working_directory))
    {
    goto end; //String
    }
    }


    v0_0_38_job_response_properties_local_var = v0_0_38_job_response_properties_create (
        account && !cJSON_IsNull(account) ? strdup(account->valuestring) : NULL,
        accrue_time ? accrue_time->valuedouble : 0,
        admin_comment && !cJSON_IsNull(admin_comment) ? strdup(admin_comment->valuestring) : NULL,
        array_job_id ? array_job_id->valuedouble : 0,
        array_task_id ? array_task_id->valuedouble : 0,
        array_max_tasks ? array_max_tasks->valuedouble : 0,
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
        contiguous ? contiguous->valueint : 0,
        core_spec && !cJSON_IsNull(core_spec) ? strdup(core_spec->valuestring) : NULL,
        thread_spec && !cJSON_IsNull(thread_spec) ? strdup(thread_spec->valuestring) : NULL,
        cores_per_socket && !cJSON_IsNull(cores_per_socket) ? strdup(cores_per_socket->valuestring) : NULL,
        billable_tres ? billable_tres->valuedouble : 0,
        cpus_per_task && !cJSON_IsNull(cpus_per_task) ? strdup(cpus_per_task->valuestring) : NULL,
        cpu_frequency_minimum && !cJSON_IsNull(cpu_frequency_minimum) ? strdup(cpu_frequency_minimum->valuestring) : NULL,
        cpu_frequency_maximum && !cJSON_IsNull(cpu_frequency_maximum) ? strdup(cpu_frequency_maximum->valuestring) : NULL,
        cpu_frequency_governor && !cJSON_IsNull(cpu_frequency_governor) ? strdup(cpu_frequency_governor->valuestring) : NULL,
        cpus_per_tres && !cJSON_IsNull(cpus_per_tres) ? strdup(cpus_per_tres->valuestring) : NULL,
        deadline ? deadline->valuedouble : 0,
        delay_boot ? delay_boot->valuedouble : 0,
        dependency && !cJSON_IsNull(dependency) ? strdup(dependency->valuestring) : NULL,
        derived_exit_code ? derived_exit_code->valuedouble : 0,
        eligible_time ? eligible_time->valuedouble : 0,
        end_time ? end_time->valuedouble : 0,
        excluded_nodes && !cJSON_IsNull(excluded_nodes) ? strdup(excluded_nodes->valuestring) : NULL,
        exit_code ? exit_code->valuedouble : 0,
        features && !cJSON_IsNull(features) ? strdup(features->valuestring) : NULL,
        federation_origin && !cJSON_IsNull(federation_origin) ? strdup(federation_origin->valuestring) : NULL,
        federation_siblings_active && !cJSON_IsNull(federation_siblings_active) ? strdup(federation_siblings_active->valuestring) : NULL,
        federation_siblings_viable && !cJSON_IsNull(federation_siblings_viable) ? strdup(federation_siblings_viable->valuestring) : NULL,
        gres_detail ? gres_detailList : NULL,
        group_id ? group_id->valuedouble : 0,
        job_id ? job_id->valuedouble : 0,
        job_resources ? job_resources_local_nonprim : NULL,
        job_state && !cJSON_IsNull(job_state) ? strdup(job_state->valuestring) : NULL,
        last_sched_evaluation ? last_sched_evaluation->valuedouble : 0,
        licenses && !cJSON_IsNull(licenses) ? strdup(licenses->valuestring) : NULL,
        max_cpus ? max_cpus->valuedouble : 0,
        max_nodes ? max_nodes->valuedouble : 0,
        mcs_label && !cJSON_IsNull(mcs_label) ? strdup(mcs_label->valuestring) : NULL,
        memory_per_tres && !cJSON_IsNull(memory_per_tres) ? strdup(memory_per_tres->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        nodes && !cJSON_IsNull(nodes) ? strdup(nodes->valuestring) : NULL,
        nice ? nice->valuedouble : 0,
        tasks_per_core ? tasks_per_core->valuedouble : 0,
        tasks_per_socket ? tasks_per_socket->valuedouble : 0,
        tasks_per_board ? tasks_per_board->valuedouble : 0,
        cpus ? cpus->valuedouble : 0,
        node_count ? node_count->valuedouble : 0,
        tasks ? tasks->valuedouble : 0,
        het_job_id ? het_job_id->valuedouble : 0,
        het_job_id_set && !cJSON_IsNull(het_job_id_set) ? strdup(het_job_id_set->valuestring) : NULL,
        het_job_offset ? het_job_offset->valuedouble : 0,
        partition && !cJSON_IsNull(partition) ? strdup(partition->valuestring) : NULL,
        memory_per_node ? memory_per_node->valuedouble : 0,
        memory_per_cpu ? memory_per_cpu->valuedouble : 0,
        minimum_cpus_per_node ? minimum_cpus_per_node->valuedouble : 0,
        minimum_tmp_disk_per_node ? minimum_tmp_disk_per_node->valuedouble : 0,
        preempt_time ? preempt_time->valuedouble : 0,
        pre_sus_time ? pre_sus_time->valuedouble : 0,
        priority ? priority->valuedouble : 0,
        profile ? profileList : NULL,
        qos && !cJSON_IsNull(qos) ? strdup(qos->valuestring) : NULL,
        reboot ? reboot->valueint : 0,
        required_nodes && !cJSON_IsNull(required_nodes) ? strdup(required_nodes->valuestring) : NULL,
        requeue ? requeue->valueint : 0,
        resize_time ? resize_time->valuedouble : 0,
        restart_cnt ? restart_cnt->valuedouble : 0,
        resv_name && !cJSON_IsNull(resv_name) ? strdup(resv_name->valuestring) : NULL,
        shared && !cJSON_IsNull(shared) ? strdup(shared->valuestring) : NULL,
        show_flags ? show_flagsList : NULL,
        sockets_per_board ? sockets_per_board->valuedouble : 0,
        sockets_per_node ? sockets_per_node->valuedouble : 0,
        start_time ? start_time->valuedouble : 0,
        state_description && !cJSON_IsNull(state_description) ? strdup(state_description->valuestring) : NULL,
        state_reason && !cJSON_IsNull(state_reason) ? strdup(state_reason->valuestring) : NULL,
        standard_error && !cJSON_IsNull(standard_error) ? strdup(standard_error->valuestring) : NULL,
        standard_input && !cJSON_IsNull(standard_input) ? strdup(standard_input->valuestring) : NULL,
        standard_output && !cJSON_IsNull(standard_output) ? strdup(standard_output->valuestring) : NULL,
        submit_time ? submit_time->valuedouble : 0,
        suspend_time ? suspend_time->valuedouble : 0,
        system_comment && !cJSON_IsNull(system_comment) ? strdup(system_comment->valuestring) : NULL,
        time_limit ? time_limit->valuedouble : 0,
        time_minimum ? time_minimum->valuedouble : 0,
        threads_per_core ? threads_per_core->valuedouble : 0,
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
        wckey && !cJSON_IsNull(wckey) ? strdup(wckey->valuestring) : NULL,
        current_working_directory && !cJSON_IsNull(current_working_directory) ? strdup(current_working_directory->valuestring) : NULL
        );

    return v0_0_38_job_response_properties_local_var;
end:
    if (flagsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, flagsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(flagsList);
        flagsList = NULL;
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
    if (job_resources_local_nonprim) {
        v0_0_38_job_resources_free(job_resources_local_nonprim);
        job_resources_local_nonprim = NULL;
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
    if (show_flagsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, show_flagsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(show_flagsList);
        show_flagsList = NULL;
    }
    return NULL;

}
