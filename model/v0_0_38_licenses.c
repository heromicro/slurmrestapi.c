#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_38_licenses.h"



v0_0_38_licenses_t *v0_0_38_licenses_create(
    list_t *errors,
    list_t *licenses
    ) {
    v0_0_38_licenses_t *v0_0_38_licenses_local_var = malloc(sizeof(v0_0_38_licenses_t));
    if (!v0_0_38_licenses_local_var) {
        return NULL;
    }
    v0_0_38_licenses_local_var->errors = errors;
    v0_0_38_licenses_local_var->licenses = licenses;

    return v0_0_38_licenses_local_var;
}


void v0_0_38_licenses_free(v0_0_38_licenses_t *v0_0_38_licenses) {
    if(NULL == v0_0_38_licenses){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_38_licenses->errors) {
        list_ForEach(listEntry, v0_0_38_licenses->errors) {
            v0_0_38_error_free(listEntry->data);
        }
        list_freeList(v0_0_38_licenses->errors);
        v0_0_38_licenses->errors = NULL;
    }
    if (v0_0_38_licenses->licenses) {
        list_ForEach(listEntry, v0_0_38_licenses->licenses) {
            v0_0_38_license_free(listEntry->data);
        }
        list_freeList(v0_0_38_licenses->licenses);
        v0_0_38_licenses->licenses = NULL;
    }
    free(v0_0_38_licenses);
}

cJSON *v0_0_38_licenses_convertToJSON(v0_0_38_licenses_t *v0_0_38_licenses) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_38_licenses->errors
    if(v0_0_38_licenses->errors) {
    cJSON *errors = cJSON_AddArrayToObject(item, "errors");
    if(errors == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *errorsListEntry;
    if (v0_0_38_licenses->errors) {
    list_ForEach(errorsListEntry, v0_0_38_licenses->errors) {
    cJSON *itemLocal = v0_0_38_error_convertToJSON(errorsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(errors, itemLocal);
    }
    }
    }


    // v0_0_38_licenses->licenses
    if(v0_0_38_licenses->licenses) {
    cJSON *licenses = cJSON_AddArrayToObject(item, "licenses");
    if(licenses == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *licensesListEntry;
    if (v0_0_38_licenses->licenses) {
    list_ForEach(licensesListEntry, v0_0_38_licenses->licenses) {
    cJSON *itemLocal = v0_0_38_license_convertToJSON(licensesListEntry->data);
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

v0_0_38_licenses_t *v0_0_38_licenses_parseFromJSON(cJSON *v0_0_38_licensesJSON){

    v0_0_38_licenses_t *v0_0_38_licenses_local_var = NULL;

    // define the local list for v0_0_38_licenses->errors
    list_t *errorsList = NULL;

    // define the local list for v0_0_38_licenses->licenses
    list_t *licensesList = NULL;

    // v0_0_38_licenses->errors
    cJSON *errors = cJSON_GetObjectItemCaseSensitive(v0_0_38_licensesJSON, "errors");
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
        v0_0_38_error_t *errorsItem = v0_0_38_error_parseFromJSON(errors_local_nonprimitive);

        list_addElement(errorsList, errorsItem);
    }
    }

    // v0_0_38_licenses->licenses
    cJSON *licenses = cJSON_GetObjectItemCaseSensitive(v0_0_38_licensesJSON, "licenses");
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
        v0_0_38_license_t *licensesItem = v0_0_38_license_parseFromJSON(licenses_local_nonprimitive);

        list_addElement(licensesList, licensesItem);
    }
    }


    v0_0_38_licenses_local_var = v0_0_38_licenses_create (
        errors ? errorsList : NULL,
        licenses ? licensesList : NULL
        );

    return v0_0_38_licenses_local_var;
end:
    if (errorsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, errorsList) {
            v0_0_38_error_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(errorsList);
        errorsList = NULL;
    }
    if (licensesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, licensesList) {
            v0_0_38_license_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(licensesList);
        licensesList = NULL;
    }
    return NULL;

}
