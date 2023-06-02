#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_38_job_properties.h"


char* exclusivev0_0_38_job_properties_ToString(slurm_rest_api_v0_0_38_job_properties_EXCLUSIVE_e exclusive) {
    char* exclusiveArray[] =  { "NULL", "user", "mcs", "true", "false" };
	return exclusiveArray[exclusive];
}

slurm_rest_api_v0_0_38_job_properties_EXCLUSIVE_e exclusivev0_0_38_job_properties_FromString(char* exclusive){
    int stringToReturn = 0;
    char *exclusiveArray[] =  { "NULL", "user", "mcs", "true", "false" };
    size_t sizeofArray = sizeof(exclusiveArray) / sizeof(exclusiveArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(exclusive, exclusiveArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* gres_flagsv0_0_38_job_properties_ToString(slurm_rest_api_v0_0_38_job_properties_GRESFLAGS_e gres_flags) {
    char* gres_flagsArray[] =  { "NULL", "disable-binding", "enforce-binding" };
	return gres_flagsArray[gres_flags];
}

slurm_rest_api_v0_0_38_job_properties_GRESFLAGS_e gres_flagsv0_0_38_job_properties_FromString(char* gres_flags){
    int stringToReturn = 0;
    char *gres_flagsArray[] =  { "NULL", "disable-binding", "enforce-binding" };
    size_t sizeofArray = sizeof(gres_flagsArray) / sizeof(gres_flagsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(gres_flags, gres_flagsArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}
char* open_modev0_0_38_job_properties_ToString(slurm_rest_api_v0_0_38_job_properties_OPENMODE_e open_mode) {
    char* open_modeArray[] =  { "NULL", "append", "truncate" };
	return open_modeArray[open_mode];
}

slurm_rest_api_v0_0_38_job_properties_OPENMODE_e open_modev0_0_38_job_properties_FromString(char* open_mode){
    int stringToReturn = 0;
    char *open_modeArray[] =  { "NULL", "append", "truncate" };
    size_t sizeofArray = sizeof(open_modeArray) / sizeof(open_modeArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(open_mode, open_modeArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

v0_0_38_job_properties_t *v0_0_38_job_properties_create(
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
    char *container,
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
    slurm_rest_api_v0_0_38_job_properties_EXCLUSIVE_e exclusive,
    int get_user_environment,
    char *gres,
    slurm_rest_api_v0_0_38_job_properties_GRESFLAGS_e gres_flags,
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
    int nice,
    int no_kill,
    list_t *nodes,
    slurm_rest_api_v0_0_38_job_properties_OPENMODE_e open_mode,
    int oversubscribe,
    char *partition,
    char *prefer,
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
    ) {
    v0_0_38_job_properties_t *v0_0_38_job_properties_local_var = malloc(sizeof(v0_0_38_job_properties_t));
    if (!v0_0_38_job_properties_local_var) {
        return NULL;
    }
    v0_0_38_job_properties_local_var->account = account;
    v0_0_38_job_properties_local_var->account_gather_frequency = account_gather_frequency;
    v0_0_38_job_properties_local_var->argv = argv;
    v0_0_38_job_properties_local_var->array = array;
    v0_0_38_job_properties_local_var->batch_features = batch_features;
    v0_0_38_job_properties_local_var->begin_time = begin_time;
    v0_0_38_job_properties_local_var->burst_buffer = burst_buffer;
    v0_0_38_job_properties_local_var->cluster_constraint = cluster_constraint;
    v0_0_38_job_properties_local_var->comment = comment;
    v0_0_38_job_properties_local_var->constraints = constraints;
    v0_0_38_job_properties_local_var->container = container;
    v0_0_38_job_properties_local_var->core_specification = core_specification;
    v0_0_38_job_properties_local_var->cores_per_socket = cores_per_socket;
    v0_0_38_job_properties_local_var->cpu_binding = cpu_binding;
    v0_0_38_job_properties_local_var->cpu_binding_hint = cpu_binding_hint;
    v0_0_38_job_properties_local_var->cpu_frequency = cpu_frequency;
    v0_0_38_job_properties_local_var->cpus_per_gpu = cpus_per_gpu;
    v0_0_38_job_properties_local_var->cpus_per_task = cpus_per_task;
    v0_0_38_job_properties_local_var->current_working_directory = current_working_directory;
    v0_0_38_job_properties_local_var->deadline = deadline;
    v0_0_38_job_properties_local_var->delay_boot = delay_boot;
    v0_0_38_job_properties_local_var->dependency = dependency;
    v0_0_38_job_properties_local_var->distribution = distribution;
    v0_0_38_job_properties_local_var->environment = environment;
    v0_0_38_job_properties_local_var->exclusive = exclusive;
    v0_0_38_job_properties_local_var->get_user_environment = get_user_environment;
    v0_0_38_job_properties_local_var->gres = gres;
    v0_0_38_job_properties_local_var->gres_flags = gres_flags;
    v0_0_38_job_properties_local_var->gpu_binding = gpu_binding;
    v0_0_38_job_properties_local_var->gpu_frequency = gpu_frequency;
    v0_0_38_job_properties_local_var->gpus = gpus;
    v0_0_38_job_properties_local_var->gpus_per_node = gpus_per_node;
    v0_0_38_job_properties_local_var->gpus_per_socket = gpus_per_socket;
    v0_0_38_job_properties_local_var->gpus_per_task = gpus_per_task;
    v0_0_38_job_properties_local_var->hold = hold;
    v0_0_38_job_properties_local_var->kill_on_invalid_dependency = kill_on_invalid_dependency;
    v0_0_38_job_properties_local_var->licenses = licenses;
    v0_0_38_job_properties_local_var->mail_type = mail_type;
    v0_0_38_job_properties_local_var->mail_user = mail_user;
    v0_0_38_job_properties_local_var->mcs_label = mcs_label;
    v0_0_38_job_properties_local_var->memory_binding = memory_binding;
    v0_0_38_job_properties_local_var->memory_per_cpu = memory_per_cpu;
    v0_0_38_job_properties_local_var->memory_per_gpu = memory_per_gpu;
    v0_0_38_job_properties_local_var->memory_per_node = memory_per_node;
    v0_0_38_job_properties_local_var->minimum_cpus_per_node = minimum_cpus_per_node;
    v0_0_38_job_properties_local_var->minimum_nodes = minimum_nodes;
    v0_0_38_job_properties_local_var->name = name;
    v0_0_38_job_properties_local_var->nice = nice;
    v0_0_38_job_properties_local_var->no_kill = no_kill;
    v0_0_38_job_properties_local_var->nodes = nodes;
    v0_0_38_job_properties_local_var->open_mode = open_mode;
    v0_0_38_job_properties_local_var->oversubscribe = oversubscribe;
    v0_0_38_job_properties_local_var->partition = partition;
    v0_0_38_job_properties_local_var->prefer = prefer;
    v0_0_38_job_properties_local_var->priority = priority;
    v0_0_38_job_properties_local_var->qos = qos;
    v0_0_38_job_properties_local_var->requeue = requeue;
    v0_0_38_job_properties_local_var->reservation = reservation;
    v0_0_38_job_properties_local_var->signal = signal;
    v0_0_38_job_properties_local_var->sockets_per_node = sockets_per_node;
    v0_0_38_job_properties_local_var->spread_job = spread_job;
    v0_0_38_job_properties_local_var->standard_error = standard_error;
    v0_0_38_job_properties_local_var->standard_input = standard_input;
    v0_0_38_job_properties_local_var->standard_output = standard_output;
    v0_0_38_job_properties_local_var->tasks = tasks;
    v0_0_38_job_properties_local_var->tasks_per_core = tasks_per_core;
    v0_0_38_job_properties_local_var->tasks_per_node = tasks_per_node;
    v0_0_38_job_properties_local_var->tasks_per_socket = tasks_per_socket;
    v0_0_38_job_properties_local_var->thread_specification = thread_specification;
    v0_0_38_job_properties_local_var->threads_per_core = threads_per_core;
    v0_0_38_job_properties_local_var->time_limit = time_limit;
    v0_0_38_job_properties_local_var->time_minimum = time_minimum;
    v0_0_38_job_properties_local_var->wait_all_nodes = wait_all_nodes;
    v0_0_38_job_properties_local_var->wckey = wckey;

    return v0_0_38_job_properties_local_var;
}


void v0_0_38_job_properties_free(v0_0_38_job_properties_t *v0_0_38_job_properties) {
    if(NULL == v0_0_38_job_properties){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_38_job_properties->account) {
        free(v0_0_38_job_properties->account);
        v0_0_38_job_properties->account = NULL;
    }
    if (v0_0_38_job_properties->account_gather_frequency) {
        free(v0_0_38_job_properties->account_gather_frequency);
        v0_0_38_job_properties->account_gather_frequency = NULL;
    }
    if (v0_0_38_job_properties->argv) {
        list_ForEach(listEntry, v0_0_38_job_properties->argv) {
            free(listEntry->data);
        }
        list_freeList(v0_0_38_job_properties->argv);
        v0_0_38_job_properties->argv = NULL;
    }
    if (v0_0_38_job_properties->array) {
        free(v0_0_38_job_properties->array);
        v0_0_38_job_properties->array = NULL;
    }
    if (v0_0_38_job_properties->batch_features) {
        free(v0_0_38_job_properties->batch_features);
        v0_0_38_job_properties->batch_features = NULL;
    }
    if (v0_0_38_job_properties->burst_buffer) {
        free(v0_0_38_job_properties->burst_buffer);
        v0_0_38_job_properties->burst_buffer = NULL;
    }
    if (v0_0_38_job_properties->cluster_constraint) {
        free(v0_0_38_job_properties->cluster_constraint);
        v0_0_38_job_properties->cluster_constraint = NULL;
    }
    if (v0_0_38_job_properties->comment) {
        free(v0_0_38_job_properties->comment);
        v0_0_38_job_properties->comment = NULL;
    }
    if (v0_0_38_job_properties->constraints) {
        free(v0_0_38_job_properties->constraints);
        v0_0_38_job_properties->constraints = NULL;
    }
    if (v0_0_38_job_properties->container) {
        free(v0_0_38_job_properties->container);
        v0_0_38_job_properties->container = NULL;
    }
    if (v0_0_38_job_properties->cpu_binding) {
        free(v0_0_38_job_properties->cpu_binding);
        v0_0_38_job_properties->cpu_binding = NULL;
    }
    if (v0_0_38_job_properties->cpu_binding_hint) {
        free(v0_0_38_job_properties->cpu_binding_hint);
        v0_0_38_job_properties->cpu_binding_hint = NULL;
    }
    if (v0_0_38_job_properties->cpu_frequency) {
        free(v0_0_38_job_properties->cpu_frequency);
        v0_0_38_job_properties->cpu_frequency = NULL;
    }
    if (v0_0_38_job_properties->cpus_per_gpu) {
        free(v0_0_38_job_properties->cpus_per_gpu);
        v0_0_38_job_properties->cpus_per_gpu = NULL;
    }
    if (v0_0_38_job_properties->current_working_directory) {
        free(v0_0_38_job_properties->current_working_directory);
        v0_0_38_job_properties->current_working_directory = NULL;
    }
    if (v0_0_38_job_properties->deadline) {
        free(v0_0_38_job_properties->deadline);
        v0_0_38_job_properties->deadline = NULL;
    }
    if (v0_0_38_job_properties->dependency) {
        free(v0_0_38_job_properties->dependency);
        v0_0_38_job_properties->dependency = NULL;
    }
    if (v0_0_38_job_properties->distribution) {
        free(v0_0_38_job_properties->distribution);
        v0_0_38_job_properties->distribution = NULL;
    }
    if (v0_0_38_job_properties->environment) {
        object_free(v0_0_38_job_properties->environment);
        v0_0_38_job_properties->environment = NULL;
    }
    if (v0_0_38_job_properties->gres) {
        free(v0_0_38_job_properties->gres);
        v0_0_38_job_properties->gres = NULL;
    }
    if (v0_0_38_job_properties->gpu_binding) {
        free(v0_0_38_job_properties->gpu_binding);
        v0_0_38_job_properties->gpu_binding = NULL;
    }
    if (v0_0_38_job_properties->gpu_frequency) {
        free(v0_0_38_job_properties->gpu_frequency);
        v0_0_38_job_properties->gpu_frequency = NULL;
    }
    if (v0_0_38_job_properties->gpus) {
        free(v0_0_38_job_properties->gpus);
        v0_0_38_job_properties->gpus = NULL;
    }
    if (v0_0_38_job_properties->gpus_per_node) {
        free(v0_0_38_job_properties->gpus_per_node);
        v0_0_38_job_properties->gpus_per_node = NULL;
    }
    if (v0_0_38_job_properties->gpus_per_socket) {
        free(v0_0_38_job_properties->gpus_per_socket);
        v0_0_38_job_properties->gpus_per_socket = NULL;
    }
    if (v0_0_38_job_properties->gpus_per_task) {
        free(v0_0_38_job_properties->gpus_per_task);
        v0_0_38_job_properties->gpus_per_task = NULL;
    }
    if (v0_0_38_job_properties->licenses) {
        free(v0_0_38_job_properties->licenses);
        v0_0_38_job_properties->licenses = NULL;
    }
    if (v0_0_38_job_properties->mail_type) {
        free(v0_0_38_job_properties->mail_type);
        v0_0_38_job_properties->mail_type = NULL;
    }
    if (v0_0_38_job_properties->mail_user) {
        free(v0_0_38_job_properties->mail_user);
        v0_0_38_job_properties->mail_user = NULL;
    }
    if (v0_0_38_job_properties->mcs_label) {
        free(v0_0_38_job_properties->mcs_label);
        v0_0_38_job_properties->mcs_label = NULL;
    }
    if (v0_0_38_job_properties->memory_binding) {
        free(v0_0_38_job_properties->memory_binding);
        v0_0_38_job_properties->memory_binding = NULL;
    }
    if (v0_0_38_job_properties->name) {
        free(v0_0_38_job_properties->name);
        v0_0_38_job_properties->name = NULL;
    }
    if (v0_0_38_job_properties->nodes) {
        list_ForEach(listEntry, v0_0_38_job_properties->nodes) {
            free(listEntry->data);
        }
        list_freeList(v0_0_38_job_properties->nodes);
        v0_0_38_job_properties->nodes = NULL;
    }
    if (v0_0_38_job_properties->partition) {
        free(v0_0_38_job_properties->partition);
        v0_0_38_job_properties->partition = NULL;
    }
    if (v0_0_38_job_properties->prefer) {
        free(v0_0_38_job_properties->prefer);
        v0_0_38_job_properties->prefer = NULL;
    }
    if (v0_0_38_job_properties->priority) {
        free(v0_0_38_job_properties->priority);
        v0_0_38_job_properties->priority = NULL;
    }
    if (v0_0_38_job_properties->qos) {
        free(v0_0_38_job_properties->qos);
        v0_0_38_job_properties->qos = NULL;
    }
    if (v0_0_38_job_properties->reservation) {
        free(v0_0_38_job_properties->reservation);
        v0_0_38_job_properties->reservation = NULL;
    }
    if (v0_0_38_job_properties->signal) {
        free(v0_0_38_job_properties->signal);
        v0_0_38_job_properties->signal = NULL;
    }
    if (v0_0_38_job_properties->standard_error) {
        free(v0_0_38_job_properties->standard_error);
        v0_0_38_job_properties->standard_error = NULL;
    }
    if (v0_0_38_job_properties->standard_input) {
        free(v0_0_38_job_properties->standard_input);
        v0_0_38_job_properties->standard_input = NULL;
    }
    if (v0_0_38_job_properties->standard_output) {
        free(v0_0_38_job_properties->standard_output);
        v0_0_38_job_properties->standard_output = NULL;
    }
    if (v0_0_38_job_properties->wckey) {
        free(v0_0_38_job_properties->wckey);
        v0_0_38_job_properties->wckey = NULL;
    }
    free(v0_0_38_job_properties);
}

cJSON *v0_0_38_job_properties_convertToJSON(v0_0_38_job_properties_t *v0_0_38_job_properties) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_38_job_properties->account
    if(v0_0_38_job_properties->account) {
    if(cJSON_AddStringToObject(item, "account", v0_0_38_job_properties->account) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_properties->account_gather_frequency
    if(v0_0_38_job_properties->account_gather_frequency) {
    if(cJSON_AddStringToObject(item, "account_gather_frequency", v0_0_38_job_properties->account_gather_frequency) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_properties->argv
    if(v0_0_38_job_properties->argv) {
    cJSON *argv = cJSON_AddArrayToObject(item, "argv");
    if(argv == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *argvListEntry;
    list_ForEach(argvListEntry, v0_0_38_job_properties->argv) {
    if(cJSON_AddStringToObject(argv, "", (char*)argvListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_38_job_properties->array
    if(v0_0_38_job_properties->array) {
    if(cJSON_AddStringToObject(item, "array", v0_0_38_job_properties->array) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_properties->batch_features
    if(v0_0_38_job_properties->batch_features) {
    if(cJSON_AddStringToObject(item, "batch_features", v0_0_38_job_properties->batch_features) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_properties->begin_time
    if(v0_0_38_job_properties->begin_time) {
    if(cJSON_AddNumberToObject(item, "begin_time", v0_0_38_job_properties->begin_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_properties->burst_buffer
    if(v0_0_38_job_properties->burst_buffer) {
    if(cJSON_AddStringToObject(item, "burst_buffer", v0_0_38_job_properties->burst_buffer) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_properties->cluster_constraint
    if(v0_0_38_job_properties->cluster_constraint) {
    if(cJSON_AddStringToObject(item, "cluster_constraint", v0_0_38_job_properties->cluster_constraint) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_properties->comment
    if(v0_0_38_job_properties->comment) {
    if(cJSON_AddStringToObject(item, "comment", v0_0_38_job_properties->comment) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_properties->constraints
    if(v0_0_38_job_properties->constraints) {
    if(cJSON_AddStringToObject(item, "constraints", v0_0_38_job_properties->constraints) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_properties->container
    if(v0_0_38_job_properties->container) {
    if(cJSON_AddStringToObject(item, "container", v0_0_38_job_properties->container) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_properties->core_specification
    if(v0_0_38_job_properties->core_specification) {
    if(cJSON_AddNumberToObject(item, "core_specification", v0_0_38_job_properties->core_specification) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_properties->cores_per_socket
    if(v0_0_38_job_properties->cores_per_socket) {
    if(cJSON_AddNumberToObject(item, "cores_per_socket", v0_0_38_job_properties->cores_per_socket) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_properties->cpu_binding
    if(v0_0_38_job_properties->cpu_binding) {
    if(cJSON_AddStringToObject(item, "cpu_binding", v0_0_38_job_properties->cpu_binding) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_properties->cpu_binding_hint
    if(v0_0_38_job_properties->cpu_binding_hint) {
    if(cJSON_AddStringToObject(item, "cpu_binding_hint", v0_0_38_job_properties->cpu_binding_hint) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_properties->cpu_frequency
    if(v0_0_38_job_properties->cpu_frequency) {
    if(cJSON_AddStringToObject(item, "cpu_frequency", v0_0_38_job_properties->cpu_frequency) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_properties->cpus_per_gpu
    if(v0_0_38_job_properties->cpus_per_gpu) {
    if(cJSON_AddStringToObject(item, "cpus_per_gpu", v0_0_38_job_properties->cpus_per_gpu) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_properties->cpus_per_task
    if(v0_0_38_job_properties->cpus_per_task) {
    if(cJSON_AddNumberToObject(item, "cpus_per_task", v0_0_38_job_properties->cpus_per_task) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_properties->current_working_directory
    if(v0_0_38_job_properties->current_working_directory) {
    if(cJSON_AddStringToObject(item, "current_working_directory", v0_0_38_job_properties->current_working_directory) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_properties->deadline
    if(v0_0_38_job_properties->deadline) {
    if(cJSON_AddStringToObject(item, "deadline", v0_0_38_job_properties->deadline) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_properties->delay_boot
    if(v0_0_38_job_properties->delay_boot) {
    if(cJSON_AddNumberToObject(item, "delay_boot", v0_0_38_job_properties->delay_boot) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_properties->dependency
    if(v0_0_38_job_properties->dependency) {
    if(cJSON_AddStringToObject(item, "dependency", v0_0_38_job_properties->dependency) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_properties->distribution
    if(v0_0_38_job_properties->distribution) {
    if(cJSON_AddStringToObject(item, "distribution", v0_0_38_job_properties->distribution) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_properties->environment
    if (!v0_0_38_job_properties->environment) {
        goto fail;
    }
    cJSON *environment_object = object_convertToJSON(v0_0_38_job_properties->environment);
    if(environment_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "environment", environment_object);
    if(item->child == NULL) {
    goto fail;
    }


    // v0_0_38_job_properties->exclusive
    if(v0_0_38_job_properties->exclusive != slurm_rest_api_v0_0_38_job_properties_EXCLUSIVE_NULL) {
    if(cJSON_AddStringToObject(item, "exclusive", exclusivev0_0_38_job_properties_ToString(v0_0_38_job_properties->exclusive)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // v0_0_38_job_properties->get_user_environment
    if(v0_0_38_job_properties->get_user_environment) {
    if(cJSON_AddBoolToObject(item, "get_user_environment", v0_0_38_job_properties->get_user_environment) == NULL) {
    goto fail; //Bool
    }
    }


    // v0_0_38_job_properties->gres
    if(v0_0_38_job_properties->gres) {
    if(cJSON_AddStringToObject(item, "gres", v0_0_38_job_properties->gres) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_properties->gres_flags
    if(v0_0_38_job_properties->gres_flags != slurm_rest_api_v0_0_38_job_properties_GRESFLAGS_NULL) {
    if(cJSON_AddStringToObject(item, "gres_flags", gres_flagsv0_0_38_job_properties_ToString(v0_0_38_job_properties->gres_flags)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // v0_0_38_job_properties->gpu_binding
    if(v0_0_38_job_properties->gpu_binding) {
    if(cJSON_AddStringToObject(item, "gpu_binding", v0_0_38_job_properties->gpu_binding) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_properties->gpu_frequency
    if(v0_0_38_job_properties->gpu_frequency) {
    if(cJSON_AddStringToObject(item, "gpu_frequency", v0_0_38_job_properties->gpu_frequency) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_properties->gpus
    if(v0_0_38_job_properties->gpus) {
    if(cJSON_AddStringToObject(item, "gpus", v0_0_38_job_properties->gpus) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_properties->gpus_per_node
    if(v0_0_38_job_properties->gpus_per_node) {
    if(cJSON_AddStringToObject(item, "gpus_per_node", v0_0_38_job_properties->gpus_per_node) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_properties->gpus_per_socket
    if(v0_0_38_job_properties->gpus_per_socket) {
    if(cJSON_AddStringToObject(item, "gpus_per_socket", v0_0_38_job_properties->gpus_per_socket) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_properties->gpus_per_task
    if(v0_0_38_job_properties->gpus_per_task) {
    if(cJSON_AddStringToObject(item, "gpus_per_task", v0_0_38_job_properties->gpus_per_task) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_properties->hold
    if(v0_0_38_job_properties->hold) {
    if(cJSON_AddBoolToObject(item, "hold", v0_0_38_job_properties->hold) == NULL) {
    goto fail; //Bool
    }
    }


    // v0_0_38_job_properties->kill_on_invalid_dependency
    if(v0_0_38_job_properties->kill_on_invalid_dependency) {
    if(cJSON_AddBoolToObject(item, "kill_on_invalid_dependency", v0_0_38_job_properties->kill_on_invalid_dependency) == NULL) {
    goto fail; //Bool
    }
    }


    // v0_0_38_job_properties->licenses
    if(v0_0_38_job_properties->licenses) {
    if(cJSON_AddStringToObject(item, "licenses", v0_0_38_job_properties->licenses) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_properties->mail_type
    if(v0_0_38_job_properties->mail_type) {
    if(cJSON_AddStringToObject(item, "mail_type", v0_0_38_job_properties->mail_type) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_properties->mail_user
    if(v0_0_38_job_properties->mail_user) {
    if(cJSON_AddStringToObject(item, "mail_user", v0_0_38_job_properties->mail_user) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_properties->mcs_label
    if(v0_0_38_job_properties->mcs_label) {
    if(cJSON_AddStringToObject(item, "mcs_label", v0_0_38_job_properties->mcs_label) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_properties->memory_binding
    if(v0_0_38_job_properties->memory_binding) {
    if(cJSON_AddStringToObject(item, "memory_binding", v0_0_38_job_properties->memory_binding) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_properties->memory_per_cpu
    if(v0_0_38_job_properties->memory_per_cpu) {
    if(cJSON_AddNumberToObject(item, "memory_per_cpu", v0_0_38_job_properties->memory_per_cpu) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_properties->memory_per_gpu
    if(v0_0_38_job_properties->memory_per_gpu) {
    if(cJSON_AddNumberToObject(item, "memory_per_gpu", v0_0_38_job_properties->memory_per_gpu) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_properties->memory_per_node
    if(v0_0_38_job_properties->memory_per_node) {
    if(cJSON_AddNumberToObject(item, "memory_per_node", v0_0_38_job_properties->memory_per_node) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_properties->minimum_cpus_per_node
    if(v0_0_38_job_properties->minimum_cpus_per_node) {
    if(cJSON_AddNumberToObject(item, "minimum_cpus_per_node", v0_0_38_job_properties->minimum_cpus_per_node) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_properties->minimum_nodes
    if(v0_0_38_job_properties->minimum_nodes) {
    if(cJSON_AddBoolToObject(item, "minimum_nodes", v0_0_38_job_properties->minimum_nodes) == NULL) {
    goto fail; //Bool
    }
    }


    // v0_0_38_job_properties->name
    if(v0_0_38_job_properties->name) {
    if(cJSON_AddStringToObject(item, "name", v0_0_38_job_properties->name) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_properties->nice
    if(v0_0_38_job_properties->nice) {
    if(cJSON_AddNumberToObject(item, "nice", v0_0_38_job_properties->nice) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_properties->no_kill
    if(v0_0_38_job_properties->no_kill) {
    if(cJSON_AddBoolToObject(item, "no_kill", v0_0_38_job_properties->no_kill) == NULL) {
    goto fail; //Bool
    }
    }


    // v0_0_38_job_properties->nodes
    if(v0_0_38_job_properties->nodes) {
    cJSON *nodes = cJSON_AddArrayToObject(item, "nodes");
    if(nodes == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *nodesListEntry;
    list_ForEach(nodesListEntry, v0_0_38_job_properties->nodes) {
    if(cJSON_AddNumberToObject(nodes, "", *(double *)nodesListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_38_job_properties->open_mode
    if(v0_0_38_job_properties->open_mode != slurm_rest_api_v0_0_38_job_properties_OPENMODE_NULL) {
    if(cJSON_AddStringToObject(item, "open_mode", open_modev0_0_38_job_properties_ToString(v0_0_38_job_properties->open_mode)) == NULL)
    {
    goto fail; //Enum
    }
    }


    // v0_0_38_job_properties->oversubscribe
    if(v0_0_38_job_properties->oversubscribe) {
    if(cJSON_AddBoolToObject(item, "oversubscribe", v0_0_38_job_properties->oversubscribe) == NULL) {
    goto fail; //Bool
    }
    }


    // v0_0_38_job_properties->partition
    if(v0_0_38_job_properties->partition) {
    if(cJSON_AddStringToObject(item, "partition", v0_0_38_job_properties->partition) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_properties->prefer
    if(v0_0_38_job_properties->prefer) {
    if(cJSON_AddStringToObject(item, "prefer", v0_0_38_job_properties->prefer) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_properties->priority
    if(v0_0_38_job_properties->priority) {
    if(cJSON_AddStringToObject(item, "priority", v0_0_38_job_properties->priority) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_properties->qos
    if(v0_0_38_job_properties->qos) {
    if(cJSON_AddStringToObject(item, "qos", v0_0_38_job_properties->qos) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_properties->requeue
    if(v0_0_38_job_properties->requeue) {
    if(cJSON_AddBoolToObject(item, "requeue", v0_0_38_job_properties->requeue) == NULL) {
    goto fail; //Bool
    }
    }


    // v0_0_38_job_properties->reservation
    if(v0_0_38_job_properties->reservation) {
    if(cJSON_AddStringToObject(item, "reservation", v0_0_38_job_properties->reservation) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_properties->signal
    if(v0_0_38_job_properties->signal) {
    if(cJSON_AddStringToObject(item, "signal", v0_0_38_job_properties->signal) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_properties->sockets_per_node
    if(v0_0_38_job_properties->sockets_per_node) {
    if(cJSON_AddNumberToObject(item, "sockets_per_node", v0_0_38_job_properties->sockets_per_node) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_properties->spread_job
    if(v0_0_38_job_properties->spread_job) {
    if(cJSON_AddBoolToObject(item, "spread_job", v0_0_38_job_properties->spread_job) == NULL) {
    goto fail; //Bool
    }
    }


    // v0_0_38_job_properties->standard_error
    if(v0_0_38_job_properties->standard_error) {
    if(cJSON_AddStringToObject(item, "standard_error", v0_0_38_job_properties->standard_error) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_properties->standard_input
    if(v0_0_38_job_properties->standard_input) {
    if(cJSON_AddStringToObject(item, "standard_input", v0_0_38_job_properties->standard_input) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_properties->standard_output
    if(v0_0_38_job_properties->standard_output) {
    if(cJSON_AddStringToObject(item, "standard_output", v0_0_38_job_properties->standard_output) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_job_properties->tasks
    if(v0_0_38_job_properties->tasks) {
    if(cJSON_AddNumberToObject(item, "tasks", v0_0_38_job_properties->tasks) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_properties->tasks_per_core
    if(v0_0_38_job_properties->tasks_per_core) {
    if(cJSON_AddNumberToObject(item, "tasks_per_core", v0_0_38_job_properties->tasks_per_core) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_properties->tasks_per_node
    if(v0_0_38_job_properties->tasks_per_node) {
    if(cJSON_AddNumberToObject(item, "tasks_per_node", v0_0_38_job_properties->tasks_per_node) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_properties->tasks_per_socket
    if(v0_0_38_job_properties->tasks_per_socket) {
    if(cJSON_AddNumberToObject(item, "tasks_per_socket", v0_0_38_job_properties->tasks_per_socket) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_properties->thread_specification
    if(v0_0_38_job_properties->thread_specification) {
    if(cJSON_AddNumberToObject(item, "thread_specification", v0_0_38_job_properties->thread_specification) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_properties->threads_per_core
    if(v0_0_38_job_properties->threads_per_core) {
    if(cJSON_AddNumberToObject(item, "threads_per_core", v0_0_38_job_properties->threads_per_core) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_properties->time_limit
    if(v0_0_38_job_properties->time_limit) {
    if(cJSON_AddNumberToObject(item, "time_limit", v0_0_38_job_properties->time_limit) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_properties->time_minimum
    if(v0_0_38_job_properties->time_minimum) {
    if(cJSON_AddNumberToObject(item, "time_minimum", v0_0_38_job_properties->time_minimum) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_job_properties->wait_all_nodes
    if(v0_0_38_job_properties->wait_all_nodes) {
    if(cJSON_AddBoolToObject(item, "wait_all_nodes", v0_0_38_job_properties->wait_all_nodes) == NULL) {
    goto fail; //Bool
    }
    }


    // v0_0_38_job_properties->wckey
    if(v0_0_38_job_properties->wckey) {
    if(cJSON_AddStringToObject(item, "wckey", v0_0_38_job_properties->wckey) == NULL) {
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

v0_0_38_job_properties_t *v0_0_38_job_properties_parseFromJSON(cJSON *v0_0_38_job_propertiesJSON){

    v0_0_38_job_properties_t *v0_0_38_job_properties_local_var = NULL;

    // define the local list for v0_0_38_job_properties->argv
    list_t *argvList = NULL;

    // define the local list for v0_0_38_job_properties->nodes
    list_t *nodesList = NULL;

    // v0_0_38_job_properties->account
    cJSON *account = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "account");
    if (account) { 
    if(!cJSON_IsString(account) && !cJSON_IsNull(account))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_properties->account_gather_frequency
    cJSON *account_gather_frequency = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "account_gather_frequency");
    if (account_gather_frequency) { 
    if(!cJSON_IsString(account_gather_frequency) && !cJSON_IsNull(account_gather_frequency))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_properties->argv
    cJSON *argv = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "argv");
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

    // v0_0_38_job_properties->array
    cJSON *array = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "array");
    if (array) { 
    if(!cJSON_IsString(array) && !cJSON_IsNull(array))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_properties->batch_features
    cJSON *batch_features = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "batch_features");
    if (batch_features) { 
    if(!cJSON_IsString(batch_features) && !cJSON_IsNull(batch_features))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_properties->begin_time
    cJSON *begin_time = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "begin_time");
    if (begin_time) { 
    if(!cJSON_IsNumber(begin_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_properties->burst_buffer
    cJSON *burst_buffer = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "burst_buffer");
    if (burst_buffer) { 
    if(!cJSON_IsString(burst_buffer) && !cJSON_IsNull(burst_buffer))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_properties->cluster_constraint
    cJSON *cluster_constraint = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "cluster_constraint");
    if (cluster_constraint) { 
    if(!cJSON_IsString(cluster_constraint) && !cJSON_IsNull(cluster_constraint))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_properties->comment
    cJSON *comment = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "comment");
    if (comment) { 
    if(!cJSON_IsString(comment) && !cJSON_IsNull(comment))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_properties->constraints
    cJSON *constraints = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "constraints");
    if (constraints) { 
    if(!cJSON_IsString(constraints) && !cJSON_IsNull(constraints))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_properties->container
    cJSON *container = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "container");
    if (container) { 
    if(!cJSON_IsString(container) && !cJSON_IsNull(container))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_properties->core_specification
    cJSON *core_specification = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "core_specification");
    if (core_specification) { 
    if(!cJSON_IsNumber(core_specification))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_properties->cores_per_socket
    cJSON *cores_per_socket = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "cores_per_socket");
    if (cores_per_socket) { 
    if(!cJSON_IsNumber(cores_per_socket))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_properties->cpu_binding
    cJSON *cpu_binding = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "cpu_binding");
    if (cpu_binding) { 
    if(!cJSON_IsString(cpu_binding) && !cJSON_IsNull(cpu_binding))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_properties->cpu_binding_hint
    cJSON *cpu_binding_hint = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "cpu_binding_hint");
    if (cpu_binding_hint) { 
    if(!cJSON_IsString(cpu_binding_hint) && !cJSON_IsNull(cpu_binding_hint))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_properties->cpu_frequency
    cJSON *cpu_frequency = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "cpu_frequency");
    if (cpu_frequency) { 
    if(!cJSON_IsString(cpu_frequency) && !cJSON_IsNull(cpu_frequency))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_properties->cpus_per_gpu
    cJSON *cpus_per_gpu = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "cpus_per_gpu");
    if (cpus_per_gpu) { 
    if(!cJSON_IsString(cpus_per_gpu) && !cJSON_IsNull(cpus_per_gpu))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_properties->cpus_per_task
    cJSON *cpus_per_task = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "cpus_per_task");
    if (cpus_per_task) { 
    if(!cJSON_IsNumber(cpus_per_task))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_properties->current_working_directory
    cJSON *current_working_directory = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "current_working_directory");
    if (current_working_directory) { 
    if(!cJSON_IsString(current_working_directory) && !cJSON_IsNull(current_working_directory))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_properties->deadline
    cJSON *deadline = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "deadline");
    if (deadline) { 
    if(!cJSON_IsString(deadline) && !cJSON_IsNull(deadline))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_properties->delay_boot
    cJSON *delay_boot = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "delay_boot");
    if (delay_boot) { 
    if(!cJSON_IsNumber(delay_boot))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_properties->dependency
    cJSON *dependency = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "dependency");
    if (dependency) { 
    if(!cJSON_IsString(dependency) && !cJSON_IsNull(dependency))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_properties->distribution
    cJSON *distribution = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "distribution");
    if (distribution) { 
    if(!cJSON_IsString(distribution) && !cJSON_IsNull(distribution))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_properties->environment
    cJSON *environment = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "environment");
    if (!environment) {
        goto end;
    }

    object_t *environment_local_object = NULL;
    
    environment_local_object = object_parseFromJSON(environment); //object

    // v0_0_38_job_properties->exclusive
    cJSON *exclusive = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "exclusive");
    slurm_rest_api_v0_0_38_job_properties_EXCLUSIVE_e exclusiveVariable;
    if (exclusive) { 
    if(!cJSON_IsString(exclusive))
    {
    goto end; //Enum
    }
    exclusiveVariable = exclusivev0_0_38_job_properties_FromString(exclusive->valuestring);
    }

    // v0_0_38_job_properties->get_user_environment
    cJSON *get_user_environment = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "get_user_environment");
    if (get_user_environment) { 
    if(!cJSON_IsBool(get_user_environment))
    {
    goto end; //Bool
    }
    }

    // v0_0_38_job_properties->gres
    cJSON *gres = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "gres");
    if (gres) { 
    if(!cJSON_IsString(gres) && !cJSON_IsNull(gres))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_properties->gres_flags
    cJSON *gres_flags = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "gres_flags");
    slurm_rest_api_v0_0_38_job_properties_GRESFLAGS_e gres_flagsVariable;
    if (gres_flags) { 
    if(!cJSON_IsString(gres_flags))
    {
    goto end; //Enum
    }
    gres_flagsVariable = gres_flagsv0_0_38_job_properties_FromString(gres_flags->valuestring);
    }

    // v0_0_38_job_properties->gpu_binding
    cJSON *gpu_binding = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "gpu_binding");
    if (gpu_binding) { 
    if(!cJSON_IsString(gpu_binding) && !cJSON_IsNull(gpu_binding))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_properties->gpu_frequency
    cJSON *gpu_frequency = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "gpu_frequency");
    if (gpu_frequency) { 
    if(!cJSON_IsString(gpu_frequency) && !cJSON_IsNull(gpu_frequency))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_properties->gpus
    cJSON *gpus = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "gpus");
    if (gpus) { 
    if(!cJSON_IsString(gpus) && !cJSON_IsNull(gpus))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_properties->gpus_per_node
    cJSON *gpus_per_node = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "gpus_per_node");
    if (gpus_per_node) { 
    if(!cJSON_IsString(gpus_per_node) && !cJSON_IsNull(gpus_per_node))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_properties->gpus_per_socket
    cJSON *gpus_per_socket = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "gpus_per_socket");
    if (gpus_per_socket) { 
    if(!cJSON_IsString(gpus_per_socket) && !cJSON_IsNull(gpus_per_socket))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_properties->gpus_per_task
    cJSON *gpus_per_task = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "gpus_per_task");
    if (gpus_per_task) { 
    if(!cJSON_IsString(gpus_per_task) && !cJSON_IsNull(gpus_per_task))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_properties->hold
    cJSON *hold = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "hold");
    if (hold) { 
    if(!cJSON_IsBool(hold))
    {
    goto end; //Bool
    }
    }

    // v0_0_38_job_properties->kill_on_invalid_dependency
    cJSON *kill_on_invalid_dependency = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "kill_on_invalid_dependency");
    if (kill_on_invalid_dependency) { 
    if(!cJSON_IsBool(kill_on_invalid_dependency))
    {
    goto end; //Bool
    }
    }

    // v0_0_38_job_properties->licenses
    cJSON *licenses = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "licenses");
    if (licenses) { 
    if(!cJSON_IsString(licenses) && !cJSON_IsNull(licenses))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_properties->mail_type
    cJSON *mail_type = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "mail_type");
    if (mail_type) { 
    if(!cJSON_IsString(mail_type) && !cJSON_IsNull(mail_type))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_properties->mail_user
    cJSON *mail_user = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "mail_user");
    if (mail_user) { 
    if(!cJSON_IsString(mail_user) && !cJSON_IsNull(mail_user))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_properties->mcs_label
    cJSON *mcs_label = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "mcs_label");
    if (mcs_label) { 
    if(!cJSON_IsString(mcs_label) && !cJSON_IsNull(mcs_label))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_properties->memory_binding
    cJSON *memory_binding = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "memory_binding");
    if (memory_binding) { 
    if(!cJSON_IsString(memory_binding) && !cJSON_IsNull(memory_binding))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_properties->memory_per_cpu
    cJSON *memory_per_cpu = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "memory_per_cpu");
    if (memory_per_cpu) { 
    if(!cJSON_IsNumber(memory_per_cpu))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_properties->memory_per_gpu
    cJSON *memory_per_gpu = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "memory_per_gpu");
    if (memory_per_gpu) { 
    if(!cJSON_IsNumber(memory_per_gpu))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_properties->memory_per_node
    cJSON *memory_per_node = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "memory_per_node");
    if (memory_per_node) { 
    if(!cJSON_IsNumber(memory_per_node))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_properties->minimum_cpus_per_node
    cJSON *minimum_cpus_per_node = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "minimum_cpus_per_node");
    if (minimum_cpus_per_node) { 
    if(!cJSON_IsNumber(minimum_cpus_per_node))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_properties->minimum_nodes
    cJSON *minimum_nodes = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "minimum_nodes");
    if (minimum_nodes) { 
    if(!cJSON_IsBool(minimum_nodes))
    {
    goto end; //Bool
    }
    }

    // v0_0_38_job_properties->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_properties->nice
    cJSON *nice = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "nice");
    if (nice) { 
    if(!cJSON_IsNumber(nice))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_properties->no_kill
    cJSON *no_kill = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "no_kill");
    if (no_kill) { 
    if(!cJSON_IsBool(no_kill))
    {
    goto end; //Bool
    }
    }

    // v0_0_38_job_properties->nodes
    cJSON *nodes = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "nodes");
    if (nodes) { 
    cJSON *nodes_local = NULL;
    if(!cJSON_IsArray(nodes)) {
        goto end;//primitive container
    }
    nodesList = list_createList();

    cJSON_ArrayForEach(nodes_local, nodes)
    {
        if(!cJSON_IsNumber(nodes_local))
        {
            goto end;
        }
        double *nodes_local_value = (double *)calloc(1, sizeof(double));
        if(!nodes_local_value)
        {
            goto end;
        }
        *nodes_local_value = nodes_local->valuedouble;
        list_addElement(nodesList , nodes_local_value);
    }
    }

    // v0_0_38_job_properties->open_mode
    cJSON *open_mode = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "open_mode");
    slurm_rest_api_v0_0_38_job_properties_OPENMODE_e open_modeVariable;
    if (open_mode) { 
    if(!cJSON_IsString(open_mode))
    {
    goto end; //Enum
    }
    open_modeVariable = open_modev0_0_38_job_properties_FromString(open_mode->valuestring);
    }

    // v0_0_38_job_properties->oversubscribe
    cJSON *oversubscribe = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "oversubscribe");
    if (oversubscribe) { 
    if(!cJSON_IsBool(oversubscribe))
    {
    goto end; //Bool
    }
    }

    // v0_0_38_job_properties->partition
    cJSON *partition = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "partition");
    if (partition) { 
    if(!cJSON_IsString(partition) && !cJSON_IsNull(partition))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_properties->prefer
    cJSON *prefer = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "prefer");
    if (prefer) { 
    if(!cJSON_IsString(prefer) && !cJSON_IsNull(prefer))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_properties->priority
    cJSON *priority = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "priority");
    if (priority) { 
    if(!cJSON_IsString(priority) && !cJSON_IsNull(priority))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_properties->qos
    cJSON *qos = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "qos");
    if (qos) { 
    if(!cJSON_IsString(qos) && !cJSON_IsNull(qos))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_properties->requeue
    cJSON *requeue = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "requeue");
    if (requeue) { 
    if(!cJSON_IsBool(requeue))
    {
    goto end; //Bool
    }
    }

    // v0_0_38_job_properties->reservation
    cJSON *reservation = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "reservation");
    if (reservation) { 
    if(!cJSON_IsString(reservation) && !cJSON_IsNull(reservation))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_properties->signal
    cJSON *signal = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "signal");
    if (signal) { 
    if(!cJSON_IsString(signal) && !cJSON_IsNull(signal))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_properties->sockets_per_node
    cJSON *sockets_per_node = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "sockets_per_node");
    if (sockets_per_node) { 
    if(!cJSON_IsNumber(sockets_per_node))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_properties->spread_job
    cJSON *spread_job = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "spread_job");
    if (spread_job) { 
    if(!cJSON_IsBool(spread_job))
    {
    goto end; //Bool
    }
    }

    // v0_0_38_job_properties->standard_error
    cJSON *standard_error = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "standard_error");
    if (standard_error) { 
    if(!cJSON_IsString(standard_error) && !cJSON_IsNull(standard_error))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_properties->standard_input
    cJSON *standard_input = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "standard_input");
    if (standard_input) { 
    if(!cJSON_IsString(standard_input) && !cJSON_IsNull(standard_input))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_properties->standard_output
    cJSON *standard_output = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "standard_output");
    if (standard_output) { 
    if(!cJSON_IsString(standard_output) && !cJSON_IsNull(standard_output))
    {
    goto end; //String
    }
    }

    // v0_0_38_job_properties->tasks
    cJSON *tasks = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "tasks");
    if (tasks) { 
    if(!cJSON_IsNumber(tasks))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_properties->tasks_per_core
    cJSON *tasks_per_core = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "tasks_per_core");
    if (tasks_per_core) { 
    if(!cJSON_IsNumber(tasks_per_core))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_properties->tasks_per_node
    cJSON *tasks_per_node = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "tasks_per_node");
    if (tasks_per_node) { 
    if(!cJSON_IsNumber(tasks_per_node))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_properties->tasks_per_socket
    cJSON *tasks_per_socket = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "tasks_per_socket");
    if (tasks_per_socket) { 
    if(!cJSON_IsNumber(tasks_per_socket))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_properties->thread_specification
    cJSON *thread_specification = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "thread_specification");
    if (thread_specification) { 
    if(!cJSON_IsNumber(thread_specification))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_properties->threads_per_core
    cJSON *threads_per_core = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "threads_per_core");
    if (threads_per_core) { 
    if(!cJSON_IsNumber(threads_per_core))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_properties->time_limit
    cJSON *time_limit = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "time_limit");
    if (time_limit) { 
    if(!cJSON_IsNumber(time_limit))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_properties->time_minimum
    cJSON *time_minimum = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "time_minimum");
    if (time_minimum) { 
    if(!cJSON_IsNumber(time_minimum))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_job_properties->wait_all_nodes
    cJSON *wait_all_nodes = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "wait_all_nodes");
    if (wait_all_nodes) { 
    if(!cJSON_IsBool(wait_all_nodes))
    {
    goto end; //Bool
    }
    }

    // v0_0_38_job_properties->wckey
    cJSON *wckey = cJSON_GetObjectItemCaseSensitive(v0_0_38_job_propertiesJSON, "wckey");
    if (wckey) { 
    if(!cJSON_IsString(wckey) && !cJSON_IsNull(wckey))
    {
    goto end; //String
    }
    }


    v0_0_38_job_properties_local_var = v0_0_38_job_properties_create (
        account && !cJSON_IsNull(account) ? strdup(account->valuestring) : NULL,
        account_gather_frequency && !cJSON_IsNull(account_gather_frequency) ? strdup(account_gather_frequency->valuestring) : NULL,
        argv ? argvList : NULL,
        array && !cJSON_IsNull(array) ? strdup(array->valuestring) : NULL,
        batch_features && !cJSON_IsNull(batch_features) ? strdup(batch_features->valuestring) : NULL,
        begin_time ? begin_time->valuedouble : 0,
        burst_buffer && !cJSON_IsNull(burst_buffer) ? strdup(burst_buffer->valuestring) : NULL,
        cluster_constraint && !cJSON_IsNull(cluster_constraint) ? strdup(cluster_constraint->valuestring) : NULL,
        comment && !cJSON_IsNull(comment) ? strdup(comment->valuestring) : NULL,
        constraints && !cJSON_IsNull(constraints) ? strdup(constraints->valuestring) : NULL,
        container && !cJSON_IsNull(container) ? strdup(container->valuestring) : NULL,
        core_specification ? core_specification->valuedouble : 0,
        cores_per_socket ? cores_per_socket->valuedouble : 0,
        cpu_binding && !cJSON_IsNull(cpu_binding) ? strdup(cpu_binding->valuestring) : NULL,
        cpu_binding_hint && !cJSON_IsNull(cpu_binding_hint) ? strdup(cpu_binding_hint->valuestring) : NULL,
        cpu_frequency && !cJSON_IsNull(cpu_frequency) ? strdup(cpu_frequency->valuestring) : NULL,
        cpus_per_gpu && !cJSON_IsNull(cpus_per_gpu) ? strdup(cpus_per_gpu->valuestring) : NULL,
        cpus_per_task ? cpus_per_task->valuedouble : 0,
        current_working_directory && !cJSON_IsNull(current_working_directory) ? strdup(current_working_directory->valuestring) : NULL,
        deadline && !cJSON_IsNull(deadline) ? strdup(deadline->valuestring) : NULL,
        delay_boot ? delay_boot->valuedouble : 0,
        dependency && !cJSON_IsNull(dependency) ? strdup(dependency->valuestring) : NULL,
        distribution && !cJSON_IsNull(distribution) ? strdup(distribution->valuestring) : NULL,
        environment_local_object,
        exclusive ? exclusiveVariable : -1,
        get_user_environment ? get_user_environment->valueint : 0,
        gres && !cJSON_IsNull(gres) ? strdup(gres->valuestring) : NULL,
        gres_flags ? gres_flagsVariable : -1,
        gpu_binding && !cJSON_IsNull(gpu_binding) ? strdup(gpu_binding->valuestring) : NULL,
        gpu_frequency && !cJSON_IsNull(gpu_frequency) ? strdup(gpu_frequency->valuestring) : NULL,
        gpus && !cJSON_IsNull(gpus) ? strdup(gpus->valuestring) : NULL,
        gpus_per_node && !cJSON_IsNull(gpus_per_node) ? strdup(gpus_per_node->valuestring) : NULL,
        gpus_per_socket && !cJSON_IsNull(gpus_per_socket) ? strdup(gpus_per_socket->valuestring) : NULL,
        gpus_per_task && !cJSON_IsNull(gpus_per_task) ? strdup(gpus_per_task->valuestring) : NULL,
        hold ? hold->valueint : 0,
        kill_on_invalid_dependency ? kill_on_invalid_dependency->valueint : 0,
        licenses && !cJSON_IsNull(licenses) ? strdup(licenses->valuestring) : NULL,
        mail_type && !cJSON_IsNull(mail_type) ? strdup(mail_type->valuestring) : NULL,
        mail_user && !cJSON_IsNull(mail_user) ? strdup(mail_user->valuestring) : NULL,
        mcs_label && !cJSON_IsNull(mcs_label) ? strdup(mcs_label->valuestring) : NULL,
        memory_binding && !cJSON_IsNull(memory_binding) ? strdup(memory_binding->valuestring) : NULL,
        memory_per_cpu ? memory_per_cpu->valuedouble : 0,
        memory_per_gpu ? memory_per_gpu->valuedouble : 0,
        memory_per_node ? memory_per_node->valuedouble : 0,
        minimum_cpus_per_node ? minimum_cpus_per_node->valuedouble : 0,
        minimum_nodes ? minimum_nodes->valueint : 0,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        nice ? nice->valuedouble : 0,
        no_kill ? no_kill->valueint : 0,
        nodes ? nodesList : NULL,
        open_mode ? open_modeVariable : -1,
        oversubscribe ? oversubscribe->valueint : 0,
        partition && !cJSON_IsNull(partition) ? strdup(partition->valuestring) : NULL,
        prefer && !cJSON_IsNull(prefer) ? strdup(prefer->valuestring) : NULL,
        priority && !cJSON_IsNull(priority) ? strdup(priority->valuestring) : NULL,
        qos && !cJSON_IsNull(qos) ? strdup(qos->valuestring) : NULL,
        requeue ? requeue->valueint : 0,
        reservation && !cJSON_IsNull(reservation) ? strdup(reservation->valuestring) : NULL,
        signal && !cJSON_IsNull(signal) ? strdup(signal->valuestring) : NULL,
        sockets_per_node ? sockets_per_node->valuedouble : 0,
        spread_job ? spread_job->valueint : 0,
        standard_error && !cJSON_IsNull(standard_error) ? strdup(standard_error->valuestring) : NULL,
        standard_input && !cJSON_IsNull(standard_input) ? strdup(standard_input->valuestring) : NULL,
        standard_output && !cJSON_IsNull(standard_output) ? strdup(standard_output->valuestring) : NULL,
        tasks ? tasks->valuedouble : 0,
        tasks_per_core ? tasks_per_core->valuedouble : 0,
        tasks_per_node ? tasks_per_node->valuedouble : 0,
        tasks_per_socket ? tasks_per_socket->valuedouble : 0,
        thread_specification ? thread_specification->valuedouble : 0,
        threads_per_core ? threads_per_core->valuedouble : 0,
        time_limit ? time_limit->valuedouble : 0,
        time_minimum ? time_minimum->valuedouble : 0,
        wait_all_nodes ? wait_all_nodes->valueint : 0,
        wckey && !cJSON_IsNull(wckey) ? strdup(wckey->valuestring) : NULL
        );

    return v0_0_38_job_properties_local_var;
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
    if (nodesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, nodesList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(nodesList);
        nodesList = NULL;
    }
    return NULL;

}
