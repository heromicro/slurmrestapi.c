#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_job_step_tres.h"



dbv0_0_37_job_step_tres_t *dbv0_0_37_job_step_tres_create(
    dbv0_0_37_job_step_tres_requested_t *requested,
    dbv0_0_37_job_step_tres_requested_t *consumed,
    list_t *allocated
    ) {
    dbv0_0_37_job_step_tres_t *dbv0_0_37_job_step_tres_local_var = malloc(sizeof(dbv0_0_37_job_step_tres_t));
    if (!dbv0_0_37_job_step_tres_local_var) {
        return NULL;
    }
    dbv0_0_37_job_step_tres_local_var->requested = requested;
    dbv0_0_37_job_step_tres_local_var->consumed = consumed;
    dbv0_0_37_job_step_tres_local_var->allocated = allocated;

    return dbv0_0_37_job_step_tres_local_var;
}


void dbv0_0_37_job_step_tres_free(dbv0_0_37_job_step_tres_t *dbv0_0_37_job_step_tres) {
    if(NULL == dbv0_0_37_job_step_tres){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_37_job_step_tres->requested) {
        dbv0_0_37_job_step_tres_requested_free(dbv0_0_37_job_step_tres->requested);
        dbv0_0_37_job_step_tres->requested = NULL;
    }
    if (dbv0_0_37_job_step_tres->consumed) {
        dbv0_0_37_job_step_tres_requested_free(dbv0_0_37_job_step_tres->consumed);
        dbv0_0_37_job_step_tres->consumed = NULL;
    }
    if (dbv0_0_37_job_step_tres->allocated) {
        list_ForEach(listEntry, dbv0_0_37_job_step_tres->allocated) {
            dbv0_0_37_tres_list_inner_free(listEntry->data);
        }
        list_freeList(dbv0_0_37_job_step_tres->allocated);
        dbv0_0_37_job_step_tres->allocated = NULL;
    }
    free(dbv0_0_37_job_step_tres);
}

cJSON *dbv0_0_37_job_step_tres_convertToJSON(dbv0_0_37_job_step_tres_t *dbv0_0_37_job_step_tres) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_job_step_tres->requested
    if(dbv0_0_37_job_step_tres->requested) {
    cJSON *requested_local_JSON = dbv0_0_37_job_step_tres_requested_convertToJSON(dbv0_0_37_job_step_tres->requested);
    if(requested_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "requested", requested_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_37_job_step_tres->consumed
    if(dbv0_0_37_job_step_tres->consumed) {
    cJSON *consumed_local_JSON = dbv0_0_37_job_step_tres_requested_convertToJSON(dbv0_0_37_job_step_tres->consumed);
    if(consumed_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "consumed", consumed_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_37_job_step_tres->allocated
    if(dbv0_0_37_job_step_tres->allocated) {
    cJSON *allocated = cJSON_AddArrayToObject(item, "allocated");
    if(allocated == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *allocatedListEntry;
    if (dbv0_0_37_job_step_tres->allocated) {
    list_ForEach(allocatedListEntry, dbv0_0_37_job_step_tres->allocated) {
    cJSON *itemLocal = dbv0_0_37_tres_list_inner_convertToJSON(allocatedListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(allocated, itemLocal);
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

dbv0_0_37_job_step_tres_t *dbv0_0_37_job_step_tres_parseFromJSON(cJSON *dbv0_0_37_job_step_tresJSON){

    dbv0_0_37_job_step_tres_t *dbv0_0_37_job_step_tres_local_var = NULL;

    // define the local variable for dbv0_0_37_job_step_tres->requested
    dbv0_0_37_job_step_tres_requested_t *requested_local_nonprim = NULL;

    // define the local variable for dbv0_0_37_job_step_tres->consumed
    dbv0_0_37_job_step_tres_requested_t *consumed_local_nonprim = NULL;

    // define the local list for dbv0_0_37_job_step_tres->allocated
    list_t *allocatedList = NULL;

    // dbv0_0_37_job_step_tres->requested
    cJSON *requested = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_job_step_tresJSON, "requested");
    if (requested) { 
    requested_local_nonprim = dbv0_0_37_job_step_tres_requested_parseFromJSON(requested); //nonprimitive
    }

    // dbv0_0_37_job_step_tres->consumed
    cJSON *consumed = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_job_step_tresJSON, "consumed");
    if (consumed) { 
    consumed_local_nonprim = dbv0_0_37_job_step_tres_requested_parseFromJSON(consumed); //nonprimitive
    }

    // dbv0_0_37_job_step_tres->allocated
    cJSON *allocated = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_job_step_tresJSON, "allocated");
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
        dbv0_0_37_tres_list_inner_t *allocatedItem = dbv0_0_37_tres_list_inner_parseFromJSON(allocated_local_nonprimitive);

        list_addElement(allocatedList, allocatedItem);
    }
    }


    dbv0_0_37_job_step_tres_local_var = dbv0_0_37_job_step_tres_create (
        requested ? requested_local_nonprim : NULL,
        consumed ? consumed_local_nonprim : NULL,
        allocated ? allocatedList : NULL
        );

    return dbv0_0_37_job_step_tres_local_var;
end:
    if (requested_local_nonprim) {
        dbv0_0_37_job_step_tres_requested_free(requested_local_nonprim);
        requested_local_nonprim = NULL;
    }
    if (consumed_local_nonprim) {
        dbv0_0_37_job_step_tres_requested_free(consumed_local_nonprim);
        consumed_local_nonprim = NULL;
    }
    if (allocatedList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, allocatedList) {
            dbv0_0_37_tres_list_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(allocatedList);
        allocatedList = NULL;
    }
    return NULL;

}
