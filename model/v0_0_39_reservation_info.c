#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_reservation_info.h"


char* flagsv0_0_39_reservation_info_ToString(slurm_rest_api_v0_0_39_reservation_info_FLAGS_e flags) {
	char *flagsArray[] =  { "NULL", "MAINT", "NO_MAINT", "DAILY", "NO_DAILY", "WEEKLY", "NO_WEEKLY", "IGNORE_JOBS", "NO_IGNORE_JOBS", "ANY_NODES", "STATIC", "NO_STATIC", "PART_NODES", "NO_PART_NODES", "OVERLAP", "SPEC_NODES", "FIRST_CORES", "TIME_FLOAT", "REPLACE", "ALL_NODES", "PURGE_COMP", "WEEKDAY", "NO_WEEKDAY", "WEEKEND", "NO_WEEKEND", "FLEX", "NO_FLEX", "DURATION_PLUS", "DURATION_MINUS", "NO_HOLD_JOBS_AFTER_END", "NO_PURGE_COMP", "MAGNETIC", "SKIP", "HOURLY", "NO_HOURLY", "REOCCURRING" };
	return flagsArray[flags - 1];
}

slurm_rest_api_v0_0_39_reservation_info_FLAGS_e flagsv0_0_39_reservation_info_FromString(char* flags) {
    int stringToReturn = 0;
    char *flagsArray[] =  { "NULL", "MAINT", "NO_MAINT", "DAILY", "NO_DAILY", "WEEKLY", "NO_WEEKLY", "IGNORE_JOBS", "NO_IGNORE_JOBS", "ANY_NODES", "STATIC", "NO_STATIC", "PART_NODES", "NO_PART_NODES", "OVERLAP", "SPEC_NODES", "FIRST_CORES", "TIME_FLOAT", "REPLACE", "ALL_NODES", "PURGE_COMP", "WEEKDAY", "NO_WEEKDAY", "WEEKEND", "NO_WEEKEND", "FLEX", "NO_FLEX", "DURATION_PLUS", "DURATION_MINUS", "NO_HOLD_JOBS_AFTER_END", "NO_PURGE_COMP", "MAGNETIC", "SKIP", "HOURLY", "NO_HOURLY", "REOCCURRING" };
    size_t sizeofArray = sizeof(flagsArray) / sizeof(flagsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(flags, flagsArray[stringToReturn]) == 0) {
            return stringToReturn + 1;
        }
        stringToReturn++;
    }
    return 0;
}

v0_0_39_reservation_info_t *v0_0_39_reservation_info_create(
    char *accounts,
    char *burst_buffer,
    int core_count,
    list_t *core_specializations,
    long end_time,
    char *features,
    list_t *flags,
    char *groups,
    char *licenses,
    int max_start_delay,
    char *name,
    int node_count,
    char *node_list,
    char *partition,
    v0_0_39_reservation_info_purge_completed_t *purge_completed,
    long start_time,
    v0_0_39_uint32_no_val_t *watts,
    char *tres,
    char *users
    ) {
    v0_0_39_reservation_info_t *v0_0_39_reservation_info_local_var = malloc(sizeof(v0_0_39_reservation_info_t));
    if (!v0_0_39_reservation_info_local_var) {
        return NULL;
    }
    v0_0_39_reservation_info_local_var->accounts = accounts;
    v0_0_39_reservation_info_local_var->burst_buffer = burst_buffer;
    v0_0_39_reservation_info_local_var->core_count = core_count;
    v0_0_39_reservation_info_local_var->core_specializations = core_specializations;
    v0_0_39_reservation_info_local_var->end_time = end_time;
    v0_0_39_reservation_info_local_var->features = features;
    v0_0_39_reservation_info_local_var->flags = flags;
    v0_0_39_reservation_info_local_var->groups = groups;
    v0_0_39_reservation_info_local_var->licenses = licenses;
    v0_0_39_reservation_info_local_var->max_start_delay = max_start_delay;
    v0_0_39_reservation_info_local_var->name = name;
    v0_0_39_reservation_info_local_var->node_count = node_count;
    v0_0_39_reservation_info_local_var->node_list = node_list;
    v0_0_39_reservation_info_local_var->partition = partition;
    v0_0_39_reservation_info_local_var->purge_completed = purge_completed;
    v0_0_39_reservation_info_local_var->start_time = start_time;
    v0_0_39_reservation_info_local_var->watts = watts;
    v0_0_39_reservation_info_local_var->tres = tres;
    v0_0_39_reservation_info_local_var->users = users;

    return v0_0_39_reservation_info_local_var;
}


void v0_0_39_reservation_info_free(v0_0_39_reservation_info_t *v0_0_39_reservation_info) {
    if(NULL == v0_0_39_reservation_info){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_reservation_info->accounts) {
        free(v0_0_39_reservation_info->accounts);
        v0_0_39_reservation_info->accounts = NULL;
    }
    if (v0_0_39_reservation_info->burst_buffer) {
        free(v0_0_39_reservation_info->burst_buffer);
        v0_0_39_reservation_info->burst_buffer = NULL;
    }
    if (v0_0_39_reservation_info->core_specializations) {
        list_ForEach(listEntry, v0_0_39_reservation_info->core_specializations) {
            v0_0_39_reservation_core_spec_free(listEntry->data);
        }
        list_freeList(v0_0_39_reservation_info->core_specializations);
        v0_0_39_reservation_info->core_specializations = NULL;
    }
    if (v0_0_39_reservation_info->features) {
        free(v0_0_39_reservation_info->features);
        v0_0_39_reservation_info->features = NULL;
    }
    if (v0_0_39_reservation_info->flags) {
        list_ForEach(listEntry, v0_0_39_reservation_info->flags) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_reservation_info->flags);
        v0_0_39_reservation_info->flags = NULL;
    }
    if (v0_0_39_reservation_info->groups) {
        free(v0_0_39_reservation_info->groups);
        v0_0_39_reservation_info->groups = NULL;
    }
    if (v0_0_39_reservation_info->licenses) {
        free(v0_0_39_reservation_info->licenses);
        v0_0_39_reservation_info->licenses = NULL;
    }
    if (v0_0_39_reservation_info->name) {
        free(v0_0_39_reservation_info->name);
        v0_0_39_reservation_info->name = NULL;
    }
    if (v0_0_39_reservation_info->node_list) {
        free(v0_0_39_reservation_info->node_list);
        v0_0_39_reservation_info->node_list = NULL;
    }
    if (v0_0_39_reservation_info->partition) {
        free(v0_0_39_reservation_info->partition);
        v0_0_39_reservation_info->partition = NULL;
    }
    if (v0_0_39_reservation_info->purge_completed) {
        v0_0_39_reservation_info_purge_completed_free(v0_0_39_reservation_info->purge_completed);
        v0_0_39_reservation_info->purge_completed = NULL;
    }
    if (v0_0_39_reservation_info->watts) {
        v0_0_39_uint32_no_val_free(v0_0_39_reservation_info->watts);
        v0_0_39_reservation_info->watts = NULL;
    }
    if (v0_0_39_reservation_info->tres) {
        free(v0_0_39_reservation_info->tres);
        v0_0_39_reservation_info->tres = NULL;
    }
    if (v0_0_39_reservation_info->users) {
        free(v0_0_39_reservation_info->users);
        v0_0_39_reservation_info->users = NULL;
    }
    free(v0_0_39_reservation_info);
}

cJSON *v0_0_39_reservation_info_convertToJSON(v0_0_39_reservation_info_t *v0_0_39_reservation_info) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_reservation_info->accounts
    if(v0_0_39_reservation_info->accounts) {
    if(cJSON_AddStringToObject(item, "accounts", v0_0_39_reservation_info->accounts) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_reservation_info->burst_buffer
    if(v0_0_39_reservation_info->burst_buffer) {
    if(cJSON_AddStringToObject(item, "burst_buffer", v0_0_39_reservation_info->burst_buffer) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_reservation_info->core_count
    if(v0_0_39_reservation_info->core_count) {
    if(cJSON_AddNumberToObject(item, "core_count", v0_0_39_reservation_info->core_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_reservation_info->core_specializations
    if(v0_0_39_reservation_info->core_specializations) {
    cJSON *core_specializations = cJSON_AddArrayToObject(item, "core_specializations");
    if(core_specializations == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *core_specializationsListEntry;
    if (v0_0_39_reservation_info->core_specializations) {
    list_ForEach(core_specializationsListEntry, v0_0_39_reservation_info->core_specializations) {
    cJSON *itemLocal = v0_0_39_reservation_core_spec_convertToJSON(core_specializationsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(core_specializations, itemLocal);
    }
    }
    }


    // v0_0_39_reservation_info->end_time
    if(v0_0_39_reservation_info->end_time) {
    if(cJSON_AddNumberToObject(item, "end_time", v0_0_39_reservation_info->end_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_reservation_info->features
    if(v0_0_39_reservation_info->features) {
    if(cJSON_AddStringToObject(item, "features", v0_0_39_reservation_info->features) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_reservation_info->flags
    if(v0_0_39_reservation_info->flags != slurm_rest_api_v0_0_39_reservation_info_FLAGS_NULL) {
    cJSON *flags = cJSON_AddArrayToObject(item, "flags");
    if(flags == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *flagsListEntry;
    list_ForEach(flagsListEntry, v0_0_39_reservation_info->flags) {
    if(cJSON_AddStringToObject(flags, "", (char*)flagsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_reservation_info->groups
    if(v0_0_39_reservation_info->groups) {
    if(cJSON_AddStringToObject(item, "groups", v0_0_39_reservation_info->groups) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_reservation_info->licenses
    if(v0_0_39_reservation_info->licenses) {
    if(cJSON_AddStringToObject(item, "licenses", v0_0_39_reservation_info->licenses) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_reservation_info->max_start_delay
    if(v0_0_39_reservation_info->max_start_delay) {
    if(cJSON_AddNumberToObject(item, "max_start_delay", v0_0_39_reservation_info->max_start_delay) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_reservation_info->name
    if(v0_0_39_reservation_info->name) {
    if(cJSON_AddStringToObject(item, "name", v0_0_39_reservation_info->name) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_reservation_info->node_count
    if(v0_0_39_reservation_info->node_count) {
    if(cJSON_AddNumberToObject(item, "node_count", v0_0_39_reservation_info->node_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_reservation_info->node_list
    if(v0_0_39_reservation_info->node_list) {
    if(cJSON_AddStringToObject(item, "node_list", v0_0_39_reservation_info->node_list) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_reservation_info->partition
    if(v0_0_39_reservation_info->partition) {
    if(cJSON_AddStringToObject(item, "partition", v0_0_39_reservation_info->partition) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_reservation_info->purge_completed
    if(v0_0_39_reservation_info->purge_completed) {
    cJSON *purge_completed_local_JSON = v0_0_39_reservation_info_purge_completed_convertToJSON(v0_0_39_reservation_info->purge_completed);
    if(purge_completed_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "purge_completed", purge_completed_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_reservation_info->start_time
    if(v0_0_39_reservation_info->start_time) {
    if(cJSON_AddNumberToObject(item, "start_time", v0_0_39_reservation_info->start_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_reservation_info->watts
    if(v0_0_39_reservation_info->watts) {
    cJSON *watts_local_JSON = v0_0_39_uint32_no_val_convertToJSON(v0_0_39_reservation_info->watts);
    if(watts_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "watts", watts_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_reservation_info->tres
    if(v0_0_39_reservation_info->tres) {
    if(cJSON_AddStringToObject(item, "tres", v0_0_39_reservation_info->tres) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_reservation_info->users
    if(v0_0_39_reservation_info->users) {
    if(cJSON_AddStringToObject(item, "users", v0_0_39_reservation_info->users) == NULL) {
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

v0_0_39_reservation_info_t *v0_0_39_reservation_info_parseFromJSON(cJSON *v0_0_39_reservation_infoJSON){

    v0_0_39_reservation_info_t *v0_0_39_reservation_info_local_var = NULL;

    // define the local list for v0_0_39_reservation_info->core_specializations
    list_t *core_specializationsList = NULL;

    // define the local list for v0_0_39_reservation_info->flags
    list_t *flagsList = NULL;

    // define the local variable for v0_0_39_reservation_info->purge_completed
    v0_0_39_reservation_info_purge_completed_t *purge_completed_local_nonprim = NULL;

    // define the local variable for v0_0_39_reservation_info->watts
    v0_0_39_uint32_no_val_t *watts_local_nonprim = NULL;

    // v0_0_39_reservation_info->accounts
    cJSON *accounts = cJSON_GetObjectItemCaseSensitive(v0_0_39_reservation_infoJSON, "accounts");
    if (accounts) { 
    if(!cJSON_IsString(accounts) && !cJSON_IsNull(accounts))
    {
    goto end; //String
    }
    }

    // v0_0_39_reservation_info->burst_buffer
    cJSON *burst_buffer = cJSON_GetObjectItemCaseSensitive(v0_0_39_reservation_infoJSON, "burst_buffer");
    if (burst_buffer) { 
    if(!cJSON_IsString(burst_buffer) && !cJSON_IsNull(burst_buffer))
    {
    goto end; //String
    }
    }

    // v0_0_39_reservation_info->core_count
    cJSON *core_count = cJSON_GetObjectItemCaseSensitive(v0_0_39_reservation_infoJSON, "core_count");
    if (core_count) { 
    if(!cJSON_IsNumber(core_count))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_reservation_info->core_specializations
    cJSON *core_specializations = cJSON_GetObjectItemCaseSensitive(v0_0_39_reservation_infoJSON, "core_specializations");
    if (core_specializations) { 
    cJSON *core_specializations_local_nonprimitive = NULL;
    if(!cJSON_IsArray(core_specializations)){
        goto end; //nonprimitive container
    }

    core_specializationsList = list_createList();

    cJSON_ArrayForEach(core_specializations_local_nonprimitive,core_specializations )
    {
        if(!cJSON_IsObject(core_specializations_local_nonprimitive)){
            goto end;
        }
        v0_0_39_reservation_core_spec_t *core_specializationsItem = v0_0_39_reservation_core_spec_parseFromJSON(core_specializations_local_nonprimitive);

        list_addElement(core_specializationsList, core_specializationsItem);
    }
    }

    // v0_0_39_reservation_info->end_time
    cJSON *end_time = cJSON_GetObjectItemCaseSensitive(v0_0_39_reservation_infoJSON, "end_time");
    if (end_time) { 
    if(!cJSON_IsNumber(end_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_reservation_info->features
    cJSON *features = cJSON_GetObjectItemCaseSensitive(v0_0_39_reservation_infoJSON, "features");
    if (features) { 
    if(!cJSON_IsString(features) && !cJSON_IsNull(features))
    {
    goto end; //String
    }
    }

    // v0_0_39_reservation_info->flags
    cJSON *flags = cJSON_GetObjectItemCaseSensitive(v0_0_39_reservation_infoJSON, "flags");
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

    // v0_0_39_reservation_info->groups
    cJSON *groups = cJSON_GetObjectItemCaseSensitive(v0_0_39_reservation_infoJSON, "groups");
    if (groups) { 
    if(!cJSON_IsString(groups) && !cJSON_IsNull(groups))
    {
    goto end; //String
    }
    }

    // v0_0_39_reservation_info->licenses
    cJSON *licenses = cJSON_GetObjectItemCaseSensitive(v0_0_39_reservation_infoJSON, "licenses");
    if (licenses) { 
    if(!cJSON_IsString(licenses) && !cJSON_IsNull(licenses))
    {
    goto end; //String
    }
    }

    // v0_0_39_reservation_info->max_start_delay
    cJSON *max_start_delay = cJSON_GetObjectItemCaseSensitive(v0_0_39_reservation_infoJSON, "max_start_delay");
    if (max_start_delay) { 
    if(!cJSON_IsNumber(max_start_delay))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_reservation_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(v0_0_39_reservation_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // v0_0_39_reservation_info->node_count
    cJSON *node_count = cJSON_GetObjectItemCaseSensitive(v0_0_39_reservation_infoJSON, "node_count");
    if (node_count) { 
    if(!cJSON_IsNumber(node_count))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_reservation_info->node_list
    cJSON *node_list = cJSON_GetObjectItemCaseSensitive(v0_0_39_reservation_infoJSON, "node_list");
    if (node_list) { 
    if(!cJSON_IsString(node_list) && !cJSON_IsNull(node_list))
    {
    goto end; //String
    }
    }

    // v0_0_39_reservation_info->partition
    cJSON *partition = cJSON_GetObjectItemCaseSensitive(v0_0_39_reservation_infoJSON, "partition");
    if (partition) { 
    if(!cJSON_IsString(partition) && !cJSON_IsNull(partition))
    {
    goto end; //String
    }
    }

    // v0_0_39_reservation_info->purge_completed
    cJSON *purge_completed = cJSON_GetObjectItemCaseSensitive(v0_0_39_reservation_infoJSON, "purge_completed");
    if (purge_completed) { 
    purge_completed_local_nonprim = v0_0_39_reservation_info_purge_completed_parseFromJSON(purge_completed); //nonprimitive
    }

    // v0_0_39_reservation_info->start_time
    cJSON *start_time = cJSON_GetObjectItemCaseSensitive(v0_0_39_reservation_infoJSON, "start_time");
    if (start_time) { 
    if(!cJSON_IsNumber(start_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_reservation_info->watts
    cJSON *watts = cJSON_GetObjectItemCaseSensitive(v0_0_39_reservation_infoJSON, "watts");
    if (watts) { 
    watts_local_nonprim = v0_0_39_uint32_no_val_parseFromJSON(watts); //nonprimitive
    }

    // v0_0_39_reservation_info->tres
    cJSON *tres = cJSON_GetObjectItemCaseSensitive(v0_0_39_reservation_infoJSON, "tres");
    if (tres) { 
    if(!cJSON_IsString(tres) && !cJSON_IsNull(tres))
    {
    goto end; //String
    }
    }

    // v0_0_39_reservation_info->users
    cJSON *users = cJSON_GetObjectItemCaseSensitive(v0_0_39_reservation_infoJSON, "users");
    if (users) { 
    if(!cJSON_IsString(users) && !cJSON_IsNull(users))
    {
    goto end; //String
    }
    }


    v0_0_39_reservation_info_local_var = v0_0_39_reservation_info_create (
        accounts && !cJSON_IsNull(accounts) ? strdup(accounts->valuestring) : NULL,
        burst_buffer && !cJSON_IsNull(burst_buffer) ? strdup(burst_buffer->valuestring) : NULL,
        core_count ? core_count->valuedouble : 0,
        core_specializations ? core_specializationsList : NULL,
        end_time ? end_time->valuedouble : 0,
        features && !cJSON_IsNull(features) ? strdup(features->valuestring) : NULL,
        flags ? flagsList : NULL,
        groups && !cJSON_IsNull(groups) ? strdup(groups->valuestring) : NULL,
        licenses && !cJSON_IsNull(licenses) ? strdup(licenses->valuestring) : NULL,
        max_start_delay ? max_start_delay->valuedouble : 0,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        node_count ? node_count->valuedouble : 0,
        node_list && !cJSON_IsNull(node_list) ? strdup(node_list->valuestring) : NULL,
        partition && !cJSON_IsNull(partition) ? strdup(partition->valuestring) : NULL,
        purge_completed ? purge_completed_local_nonprim : NULL,
        start_time ? start_time->valuedouble : 0,
        watts ? watts_local_nonprim : NULL,
        tres && !cJSON_IsNull(tres) ? strdup(tres->valuestring) : NULL,
        users && !cJSON_IsNull(users) ? strdup(users->valuestring) : NULL
        );

    return v0_0_39_reservation_info_local_var;
end:
    if (core_specializationsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, core_specializationsList) {
            v0_0_39_reservation_core_spec_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(core_specializationsList);
        core_specializationsList = NULL;
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
    if (purge_completed_local_nonprim) {
        v0_0_39_reservation_info_purge_completed_free(purge_completed_local_nonprim);
        purge_completed_local_nonprim = NULL;
    }
    if (watts_local_nonprim) {
        v0_0_39_uint32_no_val_free(watts_local_nonprim);
        watts_local_nonprim = NULL;
    }
    return NULL;

}
