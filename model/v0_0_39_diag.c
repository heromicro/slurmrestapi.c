#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_diag.h"



v0_0_39_diag_t *v0_0_39_diag_create(
    v0_0_39_meta_t *meta,
    list_t *errors,
    list_t *warnings,
    v0_0_39_stats_msg_t *statistics
    ) {
    v0_0_39_diag_t *v0_0_39_diag_local_var = malloc(sizeof(v0_0_39_diag_t));
    if (!v0_0_39_diag_local_var) {
        return NULL;
    }
    v0_0_39_diag_local_var->meta = meta;
    v0_0_39_diag_local_var->errors = errors;
    v0_0_39_diag_local_var->warnings = warnings;
    v0_0_39_diag_local_var->statistics = statistics;

    return v0_0_39_diag_local_var;
}


void v0_0_39_diag_free(v0_0_39_diag_t *v0_0_39_diag) {
    if(NULL == v0_0_39_diag){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_diag->meta) {
        v0_0_39_meta_free(v0_0_39_diag->meta);
        v0_0_39_diag->meta = NULL;
    }
    if (v0_0_39_diag->errors) {
        list_ForEach(listEntry, v0_0_39_diag->errors) {
            v0_0_39_error_free(listEntry->data);
        }
        list_freeList(v0_0_39_diag->errors);
        v0_0_39_diag->errors = NULL;
    }
    if (v0_0_39_diag->warnings) {
        list_ForEach(listEntry, v0_0_39_diag->warnings) {
            v0_0_39_warning_free(listEntry->data);
        }
        list_freeList(v0_0_39_diag->warnings);
        v0_0_39_diag->warnings = NULL;
    }
    if (v0_0_39_diag->statistics) {
        v0_0_39_stats_msg_free(v0_0_39_diag->statistics);
        v0_0_39_diag->statistics = NULL;
    }
    free(v0_0_39_diag);
}

cJSON *v0_0_39_diag_convertToJSON(v0_0_39_diag_t *v0_0_39_diag) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_diag->meta
    if(v0_0_39_diag->meta) {
    cJSON *meta_local_JSON = v0_0_39_meta_convertToJSON(v0_0_39_diag->meta);
    if(meta_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "meta", meta_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_diag->errors
    if(v0_0_39_diag->errors) {
    cJSON *errors = cJSON_AddArrayToObject(item, "errors");
    if(errors == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *errorsListEntry;
    if (v0_0_39_diag->errors) {
    list_ForEach(errorsListEntry, v0_0_39_diag->errors) {
    cJSON *itemLocal = v0_0_39_error_convertToJSON(errorsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(errors, itemLocal);
    }
    }
    }


    // v0_0_39_diag->warnings
    if(v0_0_39_diag->warnings) {
    cJSON *warnings = cJSON_AddArrayToObject(item, "warnings");
    if(warnings == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *warningsListEntry;
    if (v0_0_39_diag->warnings) {
    list_ForEach(warningsListEntry, v0_0_39_diag->warnings) {
    cJSON *itemLocal = v0_0_39_warning_convertToJSON(warningsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(warnings, itemLocal);
    }
    }
    }


    // v0_0_39_diag->statistics
    if(v0_0_39_diag->statistics) {
    cJSON *statistics_local_JSON = v0_0_39_stats_msg_convertToJSON(v0_0_39_diag->statistics);
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

v0_0_39_diag_t *v0_0_39_diag_parseFromJSON(cJSON *v0_0_39_diagJSON){

    v0_0_39_diag_t *v0_0_39_diag_local_var = NULL;

    // define the local variable for v0_0_39_diag->meta
    v0_0_39_meta_t *meta_local_nonprim = NULL;

    // define the local list for v0_0_39_diag->errors
    list_t *errorsList = NULL;

    // define the local list for v0_0_39_diag->warnings
    list_t *warningsList = NULL;

    // define the local variable for v0_0_39_diag->statistics
    v0_0_39_stats_msg_t *statistics_local_nonprim = NULL;

    // v0_0_39_diag->meta
    cJSON *meta = cJSON_GetObjectItemCaseSensitive(v0_0_39_diagJSON, "meta");
    if (meta) { 
    meta_local_nonprim = v0_0_39_meta_parseFromJSON(meta); //nonprimitive
    }

    // v0_0_39_diag->errors
    cJSON *errors = cJSON_GetObjectItemCaseSensitive(v0_0_39_diagJSON, "errors");
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

    // v0_0_39_diag->warnings
    cJSON *warnings = cJSON_GetObjectItemCaseSensitive(v0_0_39_diagJSON, "warnings");
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

    // v0_0_39_diag->statistics
    cJSON *statistics = cJSON_GetObjectItemCaseSensitive(v0_0_39_diagJSON, "statistics");
    if (statistics) { 
    statistics_local_nonprim = v0_0_39_stats_msg_parseFromJSON(statistics); //nonprimitive
    }


    v0_0_39_diag_local_var = v0_0_39_diag_create (
        meta ? meta_local_nonprim : NULL,
        errors ? errorsList : NULL,
        warnings ? warningsList : NULL,
        statistics ? statistics_local_nonprim : NULL
        );

    return v0_0_39_diag_local_var;
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
    if (statistics_local_nonprim) {
        v0_0_39_stats_msg_free(statistics_local_nonprim);
        statistics_local_nonprim = NULL;
    }
    return NULL;

}
