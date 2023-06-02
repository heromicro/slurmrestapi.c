#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_step_tres.h"



v0_0_39_step_tres_t *v0_0_39_step_tres_create(
    list_t *allocated
    ) {
    v0_0_39_step_tres_t *v0_0_39_step_tres_local_var = malloc(sizeof(v0_0_39_step_tres_t));
    if (!v0_0_39_step_tres_local_var) {
        return NULL;
    }
    v0_0_39_step_tres_local_var->allocated = allocated;

    return v0_0_39_step_tres_local_var;
}


void v0_0_39_step_tres_free(v0_0_39_step_tres_t *v0_0_39_step_tres) {
    if(NULL == v0_0_39_step_tres){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_step_tres->allocated) {
        list_ForEach(listEntry, v0_0_39_step_tres->allocated) {
            v0_0_39_tres_free(listEntry->data);
        }
        list_freeList(v0_0_39_step_tres->allocated);
        v0_0_39_step_tres->allocated = NULL;
    }
    free(v0_0_39_step_tres);
}

cJSON *v0_0_39_step_tres_convertToJSON(v0_0_39_step_tres_t *v0_0_39_step_tres) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_step_tres->allocated
    if(v0_0_39_step_tres->allocated) {
    cJSON *allocated = cJSON_AddArrayToObject(item, "allocated");
    if(allocated == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *allocatedListEntry;
    if (v0_0_39_step_tres->allocated) {
    list_ForEach(allocatedListEntry, v0_0_39_step_tres->allocated) {
    cJSON *itemLocal = v0_0_39_tres_convertToJSON(allocatedListEntry->data);
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

v0_0_39_step_tres_t *v0_0_39_step_tres_parseFromJSON(cJSON *v0_0_39_step_tresJSON){

    v0_0_39_step_tres_t *v0_0_39_step_tres_local_var = NULL;

    // define the local list for v0_0_39_step_tres->allocated
    list_t *allocatedList = NULL;

    // v0_0_39_step_tres->allocated
    cJSON *allocated = cJSON_GetObjectItemCaseSensitive(v0_0_39_step_tresJSON, "allocated");
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
        v0_0_39_tres_t *allocatedItem = v0_0_39_tres_parseFromJSON(allocated_local_nonprimitive);

        list_addElement(allocatedList, allocatedItem);
    }
    }


    v0_0_39_step_tres_local_var = v0_0_39_step_tres_create (
        allocated ? allocatedList : NULL
        );

    return v0_0_39_step_tres_local_var;
end:
    if (allocatedList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, allocatedList) {
            v0_0_39_tres_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(allocatedList);
        allocatedList = NULL;
    }
    return NULL;

}
