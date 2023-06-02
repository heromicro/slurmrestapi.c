#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_node.h"


char* next_state_after_rebootv0_0_39_node_ToString(slurm_rest_api_v0_0_39_node_NEXTSTATEAFTERREBOOT_e next_state_after_reboot) {
	char *next_state_after_rebootArray[] =  { "NULL", "INVALID", "UNKNOWN", "DOWN", "IDLE", "ALLOCATED", "ERROR", "MIXED", "FUTURE", "PERFCTRS", "RESERVED", "UNDRAIN", "CLOUD", "RESUME", "DRAIN", "COMPLETING", "NOT_RESPONDING", "POWERED_DOWN", "FAIL", "POWERING_UP", "MAINTENANCE", "REBOOT_REQUESTED", "REBOOT_CANCELED", "POWERING_DOWN", "DYNAMIC_FUTURE", "REBOOT_ISSUED", "PLANNED", "INVALID_REG", "POWER_DOWN", "POWER_UP", "POWER_DRAIN", "DYNAMIC_NORM" };
	return next_state_after_rebootArray[next_state_after_reboot - 1];
}

slurm_rest_api_v0_0_39_node_NEXTSTATEAFTERREBOOT_e next_state_after_rebootv0_0_39_node_FromString(char* next_state_after_reboot) {
    int stringToReturn = 0;
    char *next_state_after_rebootArray[] =  { "NULL", "INVALID", "UNKNOWN", "DOWN", "IDLE", "ALLOCATED", "ERROR", "MIXED", "FUTURE", "PERFCTRS", "RESERVED", "UNDRAIN", "CLOUD", "RESUME", "DRAIN", "COMPLETING", "NOT_RESPONDING", "POWERED_DOWN", "FAIL", "POWERING_UP", "MAINTENANCE", "REBOOT_REQUESTED", "REBOOT_CANCELED", "POWERING_DOWN", "DYNAMIC_FUTURE", "REBOOT_ISSUED", "PLANNED", "INVALID_REG", "POWER_DOWN", "POWER_UP", "POWER_DRAIN", "DYNAMIC_NORM" };
    size_t sizeofArray = sizeof(next_state_after_rebootArray) / sizeof(next_state_after_rebootArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(next_state_after_reboot, next_state_after_rebootArray[stringToReturn]) == 0) {
            return stringToReturn + 1;
        }
        stringToReturn++;
    }
    return 0;
}
char* statev0_0_39_node_ToString(slurm_rest_api_v0_0_39_node_STATE_e state) {
	char *stateArray[] =  { "NULL", "INVALID", "UNKNOWN", "DOWN", "IDLE", "ALLOCATED", "ERROR", "MIXED", "FUTURE", "PERFCTRS", "RESERVED", "UNDRAIN", "CLOUD", "RESUME", "DRAIN", "COMPLETING", "NOT_RESPONDING", "POWERED_DOWN", "FAIL", "POWERING_UP", "MAINTENANCE", "REBOOT_REQUESTED", "REBOOT_CANCELED", "POWERING_DOWN", "DYNAMIC_FUTURE", "REBOOT_ISSUED", "PLANNED", "INVALID_REG", "POWER_DOWN", "POWER_UP", "POWER_DRAIN", "DYNAMIC_NORM" };
	return stateArray[state - 1];
}

slurm_rest_api_v0_0_39_node_STATE_e statev0_0_39_node_FromString(char* state) {
    int stringToReturn = 0;
    char *stateArray[] =  { "NULL", "INVALID", "UNKNOWN", "DOWN", "IDLE", "ALLOCATED", "ERROR", "MIXED", "FUTURE", "PERFCTRS", "RESERVED", "UNDRAIN", "CLOUD", "RESUME", "DRAIN", "COMPLETING", "NOT_RESPONDING", "POWERED_DOWN", "FAIL", "POWERING_UP", "MAINTENANCE", "REBOOT_REQUESTED", "REBOOT_CANCELED", "POWERING_DOWN", "DYNAMIC_FUTURE", "REBOOT_ISSUED", "PLANNED", "INVALID_REG", "POWER_DOWN", "POWER_UP", "POWER_DRAIN", "DYNAMIC_NORM" };
    size_t sizeofArray = sizeof(stateArray) / sizeof(stateArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(state, stateArray[stringToReturn]) == 0) {
            return stringToReturn + 1;
        }
        stringToReturn++;
    }
    return 0;
}

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
    ) {
    v0_0_39_node_t *v0_0_39_node_local_var = malloc(sizeof(v0_0_39_node_t));
    if (!v0_0_39_node_local_var) {
        return NULL;
    }
    v0_0_39_node_local_var->architecture = architecture;
    v0_0_39_node_local_var->burstbuffer_network_address = burstbuffer_network_address;
    v0_0_39_node_local_var->boards = boards;
    v0_0_39_node_local_var->boot_time = boot_time;
    v0_0_39_node_local_var->cluster_name = cluster_name;
    v0_0_39_node_local_var->cores = cores;
    v0_0_39_node_local_var->specialized_cores = specialized_cores;
    v0_0_39_node_local_var->cpu_binding = cpu_binding;
    v0_0_39_node_local_var->cpu_load = cpu_load;
    v0_0_39_node_local_var->free_mem = free_mem;
    v0_0_39_node_local_var->cpus = cpus;
    v0_0_39_node_local_var->effective_cpus = effective_cpus;
    v0_0_39_node_local_var->specialized_cpus = specialized_cpus;
    v0_0_39_node_local_var->energy = energy;
    v0_0_39_node_local_var->external_sensors = external_sensors;
    v0_0_39_node_local_var->extra = extra;
    v0_0_39_node_local_var->power = power;
    v0_0_39_node_local_var->features = features;
    v0_0_39_node_local_var->active_features = active_features;
    v0_0_39_node_local_var->gres = gres;
    v0_0_39_node_local_var->gres_drained = gres_drained;
    v0_0_39_node_local_var->gres_used = gres_used;
    v0_0_39_node_local_var->last_busy = last_busy;
    v0_0_39_node_local_var->mcs_label = mcs_label;
    v0_0_39_node_local_var->specialized_memory = specialized_memory;
    v0_0_39_node_local_var->name = name;
    v0_0_39_node_local_var->next_state_after_reboot = next_state_after_reboot;
    v0_0_39_node_local_var->address = address;
    v0_0_39_node_local_var->hostname = hostname;
    v0_0_39_node_local_var->state = state;
    v0_0_39_node_local_var->operating_system = operating_system;
    v0_0_39_node_local_var->owner = owner;
    v0_0_39_node_local_var->partitions = partitions;
    v0_0_39_node_local_var->port = port;
    v0_0_39_node_local_var->real_memory = real_memory;
    v0_0_39_node_local_var->comment = comment;
    v0_0_39_node_local_var->reason = reason;
    v0_0_39_node_local_var->reason_changed_at = reason_changed_at;
    v0_0_39_node_local_var->reason_set_by_user = reason_set_by_user;
    v0_0_39_node_local_var->resume_after = resume_after;
    v0_0_39_node_local_var->reservation = reservation;
    v0_0_39_node_local_var->alloc_memory = alloc_memory;
    v0_0_39_node_local_var->alloc_cpus = alloc_cpus;
    v0_0_39_node_local_var->alloc_idle_cpus = alloc_idle_cpus;
    v0_0_39_node_local_var->tres_used = tres_used;
    v0_0_39_node_local_var->tres_weighted = tres_weighted;
    v0_0_39_node_local_var->slurmd_start_time = slurmd_start_time;
    v0_0_39_node_local_var->sockets = sockets;
    v0_0_39_node_local_var->threads = threads;
    v0_0_39_node_local_var->temporary_disk = temporary_disk;
    v0_0_39_node_local_var->weight = weight;
    v0_0_39_node_local_var->tres = tres;
    v0_0_39_node_local_var->version = version;

    return v0_0_39_node_local_var;
}


void v0_0_39_node_free(v0_0_39_node_t *v0_0_39_node) {
    if(NULL == v0_0_39_node){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_node->architecture) {
        free(v0_0_39_node->architecture);
        v0_0_39_node->architecture = NULL;
    }
    if (v0_0_39_node->burstbuffer_network_address) {
        free(v0_0_39_node->burstbuffer_network_address);
        v0_0_39_node->burstbuffer_network_address = NULL;
    }
    if (v0_0_39_node->cluster_name) {
        free(v0_0_39_node->cluster_name);
        v0_0_39_node->cluster_name = NULL;
    }
    if (v0_0_39_node->cpu_load) {
        v0_0_39_uint32_no_val_free(v0_0_39_node->cpu_load);
        v0_0_39_node->cpu_load = NULL;
    }
    if (v0_0_39_node->free_mem) {
        v0_0_39_uint64_no_val_free(v0_0_39_node->free_mem);
        v0_0_39_node->free_mem = NULL;
    }
    if (v0_0_39_node->specialized_cpus) {
        free(v0_0_39_node->specialized_cpus);
        v0_0_39_node->specialized_cpus = NULL;
    }
    if (v0_0_39_node->energy) {
        v0_0_39_acct_gather_energy_free(v0_0_39_node->energy);
        v0_0_39_node->energy = NULL;
    }
    if (v0_0_39_node->external_sensors) {
        v0_0_39_ext_sensors_data_free(v0_0_39_node->external_sensors);
        v0_0_39_node->external_sensors = NULL;
    }
    if (v0_0_39_node->extra) {
        free(v0_0_39_node->extra);
        v0_0_39_node->extra = NULL;
    }
    if (v0_0_39_node->power) {
        v0_0_39_power_mgmt_data_free(v0_0_39_node->power);
        v0_0_39_node->power = NULL;
    }
    if (v0_0_39_node->features) {
        list_ForEach(listEntry, v0_0_39_node->features) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_node->features);
        v0_0_39_node->features = NULL;
    }
    if (v0_0_39_node->active_features) {
        list_ForEach(listEntry, v0_0_39_node->active_features) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_node->active_features);
        v0_0_39_node->active_features = NULL;
    }
    if (v0_0_39_node->gres) {
        free(v0_0_39_node->gres);
        v0_0_39_node->gres = NULL;
    }
    if (v0_0_39_node->gres_drained) {
        free(v0_0_39_node->gres_drained);
        v0_0_39_node->gres_drained = NULL;
    }
    if (v0_0_39_node->gres_used) {
        free(v0_0_39_node->gres_used);
        v0_0_39_node->gres_used = NULL;
    }
    if (v0_0_39_node->mcs_label) {
        free(v0_0_39_node->mcs_label);
        v0_0_39_node->mcs_label = NULL;
    }
    if (v0_0_39_node->name) {
        free(v0_0_39_node->name);
        v0_0_39_node->name = NULL;
    }
    if (v0_0_39_node->next_state_after_reboot) {
        list_ForEach(listEntry, v0_0_39_node->next_state_after_reboot) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_node->next_state_after_reboot);
        v0_0_39_node->next_state_after_reboot = NULL;
    }
    if (v0_0_39_node->address) {
        free(v0_0_39_node->address);
        v0_0_39_node->address = NULL;
    }
    if (v0_0_39_node->hostname) {
        free(v0_0_39_node->hostname);
        v0_0_39_node->hostname = NULL;
    }
    if (v0_0_39_node->state) {
        list_ForEach(listEntry, v0_0_39_node->state) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_node->state);
        v0_0_39_node->state = NULL;
    }
    if (v0_0_39_node->operating_system) {
        free(v0_0_39_node->operating_system);
        v0_0_39_node->operating_system = NULL;
    }
    if (v0_0_39_node->owner) {
        free(v0_0_39_node->owner);
        v0_0_39_node->owner = NULL;
    }
    if (v0_0_39_node->partitions) {
        list_ForEach(listEntry, v0_0_39_node->partitions) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_node->partitions);
        v0_0_39_node->partitions = NULL;
    }
    if (v0_0_39_node->comment) {
        free(v0_0_39_node->comment);
        v0_0_39_node->comment = NULL;
    }
    if (v0_0_39_node->reason) {
        free(v0_0_39_node->reason);
        v0_0_39_node->reason = NULL;
    }
    if (v0_0_39_node->reason_set_by_user) {
        free(v0_0_39_node->reason_set_by_user);
        v0_0_39_node->reason_set_by_user = NULL;
    }
    if (v0_0_39_node->resume_after) {
        v0_0_39_uint64_no_val_free(v0_0_39_node->resume_after);
        v0_0_39_node->resume_after = NULL;
    }
    if (v0_0_39_node->reservation) {
        free(v0_0_39_node->reservation);
        v0_0_39_node->reservation = NULL;
    }
    if (v0_0_39_node->tres_used) {
        free(v0_0_39_node->tres_used);
        v0_0_39_node->tres_used = NULL;
    }
    if (v0_0_39_node->tres) {
        free(v0_0_39_node->tres);
        v0_0_39_node->tres = NULL;
    }
    if (v0_0_39_node->version) {
        free(v0_0_39_node->version);
        v0_0_39_node->version = NULL;
    }
    free(v0_0_39_node);
}

cJSON *v0_0_39_node_convertToJSON(v0_0_39_node_t *v0_0_39_node) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_node->architecture
    if(v0_0_39_node->architecture) {
    if(cJSON_AddStringToObject(item, "architecture", v0_0_39_node->architecture) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_node->burstbuffer_network_address
    if(v0_0_39_node->burstbuffer_network_address) {
    if(cJSON_AddStringToObject(item, "burstbuffer_network_address", v0_0_39_node->burstbuffer_network_address) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_node->boards
    if(v0_0_39_node->boards) {
    if(cJSON_AddNumberToObject(item, "boards", v0_0_39_node->boards) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_node->boot_time
    if(v0_0_39_node->boot_time) {
    if(cJSON_AddNumberToObject(item, "boot_time", v0_0_39_node->boot_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_node->cluster_name
    if(v0_0_39_node->cluster_name) {
    if(cJSON_AddStringToObject(item, "cluster_name", v0_0_39_node->cluster_name) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_node->cores
    if(v0_0_39_node->cores) {
    if(cJSON_AddNumberToObject(item, "cores", v0_0_39_node->cores) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_node->specialized_cores
    if(v0_0_39_node->specialized_cores) {
    if(cJSON_AddNumberToObject(item, "specialized_cores", v0_0_39_node->specialized_cores) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_node->cpu_binding
    if(v0_0_39_node->cpu_binding) {
    if(cJSON_AddNumberToObject(item, "cpu_binding", v0_0_39_node->cpu_binding) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_node->cpu_load
    if(v0_0_39_node->cpu_load) {
    cJSON *cpu_load_local_JSON = v0_0_39_uint32_no_val_convertToJSON(v0_0_39_node->cpu_load);
    if(cpu_load_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "cpu_load", cpu_load_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_node->free_mem
    if(v0_0_39_node->free_mem) {
    cJSON *free_mem_local_JSON = v0_0_39_uint64_no_val_convertToJSON(v0_0_39_node->free_mem);
    if(free_mem_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "free_mem", free_mem_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_node->cpus
    if(v0_0_39_node->cpus) {
    if(cJSON_AddNumberToObject(item, "cpus", v0_0_39_node->cpus) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_node->effective_cpus
    if(v0_0_39_node->effective_cpus) {
    if(cJSON_AddNumberToObject(item, "effective_cpus", v0_0_39_node->effective_cpus) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_node->specialized_cpus
    if(v0_0_39_node->specialized_cpus) {
    if(cJSON_AddStringToObject(item, "specialized_cpus", v0_0_39_node->specialized_cpus) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_node->energy
    if(v0_0_39_node->energy) {
    cJSON *energy_local_JSON = v0_0_39_acct_gather_energy_convertToJSON(v0_0_39_node->energy);
    if(energy_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "energy", energy_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_node->external_sensors
    if(v0_0_39_node->external_sensors) {
    cJSON *external_sensors_local_JSON = v0_0_39_ext_sensors_data_convertToJSON(v0_0_39_node->external_sensors);
    if(external_sensors_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "external_sensors", external_sensors_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_node->extra
    if(v0_0_39_node->extra) {
    if(cJSON_AddStringToObject(item, "extra", v0_0_39_node->extra) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_node->power
    if(v0_0_39_node->power) {
    cJSON *power_local_JSON = v0_0_39_power_mgmt_data_convertToJSON(v0_0_39_node->power);
    if(power_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "power", power_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_node->features
    if(v0_0_39_node->features) {
    cJSON *features = cJSON_AddArrayToObject(item, "features");
    if(features == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *featuresListEntry;
    list_ForEach(featuresListEntry, v0_0_39_node->features) {
    if(cJSON_AddStringToObject(features, "", (char*)featuresListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_node->active_features
    if(v0_0_39_node->active_features) {
    cJSON *active_features = cJSON_AddArrayToObject(item, "active_features");
    if(active_features == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *active_featuresListEntry;
    list_ForEach(active_featuresListEntry, v0_0_39_node->active_features) {
    if(cJSON_AddStringToObject(active_features, "", (char*)active_featuresListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_node->gres
    if(v0_0_39_node->gres) {
    if(cJSON_AddStringToObject(item, "gres", v0_0_39_node->gres) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_node->gres_drained
    if(v0_0_39_node->gres_drained) {
    if(cJSON_AddStringToObject(item, "gres_drained", v0_0_39_node->gres_drained) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_node->gres_used
    if(v0_0_39_node->gres_used) {
    if(cJSON_AddStringToObject(item, "gres_used", v0_0_39_node->gres_used) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_node->last_busy
    if(v0_0_39_node->last_busy) {
    if(cJSON_AddNumberToObject(item, "last_busy", v0_0_39_node->last_busy) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_node->mcs_label
    if(v0_0_39_node->mcs_label) {
    if(cJSON_AddStringToObject(item, "mcs_label", v0_0_39_node->mcs_label) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_node->specialized_memory
    if(v0_0_39_node->specialized_memory) {
    if(cJSON_AddNumberToObject(item, "specialized_memory", v0_0_39_node->specialized_memory) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_node->name
    if(v0_0_39_node->name) {
    if(cJSON_AddStringToObject(item, "name", v0_0_39_node->name) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_node->next_state_after_reboot
    if(v0_0_39_node->next_state_after_reboot != slurm_rest_api_v0_0_39_node_NEXTSTATEAFTERREBOOT_NULL) {
    cJSON *next_state_after_reboot = cJSON_AddArrayToObject(item, "next_state_after_reboot");
    if(next_state_after_reboot == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *next_state_after_rebootListEntry;
    list_ForEach(next_state_after_rebootListEntry, v0_0_39_node->next_state_after_reboot) {
    if(cJSON_AddStringToObject(next_state_after_reboot, "", (char*)next_state_after_rebootListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_node->address
    if(v0_0_39_node->address) {
    if(cJSON_AddStringToObject(item, "address", v0_0_39_node->address) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_node->hostname
    if(v0_0_39_node->hostname) {
    if(cJSON_AddStringToObject(item, "hostname", v0_0_39_node->hostname) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_node->state
    if(v0_0_39_node->state != slurm_rest_api_v0_0_39_node_STATE_NULL) {
    cJSON *state = cJSON_AddArrayToObject(item, "state");
    if(state == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *stateListEntry;
    list_ForEach(stateListEntry, v0_0_39_node->state) {
    if(cJSON_AddStringToObject(state, "", (char*)stateListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_node->operating_system
    if(v0_0_39_node->operating_system) {
    if(cJSON_AddStringToObject(item, "operating_system", v0_0_39_node->operating_system) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_node->owner
    if(v0_0_39_node->owner) {
    if(cJSON_AddStringToObject(item, "owner", v0_0_39_node->owner) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_node->partitions
    if(v0_0_39_node->partitions) {
    cJSON *partitions = cJSON_AddArrayToObject(item, "partitions");
    if(partitions == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *partitionsListEntry;
    list_ForEach(partitionsListEntry, v0_0_39_node->partitions) {
    if(cJSON_AddStringToObject(partitions, "", (char*)partitionsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_node->port
    if(v0_0_39_node->port) {
    if(cJSON_AddNumberToObject(item, "port", v0_0_39_node->port) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_node->real_memory
    if(v0_0_39_node->real_memory) {
    if(cJSON_AddNumberToObject(item, "real_memory", v0_0_39_node->real_memory) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_node->comment
    if(v0_0_39_node->comment) {
    if(cJSON_AddStringToObject(item, "comment", v0_0_39_node->comment) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_node->reason
    if(v0_0_39_node->reason) {
    if(cJSON_AddStringToObject(item, "reason", v0_0_39_node->reason) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_node->reason_changed_at
    if(v0_0_39_node->reason_changed_at) {
    if(cJSON_AddNumberToObject(item, "reason_changed_at", v0_0_39_node->reason_changed_at) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_node->reason_set_by_user
    if(v0_0_39_node->reason_set_by_user) {
    if(cJSON_AddStringToObject(item, "reason_set_by_user", v0_0_39_node->reason_set_by_user) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_node->resume_after
    if(v0_0_39_node->resume_after) {
    cJSON *resume_after_local_JSON = v0_0_39_uint64_no_val_convertToJSON(v0_0_39_node->resume_after);
    if(resume_after_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "resume_after", resume_after_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_node->reservation
    if(v0_0_39_node->reservation) {
    if(cJSON_AddStringToObject(item, "reservation", v0_0_39_node->reservation) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_node->alloc_memory
    if(v0_0_39_node->alloc_memory) {
    if(cJSON_AddNumberToObject(item, "alloc_memory", v0_0_39_node->alloc_memory) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_node->alloc_cpus
    if(v0_0_39_node->alloc_cpus) {
    if(cJSON_AddNumberToObject(item, "alloc_cpus", v0_0_39_node->alloc_cpus) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_node->alloc_idle_cpus
    if(v0_0_39_node->alloc_idle_cpus) {
    if(cJSON_AddNumberToObject(item, "alloc_idle_cpus", v0_0_39_node->alloc_idle_cpus) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_node->tres_used
    if(v0_0_39_node->tres_used) {
    if(cJSON_AddStringToObject(item, "tres_used", v0_0_39_node->tres_used) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_node->tres_weighted
    if(v0_0_39_node->tres_weighted) {
    if(cJSON_AddNumberToObject(item, "tres_weighted", v0_0_39_node->tres_weighted) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_node->slurmd_start_time
    if(v0_0_39_node->slurmd_start_time) {
    if(cJSON_AddNumberToObject(item, "slurmd_start_time", v0_0_39_node->slurmd_start_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_node->sockets
    if(v0_0_39_node->sockets) {
    if(cJSON_AddNumberToObject(item, "sockets", v0_0_39_node->sockets) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_node->threads
    if(v0_0_39_node->threads) {
    if(cJSON_AddNumberToObject(item, "threads", v0_0_39_node->threads) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_node->temporary_disk
    if(v0_0_39_node->temporary_disk) {
    if(cJSON_AddNumberToObject(item, "temporary_disk", v0_0_39_node->temporary_disk) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_node->weight
    if(v0_0_39_node->weight) {
    if(cJSON_AddNumberToObject(item, "weight", v0_0_39_node->weight) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_node->tres
    if(v0_0_39_node->tres) {
    if(cJSON_AddStringToObject(item, "tres", v0_0_39_node->tres) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_node->version
    if(v0_0_39_node->version) {
    if(cJSON_AddStringToObject(item, "version", v0_0_39_node->version) == NULL) {
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

v0_0_39_node_t *v0_0_39_node_parseFromJSON(cJSON *v0_0_39_nodeJSON){

    v0_0_39_node_t *v0_0_39_node_local_var = NULL;

    // define the local variable for v0_0_39_node->cpu_load
    v0_0_39_uint32_no_val_t *cpu_load_local_nonprim = NULL;

    // define the local variable for v0_0_39_node->free_mem
    v0_0_39_uint64_no_val_t *free_mem_local_nonprim = NULL;

    // define the local variable for v0_0_39_node->energy
    v0_0_39_acct_gather_energy_t *energy_local_nonprim = NULL;

    // define the local variable for v0_0_39_node->external_sensors
    v0_0_39_ext_sensors_data_t *external_sensors_local_nonprim = NULL;

    // define the local variable for v0_0_39_node->power
    v0_0_39_power_mgmt_data_t *power_local_nonprim = NULL;

    // define the local list for v0_0_39_node->features
    list_t *featuresList = NULL;

    // define the local list for v0_0_39_node->active_features
    list_t *active_featuresList = NULL;

    // define the local list for v0_0_39_node->next_state_after_reboot
    list_t *next_state_after_rebootList = NULL;

    // define the local list for v0_0_39_node->state
    list_t *stateList = NULL;

    // define the local list for v0_0_39_node->partitions
    list_t *partitionsList = NULL;

    // define the local variable for v0_0_39_node->resume_after
    v0_0_39_uint64_no_val_t *resume_after_local_nonprim = NULL;

    // v0_0_39_node->architecture
    cJSON *architecture = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "architecture");
    if (architecture) { 
    if(!cJSON_IsString(architecture) && !cJSON_IsNull(architecture))
    {
    goto end; //String
    }
    }

    // v0_0_39_node->burstbuffer_network_address
    cJSON *burstbuffer_network_address = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "burstbuffer_network_address");
    if (burstbuffer_network_address) { 
    if(!cJSON_IsString(burstbuffer_network_address) && !cJSON_IsNull(burstbuffer_network_address))
    {
    goto end; //String
    }
    }

    // v0_0_39_node->boards
    cJSON *boards = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "boards");
    if (boards) { 
    if(!cJSON_IsNumber(boards))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_node->boot_time
    cJSON *boot_time = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "boot_time");
    if (boot_time) { 
    if(!cJSON_IsNumber(boot_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_node->cluster_name
    cJSON *cluster_name = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "cluster_name");
    if (cluster_name) { 
    if(!cJSON_IsString(cluster_name) && !cJSON_IsNull(cluster_name))
    {
    goto end; //String
    }
    }

    // v0_0_39_node->cores
    cJSON *cores = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "cores");
    if (cores) { 
    if(!cJSON_IsNumber(cores))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_node->specialized_cores
    cJSON *specialized_cores = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "specialized_cores");
    if (specialized_cores) { 
    if(!cJSON_IsNumber(specialized_cores))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_node->cpu_binding
    cJSON *cpu_binding = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "cpu_binding");
    if (cpu_binding) { 
    if(!cJSON_IsNumber(cpu_binding))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_node->cpu_load
    cJSON *cpu_load = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "cpu_load");
    if (cpu_load) { 
    cpu_load_local_nonprim = v0_0_39_uint32_no_val_parseFromJSON(cpu_load); //nonprimitive
    }

    // v0_0_39_node->free_mem
    cJSON *free_mem = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "free_mem");
    if (free_mem) { 
    free_mem_local_nonprim = v0_0_39_uint64_no_val_parseFromJSON(free_mem); //nonprimitive
    }

    // v0_0_39_node->cpus
    cJSON *cpus = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "cpus");
    if (cpus) { 
    if(!cJSON_IsNumber(cpus))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_node->effective_cpus
    cJSON *effective_cpus = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "effective_cpus");
    if (effective_cpus) { 
    if(!cJSON_IsNumber(effective_cpus))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_node->specialized_cpus
    cJSON *specialized_cpus = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "specialized_cpus");
    if (specialized_cpus) { 
    if(!cJSON_IsString(specialized_cpus) && !cJSON_IsNull(specialized_cpus))
    {
    goto end; //String
    }
    }

    // v0_0_39_node->energy
    cJSON *energy = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "energy");
    if (energy) { 
    energy_local_nonprim = v0_0_39_acct_gather_energy_parseFromJSON(energy); //nonprimitive
    }

    // v0_0_39_node->external_sensors
    cJSON *external_sensors = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "external_sensors");
    if (external_sensors) { 
    external_sensors_local_nonprim = v0_0_39_ext_sensors_data_parseFromJSON(external_sensors); //nonprimitive
    }

    // v0_0_39_node->extra
    cJSON *extra = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "extra");
    if (extra) { 
    if(!cJSON_IsString(extra) && !cJSON_IsNull(extra))
    {
    goto end; //String
    }
    }

    // v0_0_39_node->power
    cJSON *power = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "power");
    if (power) { 
    power_local_nonprim = v0_0_39_power_mgmt_data_parseFromJSON(power); //nonprimitive
    }

    // v0_0_39_node->features
    cJSON *features = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "features");
    if (features) { 
    cJSON *features_local = NULL;
    if(!cJSON_IsArray(features)) {
        goto end;//primitive container
    }
    featuresList = list_createList();

    cJSON_ArrayForEach(features_local, features)
    {
        if(!cJSON_IsString(features_local))
        {
            goto end;
        }
        list_addElement(featuresList , strdup(features_local->valuestring));
    }
    }

    // v0_0_39_node->active_features
    cJSON *active_features = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "active_features");
    if (active_features) { 
    cJSON *active_features_local = NULL;
    if(!cJSON_IsArray(active_features)) {
        goto end;//primitive container
    }
    active_featuresList = list_createList();

    cJSON_ArrayForEach(active_features_local, active_features)
    {
        if(!cJSON_IsString(active_features_local))
        {
            goto end;
        }
        list_addElement(active_featuresList , strdup(active_features_local->valuestring));
    }
    }

    // v0_0_39_node->gres
    cJSON *gres = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "gres");
    if (gres) { 
    if(!cJSON_IsString(gres) && !cJSON_IsNull(gres))
    {
    goto end; //String
    }
    }

    // v0_0_39_node->gres_drained
    cJSON *gres_drained = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "gres_drained");
    if (gres_drained) { 
    if(!cJSON_IsString(gres_drained) && !cJSON_IsNull(gres_drained))
    {
    goto end; //String
    }
    }

    // v0_0_39_node->gres_used
    cJSON *gres_used = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "gres_used");
    if (gres_used) { 
    if(!cJSON_IsString(gres_used) && !cJSON_IsNull(gres_used))
    {
    goto end; //String
    }
    }

    // v0_0_39_node->last_busy
    cJSON *last_busy = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "last_busy");
    if (last_busy) { 
    if(!cJSON_IsNumber(last_busy))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_node->mcs_label
    cJSON *mcs_label = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "mcs_label");
    if (mcs_label) { 
    if(!cJSON_IsString(mcs_label) && !cJSON_IsNull(mcs_label))
    {
    goto end; //String
    }
    }

    // v0_0_39_node->specialized_memory
    cJSON *specialized_memory = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "specialized_memory");
    if (specialized_memory) { 
    if(!cJSON_IsNumber(specialized_memory))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_node->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // v0_0_39_node->next_state_after_reboot
    cJSON *next_state_after_reboot = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "next_state_after_reboot");
    if (next_state_after_reboot) { 
    cJSON *next_state_after_reboot_local = NULL;
    if(!cJSON_IsArray(next_state_after_reboot)) {
        goto end;//primitive container
    }
    next_state_after_rebootList = list_createList();

    cJSON_ArrayForEach(next_state_after_reboot_local, next_state_after_reboot)
    {
        if(!cJSON_IsString(next_state_after_reboot_local))
        {
            goto end;
        }
        list_addElement(next_state_after_rebootList , strdup(next_state_after_reboot_local->valuestring));
    }
    }

    // v0_0_39_node->address
    cJSON *address = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "address");
    if (address) { 
    if(!cJSON_IsString(address) && !cJSON_IsNull(address))
    {
    goto end; //String
    }
    }

    // v0_0_39_node->hostname
    cJSON *hostname = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "hostname");
    if (hostname) { 
    if(!cJSON_IsString(hostname) && !cJSON_IsNull(hostname))
    {
    goto end; //String
    }
    }

    // v0_0_39_node->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "state");
    if (state) { 
    cJSON *state_local = NULL;
    if(!cJSON_IsArray(state)) {
        goto end;//primitive container
    }
    stateList = list_createList();

    cJSON_ArrayForEach(state_local, state)
    {
        if(!cJSON_IsString(state_local))
        {
            goto end;
        }
        list_addElement(stateList , strdup(state_local->valuestring));
    }
    }

    // v0_0_39_node->operating_system
    cJSON *operating_system = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "operating_system");
    if (operating_system) { 
    if(!cJSON_IsString(operating_system) && !cJSON_IsNull(operating_system))
    {
    goto end; //String
    }
    }

    // v0_0_39_node->owner
    cJSON *owner = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "owner");
    if (owner) { 
    if(!cJSON_IsString(owner) && !cJSON_IsNull(owner))
    {
    goto end; //String
    }
    }

    // v0_0_39_node->partitions
    cJSON *partitions = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "partitions");
    if (partitions) { 
    cJSON *partitions_local = NULL;
    if(!cJSON_IsArray(partitions)) {
        goto end;//primitive container
    }
    partitionsList = list_createList();

    cJSON_ArrayForEach(partitions_local, partitions)
    {
        if(!cJSON_IsString(partitions_local))
        {
            goto end;
        }
        list_addElement(partitionsList , strdup(partitions_local->valuestring));
    }
    }

    // v0_0_39_node->port
    cJSON *port = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "port");
    if (port) { 
    if(!cJSON_IsNumber(port))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_node->real_memory
    cJSON *real_memory = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "real_memory");
    if (real_memory) { 
    if(!cJSON_IsNumber(real_memory))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_node->comment
    cJSON *comment = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "comment");
    if (comment) { 
    if(!cJSON_IsString(comment) && !cJSON_IsNull(comment))
    {
    goto end; //String
    }
    }

    // v0_0_39_node->reason
    cJSON *reason = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "reason");
    if (reason) { 
    if(!cJSON_IsString(reason) && !cJSON_IsNull(reason))
    {
    goto end; //String
    }
    }

    // v0_0_39_node->reason_changed_at
    cJSON *reason_changed_at = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "reason_changed_at");
    if (reason_changed_at) { 
    if(!cJSON_IsNumber(reason_changed_at))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_node->reason_set_by_user
    cJSON *reason_set_by_user = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "reason_set_by_user");
    if (reason_set_by_user) { 
    if(!cJSON_IsString(reason_set_by_user) && !cJSON_IsNull(reason_set_by_user))
    {
    goto end; //String
    }
    }

    // v0_0_39_node->resume_after
    cJSON *resume_after = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "resume_after");
    if (resume_after) { 
    resume_after_local_nonprim = v0_0_39_uint64_no_val_parseFromJSON(resume_after); //nonprimitive
    }

    // v0_0_39_node->reservation
    cJSON *reservation = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "reservation");
    if (reservation) { 
    if(!cJSON_IsString(reservation) && !cJSON_IsNull(reservation))
    {
    goto end; //String
    }
    }

    // v0_0_39_node->alloc_memory
    cJSON *alloc_memory = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "alloc_memory");
    if (alloc_memory) { 
    if(!cJSON_IsNumber(alloc_memory))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_node->alloc_cpus
    cJSON *alloc_cpus = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "alloc_cpus");
    if (alloc_cpus) { 
    if(!cJSON_IsNumber(alloc_cpus))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_node->alloc_idle_cpus
    cJSON *alloc_idle_cpus = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "alloc_idle_cpus");
    if (alloc_idle_cpus) { 
    if(!cJSON_IsNumber(alloc_idle_cpus))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_node->tres_used
    cJSON *tres_used = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "tres_used");
    if (tres_used) { 
    if(!cJSON_IsString(tres_used) && !cJSON_IsNull(tres_used))
    {
    goto end; //String
    }
    }

    // v0_0_39_node->tres_weighted
    cJSON *tres_weighted = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "tres_weighted");
    if (tres_weighted) { 
    if(!cJSON_IsNumber(tres_weighted))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_node->slurmd_start_time
    cJSON *slurmd_start_time = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "slurmd_start_time");
    if (slurmd_start_time) { 
    if(!cJSON_IsNumber(slurmd_start_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_node->sockets
    cJSON *sockets = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "sockets");
    if (sockets) { 
    if(!cJSON_IsNumber(sockets))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_node->threads
    cJSON *threads = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "threads");
    if (threads) { 
    if(!cJSON_IsNumber(threads))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_node->temporary_disk
    cJSON *temporary_disk = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "temporary_disk");
    if (temporary_disk) { 
    if(!cJSON_IsNumber(temporary_disk))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_node->weight
    cJSON *weight = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "weight");
    if (weight) { 
    if(!cJSON_IsNumber(weight))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_node->tres
    cJSON *tres = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "tres");
    if (tres) { 
    if(!cJSON_IsString(tres) && !cJSON_IsNull(tres))
    {
    goto end; //String
    }
    }

    // v0_0_39_node->version
    cJSON *version = cJSON_GetObjectItemCaseSensitive(v0_0_39_nodeJSON, "version");
    if (version) { 
    if(!cJSON_IsString(version) && !cJSON_IsNull(version))
    {
    goto end; //String
    }
    }


    v0_0_39_node_local_var = v0_0_39_node_create (
        architecture && !cJSON_IsNull(architecture) ? strdup(architecture->valuestring) : NULL,
        burstbuffer_network_address && !cJSON_IsNull(burstbuffer_network_address) ? strdup(burstbuffer_network_address->valuestring) : NULL,
        boards ? boards->valuedouble : 0,
        boot_time ? boot_time->valuedouble : 0,
        cluster_name && !cJSON_IsNull(cluster_name) ? strdup(cluster_name->valuestring) : NULL,
        cores ? cores->valuedouble : 0,
        specialized_cores ? specialized_cores->valuedouble : 0,
        cpu_binding ? cpu_binding->valuedouble : 0,
        cpu_load ? cpu_load_local_nonprim : NULL,
        free_mem ? free_mem_local_nonprim : NULL,
        cpus ? cpus->valuedouble : 0,
        effective_cpus ? effective_cpus->valuedouble : 0,
        specialized_cpus && !cJSON_IsNull(specialized_cpus) ? strdup(specialized_cpus->valuestring) : NULL,
        energy ? energy_local_nonprim : NULL,
        external_sensors ? external_sensors_local_nonprim : NULL,
        extra && !cJSON_IsNull(extra) ? strdup(extra->valuestring) : NULL,
        power ? power_local_nonprim : NULL,
        features ? featuresList : NULL,
        active_features ? active_featuresList : NULL,
        gres && !cJSON_IsNull(gres) ? strdup(gres->valuestring) : NULL,
        gres_drained && !cJSON_IsNull(gres_drained) ? strdup(gres_drained->valuestring) : NULL,
        gres_used && !cJSON_IsNull(gres_used) ? strdup(gres_used->valuestring) : NULL,
        last_busy ? last_busy->valuedouble : 0,
        mcs_label && !cJSON_IsNull(mcs_label) ? strdup(mcs_label->valuestring) : NULL,
        specialized_memory ? specialized_memory->valuedouble : 0,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        next_state_after_reboot ? next_state_after_rebootList : NULL,
        address && !cJSON_IsNull(address) ? strdup(address->valuestring) : NULL,
        hostname && !cJSON_IsNull(hostname) ? strdup(hostname->valuestring) : NULL,
        state ? stateList : NULL,
        operating_system && !cJSON_IsNull(operating_system) ? strdup(operating_system->valuestring) : NULL,
        owner && !cJSON_IsNull(owner) ? strdup(owner->valuestring) : NULL,
        partitions ? partitionsList : NULL,
        port ? port->valuedouble : 0,
        real_memory ? real_memory->valuedouble : 0,
        comment && !cJSON_IsNull(comment) ? strdup(comment->valuestring) : NULL,
        reason && !cJSON_IsNull(reason) ? strdup(reason->valuestring) : NULL,
        reason_changed_at ? reason_changed_at->valuedouble : 0,
        reason_set_by_user && !cJSON_IsNull(reason_set_by_user) ? strdup(reason_set_by_user->valuestring) : NULL,
        resume_after ? resume_after_local_nonprim : NULL,
        reservation && !cJSON_IsNull(reservation) ? strdup(reservation->valuestring) : NULL,
        alloc_memory ? alloc_memory->valuedouble : 0,
        alloc_cpus ? alloc_cpus->valuedouble : 0,
        alloc_idle_cpus ? alloc_idle_cpus->valuedouble : 0,
        tres_used && !cJSON_IsNull(tres_used) ? strdup(tres_used->valuestring) : NULL,
        tres_weighted ? tres_weighted->valuedouble : 0,
        slurmd_start_time ? slurmd_start_time->valuedouble : 0,
        sockets ? sockets->valuedouble : 0,
        threads ? threads->valuedouble : 0,
        temporary_disk ? temporary_disk->valuedouble : 0,
        weight ? weight->valuedouble : 0,
        tres && !cJSON_IsNull(tres) ? strdup(tres->valuestring) : NULL,
        version && !cJSON_IsNull(version) ? strdup(version->valuestring) : NULL
        );

    return v0_0_39_node_local_var;
end:
    if (cpu_load_local_nonprim) {
        v0_0_39_uint32_no_val_free(cpu_load_local_nonprim);
        cpu_load_local_nonprim = NULL;
    }
    if (free_mem_local_nonprim) {
        v0_0_39_uint64_no_val_free(free_mem_local_nonprim);
        free_mem_local_nonprim = NULL;
    }
    if (energy_local_nonprim) {
        v0_0_39_acct_gather_energy_free(energy_local_nonprim);
        energy_local_nonprim = NULL;
    }
    if (external_sensors_local_nonprim) {
        v0_0_39_ext_sensors_data_free(external_sensors_local_nonprim);
        external_sensors_local_nonprim = NULL;
    }
    if (power_local_nonprim) {
        v0_0_39_power_mgmt_data_free(power_local_nonprim);
        power_local_nonprim = NULL;
    }
    if (featuresList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, featuresList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(featuresList);
        featuresList = NULL;
    }
    if (active_featuresList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, active_featuresList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(active_featuresList);
        active_featuresList = NULL;
    }
    if (next_state_after_rebootList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, next_state_after_rebootList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(next_state_after_rebootList);
        next_state_after_rebootList = NULL;
    }
    if (stateList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, stateList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(stateList);
        stateList = NULL;
    }
    if (partitionsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, partitionsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(partitionsList);
        partitionsList = NULL;
    }
    if (resume_after_local_nonprim) {
        v0_0_39_uint64_no_val_free(resume_after_local_nonprim);
        resume_after_local_nonprim = NULL;
    }
    return NULL;

}
