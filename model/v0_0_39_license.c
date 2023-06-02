#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_license.h"



v0_0_39_license_t *v0_0_39_license_create(
    char *license_name,
    int total,
    int used,
    int free,
    int remote,
    int reserved,
    int last_consumed,
    int last_deficit,
    long last_update
    ) {
    v0_0_39_license_t *v0_0_39_license_local_var = malloc(sizeof(v0_0_39_license_t));
    if (!v0_0_39_license_local_var) {
        return NULL;
    }
    v0_0_39_license_local_var->license_name = license_name;
    v0_0_39_license_local_var->total = total;
    v0_0_39_license_local_var->used = used;
    v0_0_39_license_local_var->free = free;
    v0_0_39_license_local_var->remote = remote;
    v0_0_39_license_local_var->reserved = reserved;
    v0_0_39_license_local_var->last_consumed = last_consumed;
    v0_0_39_license_local_var->last_deficit = last_deficit;
    v0_0_39_license_local_var->last_update = last_update;

    return v0_0_39_license_local_var;
}


void v0_0_39_license_free(v0_0_39_license_t *v0_0_39_license) {
    if(NULL == v0_0_39_license){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_license->license_name) {
        free(v0_0_39_license->license_name);
        v0_0_39_license->license_name = NULL;
    }
    free(v0_0_39_license);
}

cJSON *v0_0_39_license_convertToJSON(v0_0_39_license_t *v0_0_39_license) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_license->license_name
    if(v0_0_39_license->license_name) {
    if(cJSON_AddStringToObject(item, "LicenseName", v0_0_39_license->license_name) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_license->total
    if(v0_0_39_license->total) {
    if(cJSON_AddNumberToObject(item, "Total", v0_0_39_license->total) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_license->used
    if(v0_0_39_license->used) {
    if(cJSON_AddNumberToObject(item, "Used", v0_0_39_license->used) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_license->free
    if(v0_0_39_license->free) {
    if(cJSON_AddNumberToObject(item, "Free", v0_0_39_license->free) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_license->remote
    if(v0_0_39_license->remote) {
    if(cJSON_AddBoolToObject(item, "Remote", v0_0_39_license->remote) == NULL) {
    goto fail; //Bool
    }
    }


    // v0_0_39_license->reserved
    if(v0_0_39_license->reserved) {
    if(cJSON_AddNumberToObject(item, "Reserved", v0_0_39_license->reserved) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_license->last_consumed
    if(v0_0_39_license->last_consumed) {
    if(cJSON_AddNumberToObject(item, "LastConsumed", v0_0_39_license->last_consumed) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_license->last_deficit
    if(v0_0_39_license->last_deficit) {
    if(cJSON_AddNumberToObject(item, "LastDeficit", v0_0_39_license->last_deficit) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_license->last_update
    if(v0_0_39_license->last_update) {
    if(cJSON_AddNumberToObject(item, "LastUpdate", v0_0_39_license->last_update) == NULL) {
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

v0_0_39_license_t *v0_0_39_license_parseFromJSON(cJSON *v0_0_39_licenseJSON){

    v0_0_39_license_t *v0_0_39_license_local_var = NULL;

    // v0_0_39_license->license_name
    cJSON *license_name = cJSON_GetObjectItemCaseSensitive(v0_0_39_licenseJSON, "LicenseName");
    if (license_name) { 
    if(!cJSON_IsString(license_name) && !cJSON_IsNull(license_name))
    {
    goto end; //String
    }
    }

    // v0_0_39_license->total
    cJSON *total = cJSON_GetObjectItemCaseSensitive(v0_0_39_licenseJSON, "Total");
    if (total) { 
    if(!cJSON_IsNumber(total))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_license->used
    cJSON *used = cJSON_GetObjectItemCaseSensitive(v0_0_39_licenseJSON, "Used");
    if (used) { 
    if(!cJSON_IsNumber(used))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_license->free
    cJSON *free = cJSON_GetObjectItemCaseSensitive(v0_0_39_licenseJSON, "Free");
    if (free) { 
    if(!cJSON_IsNumber(free))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_license->remote
    cJSON *remote = cJSON_GetObjectItemCaseSensitive(v0_0_39_licenseJSON, "Remote");
    if (remote) { 
    if(!cJSON_IsBool(remote))
    {
    goto end; //Bool
    }
    }

    // v0_0_39_license->reserved
    cJSON *reserved = cJSON_GetObjectItemCaseSensitive(v0_0_39_licenseJSON, "Reserved");
    if (reserved) { 
    if(!cJSON_IsNumber(reserved))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_license->last_consumed
    cJSON *last_consumed = cJSON_GetObjectItemCaseSensitive(v0_0_39_licenseJSON, "LastConsumed");
    if (last_consumed) { 
    if(!cJSON_IsNumber(last_consumed))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_license->last_deficit
    cJSON *last_deficit = cJSON_GetObjectItemCaseSensitive(v0_0_39_licenseJSON, "LastDeficit");
    if (last_deficit) { 
    if(!cJSON_IsNumber(last_deficit))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_license->last_update
    cJSON *last_update = cJSON_GetObjectItemCaseSensitive(v0_0_39_licenseJSON, "LastUpdate");
    if (last_update) { 
    if(!cJSON_IsNumber(last_update))
    {
    goto end; //Numeric
    }
    }


    v0_0_39_license_local_var = v0_0_39_license_create (
        license_name && !cJSON_IsNull(license_name) ? strdup(license_name->valuestring) : NULL,
        total ? total->valuedouble : 0,
        used ? used->valuedouble : 0,
        free ? free->valuedouble : 0,
        remote ? remote->valueint : 0,
        reserved ? reserved->valuedouble : 0,
        last_consumed ? last_consumed->valuedouble : 0,
        last_deficit ? last_deficit->valuedouble : 0,
        last_update ? last_update->valuedouble : 0
        );

    return v0_0_39_license_local_var;
end:
    return NULL;

}
