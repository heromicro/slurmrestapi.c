#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_licenses_info.h"



v0_0_39_licenses_info_t *v0_0_39_licenses_info_create(
    v0_0_39_meta_t *meta,
    list_t *errors,
    list_t *warnings,
    list_t *licenses
    ) {
    v0_0_39_licenses_info_t *v0_0_39_licenses_info_local_var = malloc(sizeof(v0_0_39_licenses_info_t));
    if (!v0_0_39_licenses_info_local_var) {
        return NULL;
    }
    v0_0_39_licenses_info_local_var->meta = meta;
    v0_0_39_licenses_info_local_var->errors = errors;
    v0_0_39_licenses_info_local_var->warnings = warnings;
    v0_0_39_licenses_info_local_var->licenses = licenses;

    return v0_0_39_licenses_info_local_var;
}


void v0_0_39_licenses_info_free(v0_0_39_licenses_info_t *v0_0_39_licenses_info) {
    if(NULL == v0_0_39_licenses_info){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_licenses_info->meta) {
        v0_0_39_meta_free(v0_0_39_licenses_info->meta);
        v0_0_39_licenses_info->meta = NULL;
    }
    if (v0_0_39_licenses_info->errors) {
        list_ForEach(listEntry, v0_0_39_licenses_info->errors) {
            v0_0_39_error_free(listEntry->data);
        }
        list_freeList(v0_0_39_licenses_info->errors);
        v0_0_39_licenses_info->errors = NULL;
    }
    if (v0_0_39_licenses_info->warnings) {
        list_ForEach(listEntry, v0_0_39_licenses_info->warnings) {
            v0_0_39_warning_free(listEntry->data);
        }
        list_freeList(v0_0_39_licenses_info->warnings);
        v0_0_39_licenses_info->warnings = NULL;
    }
    if (v0_0_39_licenses_info->licenses) {
        list_ForEach(listEntry, v0_0_39_licenses_info->licenses) {
            v0_0_39_license_free(listEntry->data);
        }
        list_freeList(v0_0_39_licenses_info->licenses);
        v0_0_39_licenses_info->licenses = NULL;
    }
    free(v0_0_39_licenses_info);
}

cJSON *v0_0_39_licenses_info_convertToJSON(v0_0_39_licenses_info_t *v0_0_39_licenses_info) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_licenses_info->meta
    if(v0_0_39_licenses_info->meta) {
    cJSON *meta_local_JSON = v0_0_39_meta_convertToJSON(v0_0_39_licenses_info->meta);
    if(meta_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "meta", meta_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_licenses_info->errors
    if(v0_0_39_licenses_info->errors) {
    cJSON *errors = cJSON_AddArrayToObject(item, "errors");
    if(errors == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *errorsListEntry;
    if (v0_0_39_licenses_info->errors) {
    list_ForEach(errorsListEntry, v0_0_39_licenses_info->errors) {
    cJSON *itemLocal = v0_0_39_error_convertToJSON(errorsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(errors, itemLocal);
    }
    }
    }


    // v0_0_39_licenses_info->warnings
    if(v0_0_39_licenses_info->warnings) {
    cJSON *warnings = cJSON_AddArrayToObject(item, "warnings");
    if(warnings == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *warningsListEntry;
    if (v0_0_39_licenses_info->warnings) {
    list_ForEach(warningsListEntry, v0_0_39_licenses_info->warnings) {
    cJSON *itemLocal = v0_0_39_warning_convertToJSON(warningsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(warnings, itemLocal);
    }
    }
    }


    // v0_0_39_licenses_info->licenses
    if(v0_0_39_licenses_info->licenses) {
    cJSON *licenses = cJSON_AddArrayToObject(item, "licenses");
    if(licenses == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *licensesListEntry;
    if (v0_0_39_licenses_info->licenses) {
    list_ForEach(licensesListEntry, v0_0_39_licenses_info->licenses) {
    cJSON *itemLocal = v0_0_39_license_convertToJSON(licensesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(licenses, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

v0_0_39_licenses_info_t *v0_0_39_licenses_info_parseFromJSON(cJSON *v0_0_39_licenses_infoJSON){

    v0_0_39_licenses_info_t *v0_0_39_licenses_info_local_var = NULL;

    // define the local variable for v0_0_39_licenses_info->meta
    v0_0_39_meta_t *meta_local_nonprim = NULL;

    // define the local list for v0_0_39_licenses_info->errors
    list_t *errorsList = NULL;

    // define the local list for v0_0_39_licenses_info->warnings
    list_t *warningsList = NULL;

    // define the local list for v0_0_39_licenses_info->licenses
    list_t *licensesList = NULL;

    // v0_0_39_licenses_info->meta
    cJSON *meta = cJSON_GetObjectItemCaseSensitive(v0_0_39_licenses_infoJSON, "meta");
    if (meta) { 
    meta_local_nonprim = v0_0_39_meta_parseFromJSON(meta); //nonprimitive
    }

    // v0_0_39_licenses_info->errors
    cJSON *errors = cJSON_GetObjectItemCaseSensitive(v0_0_39_licenses_infoJSON, "errors");
    if (errors) { 
    cJSON *errors_local_nonprimitive = NULL;
    if(!cJSON_IsArray(errors)){
        goto end; //nonprimitive container
    }

    errorsList = list_createList();

    cJSON_ArrayForEach(errors_local_nonprimitive,errors )
    {
        if(!cJSON_IsObject(errors_local_nonprimitive)){
            goto end;
        }
        v0_0_39_error_t *errorsItem = v0_0_39_error_parseFromJSON(errors_local_nonprimitive);

        list_addElement(errorsList, errorsItem);
    }
    }

    // v0_0_39_licenses_info->warnings
    cJSON *warnings = cJSON_GetObjectItemCaseSensitive(v0_0_39_licenses_infoJSON, "warnings");
    if (warnings) { 
    cJSON *warnings_local_nonprimitive = NULL;
    if(!cJSON_IsArray(warnings)){
        goto end; //nonprimitive container
    }

    warningsList = list_createList();

    cJSON_ArrayForEach(warnings_local_nonprimitive,warnings )
    {
        if(!cJSON_IsObject(warnings_local_nonprimitive)){
            goto end;
        }
        v0_0_39_warning_t *warningsItem = v0_0_39_warning_parseFromJSON(warnings_local_nonprimitive);

        list_addElement(warningsList, warningsItem);
    }
    }

    // v0_0_39_licenses_info->licenses
    cJSON *licenses = cJSON_GetObjectItemCaseSensitive(v0_0_39_licenses_infoJSON, "licenses");
    if (licenses) { 
    cJSON *licenses_local_nonprimitive = NULL;
    if(!cJSON_IsArray(licenses)){
        goto end; //nonprimitive container
    }

    licensesList = list_createList();

    cJSON_ArrayForEach(licenses_local_nonprimitive,licenses )
    {
        if(!cJSON_IsObject(licenses_local_nonprimitive)){
            goto end;
        }
        v0_0_39_license_t *licensesItem = v0_0_39_license_parseFromJSON(licenses_local_nonprimitive);

        list_addElement(licensesList, licensesItem);
    }
    }


    v0_0_39_licenses_info_local_var = v0_0_39_licenses_info_create (
        meta ? meta_local_nonprim : NULL,
        errors ? errorsList : NULL,
        warnings ? warningsList : NULL,
        licenses ? licensesList : NULL
        );

    return v0_0_39_licenses_info_local_var;
end:
    if (meta_local_nonprim) {
        v0_0_39_meta_free(meta_local_nonprim);
        meta_local_nonprim = NULL;
    }
    if (errorsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, errorsList) {
            v0_0_39_error_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(errorsList);
        errorsList = NULL;
    }
    if (warningsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, warningsList) {
            v0_0_39_warning_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(warningsList);
        warningsList = NULL;
    }
    if (licensesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, licensesList) {
            v0_0_39_license_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(licensesList);
        licensesList = NULL;
    }
    return NULL;

}
