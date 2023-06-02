#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_37_node.h"



v0_0_37_node_t *v0_0_37_node_create(
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
    ) {
    v0_0_37_node_t *v0_0_37_node_local_var = malloc(sizeof(v0_0_37_node_t));
    if (!v0_0_37_node_local_var) {
        return NULL;
    }
    v0_0_37_node_local_var->architecture = architecture;
    v0_0_37_node_local_var->burstbuffer_network_address = burstbuffer_network_address;
    v0_0_37_node_local_var->boards = boards;
    v0_0_37_node_local_var->boot_time = boot_time;
    v0_0_37_node_local_var->cores = cores;
    v0_0_37_node_local_var->cpu_binding = cpu_binding;
    v0_0_37_node_local_var->cpu_load = cpu_load;
    v0_0_37_node_local_var->free_memory = free_memory;
    v0_0_37_node_local_var->cpus = cpus;
    v0_0_37_node_local_var->features = features;
    v0_0_37_node_local_var->active_features = active_features;
    v0_0_37_node_local_var->gres = gres;
    v0_0_37_node_local_var->gres_drained = gres_drained;
    v0_0_37_node_local_var->gres_used = gres_used;
    v0_0_37_node_local_var->mcs_label = mcs_label;
    v0_0_37_node_local_var->name = name;
    v0_0_37_node_local_var->next_state_after_reboot = next_state_after_reboot;
    v0_0_37_node_local_var->next_state_after_reboot_flags = next_state_after_reboot_flags;
    v0_0_37_node_local_var->address = address;
    v0_0_37_node_local_var->hostname = hostname;
    v0_0_37_node_local_var->state = state;
    v0_0_37_node_local_var->state_flags = state_flags;
    v0_0_37_node_local_var->operating_system = operating_system;
    v0_0_37_node_local_var->owner = owner;
    v0_0_37_node_local_var->partitions = partitions;
    v0_0_37_node_local_var->port = port;
    v0_0_37_node_local_var->real_memory = real_memory;
    v0_0_37_node_local_var->reason = reason;
    v0_0_37_node_local_var->reason_changed_at = reason_changed_at;
    v0_0_37_node_local_var->reason_set_by_user = reason_set_by_user;
    v0_0_37_node_local_var->slurmd_start_time = slurmd_start_time;
    v0_0_37_node_local_var->sockets = sockets;
    v0_0_37_node_local_var->threads = threads;
    v0_0_37_node_local_var->temporary_disk = temporary_disk;
    v0_0_37_node_local_var->weight = weight;
    v0_0_37_node_local_var->tres = tres;
    v0_0_37_node_local_var->tres_used = tres_used;
    v0_0_37_node_local_var->tres_weighted = tres_weighted;
    v0_0_37_node_local_var->slurmd_version = slurmd_version;
    v0_0_37_node_local_var->alloc_cpus = alloc_cpus;
    v0_0_37_node_local_var->idle_cpus = idle_cpus;
    v0_0_37_node_local_var->alloc_memory = alloc_memory;

    return v0_0_37_node_local_var;
}


void v0_0_37_node_free(v0_0_37_node_t *v0_0_37_node) {
    if(NULL == v0_0_37_node){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_37_node->architecture) {
        free(v0_0_37_node->architecture);
        v0_0_37_node->architecture = NULL;
    }
    if (v0_0_37_node->burstbuffer_network_address) {
        free(v0_0_37_node->burstbuffer_network_address);
        v0_0_37_node->burstbuffer_network_address = NULL;
    }
    if (v0_0_37_node->features) {
        free(v0_0_37_node->features);
        v0_0_37_node->features = NULL;
    }
    if (v0_0_37_node->active_features) {
        free(v0_0_37_node->active_features);
        v0_0_37_node->active_features = NULL;
    }
    if (v0_0_37_node->gres) {
        free(v0_0_37_node->gres);
        v0_0_37_node->gres = NULL;
    }
    if (v0_0_37_node->gres_drained) {
        free(v0_0_37_node->gres_drained);
        v0_0_37_node->gres_drained = NULL;
    }
    if (v0_0_37_node->gres_used) {
        free(v0_0_37_node->gres_used);
        v0_0_37_node->gres_used = NULL;
    }
    if (v0_0_37_node->mcs_label) {
        free(v0_0_37_node->mcs_label);
        v0_0_37_node->mcs_label = NULL;
    }
    if (v0_0_37_node->name) {
        free(v0_0_37_node->name);
        v0_0_37_node->name = NULL;
    }
    if (v0_0_37_node->next_state_after_reboot) {
        free(v0_0_37_node->next_state_after_reboot);
        v0_0_37_node->next_state_after_reboot = NULL;
    }
    if (v0_0_37_node->next_state_after_reboot_flags) {
        list_ForEach(listEntry, v0_0_37_node->next_state_after_reboot_flags) {
            free(listEntry->data);
        }
        list_freeList(v0_0_37_node->next_state_after_reboot_flags);
        v0_0_37_node->next_state_after_reboot_flags = NULL;
    }
    if (v0_0_37_node->address) {
        free(v0_0_37_node->address);
        v0_0_37_node->address = NULL;
    }
    if (v0_0_37_node->hostname) {
        free(v0_0_37_node->hostname);
        v0_0_37_node->hostname = NULL;
    }
    if (v0_0_37_node->state) {
        free(v0_0_37_node->state);
        v0_0_37_node->state = NULL;
    }
    if (v0_0_37_node->state_flags) {
        list_ForEach(listEntry, v0_0_37_node->state_flags) {
            free(listEntry->data);
        }
        list_freeList(v0_0_37_node->state_flags);
        v0_0_37_node->state_flags = NULL;
    }
    if (v0_0_37_node->operating_system) {
        free(v0_0_37_node->operating_system);
        v0_0_37_node->operating_system = NULL;
    }
    if (v0_0_37_node->owner) {
        free(v0_0_37_node->owner);
        v0_0_37_node->owner = NULL;
    }
    if (v0_0_37_node->partitions) {
        list_ForEach(listEntry, v0_0_37_node->partitions) {
            free(listEntry->data);
        }
        list_freeList(v0_0_37_node->partitions);
        v0_0_37_node->partitions = NULL;
    }
    if (v0_0_37_node->reason) {
        free(v0_0_37_node->reason);
        v0_0_37_node->reason = NULL;
    }
    if (v0_0_37_node->reason_set_by_user) {
        free(v0_0_37_node->reason_set_by_user);
        v0_0_37_node->reason_set_by_user = NULL;
    }
    if (v0_0_37_node->tres) {
        free(v0_0_37_node->tres);
        v0_0_37_node->tres = NULL;
    }
    if (v0_0_37_node->tres_used) {
        free(v0_0_37_node->tres_used);
        v0_0_37_node->tres_used = NULL;
    }
    if (v0_0_37_node->slurmd_version) {
        free(v0_0_37_node->slurmd_version);
        v0_0_37_node->slurmd_version = NULL;
    }
    free(v0_0_37_node);
}

cJSON *v0_0_37_node_convertToJSON(v0_0_37_node_t *v0_0_37_node) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_37_node->architecture
    if(v0_0_37_node->architecture) {
    if(cJSON_AddStringToObject(item, "architecture", v0_0_37_node->architecture) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_37_node->burstbuffer_network_address
    if(v0_0_37_node->burstbuffer_network_address) {
    if(cJSON_AddStringToObject(item, "burstbuffer_network_address", v0_0_37_node->burstbuffer_network_address) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_37_node->boards
    if(v0_0_37_node->boards) {
    if(cJSON_AddNumberToObject(item, "boards", v0_0_37_node->boards) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_37_node->boot_time
    if(v0_0_37_node->boot_time) {
    if(cJSON_AddNumberToObject(item, "boot_time", v0_0_37_node->boot_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_37_node->cores
    if(v0_0_37_node->cores) {
    if(cJSON_AddNumberToObject(item, "cores", v0_0_37_node->cores) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_37_node->cpu_binding
    if(v0_0_37_node->cpu_binding) {
    if(cJSON_AddNumberToObject(item, "cpu_binding", v0_0_37_node->cpu_binding) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_37_node->cpu_load
    if(v0_0_37_node->cpu_load) {
    if(cJSON_AddNumberToObject(item, "cpu_load", v0_0_37_node->cpu_load) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_37_node->free_memory
    if(v0_0_37_node->free_memory) {
    if(cJSON_AddNumberToObject(item, "free_memory", v0_0_37_node->free_memory) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_37_node->cpus
    if(v0_0_37_node->cpus) {
    if(cJSON_AddNumberToObject(item, "cpus", v0_0_37_node->cpus) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_37_node->features
    if(v0_0_37_node->features) {
    if(cJSON_AddStringToObject(item, "features", v0_0_37_node->features) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_37_node->active_features
    if(v0_0_37_node->active_features) {
    if(cJSON_AddStringToObject(item, "active_features", v0_0_37_node->active_features) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_37_node->gres
    if(v0_0_37_node->gres) {
    if(cJSON_AddStringToObject(item, "gres", v0_0_37_node->gres) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_37_node->gres_drained
    if(v0_0_37_node->gres_drained) {
    if(cJSON_AddStringToObject(item, "gres_drained", v0_0_37_node->gres_drained) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_37_node->gres_used
    if(v0_0_37_node->gres_used) {
    if(cJSON_AddStringToObject(item, "gres_used", v0_0_37_node->gres_used) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_37_node->mcs_label
    if(v0_0_37_node->mcs_label) {
    if(cJSON_AddStringToObject(item, "mcs_label", v0_0_37_node->mcs_label) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_37_node->name
    if(v0_0_37_node->name) {
    if(cJSON_AddStringToObject(item, "name", v0_0_37_node->name) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_37_node->next_state_after_reboot
    if(v0_0_37_node->next_state_after_reboot) {
    if(cJSON_AddStringToObject(item, "next_state_after_reboot", v0_0_37_node->next_state_after_reboot) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_37_node->next_state_after_reboot_flags
    if(v0_0_37_node->next_state_after_reboot_flags) {
    cJSON *next_state_after_reboot_flags = cJSON_AddArrayToObject(item, "next_state_after_reboot_flags");
    if(next_state_after_reboot_flags == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *next_state_after_reboot_flagsListEntry;
    list_ForEach(next_state_after_reboot_flagsListEntry, v0_0_37_node->next_state_after_reboot_flags) {
    if(cJSON_AddStringToObject(next_state_after_reboot_flags, "", (char*)next_state_after_reboot_flagsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_37_node->address
    if(v0_0_37_node->address) {
    if(cJSON_AddStringToObject(item, "address", v0_0_37_node->address) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_37_node->hostname
    if(v0_0_37_node->hostname) {
    if(cJSON_AddStringToObject(item, "hostname", v0_0_37_node->hostname) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_37_node->state
    if(v0_0_37_node->state) {
    if(cJSON_AddStringToObject(item, "state", v0_0_37_node->state) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_37_node->state_flags
    if(v0_0_37_node->state_flags) {
    cJSON *state_flags = cJSON_AddArrayToObject(item, "state_flags");
    if(state_flags == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *state_flagsListEntry;
    list_ForEach(state_flagsListEntry, v0_0_37_node->state_flags) {
    if(cJSON_AddStringToObject(state_flags, "", (char*)state_flagsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_37_node->operating_system
    if(v0_0_37_node->operating_system) {
    if(cJSON_AddStringToObject(item, "operating_system", v0_0_37_node->operating_system) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_37_node->owner
    if(v0_0_37_node->owner) {
    if(cJSON_AddStringToObject(item, "owner", v0_0_37_node->owner) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_37_node->partitions
    if(v0_0_37_node->partitions) {
    cJSON *partitions = cJSON_AddArrayToObject(item, "partitions");
    if(partitions == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *partitionsListEntry;
    list_ForEach(partitionsListEntry, v0_0_37_node->partitions) {
    if(cJSON_AddStringToObject(partitions, "", (char*)partitionsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_37_node->port
    if(v0_0_37_node->port) {
    if(cJSON_AddNumberToObject(item, "port", v0_0_37_node->port) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_37_node->real_memory
    if(v0_0_37_node->real_memory) {
    if(cJSON_AddNumberToObject(item, "real_memory", v0_0_37_node->real_memory) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_37_node->reason
    if(v0_0_37_node->reason) {
    if(cJSON_AddStringToObject(item, "reason", v0_0_37_node->reason) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_37_node->reason_changed_at
    if(v0_0_37_node->reason_changed_at) {
    if(cJSON_AddNumberToObject(item, "reason_changed_at", v0_0_37_node->reason_changed_at) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_37_node->reason_set_by_user
    if(v0_0_37_node->reason_set_by_user) {
    if(cJSON_AddStringToObject(item, "reason_set_by_user", v0_0_37_node->reason_set_by_user) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_37_node->slurmd_start_time
    if(v0_0_37_node->slurmd_start_time) {
    if(cJSON_AddNumberToObject(item, "slurmd_start_time", v0_0_37_node->slurmd_start_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_37_node->sockets
    if(v0_0_37_node->sockets) {
    if(cJSON_AddNumberToObject(item, "sockets", v0_0_37_node->sockets) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_37_node->threads
    if(v0_0_37_node->threads) {
    if(cJSON_AddNumberToObject(item, "threads", v0_0_37_node->threads) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_37_node->temporary_disk
    if(v0_0_37_node->temporary_disk) {
    if(cJSON_AddNumberToObject(item, "temporary_disk", v0_0_37_node->temporary_disk) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_37_node->weight
    if(v0_0_37_node->weight) {
    if(cJSON_AddNumberToObject(item, "weight", v0_0_37_node->weight) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_37_node->tres
    if(v0_0_37_node->tres) {
    if(cJSON_AddStringToObject(item, "tres", v0_0_37_node->tres) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_37_node->tres_used
    if(v0_0_37_node->tres_used) {
    if(cJSON_AddStringToObject(item, "tres_used", v0_0_37_node->tres_used) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_37_node->tres_weighted
    if(v0_0_37_node->tres_weighted) {
    if(cJSON_AddNumberToObject(item, "tres_weighted", v0_0_37_node->tres_weighted) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_37_node->slurmd_version
    if(v0_0_37_node->slurmd_version) {
    if(cJSON_AddStringToObject(item, "slurmd_version", v0_0_37_node->slurmd_version) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_37_node->alloc_cpus
    if(v0_0_37_node->alloc_cpus) {
    if(cJSON_AddNumberToObject(item, "alloc_cpus", v0_0_37_node->alloc_cpus) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_37_node->idle_cpus
    if(v0_0_37_node->idle_cpus) {
    if(cJSON_AddNumberToObject(item, "idle_cpus", v0_0_37_node->idle_cpus) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_37_node->alloc_memory
    if(v0_0_37_node->alloc_memory) {
    if(cJSON_AddNumberToObject(item, "alloc_memory", v0_0_37_node->alloc_memory) == NULL) {
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

v0_0_37_node_t *v0_0_37_node_parseFromJSON(cJSON *v0_0_37_nodeJSON){

    v0_0_37_node_t *v0_0_37_node_local_var = NULL;

    // define the local list for v0_0_37_node->next_state_after_reboot_flags
    list_t *next_state_after_reboot_flagsList = NULL;

    // define the local list for v0_0_37_node->state_flags
    list_t *state_flagsList = NULL;

    // define the local list for v0_0_37_node->partitions
    list_t *partitionsList = NULL;

    // v0_0_37_node->architecture
    cJSON *architecture = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "architecture");
    if (architecture) { 
    if(!cJSON_IsString(architecture) && !cJSON_IsNull(architecture))
    {
    goto end; //String
    }
    }

    // v0_0_37_node->burstbuffer_network_address
    cJSON *burstbuffer_network_address = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "burstbuffer_network_address");
    if (burstbuffer_network_address) { 
    if(!cJSON_IsString(burstbuffer_network_address) && !cJSON_IsNull(burstbuffer_network_address))
    {
    goto end; //String
    }
    }

    // v0_0_37_node->boards
    cJSON *boards = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "boards");
    if (boards) { 
    if(!cJSON_IsNumber(boards))
    {
    goto end; //Numeric
    }
    }

    // v0_0_37_node->boot_time
    cJSON *boot_time = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "boot_time");
    if (boot_time) { 
    if(!cJSON_IsNumber(boot_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_37_node->cores
    cJSON *cores = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "cores");
    if (cores) { 
    if(!cJSON_IsNumber(cores))
    {
    goto end; //Numeric
    }
    }

    // v0_0_37_node->cpu_binding
    cJSON *cpu_binding = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "cpu_binding");
    if (cpu_binding) { 
    if(!cJSON_IsNumber(cpu_binding))
    {
    goto end; //Numeric
    }
    }

    // v0_0_37_node->cpu_load
    cJSON *cpu_load = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "cpu_load");
    if (cpu_load) { 
    if(!cJSON_IsNumber(cpu_load))
    {
    goto end; //Numeric
    }
    }

    // v0_0_37_node->free_memory
    cJSON *free_memory = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "free_memory");
    if (free_memory) { 
    if(!cJSON_IsNumber(free_memory))
    {
    goto end; //Numeric
    }
    }

    // v0_0_37_node->cpus
    cJSON *cpus = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "cpus");
    if (cpus) { 
    if(!cJSON_IsNumber(cpus))
    {
    goto end; //Numeric
    }
    }

    // v0_0_37_node->features
    cJSON *features = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "features");
    if (features) { 
    if(!cJSON_IsString(features) && !cJSON_IsNull(features))
    {
    goto end; //String
    }
    }

    // v0_0_37_node->active_features
    cJSON *active_features = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "active_features");
    if (active_features) { 
    if(!cJSON_IsString(active_features) && !cJSON_IsNull(active_features))
    {
    goto end; //String
    }
    }

    // v0_0_37_node->gres
    cJSON *gres = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "gres");
    if (gres) { 
    if(!cJSON_IsString(gres) && !cJSON_IsNull(gres))
    {
    goto end; //String
    }
    }

    // v0_0_37_node->gres_drained
    cJSON *gres_drained = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "gres_drained");
    if (gres_drained) { 
    if(!cJSON_IsString(gres_drained) && !cJSON_IsNull(gres_drained))
    {
    goto end; //String
    }
    }

    // v0_0_37_node->gres_used
    cJSON *gres_used = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "gres_used");
    if (gres_used) { 
    if(!cJSON_IsString(gres_used) && !cJSON_IsNull(gres_used))
    {
    goto end; //String
    }
    }

    // v0_0_37_node->mcs_label
    cJSON *mcs_label = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "mcs_label");
    if (mcs_label) { 
    if(!cJSON_IsString(mcs_label) && !cJSON_IsNull(mcs_label))
    {
    goto end; //String
    }
    }

    // v0_0_37_node->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // v0_0_37_node->next_state_after_reboot
    cJSON *next_state_after_reboot = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "next_state_after_reboot");
    if (next_state_after_reboot) { 
    if(!cJSON_IsString(next_state_after_reboot) && !cJSON_IsNull(next_state_after_reboot))
    {
    goto end; //String
    }
    }

    // v0_0_37_node->next_state_after_reboot_flags
    cJSON *next_state_after_reboot_flags = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "next_state_after_reboot_flags");
    if (next_state_after_reboot_flags) { 
    cJSON *next_state_after_reboot_flags_local = NULL;
    if(!cJSON_IsArray(next_state_after_reboot_flags)) {
        goto end;//primitive container
    }
    next_state_after_reboot_flagsList = list_createList();

    cJSON_ArrayForEach(next_state_after_reboot_flags_local, next_state_after_reboot_flags)
    {
        if(!cJSON_IsString(next_state_after_reboot_flags_local))
        {
            goto end;
        }
        list_addElement(next_state_after_reboot_flagsList , strdup(next_state_after_reboot_flags_local->valuestring));
    }
    }

    // v0_0_37_node->address
    cJSON *address = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "address");
    if (address) { 
    if(!cJSON_IsString(address) && !cJSON_IsNull(address))
    {
    goto end; //String
    }
    }

    // v0_0_37_node->hostname
    cJSON *hostname = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "hostname");
    if (hostname) { 
    if(!cJSON_IsString(hostname) && !cJSON_IsNull(hostname))
    {
    goto end; //String
    }
    }

    // v0_0_37_node->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "state");
    if (state) { 
    if(!cJSON_IsString(state) && !cJSON_IsNull(state))
    {
    goto end; //String
    }
    }

    // v0_0_37_node->state_flags
    cJSON *state_flags = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "state_flags");
    if (state_flags) { 
    cJSON *state_flags_local = NULL;
    if(!cJSON_IsArray(state_flags)) {
        goto end;//primitive container
    }
    state_flagsList = list_createList();

    cJSON_ArrayForEach(state_flags_local, state_flags)
    {
        if(!cJSON_IsString(state_flags_local))
        {
            goto end;
        }
        list_addElement(state_flagsList , strdup(state_flags_local->valuestring));
    }
    }

    // v0_0_37_node->operating_system
    cJSON *operating_system = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "operating_system");
    if (operating_system) { 
    if(!cJSON_IsString(operating_system) && !cJSON_IsNull(operating_system))
    {
    goto end; //String
    }
    }

    // v0_0_37_node->owner
    cJSON *owner = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "owner");
    if (owner) { 
    if(!cJSON_IsString(owner) && !cJSON_IsNull(owner))
    {
    goto end; //String
    }
    }

    // v0_0_37_node->partitions
    cJSON *partitions = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "partitions");
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

    // v0_0_37_node->port
    cJSON *port = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "port");
    if (port) { 
    if(!cJSON_IsNumber(port))
    {
    goto end; //Numeric
    }
    }

    // v0_0_37_node->real_memory
    cJSON *real_memory = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "real_memory");
    if (real_memory) { 
    if(!cJSON_IsNumber(real_memory))
    {
    goto end; //Numeric
    }
    }

    // v0_0_37_node->reason
    cJSON *reason = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "reason");
    if (reason) { 
    if(!cJSON_IsString(reason) && !cJSON_IsNull(reason))
    {
    goto end; //String
    }
    }

    // v0_0_37_node->reason_changed_at
    cJSON *reason_changed_at = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "reason_changed_at");
    if (reason_changed_at) { 
    if(!cJSON_IsNumber(reason_changed_at))
    {
    goto end; //Numeric
    }
    }

    // v0_0_37_node->reason_set_by_user
    cJSON *reason_set_by_user = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "reason_set_by_user");
    if (reason_set_by_user) { 
    if(!cJSON_IsString(reason_set_by_user) && !cJSON_IsNull(reason_set_by_user))
    {
    goto end; //String
    }
    }

    // v0_0_37_node->slurmd_start_time
    cJSON *slurmd_start_time = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "slurmd_start_time");
    if (slurmd_start_time) { 
    if(!cJSON_IsNumber(slurmd_start_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_37_node->sockets
    cJSON *sockets = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "sockets");
    if (sockets) { 
    if(!cJSON_IsNumber(sockets))
    {
    goto end; //Numeric
    }
    }

    // v0_0_37_node->threads
    cJSON *threads = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "threads");
    if (threads) { 
    if(!cJSON_IsNumber(threads))
    {
    goto end; //Numeric
    }
    }

    // v0_0_37_node->temporary_disk
    cJSON *temporary_disk = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "temporary_disk");
    if (temporary_disk) { 
    if(!cJSON_IsNumber(temporary_disk))
    {
    goto end; //Numeric
    }
    }

    // v0_0_37_node->weight
    cJSON *weight = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "weight");
    if (weight) { 
    if(!cJSON_IsNumber(weight))
    {
    goto end; //Numeric
    }
    }

    // v0_0_37_node->tres
    cJSON *tres = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "tres");
    if (tres) { 
    if(!cJSON_IsString(tres) && !cJSON_IsNull(tres))
    {
    goto end; //String
    }
    }

    // v0_0_37_node->tres_used
    cJSON *tres_used = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "tres_used");
    if (tres_used) { 
    if(!cJSON_IsString(tres_used) && !cJSON_IsNull(tres_used))
    {
    goto end; //String
    }
    }

    // v0_0_37_node->tres_weighted
    cJSON *tres_weighted = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "tres_weighted");
    if (tres_weighted) { 
    if(!cJSON_IsNumber(tres_weighted))
    {
    goto end; //Numeric
    }
    }

    // v0_0_37_node->slurmd_version
    cJSON *slurmd_version = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "slurmd_version");
    if (slurmd_version) { 
    if(!cJSON_IsString(slurmd_version) && !cJSON_IsNull(slurmd_version))
    {
    goto end; //String
    }
    }

    // v0_0_37_node->alloc_cpus
    cJSON *alloc_cpus = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "alloc_cpus");
    if (alloc_cpus) { 
    if(!cJSON_IsNumber(alloc_cpus))
    {
    goto end; //Numeric
    }
    }

    // v0_0_37_node->idle_cpus
    cJSON *idle_cpus = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "idle_cpus");
    if (idle_cpus) { 
    if(!cJSON_IsNumber(idle_cpus))
    {
    goto end; //Numeric
    }
    }

    // v0_0_37_node->alloc_memory
    cJSON *alloc_memory = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodeJSON, "alloc_memory");
    if (alloc_memory) { 
    if(!cJSON_IsNumber(alloc_memory))
    {
    goto end; //Numeric
    }
    }


    v0_0_37_node_local_var = v0_0_37_node_create (
        architecture && !cJSON_IsNull(architecture) ? strdup(architecture->valuestring) : NULL,
        burstbuffer_network_address && !cJSON_IsNull(burstbuffer_network_address) ? strdup(burstbuffer_network_address->valuestring) : NULL,
        boards ? boards->valuedouble : 0,
        boot_time ? boot_time->valuedouble : 0,
        cores ? cores->valuedouble : 0,
        cpu_binding ? cpu_binding->valuedouble : 0,
        cpu_load ? cpu_load->valuedouble : 0,
        free_memory ? free_memory->valuedouble : 0,
        cpus ? cpus->valuedouble : 0,
        features && !cJSON_IsNull(features) ? strdup(features->valuestring) : NULL,
        active_features && !cJSON_IsNull(active_features) ? strdup(active_features->valuestring) : NULL,
        gres && !cJSON_IsNull(gres) ? strdup(gres->valuestring) : NULL,
        gres_drained && !cJSON_IsNull(gres_drained) ? strdup(gres_drained->valuestring) : NULL,
        gres_used && !cJSON_IsNull(gres_used) ? strdup(gres_used->valuestring) : NULL,
        mcs_label && !cJSON_IsNull(mcs_label) ? strdup(mcs_label->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        next_state_after_reboot && !cJSON_IsNull(next_state_after_reboot) ? strdup(next_state_after_reboot->valuestring) : NULL,
        next_state_after_reboot_flags ? next_state_after_reboot_flagsList : NULL,
        address && !cJSON_IsNull(address) ? strdup(address->valuestring) : NULL,
        hostname && !cJSON_IsNull(hostname) ? strdup(hostname->valuestring) : NULL,
        state && !cJSON_IsNull(state) ? strdup(state->valuestring) : NULL,
        state_flags ? state_flagsList : NULL,
        operating_system && !cJSON_IsNull(operating_system) ? strdup(operating_system->valuestring) : NULL,
        owner && !cJSON_IsNull(owner) ? strdup(owner->valuestring) : NULL,
        partitions ? partitionsList : NULL,
        port ? port->valuedouble : 0,
        real_memory ? real_memory->valuedouble : 0,
        reason && !cJSON_IsNull(reason) ? strdup(reason->valuestring) : NULL,
        reason_changed_at ? reason_changed_at->valuedouble : 0,
        reason_set_by_user && !cJSON_IsNull(reason_set_by_user) ? strdup(reason_set_by_user->valuestring) : NULL,
        slurmd_start_time ? slurmd_start_time->valuedouble : 0,
        sockets ? sockets->valuedouble : 0,
        threads ? threads->valuedouble : 0,
        temporary_disk ? temporary_disk->valuedouble : 0,
        weight ? weight->valuedouble : 0,
        tres && !cJSON_IsNull(tres) ? strdup(tres->valuestring) : NULL,
        tres_used && !cJSON_IsNull(tres_used) ? strdup(tres_used->valuestring) : NULL,
        tres_weighted ? tres_weighted->valuedouble : 0,
        slurmd_version && !cJSON_IsNull(slurmd_version) ? strdup(slurmd_version->valuestring) : NULL,
        alloc_cpus ? alloc_cpus->valuedouble : 0,
        idle_cpus ? idle_cpus->valuedouble : 0,
        alloc_memory ? alloc_memory->valuedouble : 0
        );

    return v0_0_37_node_local_var;
end:
    if (next_state_after_reboot_flagsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, next_state_after_reboot_flagsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(next_state_after_reboot_flagsList);
        next_state_after_reboot_flagsList = NULL;
    }
    if (state_flagsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, state_flagsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(state_flagsList);
        state_flagsList = NULL;
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
    return NULL;

}
