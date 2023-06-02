#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_37_diag.h"



v0_0_37_diag_t *v0_0_37_diag_create(
    list_t *errors,
    v0_0_37_diag_statistics_t *statistics
    ) {
    v0_0_37_diag_t *v0_0_37_diag_local_var = malloc(sizeof(v0_0_37_diag_t));
    if (!v0_0_37_diag_local_var) {
        return NULL;
    }
    v0_0_37_diag_local_var->errors = errors;
    v0_0_37_diag_local_var->statistics = statistics;

    return v0_0_37_diag_local_var;
}


void v0_0_37_diag_free(v0_0_37_diag_t *v0_0_37_diag) {
    if(NULL == v0_0_37_diag){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_37_diag->errors) {
        list_ForEach(listEntry, v0_0_37_diag->errors) {
            v0_0_37_error_free(listEntry->data);
        }
        list_freeList(v0_0_37_diag->errors);
        v0_0_37_diag->errors = NULL;
    }
    if (v0_0_37_diag->statistics) {
        v0_0_37_diag_statistics_free(v0_0_37_diag->statistics);
        v0_0_37_diag->statistics = NULL;
    }
    free(v0_0_37_diag);
}

cJSON *v0_0_37_diag_convertToJSON(v0_0_37_diag_t *v0_0_37_diag) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_37_diag->errors
    if(v0_0_37_diag->errors) {
    cJSON *errors = cJSON_AddArrayToObject(item, "errors");
    if(errors == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *errorsListEntry;
    if (v0_0_37_diag->errors) {
    list_ForEach(errorsListEntry, v0_0_37_diag->errors) {
    cJSON *itemLocal = v0_0_37_error_convertToJSON(errorsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(errors, itemLocal);
    }
    }
    }


    // v0_0_37_diag->statistics
    if(v0_0_37_diag->statistics) {
    cJSON *statistics_local_JSON = v0_0_37_diag_statistics_convertToJSON(v0_0_37_diag->statistics);
    if(statistics_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "statistics", statistics_local_JSON);
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

v0_0_37_diag_t *v0_0_37_diag_parseFromJSON(cJSON *v0_0_37_diagJSON){

    v0_0_37_diag_t *v0_0_37_diag_local_var = NULL;

    // define the local list for v0_0_37_diag->errors
    list_t *errorsList = NULL;

    // define the local variable for v0_0_37_diag->statistics
    v0_0_37_diag_statistics_t *statistics_local_nonprim = NULL;

    // v0_0_37_diag->errors
    cJSON *errors = cJSON_GetObjectItemCaseSensitive(v0_0_37_diagJSON, "errors");
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
        v0_0_37_error_t *errorsItem = v0_0_37_error_parseFromJSON(errors_local_nonprimitive);

        list_addElement(errorsList, errorsItem);
    }
    }

    // v0_0_37_diag->statistics
    cJSON *statistics = cJSON_GetObjectItemCaseSensitive(v0_0_37_diagJSON, "statistics");
    if (statistics) { 
    statistics_local_nonprim = v0_0_37_diag_statistics_parseFromJSON(statistics); //nonprimitive
    }


    v0_0_37_diag_local_var = v0_0_37_diag_create (
        errors ? errorsList : NULL,
        statistics ? statistics_local_nonprim : NULL
        );

    return v0_0_37_diag_local_var;
end:
    if (errorsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, errorsList) {
            v0_0_37_error_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(errorsList);
        errorsList = NULL;
    }
    if (statistics_local_nonprim) {
        v0_0_37_diag_statistics_free(statistics_local_nonprim);
        statistics_local_nonprim = NULL;
    }
    return NULL;

}
