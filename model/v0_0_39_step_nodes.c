#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_step_nodes.h"



v0_0_39_step_nodes_t *v0_0_39_step_nodes_create(
    list_t *list
    ) {
    v0_0_39_step_nodes_t *v0_0_39_step_nodes_local_var = malloc(sizeof(v0_0_39_step_nodes_t));
    if (!v0_0_39_step_nodes_local_var) {
        return NULL;
    }
    v0_0_39_step_nodes_local_var->list = list;

    return v0_0_39_step_nodes_local_var;
}


void v0_0_39_step_nodes_free(v0_0_39_step_nodes_t *v0_0_39_step_nodes) {
    if(NULL == v0_0_39_step_nodes){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_step_nodes->list) {
        list_ForEach(listEntry, v0_0_39_step_nodes->list) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_step_nodes->list);
        v0_0_39_step_nodes->list = NULL;
    }
    free(v0_0_39_step_nodes);
}

cJSON *v0_0_39_step_nodes_convertToJSON(v0_0_39_step_nodes_t *v0_0_39_step_nodes) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_step_nodes->list
    if(v0_0_39_step_nodes->list) {
    cJSON *list = cJSON_AddArrayToObject(item, "list");
    if(list == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *listListEntry;
    list_ForEach(listListEntry, v0_0_39_step_nodes->list) {
    if(cJSON_AddStringToObject(list, "", (char*)listListEntry->data) == NULL)
    {
        goto fail;
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

v0_0_39_step_nodes_t *v0_0_39_step_nodes_parseFromJSON(cJSON *v0_0_39_step_nodesJSON){

    v0_0_39_step_nodes_t *v0_0_39_step_nodes_local_var = NULL;

    // define the local list for v0_0_39_step_nodes->list
    list_t *listList = NULL;

    // v0_0_39_step_nodes->list
    cJSON *list = cJSON_GetObjectItemCaseSensitive(v0_0_39_step_nodesJSON, "list");
    if (list) { 
    cJSON *list_local = NULL;
    if(!cJSON_IsArray(list)) {
        goto end;//primitive container
    }
    listList = list_createList();

    cJSON_ArrayForEach(list_local, list)
    {
        if(!cJSON_IsString(list_local))
        {
            goto end;
        }
        list_addElement(listList , strdup(list_local->valuestring));
    }
    }


    v0_0_39_step_nodes_local_var = v0_0_39_step_nodes_create (
        list ? listList : NULL
        );

    return v0_0_39_step_nodes_local_var;
end:
    if (listList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, listList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(listList);
        listList = NULL;
    }
    return NULL;

}
