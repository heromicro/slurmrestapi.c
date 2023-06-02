#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_38_reservation.h"



v0_0_38_reservation_t *v0_0_38_reservation_create(
    char *accounts,
    char *burst_buffer,
    int core_count,
    int core_spec_cnt,
    int end_time,
    char *features,
    list_t *flags,
    char *groups,
    char *licenses,
    int max_start_delay,
    char *name,
    int node_count,
    char *node_list,
    char *partition,
    v0_0_38_reservation_purge_completed_t *purge_completed,
    int start_time,
    int watts,
    char *tres,
    char *users
    ) {
    v0_0_38_reservation_t *v0_0_38_reservation_local_var = malloc(sizeof(v0_0_38_reservation_t));
    if (!v0_0_38_reservation_local_var) {
        return NULL;
    }
    v0_0_38_reservation_local_var->accounts = accounts;
    v0_0_38_reservation_local_var->burst_buffer = burst_buffer;
    v0_0_38_reservation_local_var->core_count = core_count;
    v0_0_38_reservation_local_var->core_spec_cnt = core_spec_cnt;
    v0_0_38_reservation_local_var->end_time = end_time;
    v0_0_38_reservation_local_var->features = features;
    v0_0_38_reservation_local_var->flags = flags;
    v0_0_38_reservation_local_var->groups = groups;
    v0_0_38_reservation_local_var->licenses = licenses;
    v0_0_38_reservation_local_var->max_start_delay = max_start_delay;
    v0_0_38_reservation_local_var->name = name;
    v0_0_38_reservation_local_var->node_count = node_count;
    v0_0_38_reservation_local_var->node_list = node_list;
    v0_0_38_reservation_local_var->partition = partition;
    v0_0_38_reservation_local_var->purge_completed = purge_completed;
    v0_0_38_reservation_local_var->start_time = start_time;
    v0_0_38_reservation_local_var->watts = watts;
    v0_0_38_reservation_local_var->tres = tres;
    v0_0_38_reservation_local_var->users = users;

    return v0_0_38_reservation_local_var;
}


void v0_0_38_reservation_free(v0_0_38_reservation_t *v0_0_38_reservation) {
    if(NULL == v0_0_38_reservation){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_38_reservation->accounts) {
        free(v0_0_38_reservation->accounts);
        v0_0_38_reservation->accounts = NULL;
    }
    if (v0_0_38_reservation->burst_buffer) {
        free(v0_0_38_reservation->burst_buffer);
        v0_0_38_reservation->burst_buffer = NULL;
    }
    if (v0_0_38_reservation->features) {
        free(v0_0_38_reservation->features);
        v0_0_38_reservation->features = NULL;
    }
    if (v0_0_38_reservation->flags) {
        list_ForEach(listEntry, v0_0_38_reservation->flags) {
            free(listEntry->data);
        }
        list_freeList(v0_0_38_reservation->flags);
        v0_0_38_reservation->flags = NULL;
    }
    if (v0_0_38_reservation->groups) {
        free(v0_0_38_reservation->groups);
        v0_0_38_reservation->groups = NULL;
    }
    if (v0_0_38_reservation->licenses) {
        free(v0_0_38_reservation->licenses);
        v0_0_38_reservation->licenses = NULL;
    }
    if (v0_0_38_reservation->name) {
        free(v0_0_38_reservation->name);
        v0_0_38_reservation->name = NULL;
    }
    if (v0_0_38_reservation->node_list) {
        free(v0_0_38_reservation->node_list);
        v0_0_38_reservation->node_list = NULL;
    }
    if (v0_0_38_reservation->partition) {
        free(v0_0_38_reservation->partition);
        v0_0_38_reservation->partition = NULL;
    }
    if (v0_0_38_reservation->purge_completed) {
        v0_0_38_reservation_purge_completed_free(v0_0_38_reservation->purge_completed);
        v0_0_38_reservation->purge_completed = NULL;
    }
    if (v0_0_38_reservation->tres) {
        free(v0_0_38_reservation->tres);
        v0_0_38_reservation->tres = NULL;
    }
    if (v0_0_38_reservation->users) {
        free(v0_0_38_reservation->users);
        v0_0_38_reservation->users = NULL;
    }
    free(v0_0_38_reservation);
}

cJSON *v0_0_38_reservation_convertToJSON(v0_0_38_reservation_t *v0_0_38_reservation) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_38_reservation->accounts
    if(v0_0_38_reservation->accounts) {
    if(cJSON_AddStringToObject(item, "accounts", v0_0_38_reservation->accounts) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_reservation->burst_buffer
    if(v0_0_38_reservation->burst_buffer) {
    if(cJSON_AddStringToObject(item, "burst_buffer", v0_0_38_reservation->burst_buffer) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_reservation->core_count
    if(v0_0_38_reservation->core_count) {
    if(cJSON_AddNumberToObject(item, "core_count", v0_0_38_reservation->core_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_reservation->core_spec_cnt
    if(v0_0_38_reservation->core_spec_cnt) {
    if(cJSON_AddNumberToObject(item, "core_spec_cnt", v0_0_38_reservation->core_spec_cnt) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_reservation->end_time
    if(v0_0_38_reservation->end_time) {
    if(cJSON_AddNumberToObject(item, "end_time", v0_0_38_reservation->end_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_reservation->features
    if(v0_0_38_reservation->features) {
    if(cJSON_AddStringToObject(item, "features", v0_0_38_reservation->features) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_reservation->flags
    if(v0_0_38_reservation->flags) {
    cJSON *flags = cJSON_AddArrayToObject(item, "flags");
    if(flags == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *flagsListEntry;
    list_ForEach(flagsListEntry, v0_0_38_reservation->flags) {
    if(cJSON_AddStringToObject(flags, "", (char*)flagsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_38_reservation->groups
    if(v0_0_38_reservation->groups) {
    if(cJSON_AddStringToObject(item, "groups", v0_0_38_reservation->groups) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_reservation->licenses
    if(v0_0_38_reservation->licenses) {
    if(cJSON_AddStringToObject(item, "licenses", v0_0_38_reservation->licenses) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_reservation->max_start_delay
    if(v0_0_38_reservation->max_start_delay) {
    if(cJSON_AddNumberToObject(item, "max_start_delay", v0_0_38_reservation->max_start_delay) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_reservation->name
    if(v0_0_38_reservation->name) {
    if(cJSON_AddStringToObject(item, "name", v0_0_38_reservation->name) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_reservation->node_count
    if(v0_0_38_reservation->node_count) {
    if(cJSON_AddNumberToObject(item, "node_count", v0_0_38_reservation->node_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_reservation->node_list
    if(v0_0_38_reservation->node_list) {
    if(cJSON_AddStringToObject(item, "node_list", v0_0_38_reservation->node_list) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_reservation->partition
    if(v0_0_38_reservation->partition) {
    if(cJSON_AddStringToObject(item, "partition", v0_0_38_reservation->partition) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_reservation->purge_completed
    if(v0_0_38_reservation->purge_completed) {
    cJSON *purge_completed_local_JSON = v0_0_38_reservation_purge_completed_convertToJSON(v0_0_38_reservation->purge_completed);
    if(purge_completed_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "purge_completed", purge_completed_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_38_reservation->start_time
    if(v0_0_38_reservation->start_time) {
    if(cJSON_AddNumberToObject(item, "start_time", v0_0_38_reservation->start_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_reservation->watts
    if(v0_0_38_reservation->watts) {
    if(cJSON_AddNumberToObject(item, "watts", v0_0_38_reservation->watts) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_reservation->tres
    if(v0_0_38_reservation->tres) {
    if(cJSON_AddStringToObject(item, "tres", v0_0_38_reservation->tres) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_reservation->users
    if(v0_0_38_reservation->users) {
    if(cJSON_AddStringToObject(item, "users", v0_0_38_reservation->users) == NULL) {
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

v0_0_38_reservation_t *v0_0_38_reservation_parseFromJSON(cJSON *v0_0_38_reservationJSON){

    v0_0_38_reservation_t *v0_0_38_reservation_local_var = NULL;

    // define the local list for v0_0_38_reservation->flags
    list_t *flagsList = NULL;

    // define the local variable for v0_0_38_reservation->purge_completed
    v0_0_38_reservation_purge_completed_t *purge_completed_local_nonprim = NULL;

    // v0_0_38_reservation->accounts
    cJSON *accounts = cJSON_GetObjectItemCaseSensitive(v0_0_38_reservationJSON, "accounts");
    if (accounts) { 
    if(!cJSON_IsString(accounts) && !cJSON_IsNull(accounts))
    {
    goto end; //String
    }
    }

    // v0_0_38_reservation->burst_buffer
    cJSON *burst_buffer = cJSON_GetObjectItemCaseSensitive(v0_0_38_reservationJSON, "burst_buffer");
    if (burst_buffer) { 
    if(!cJSON_IsString(burst_buffer) && !cJSON_IsNull(burst_buffer))
    {
    goto end; //String
    }
    }

    // v0_0_38_reservation->core_count
    cJSON *core_count = cJSON_GetObjectItemCaseSensitive(v0_0_38_reservationJSON, "core_count");
    if (core_count) { 
    if(!cJSON_IsNumber(core_count))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_reservation->core_spec_cnt
    cJSON *core_spec_cnt = cJSON_GetObjectItemCaseSensitive(v0_0_38_reservationJSON, "core_spec_cnt");
    if (core_spec_cnt) { 
    if(!cJSON_IsNumber(core_spec_cnt))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_reservation->end_time
    cJSON *end_time = cJSON_GetObjectItemCaseSensitive(v0_0_38_reservationJSON, "end_time");
    if (end_time) { 
    if(!cJSON_IsNumber(end_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_reservation->features
    cJSON *features = cJSON_GetObjectItemCaseSensitive(v0_0_38_reservationJSON, "features");
    if (features) { 
    if(!cJSON_IsString(features) && !cJSON_IsNull(features))
    {
    goto end; //String
    }
    }

    // v0_0_38_reservation->flags
    cJSON *flags = cJSON_GetObjectItemCaseSensitive(v0_0_38_reservationJSON, "flags");
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

    // v0_0_38_reservation->groups
    cJSON *groups = cJSON_GetObjectItemCaseSensitive(v0_0_38_reservationJSON, "groups");
    if (groups) { 
    if(!cJSON_IsString(groups) && !cJSON_IsNull(groups))
    {
    goto end; //String
    }
    }

    // v0_0_38_reservation->licenses
    cJSON *licenses = cJSON_GetObjectItemCaseSensitive(v0_0_38_reservationJSON, "licenses");
    if (licenses) { 
    if(!cJSON_IsString(licenses) && !cJSON_IsNull(licenses))
    {
    goto end; //String
    }
    }

    // v0_0_38_reservation->max_start_delay
    cJSON *max_start_delay = cJSON_GetObjectItemCaseSensitive(v0_0_38_reservationJSON, "max_start_delay");
    if (max_start_delay) { 
    if(!cJSON_IsNumber(max_start_delay))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_reservation->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(v0_0_38_reservationJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // v0_0_38_reservation->node_count
    cJSON *node_count = cJSON_GetObjectItemCaseSensitive(v0_0_38_reservationJSON, "node_count");
    if (node_count) { 
    if(!cJSON_IsNumber(node_count))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_reservation->node_list
    cJSON *node_list = cJSON_GetObjectItemCaseSensitive(v0_0_38_reservationJSON, "node_list");
    if (node_list) { 
    if(!cJSON_IsString(node_list) && !cJSON_IsNull(node_list))
    {
    goto end; //String
    }
    }

    // v0_0_38_reservation->partition
    cJSON *partition = cJSON_GetObjectItemCaseSensitive(v0_0_38_reservationJSON, "partition");
    if (partition) { 
    if(!cJSON_IsString(partition) && !cJSON_IsNull(partition))
    {
    goto end; //String
    }
    }

    // v0_0_38_reservation->purge_completed
    cJSON *purge_completed = cJSON_GetObjectItemCaseSensitive(v0_0_38_reservationJSON, "purge_completed");
    if (purge_completed) { 
    purge_completed_local_nonprim = v0_0_38_reservation_purge_completed_parseFromJSON(purge_completed); //nonprimitive
    }

    // v0_0_38_reservation->start_time
    cJSON *start_time = cJSON_GetObjectItemCaseSensitive(v0_0_38_reservationJSON, "start_time");
    if (start_time) { 
    if(!cJSON_IsNumber(start_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_reservation->watts
    cJSON *watts = cJSON_GetObjectItemCaseSensitive(v0_0_38_reservationJSON, "watts");
    if (watts) { 
    if(!cJSON_IsNumber(watts))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_reservation->tres
    cJSON *tres = cJSON_GetObjectItemCaseSensitive(v0_0_38_reservationJSON, "tres");
    if (tres) { 
    if(!cJSON_IsString(tres) && !cJSON_IsNull(tres))
    {
    goto end; //String
    }
    }

    // v0_0_38_reservation->users
    cJSON *users = cJSON_GetObjectItemCaseSensitive(v0_0_38_reservationJSON, "users");
    if (users) { 
    if(!cJSON_IsString(users) && !cJSON_IsNull(users))
    {
    goto end; //String
    }
    }


    v0_0_38_reservation_local_var = v0_0_38_reservation_create (
        accounts && !cJSON_IsNull(accounts) ? strdup(accounts->valuestring) : NULL,
        burst_buffer && !cJSON_IsNull(burst_buffer) ? strdup(burst_buffer->valuestring) : NULL,
        core_count ? core_count->valuedouble : 0,
        core_spec_cnt ? core_spec_cnt->valuedouble : 0,
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
        watts ? watts->valuedouble : 0,
        tres && !cJSON_IsNull(tres) ? strdup(tres->valuestring) : NULL,
        users && !cJSON_IsNull(users) ? strdup(users->valuestring) : NULL
        );

    return v0_0_38_reservation_local_var;
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
    if (purge_completed_local_nonprim) {
        v0_0_38_reservation_purge_completed_free(purge_completed_local_nonprim);
        purge_completed_local_nonprim = NULL;
    }
    return NULL;

}
