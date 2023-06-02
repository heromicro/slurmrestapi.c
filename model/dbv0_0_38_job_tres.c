#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_job_tres.h"



dbv0_0_38_job_tres_t *dbv0_0_38_job_tres_create(
    list_t *allocated,
    list_t *requested
    ) {
    dbv0_0_38_job_tres_t *dbv0_0_38_job_tres_local_var = malloc(sizeof(dbv0_0_38_job_tres_t));
    if (!dbv0_0_38_job_tres_local_var) {
        return NULL;
    }
    dbv0_0_38_job_tres_local_var->allocated = allocated;
    dbv0_0_38_job_tres_local_var->requested = requested;

    return dbv0_0_38_job_tres_local_var;
}


void dbv0_0_38_job_tres_free(dbv0_0_38_job_tres_t *dbv0_0_38_job_tres) {
    if(NULL == dbv0_0_38_job_tres){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_38_job_tres->allocated) {
        list_ForEach(listEntry, dbv0_0_38_job_tres->allocated) {
            dbv0_0_38_tres_list_inner_free(listEntry->data);
        }
        list_freeList(dbv0_0_38_job_tres->allocated);
        dbv0_0_38_job_tres->allocated = NULL;
    }
    if (dbv0_0_38_job_tres->requested) {
        list_ForEach(listEntry, dbv0_0_38_job_tres->requested) {
            dbv0_0_38_tres_list_inner_free(listEntry->data);
        }
        list_freeList(dbv0_0_38_job_tres->requested);
        dbv0_0_38_job_tres->requested = NULL;
    }
    free(dbv0_0_38_job_tres);
}

cJSON *dbv0_0_38_job_tres_convertToJSON(dbv0_0_38_job_tres_t *dbv0_0_38_job_tres) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_job_tres->allocated
    if(dbv0_0_38_job_tres->allocated) {
    cJSON *allocated = cJSON_AddArrayToObject(item, "allocated");
    if(allocated == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *allocatedListEntry;
    if (dbv0_0_38_job_tres->allocated) {
    list_ForEach(allocatedListEntry, dbv0_0_38_job_tres->allocated) {
    cJSON *itemLocal = dbv0_0_38_tres_list_inner_convertToJSON(allocatedListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(allocated, itemLocal);
    }
    }
    }


    // dbv0_0_38_job_tres->requested
    if(dbv0_0_38_job_tres->requested) {
    cJSON *requested = cJSON_AddArrayToObject(item, "requested");
    if(requested == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *requestedListEntry;
    if (dbv0_0_38_job_tres->requested) {
    list_ForEach(requestedListEntry, dbv0_0_38_job_tres->requested) {
    cJSON *itemLocal = dbv0_0_38_tres_list_inner_convertToJSON(requestedListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(requested, itemLocal);
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

dbv0_0_38_job_tres_t *dbv0_0_38_job_tres_parseFromJSON(cJSON *dbv0_0_38_job_tresJSON){

    dbv0_0_38_job_tres_t *dbv0_0_38_job_tres_local_var = NULL;

    // define the local list for dbv0_0_38_job_tres->allocated
    list_t *allocatedList = NULL;

    // define the local list for dbv0_0_38_job_tres->requested
    list_t *requestedList = NULL;

    // dbv0_0_38_job_tres->allocated
    cJSON *allocated = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_tresJSON, "allocated");
    if (allocated) { 
    cJSON *allocated_local_nonprimitive = NULL;
    if(!cJSON_IsArray(allocated)){
        goto end; //nonprimitive container
    }

    allocatedList = list_createList();

    cJSON_ArrayForEach(allocated_local_nonprimitive,allocated )
    {
        if(!cJSON_IsObject(allocated_local_nonprimitive)){
            goto end;
        }
        dbv0_0_38_tres_list_inner_t *allocatedItem = dbv0_0_38_tres_list_inner_parseFromJSON(allocated_local_nonprimitive);

        list_addElement(allocatedList, allocatedItem);
    }
    }

    // dbv0_0_38_job_tres->requested
    cJSON *requested = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_tresJSON, "requested");
    if (requested) { 
    cJSON *requested_local_nonprimitive = NULL;
    if(!cJSON_IsArray(requested)){
        goto end; //nonprimitive container
    }

    requestedList = list_createList();

    cJSON_ArrayForEach(requested_local_nonprimitive,requested )
    {
        if(!cJSON_IsObject(requested_local_nonprimitive)){
            goto end;
        }
        dbv0_0_38_tres_list_inner_t *requestedItem = dbv0_0_38_tres_list_inner_parseFromJSON(requested_local_nonprimitive);

        list_addElement(requestedList, requestedItem);
    }
    }


    dbv0_0_38_job_tres_local_var = dbv0_0_38_job_tres_create (
        allocated ? allocatedList : NULL,
        requested ? requestedList : NULL
        );

    return dbv0_0_38_job_tres_local_var;
end:
    if (allocatedList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, allocatedList) {
            dbv0_0_38_tres_list_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(allocatedList);
        allocatedList = NULL;
    }
    if (requestedList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, requestedList) {
            dbv0_0_38_tres_list_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(requestedList);
        requestedList = NULL;
    }
    return NULL;

}
