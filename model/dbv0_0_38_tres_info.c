#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_tres_info.h"



dbv0_0_38_tres_info_t *dbv0_0_38_tres_info_create(
    dbv0_0_38_meta_t *meta,
    list_t *errors,
    list_t *tres
    ) {
    dbv0_0_38_tres_info_t *dbv0_0_38_tres_info_local_var = malloc(sizeof(dbv0_0_38_tres_info_t));
    if (!dbv0_0_38_tres_info_local_var) {
        return NULL;
    }
    dbv0_0_38_tres_info_local_var->meta = meta;
    dbv0_0_38_tres_info_local_var->errors = errors;
    dbv0_0_38_tres_info_local_var->tres = tres;

    return dbv0_0_38_tres_info_local_var;
}


void dbv0_0_38_tres_info_free(dbv0_0_38_tres_info_t *dbv0_0_38_tres_info) {
    if(NULL == dbv0_0_38_tres_info){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_38_tres_info->meta) {
        dbv0_0_38_meta_free(dbv0_0_38_tres_info->meta);
        dbv0_0_38_tres_info->meta = NULL;
    }
    if (dbv0_0_38_tres_info->errors) {
        list_ForEach(listEntry, dbv0_0_38_tres_info->errors) {
            dbv0_0_38_error_free(listEntry->data);
        }
        list_freeList(dbv0_0_38_tres_info->errors);
        dbv0_0_38_tres_info->errors = NULL;
    }
    if (dbv0_0_38_tres_info->tres) {
        list_ForEach(listEntry, dbv0_0_38_tres_info->tres) {
            dbv0_0_38_tres_list_inner_free(listEntry->data);
        }
        list_freeList(dbv0_0_38_tres_info->tres);
        dbv0_0_38_tres_info->tres = NULL;
    }
    free(dbv0_0_38_tres_info);
}

cJSON *dbv0_0_38_tres_info_convertToJSON(dbv0_0_38_tres_info_t *dbv0_0_38_tres_info) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_tres_info->meta
    if(dbv0_0_38_tres_info->meta) {
    cJSON *meta_local_JSON = dbv0_0_38_meta_convertToJSON(dbv0_0_38_tres_info->meta);
    if(meta_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "meta", meta_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_38_tres_info->errors
    if(dbv0_0_38_tres_info->errors) {
    cJSON *errors = cJSON_AddArrayToObject(item, "errors");
    if(errors == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *errorsListEntry;
    if (dbv0_0_38_tres_info->errors) {
    list_ForEach(errorsListEntry, dbv0_0_38_tres_info->errors) {
    cJSON *itemLocal = dbv0_0_38_error_convertToJSON(errorsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(errors, itemLocal);
    }
    }
    }


    // dbv0_0_38_tres_info->tres
    if(dbv0_0_38_tres_info->tres) {
    cJSON *tres = cJSON_AddArrayToObject(item, "tres");
    if(tres == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *tresListEntry;
    if (dbv0_0_38_tres_info->tres) {
    list_ForEach(tresListEntry, dbv0_0_38_tres_info->tres) {
    cJSON *itemLocal = dbv0_0_38_tres_list_inner_convertToJSON(tresListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(tres, itemLocal);
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

dbv0_0_38_tres_info_t *dbv0_0_38_tres_info_parseFromJSON(cJSON *dbv0_0_38_tres_infoJSON){

    dbv0_0_38_tres_info_t *dbv0_0_38_tres_info_local_var = NULL;

    // define the local variable for dbv0_0_38_tres_info->meta
    dbv0_0_38_meta_t *meta_local_nonprim = NULL;

    // define the local list for dbv0_0_38_tres_info->errors
    list_t *errorsList = NULL;

    // define the local list for dbv0_0_38_tres_info->tres
    list_t *tresList = NULL;

    // dbv0_0_38_tres_info->meta
    cJSON *meta = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_tres_infoJSON, "meta");
    if (meta) { 
    meta_local_nonprim = dbv0_0_38_meta_parseFromJSON(meta); //nonprimitive
    }

    // dbv0_0_38_tres_info->errors
    cJSON *errors = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_tres_infoJSON, "errors");
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

    // dbv0_0_38_tres_info->tres
    cJSON *tres = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_tres_infoJSON, "tres");
    if (tres) { 
    cJSON *tres_local_nonprimitive = NULL;
    if(!cJSON_IsArray(tres)){
        goto end; //nonprimitive container
    }

    tresList = list_createList();

    cJSON_ArrayForEach(tres_local_nonprimitive,tres )
    {
        if(!cJSON_IsObject(tres_local_nonprimitive)){
            goto end;
        }
        dbv0_0_38_tres_list_inner_t *tresItem = dbv0_0_38_tres_list_inner_parseFromJSON(tres_local_nonprimitive);

        list_addElement(tresList, tresItem);
    }
    }


    dbv0_0_38_tres_info_local_var = dbv0_0_38_tres_info_create (
        meta ? meta_local_nonprim : NULL,
        errors ? errorsList : NULL,
        tres ? tresList : NULL
        );

    return dbv0_0_38_tres_info_local_var;
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
    if (tresList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, tresList) {
            dbv0_0_38_tres_list_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(tresList);
        tresList = NULL;
    }
    return NULL;

}
