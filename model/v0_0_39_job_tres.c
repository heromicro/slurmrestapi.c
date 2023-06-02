#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_job_tres.h"



v0_0_39_job_tres_t *v0_0_39_job_tres_create(
    list_t *requested
    ) {
    v0_0_39_job_tres_t *v0_0_39_job_tres_local_var = malloc(sizeof(v0_0_39_job_tres_t));
    if (!v0_0_39_job_tres_local_var) {
        return NULL;
    }
    v0_0_39_job_tres_local_var->requested = requested;

    return v0_0_39_job_tres_local_var;
}


void v0_0_39_job_tres_free(v0_0_39_job_tres_t *v0_0_39_job_tres) {
    if(NULL == v0_0_39_job_tres){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_job_tres->requested) {
        list_ForEach(listEntry, v0_0_39_job_tres->requested) {
            v0_0_39_tres_free(listEntry->data);
        }
        list_freeList(v0_0_39_job_tres->requested);
        v0_0_39_job_tres->requested = NULL;
    }
    free(v0_0_39_job_tres);
}

cJSON *v0_0_39_job_tres_convertToJSON(v0_0_39_job_tres_t *v0_0_39_job_tres) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_job_tres->requested
    if(v0_0_39_job_tres->requested) {
    cJSON *requested = cJSON_AddArrayToObject(item, "requested");
    if(requested == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *requestedListEntry;
    if (v0_0_39_job_tres->requested) {
    list_ForEach(requestedListEntry, v0_0_39_job_tres->requested) {
    cJSON *itemLocal = v0_0_39_tres_convertToJSON(requestedListEntry->data);
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

v0_0_39_job_tres_t *v0_0_39_job_tres_parseFromJSON(cJSON *v0_0_39_job_tresJSON){

    v0_0_39_job_tres_t *v0_0_39_job_tres_local_var = NULL;

    // define the local list for v0_0_39_job_tres->requested
    list_t *requestedList = NULL;

    // v0_0_39_job_tres->requested
    cJSON *requested = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_tresJSON, "requested");
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
        v0_0_39_tres_t *requestedItem = v0_0_39_tres_parseFromJSON(requested_local_nonprimitive);

        list_addElement(requestedList, requestedItem);
    }
    }


    v0_0_39_job_tres_local_var = v0_0_39_job_tres_create (
        requested ? requestedList : NULL
        );

    return v0_0_39_job_tres_local_var;
end:
    if (requestedList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, requestedList) {
            v0_0_39_tres_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(requestedList);
        requestedList = NULL;
    }
    return NULL;

}
