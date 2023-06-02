#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_update_node_msg.h"


char* statev0_0_39_update_node_msg_ToString(slurm_rest_api_v0_0_39_update_node_msg_STATE_e state) {
	char *stateArray[] =  { "NULL", "INVALID", "UNKNOWN", "DOWN", "IDLE", "ALLOCATED", "ERROR", "MIXED", "FUTURE", "PERFCTRS", "RESERVED", "UNDRAIN", "CLOUD", "RESUME", "DRAIN", "COMPLETING", "NOT_RESPONDING", "POWERED_DOWN", "FAIL", "POWERING_UP", "MAINTENANCE", "REBOOT_REQUESTED", "REBOOT_CANCELED", "POWERING_DOWN", "DYNAMIC_FUTURE", "REBOOT_ISSUED", "PLANNED", "INVALID_REG", "POWER_DOWN", "POWER_UP", "POWER_DRAIN", "DYNAMIC_NORM" };
	return stateArray[state - 1];
}

slurm_rest_api_v0_0_39_update_node_msg_STATE_e statev0_0_39_update_node_msg_FromString(char* state) {
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

v0_0_39_update_node_msg_t *v0_0_39_update_node_msg_create(
    char *comment,
    int cpu_bind,
    char *extra,
    list_t *features,
    list_t *features_act,
    char *gres,
    list_t *address,
    list_t *hostname,
    list_t *name,
    list_t *state,
    char *reason,
    char *reason_uid,
    v0_0_39_uint32_no_val_t *resume_after,
    v0_0_39_uint32_no_val_t *weight
    ) {
    v0_0_39_update_node_msg_t *v0_0_39_update_node_msg_local_var = malloc(sizeof(v0_0_39_update_node_msg_t));
    if (!v0_0_39_update_node_msg_local_var) {
        return NULL;
    }
    v0_0_39_update_node_msg_local_var->comment = comment;
    v0_0_39_update_node_msg_local_var->cpu_bind = cpu_bind;
    v0_0_39_update_node_msg_local_var->extra = extra;
    v0_0_39_update_node_msg_local_var->features = features;
    v0_0_39_update_node_msg_local_var->features_act = features_act;
    v0_0_39_update_node_msg_local_var->gres = gres;
    v0_0_39_update_node_msg_local_var->address = address;
    v0_0_39_update_node_msg_local_var->hostname = hostname;
    v0_0_39_update_node_msg_local_var->name = name;
    v0_0_39_update_node_msg_local_var->state = state;
    v0_0_39_update_node_msg_local_var->reason = reason;
    v0_0_39_update_node_msg_local_var->reason_uid = reason_uid;
    v0_0_39_update_node_msg_local_var->resume_after = resume_after;
    v0_0_39_update_node_msg_local_var->weight = weight;

    return v0_0_39_update_node_msg_local_var;
}


void v0_0_39_update_node_msg_free(v0_0_39_update_node_msg_t *v0_0_39_update_node_msg) {
    if(NULL == v0_0_39_update_node_msg){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_update_node_msg->comment) {
        free(v0_0_39_update_node_msg->comment);
        v0_0_39_update_node_msg->comment = NULL;
    }
    if (v0_0_39_update_node_msg->extra) {
        free(v0_0_39_update_node_msg->extra);
        v0_0_39_update_node_msg->extra = NULL;
    }
    if (v0_0_39_update_node_msg->features) {
        list_ForEach(listEntry, v0_0_39_update_node_msg->features) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_update_node_msg->features);
        v0_0_39_update_node_msg->features = NULL;
    }
    if (v0_0_39_update_node_msg->features_act) {
        list_ForEach(listEntry, v0_0_39_update_node_msg->features_act) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_update_node_msg->features_act);
        v0_0_39_update_node_msg->features_act = NULL;
    }
    if (v0_0_39_update_node_msg->gres) {
        free(v0_0_39_update_node_msg->gres);
        v0_0_39_update_node_msg->gres = NULL;
    }
    if (v0_0_39_update_node_msg->address) {
        list_ForEach(listEntry, v0_0_39_update_node_msg->address) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_update_node_msg->address);
        v0_0_39_update_node_msg->address = NULL;
    }
    if (v0_0_39_update_node_msg->hostname) {
        list_ForEach(listEntry, v0_0_39_update_node_msg->hostname) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_update_node_msg->hostname);
        v0_0_39_update_node_msg->hostname = NULL;
    }
    if (v0_0_39_update_node_msg->name) {
        list_ForEach(listEntry, v0_0_39_update_node_msg->name) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_update_node_msg->name);
        v0_0_39_update_node_msg->name = NULL;
    }
    if (v0_0_39_update_node_msg->state) {
        list_ForEach(listEntry, v0_0_39_update_node_msg->state) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_update_node_msg->state);
        v0_0_39_update_node_msg->state = NULL;
    }
    if (v0_0_39_update_node_msg->reason) {
        free(v0_0_39_update_node_msg->reason);
        v0_0_39_update_node_msg->reason = NULL;
    }
    if (v0_0_39_update_node_msg->reason_uid) {
        free(v0_0_39_update_node_msg->reason_uid);
        v0_0_39_update_node_msg->reason_uid = NULL;
    }
    if (v0_0_39_update_node_msg->resume_after) {
        v0_0_39_uint32_no_val_free(v0_0_39_update_node_msg->resume_after);
        v0_0_39_update_node_msg->resume_after = NULL;
    }
    if (v0_0_39_update_node_msg->weight) {
        v0_0_39_uint32_no_val_free(v0_0_39_update_node_msg->weight);
        v0_0_39_update_node_msg->weight = NULL;
    }
    free(v0_0_39_update_node_msg);
}

cJSON *v0_0_39_update_node_msg_convertToJSON(v0_0_39_update_node_msg_t *v0_0_39_update_node_msg) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_update_node_msg->comment
    if(v0_0_39_update_node_msg->comment) {
    if(cJSON_AddStringToObject(item, "comment", v0_0_39_update_node_msg->comment) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_update_node_msg->cpu_bind
    if(v0_0_39_update_node_msg->cpu_bind) {
    if(cJSON_AddNumberToObject(item, "cpu_bind", v0_0_39_update_node_msg->cpu_bind) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_update_node_msg->extra
    if(v0_0_39_update_node_msg->extra) {
    if(cJSON_AddStringToObject(item, "extra", v0_0_39_update_node_msg->extra) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_update_node_msg->features
    if(v0_0_39_update_node_msg->features) {
    cJSON *features = cJSON_AddArrayToObject(item, "features");
    if(features == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *featuresListEntry;
    list_ForEach(featuresListEntry, v0_0_39_update_node_msg->features) {
    if(cJSON_AddStringToObject(features, "", (char*)featuresListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_update_node_msg->features_act
    if(v0_0_39_update_node_msg->features_act) {
    cJSON *features_act = cJSON_AddArrayToObject(item, "features_act");
    if(features_act == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *features_actListEntry;
    list_ForEach(features_actListEntry, v0_0_39_update_node_msg->features_act) {
    if(cJSON_AddStringToObject(features_act, "", (char*)features_actListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_update_node_msg->gres
    if(v0_0_39_update_node_msg->gres) {
    if(cJSON_AddStringToObject(item, "gres", v0_0_39_update_node_msg->gres) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_update_node_msg->address
    if(v0_0_39_update_node_msg->address) {
    cJSON *address = cJSON_AddArrayToObject(item, "address");
    if(address == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *addressListEntry;
    list_ForEach(addressListEntry, v0_0_39_update_node_msg->address) {
    if(cJSON_AddStringToObject(address, "", (char*)addressListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_update_node_msg->hostname
    if(v0_0_39_update_node_msg->hostname) {
    cJSON *hostname = cJSON_AddArrayToObject(item, "hostname");
    if(hostname == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *hostnameListEntry;
    list_ForEach(hostnameListEntry, v0_0_39_update_node_msg->hostname) {
    if(cJSON_AddStringToObject(hostname, "", (char*)hostnameListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_update_node_msg->name
    if(v0_0_39_update_node_msg->name) {
    cJSON *name = cJSON_AddArrayToObject(item, "name");
    if(name == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *nameListEntry;
    list_ForEach(nameListEntry, v0_0_39_update_node_msg->name) {
    if(cJSON_AddStringToObject(name, "", (char*)nameListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_update_node_msg->state
    if(v0_0_39_update_node_msg->state != slurm_rest_api_v0_0_39_update_node_msg_STATE_NULL) {
    cJSON *state = cJSON_AddArrayToObject(item, "state");
    if(state == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *stateListEntry;
    list_ForEach(stateListEntry, v0_0_39_update_node_msg->state) {
    if(cJSON_AddStringToObject(state, "", (char*)stateListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_update_node_msg->reason
    if(v0_0_39_update_node_msg->reason) {
    if(cJSON_AddStringToObject(item, "reason", v0_0_39_update_node_msg->reason) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_update_node_msg->reason_uid
    if(v0_0_39_update_node_msg->reason_uid) {
    if(cJSON_AddStringToObject(item, "reason_uid", v0_0_39_update_node_msg->reason_uid) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_update_node_msg->resume_after
    if(v0_0_39_update_node_msg->resume_after) {
    cJSON *resume_after_local_JSON = v0_0_39_uint32_no_val_convertToJSON(v0_0_39_update_node_msg->resume_after);
    if(resume_after_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "resume_after", resume_after_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_update_node_msg->weight
    if(v0_0_39_update_node_msg->weight) {
    cJSON *weight_local_JSON = v0_0_39_uint32_no_val_convertToJSON(v0_0_39_update_node_msg->weight);
    if(weight_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "weight", weight_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

v0_0_39_update_node_msg_t *v0_0_39_update_node_msg_parseFromJSON(cJSON *v0_0_39_update_node_msgJSON){

    v0_0_39_update_node_msg_t *v0_0_39_update_node_msg_local_var = NULL;

    // define the local list for v0_0_39_update_node_msg->features
    list_t *featuresList = NULL;

    // define the local list for v0_0_39_update_node_msg->features_act
    list_t *features_actList = NULL;

    // define the local list for v0_0_39_update_node_msg->address
    list_t *addressList = NULL;

    // define the local list for v0_0_39_update_node_msg->hostname
    list_t *hostnameList = NULL;

    // define the local list for v0_0_39_update_node_msg->name
    list_t *nameList = NULL;

    // define the local list for v0_0_39_update_node_msg->state
    list_t *stateList = NULL;

    // define the local variable for v0_0_39_update_node_msg->resume_after
    v0_0_39_uint32_no_val_t *resume_after_local_nonprim = NULL;

    // define the local variable for v0_0_39_update_node_msg->weight
    v0_0_39_uint32_no_val_t *weight_local_nonprim = NULL;

    // v0_0_39_update_node_msg->comment
    cJSON *comment = cJSON_GetObjectItemCaseSensitive(v0_0_39_update_node_msgJSON, "comment");
    if (comment) { 
    if(!cJSON_IsString(comment) && !cJSON_IsNull(comment))
    {
    goto end; //String
    }
    }

    // v0_0_39_update_node_msg->cpu_bind
    cJSON *cpu_bind = cJSON_GetObjectItemCaseSensitive(v0_0_39_update_node_msgJSON, "cpu_bind");
    if (cpu_bind) { 
    if(!cJSON_IsNumber(cpu_bind))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_update_node_msg->extra
    cJSON *extra = cJSON_GetObjectItemCaseSensitive(v0_0_39_update_node_msgJSON, "extra");
    if (extra) { 
    if(!cJSON_IsString(extra) && !cJSON_IsNull(extra))
    {
    goto end; //String
    }
    }

    // v0_0_39_update_node_msg->features
    cJSON *features = cJSON_GetObjectItemCaseSensitive(v0_0_39_update_node_msgJSON, "features");
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

    // v0_0_39_update_node_msg->features_act
    cJSON *features_act = cJSON_GetObjectItemCaseSensitive(v0_0_39_update_node_msgJSON, "features_act");
    if (features_act) { 
    cJSON *features_act_local = NULL;
    if(!cJSON_IsArray(features_act)) {
        goto end;//primitive container
    }
    features_actList = list_createList();

    cJSON_ArrayForEach(features_act_local, features_act)
    {
        if(!cJSON_IsString(features_act_local))
        {
            goto end;
        }
        list_addElement(features_actList , strdup(features_act_local->valuestring));
    }
    }

    // v0_0_39_update_node_msg->gres
    cJSON *gres = cJSON_GetObjectItemCaseSensitive(v0_0_39_update_node_msgJSON, "gres");
    if (gres) { 
    if(!cJSON_IsString(gres) && !cJSON_IsNull(gres))
    {
    goto end; //String
    }
    }

    // v0_0_39_update_node_msg->address
    cJSON *address = cJSON_GetObjectItemCaseSensitive(v0_0_39_update_node_msgJSON, "address");
    if (address) { 
    cJSON *address_local = NULL;
    if(!cJSON_IsArray(address)) {
        goto end;//primitive container
    }
    addressList = list_createList();

    cJSON_ArrayForEach(address_local, address)
    {
        if(!cJSON_IsString(address_local))
        {
            goto end;
        }
        list_addElement(addressList , strdup(address_local->valuestring));
    }
    }

    // v0_0_39_update_node_msg->hostname
    cJSON *hostname = cJSON_GetObjectItemCaseSensitive(v0_0_39_update_node_msgJSON, "hostname");
    if (hostname) { 
    cJSON *hostname_local = NULL;
    if(!cJSON_IsArray(hostname)) {
        goto end;//primitive container
    }
    hostnameList = list_createList();

    cJSON_ArrayForEach(hostname_local, hostname)
    {
        if(!cJSON_IsString(hostname_local))
        {
            goto end;
        }
        list_addElement(hostnameList , strdup(hostname_local->valuestring));
    }
    }

    // v0_0_39_update_node_msg->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(v0_0_39_update_node_msgJSON, "name");
    if (name) { 
    cJSON *name_local = NULL;
    if(!cJSON_IsArray(name)) {
        goto end;//primitive container
    }
    nameList = list_createList();

    cJSON_ArrayForEach(name_local, name)
    {
        if(!cJSON_IsString(name_local))
        {
            goto end;
        }
        list_addElement(nameList , strdup(name_local->valuestring));
    }
    }

    // v0_0_39_update_node_msg->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(v0_0_39_update_node_msgJSON, "state");
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

    // v0_0_39_update_node_msg->reason
    cJSON *reason = cJSON_GetObjectItemCaseSensitive(v0_0_39_update_node_msgJSON, "reason");
    if (reason) { 
    if(!cJSON_IsString(reason) && !cJSON_IsNull(reason))
    {
    goto end; //String
    }
    }

    // v0_0_39_update_node_msg->reason_uid
    cJSON *reason_uid = cJSON_GetObjectItemCaseSensitive(v0_0_39_update_node_msgJSON, "reason_uid");
    if (reason_uid) { 
    if(!cJSON_IsString(reason_uid) && !cJSON_IsNull(reason_uid))
    {
    goto end; //String
    }
    }

    // v0_0_39_update_node_msg->resume_after
    cJSON *resume_after = cJSON_GetObjectItemCaseSensitive(v0_0_39_update_node_msgJSON, "resume_after");
    if (resume_after) { 
    resume_after_local_nonprim = v0_0_39_uint32_no_val_parseFromJSON(resume_after); //nonprimitive
    }

    // v0_0_39_update_node_msg->weight
    cJSON *weight = cJSON_GetObjectItemCaseSensitive(v0_0_39_update_node_msgJSON, "weight");
    if (weight) { 
    weight_local_nonprim = v0_0_39_uint32_no_val_parseFromJSON(weight); //nonprimitive
    }


    v0_0_39_update_node_msg_local_var = v0_0_39_update_node_msg_create (
        comment && !cJSON_IsNull(comment) ? strdup(comment->valuestring) : NULL,
        cpu_bind ? cpu_bind->valuedouble : 0,
        extra && !cJSON_IsNull(extra) ? strdup(extra->valuestring) : NULL,
        features ? featuresList : NULL,
        features_act ? features_actList : NULL,
        gres && !cJSON_IsNull(gres) ? strdup(gres->valuestring) : NULL,
        address ? addressList : NULL,
        hostname ? hostnameList : NULL,
        name ? nameList : NULL,
        state ? stateList : NULL,
        reason && !cJSON_IsNull(reason) ? strdup(reason->valuestring) : NULL,
        reason_uid && !cJSON_IsNull(reason_uid) ? strdup(reason_uid->valuestring) : NULL,
        resume_after ? resume_after_local_nonprim : NULL,
        weight ? weight_local_nonprim : NULL
        );

    return v0_0_39_update_node_msg_local_var;
end:
    if (featuresList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, featuresList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(featuresList);
        featuresList = NULL;
    }
    if (features_actList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, features_actList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(features_actList);
        features_actList = NULL;
    }
    if (addressList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, addressList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(addressList);
        addressList = NULL;
    }
    if (hostnameList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, hostnameList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(hostnameList);
        hostnameList = NULL;
    }
    if (nameList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, nameList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(nameList);
        nameList = NULL;
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
    if (resume_after_local_nonprim) {
        v0_0_39_uint32_no_val_free(resume_after_local_nonprim);
        resume_after_local_nonprim = NULL;
    }
    if (weight_local_nonprim) {
        v0_0_39_uint32_no_val_free(weight_local_nonprim);
        weight_local_nonprim = NULL;
    }
    return NULL;

}
