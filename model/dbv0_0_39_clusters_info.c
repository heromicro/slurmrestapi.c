#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_39_clusters_info.h"



dbv0_0_39_clusters_info_t *dbv0_0_39_clusters_info_create(
    dbv0_0_39_meta_t *meta,
    list_t *errors,
    list_t *warnings,
    list_t *clusters
    ) {
    dbv0_0_39_clusters_info_t *dbv0_0_39_clusters_info_local_var = malloc(sizeof(dbv0_0_39_clusters_info_t));
    if (!dbv0_0_39_clusters_info_local_var) {
        return NULL;
    }
    dbv0_0_39_clusters_info_local_var->meta = meta;
    dbv0_0_39_clusters_info_local_var->errors = errors;
    dbv0_0_39_clusters_info_local_var->warnings = warnings;
    dbv0_0_39_clusters_info_local_var->clusters = clusters;

    return dbv0_0_39_clusters_info_local_var;
}


void dbv0_0_39_clusters_info_free(dbv0_0_39_clusters_info_t *dbv0_0_39_clusters_info) {
    if(NULL == dbv0_0_39_clusters_info){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_39_clusters_info->meta) {
        dbv0_0_39_meta_free(dbv0_0_39_clusters_info->meta);
        dbv0_0_39_clusters_info->meta = NULL;
    }
    if (dbv0_0_39_clusters_info->errors) {
        list_ForEach(listEntry, dbv0_0_39_clusters_info->errors) {
            dbv0_0_39_error_free(listEntry->data);
        }
        list_freeList(dbv0_0_39_clusters_info->errors);
        dbv0_0_39_clusters_info->errors = NULL;
    }
    if (dbv0_0_39_clusters_info->warnings) {
        list_ForEach(listEntry, dbv0_0_39_clusters_info->warnings) {
            dbv0_0_39_warning_free(listEntry->data);
        }
        list_freeList(dbv0_0_39_clusters_info->warnings);
        dbv0_0_39_clusters_info->warnings = NULL;
    }
    if (dbv0_0_39_clusters_info->clusters) {
        list_ForEach(listEntry, dbv0_0_39_clusters_info->clusters) {
            v0_0_39_cluster_rec_free(listEntry->data);
        }
        list_freeList(dbv0_0_39_clusters_info->clusters);
        dbv0_0_39_clusters_info->clusters = NULL;
    }
    free(dbv0_0_39_clusters_info);
}

cJSON *dbv0_0_39_clusters_info_convertToJSON(dbv0_0_39_clusters_info_t *dbv0_0_39_clusters_info) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_39_clusters_info->meta
    if(dbv0_0_39_clusters_info->meta) {
    cJSON *meta_local_JSON = dbv0_0_39_meta_convertToJSON(dbv0_0_39_clusters_info->meta);
    if(meta_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "meta", meta_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_39_clusters_info->errors
    if(dbv0_0_39_clusters_info->errors) {
    cJSON *errors = cJSON_AddArrayToObject(item, "errors");
    if(errors == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *errorsListEntry;
    if (dbv0_0_39_clusters_info->errors) {
    list_ForEach(errorsListEntry, dbv0_0_39_clusters_info->errors) {
    cJSON *itemLocal = dbv0_0_39_error_convertToJSON(errorsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(errors, itemLocal);
    }
    }
    }


    // dbv0_0_39_clusters_info->warnings
    if(dbv0_0_39_clusters_info->warnings) {
    cJSON *warnings = cJSON_AddArrayToObject(item, "warnings");
    if(warnings == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *warningsListEntry;
    if (dbv0_0_39_clusters_info->warnings) {
    list_ForEach(warningsListEntry, dbv0_0_39_clusters_info->warnings) {
    cJSON *itemLocal = dbv0_0_39_warning_convertToJSON(warningsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(warnings, itemLocal);
    }
    }
    }


    // dbv0_0_39_clusters_info->clusters
    if(dbv0_0_39_clusters_info->clusters) {
    cJSON *clusters = cJSON_AddArrayToObject(item, "clusters");
    if(clusters == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *clustersListEntry;
    if (dbv0_0_39_clusters_info->clusters) {
    list_ForEach(clustersListEntry, dbv0_0_39_clusters_info->clusters) {
    cJSON *itemLocal = v0_0_39_cluster_rec_convertToJSON(clustersListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(clusters, itemLocal);
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

dbv0_0_39_clusters_info_t *dbv0_0_39_clusters_info_parseFromJSON(cJSON *dbv0_0_39_clusters_infoJSON){

    dbv0_0_39_clusters_info_t *dbv0_0_39_clusters_info_local_var = NULL;

    // define the local variable for dbv0_0_39_clusters_info->meta
    dbv0_0_39_meta_t *meta_local_nonprim = NULL;

    // define the local list for dbv0_0_39_clusters_info->errors
    list_t *errorsList = NULL;

    // define the local list for dbv0_0_39_clusters_info->warnings
    list_t *warningsList = NULL;

    // define the local list for dbv0_0_39_clusters_info->clusters
    list_t *clustersList = NULL;

    // dbv0_0_39_clusters_info->meta
    cJSON *meta = cJSON_GetObjectItemCaseSensitive(dbv0_0_39_clusters_infoJSON, "meta");
    if (meta) { 
    meta_local_nonprim = dbv0_0_39_meta_parseFromJSON(meta); //nonprimitive
    }

    // dbv0_0_39_clusters_info->errors
    cJSON *errors = cJSON_GetObjectItemCaseSensitive(dbv0_0_39_clusters_infoJSON, "errors");
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
        dbv0_0_39_error_t *errorsItem = dbv0_0_39_error_parseFromJSON(errors_local_nonprimitive);

        list_addElement(errorsList, errorsItem);
    }
    }

    // dbv0_0_39_clusters_info->warnings
    cJSON *warnings = cJSON_GetObjectItemCaseSensitive(dbv0_0_39_clusters_infoJSON, "warnings");
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
        dbv0_0_39_warning_t *warningsItem = dbv0_0_39_warning_parseFromJSON(warnings_local_nonprimitive);

        list_addElement(warningsList, warningsItem);
    }
    }

    // dbv0_0_39_clusters_info->clusters
    cJSON *clusters = cJSON_GetObjectItemCaseSensitive(dbv0_0_39_clusters_infoJSON, "clusters");
    if (clusters) { 
    cJSON *clusters_local_nonprimitive = NULL;
    if(!cJSON_IsArray(clusters)){
        goto end; //nonprimitive container
    }

    clustersList = list_createList();

    cJSON_ArrayForEach(clusters_local_nonprimitive,clusters )
    {
        if(!cJSON_IsObject(clusters_local_nonprimitive)){
            goto end;
        }
        v0_0_39_cluster_rec_t *clustersItem = v0_0_39_cluster_rec_parseFromJSON(clusters_local_nonprimitive);

        list_addElement(clustersList, clustersItem);
    }
    }


    dbv0_0_39_clusters_info_local_var = dbv0_0_39_clusters_info_create (
        meta ? meta_local_nonprim : NULL,
        errors ? errorsList : NULL,
        warnings ? warningsList : NULL,
        clusters ? clustersList : NULL
        );

    return dbv0_0_39_clusters_info_local_var;
end:
    if (meta_local_nonprim) {
        dbv0_0_39_meta_free(meta_local_nonprim);
        meta_local_nonprim = NULL;
    }
    if (errorsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, errorsList) {
            dbv0_0_39_error_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(errorsList);
        errorsList = NULL;
    }
    if (warningsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, warningsList) {
            dbv0_0_39_warning_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(warningsList);
        warningsList = NULL;
    }
    if (clustersList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, clustersList) {
            v0_0_39_cluster_rec_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(clustersList);
        clustersList = NULL;
    }
    return NULL;

}
