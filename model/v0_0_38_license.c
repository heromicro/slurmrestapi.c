#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_38_license.h"



v0_0_38_license_t *v0_0_38_license_create(
    char *license_name,
    int total,
    int used,
    int free,
    int reserved,
    int remote
    ) {
    v0_0_38_license_t *v0_0_38_license_local_var = malloc(sizeof(v0_0_38_license_t));
    if (!v0_0_38_license_local_var) {
        return NULL;
    }
    v0_0_38_license_local_var->license_name = license_name;
    v0_0_38_license_local_var->total = total;
    v0_0_38_license_local_var->used = used;
    v0_0_38_license_local_var->free = free;
    v0_0_38_license_local_var->reserved = reserved;
    v0_0_38_license_local_var->remote = remote;

    return v0_0_38_license_local_var;
}


void v0_0_38_license_free(v0_0_38_license_t *v0_0_38_license) {
    if(NULL == v0_0_38_license){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_38_license->license_name) {
        free(v0_0_38_license->license_name);
        v0_0_38_license->license_name = NULL;
    }
    free(v0_0_38_license);
}

cJSON *v0_0_38_license_convertToJSON(v0_0_38_license_t *v0_0_38_license) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_38_license->license_name
    if(v0_0_38_license->license_name) {
    if(cJSON_AddStringToObject(item, "LicenseName", v0_0_38_license->license_name) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_license->total
    if(v0_0_38_license->total) {
    if(cJSON_AddNumberToObject(item, "Total", v0_0_38_license->total) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_license->used
    if(v0_0_38_license->used) {
    if(cJSON_AddNumberToObject(item, "Used", v0_0_38_license->used) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_license->free
    if(v0_0_38_license->free) {
    if(cJSON_AddNumberToObject(item, "Free", v0_0_38_license->free) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_license->reserved
    if(v0_0_38_license->reserved) {
    if(cJSON_AddNumberToObject(item, "Reserved", v0_0_38_license->reserved) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_38_license->remote
    if(v0_0_38_license->remote) {
    if(cJSON_AddBoolToObject(item, "Remote", v0_0_38_license->remote) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

v0_0_38_license_t *v0_0_38_license_parseFromJSON(cJSON *v0_0_38_licenseJSON){

    v0_0_38_license_t *v0_0_38_license_local_var = NULL;

    // v0_0_38_license->license_name
    cJSON *license_name = cJSON_GetObjectItemCaseSensitive(v0_0_38_licenseJSON, "LicenseName");
    if (license_name) { 
    if(!cJSON_IsString(license_name) && !cJSON_IsNull(license_name))
    {
    goto end; //String
    }
    }

    // v0_0_38_license->total
    cJSON *total = cJSON_GetObjectItemCaseSensitive(v0_0_38_licenseJSON, "Total");
    if (total) { 
    if(!cJSON_IsNumber(total))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_license->used
    cJSON *used = cJSON_GetObjectItemCaseSensitive(v0_0_38_licenseJSON, "Used");
    if (used) { 
    if(!cJSON_IsNumber(used))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_license->free
    cJSON *free = cJSON_GetObjectItemCaseSensitive(v0_0_38_licenseJSON, "Free");
    if (free) { 
    if(!cJSON_IsNumber(free))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_license->reserved
    cJSON *reserved = cJSON_GetObjectItemCaseSensitive(v0_0_38_licenseJSON, "Reserved");
    if (reserved) { 
    if(!cJSON_IsNumber(reserved))
    {
    goto end; //Numeric
    }
    }

    // v0_0_38_license->remote
    cJSON *remote = cJSON_GetObjectItemCaseSensitive(v0_0_38_licenseJSON, "Remote");
    if (remote) { 
    if(!cJSON_IsBool(remote))
    {
    goto end; //Bool
    }
    }


    v0_0_38_license_local_var = v0_0_38_license_create (
        license_name && !cJSON_IsNull(license_name) ? strdup(license_name->valuestring) : NULL,
        total ? total->valuedouble : 0,
        used ? used->valuedouble : 0,
        free ? free->valuedouble : 0,
        reserved ? reserved->valuedouble : 0,
        remote ? remote->valueint : 0
        );

    return v0_0_38_license_local_var;
end:
    return NULL;

}
