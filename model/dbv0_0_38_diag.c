#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_diag.h"



dbv0_0_38_diag_t *dbv0_0_38_diag_create(
    dbv0_0_38_meta_t *meta,
    list_t *errors,
    dbv0_0_38_diag_statistics_t *statistics
    ) {
    dbv0_0_38_diag_t *dbv0_0_38_diag_local_var = malloc(sizeof(dbv0_0_38_diag_t));
    if (!dbv0_0_38_diag_local_var) {
        return NULL;
    }
    dbv0_0_38_diag_local_var->meta = meta;
    dbv0_0_38_diag_local_var->errors = errors;
    dbv0_0_38_diag_local_var->statistics = statistics;

    return dbv0_0_38_diag_local_var;
}


void dbv0_0_38_diag_free(dbv0_0_38_diag_t *dbv0_0_38_diag) {
    if(NULL == dbv0_0_38_diag){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_38_diag->meta) {
        dbv0_0_38_meta_free(dbv0_0_38_diag->meta);
        dbv0_0_38_diag->meta = NULL;
    }
    if (dbv0_0_38_diag->errors) {
        list_ForEach(listEntry, dbv0_0_38_diag->errors) {
            dbv0_0_38_error_free(listEntry->data);
        }
        list_freeList(dbv0_0_38_diag->errors);
        dbv0_0_38_diag->errors = NULL;
    }
    if (dbv0_0_38_diag->statistics) {
        dbv0_0_38_diag_statistics_free(dbv0_0_38_diag->statistics);
        dbv0_0_38_diag->statistics = NULL;
    }
    free(dbv0_0_38_diag);
}

cJSON *dbv0_0_38_diag_convertToJSON(dbv0_0_38_diag_t *dbv0_0_38_diag) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_diag->meta
    if(dbv0_0_38_diag->meta) {
    cJSON *meta_local_JSON = dbv0_0_38_meta_convertToJSON(dbv0_0_38_diag->meta);
    if(meta_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "meta", meta_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_38_diag->errors
    if(dbv0_0_38_diag->errors) {
    cJSON *errors = cJSON_AddArrayToObject(item, "errors");
    if(errors == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *errorsListEntry;
    if (dbv0_0_38_diag->errors) {
    list_ForEach(errorsListEntry, dbv0_0_38_diag->errors) {
    cJSON *itemLocal = dbv0_0_38_error_convertToJSON(errorsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(errors, itemLocal);
    }
    }
    }


    // dbv0_0_38_diag->statistics
    if(dbv0_0_38_diag->statistics) {
    cJSON *statistics_local_JSON = dbv0_0_38_diag_statistics_convertToJSON(dbv0_0_38_diag->statistics);
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

dbv0_0_38_diag_t *dbv0_0_38_diag_parseFromJSON(cJSON *dbv0_0_38_diagJSON){

    dbv0_0_38_diag_t *dbv0_0_38_diag_local_var = NULL;

    // define the local variable for dbv0_0_38_diag->meta
    dbv0_0_38_meta_t *meta_local_nonprim = NULL;

    // define the local list for dbv0_0_38_diag->errors
    list_t *errorsList = NULL;

    // define the local variable for dbv0_0_38_diag->statistics
    dbv0_0_38_diag_statistics_t *statistics_local_nonprim = NULL;

    // dbv0_0_38_diag->meta
    cJSON *meta = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_diagJSON, "meta");
    if (meta) { 
    meta_local_nonprim = dbv0_0_38_meta_parseFromJSON(meta); //nonprimitive
    }

    // dbv0_0_38_diag->errors
    cJSON *errors = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_diagJSON, "errors");
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
        dbv0_0_38_error_t *errorsItem = dbv0_0_38_error_parseFromJSON(errors_local_nonprimitive);

        list_addElement(errorsList, errorsItem);
    }
    }

    // dbv0_0_38_diag->statistics
    cJSON *statistics = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_diagJSON, "statistics");
    if (statistics) { 
    statistics_local_nonprim = dbv0_0_38_diag_statistics_parseFromJSON(statistics); //nonprimitive
    }


    dbv0_0_38_diag_local_var = dbv0_0_38_diag_create (
        meta ? meta_local_nonprim : NULL,
        errors ? errorsList : NULL,
        statistics ? statistics_local_nonprim : NULL
        );

    return dbv0_0_38_diag_local_var;
end:
    if (meta_local_nonprim) {
        dbv0_0_38_meta_free(meta_local_nonprim);
        meta_local_nonprim = NULL;
    }
    if (errorsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, errorsList) {
            dbv0_0_38_error_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(errorsList);
        errorsList = NULL;
    }
    if (statistics_local_nonprim) {
        dbv0_0_38_diag_statistics_free(statistics_local_nonprim);
        statistics_local_nonprim = NULL;
    }
    return NULL;

}
