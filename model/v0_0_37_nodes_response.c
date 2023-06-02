#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_37_nodes_response.h"



v0_0_37_nodes_response_t *v0_0_37_nodes_response_create(
    list_t *errors,
    list_t *nodes
    ) {
    v0_0_37_nodes_response_t *v0_0_37_nodes_response_local_var = malloc(sizeof(v0_0_37_nodes_response_t));
    if (!v0_0_37_nodes_response_local_var) {
        return NULL;
    }
    v0_0_37_nodes_response_local_var->errors = errors;
    v0_0_37_nodes_response_local_var->nodes = nodes;

    return v0_0_37_nodes_response_local_var;
}


void v0_0_37_nodes_response_free(v0_0_37_nodes_response_t *v0_0_37_nodes_response) {
    if(NULL == v0_0_37_nodes_response){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_37_nodes_response->errors) {
        list_ForEach(listEntry, v0_0_37_nodes_response->errors) {
            v0_0_37_error_free(listEntry->data);
        }
        list_freeList(v0_0_37_nodes_response->errors);
        v0_0_37_nodes_response->errors = NULL;
    }
    if (v0_0_37_nodes_response->nodes) {
        list_ForEach(listEntry, v0_0_37_nodes_response->nodes) {
            v0_0_37_node_free(listEntry->data);
        }
        list_freeList(v0_0_37_nodes_response->nodes);
        v0_0_37_nodes_response->nodes = NULL;
    }
    free(v0_0_37_nodes_response);
}

cJSON *v0_0_37_nodes_response_convertToJSON(v0_0_37_nodes_response_t *v0_0_37_nodes_response) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_37_nodes_response->errors
    if(v0_0_37_nodes_response->errors) {
    cJSON *errors = cJSON_AddArrayToObject(item, "errors");
    if(errors == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *errorsListEntry;
    if (v0_0_37_nodes_response->errors) {
    list_ForEach(errorsListEntry, v0_0_37_nodes_response->errors) {
    cJSON *itemLocal = v0_0_37_error_convertToJSON(errorsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(errors, itemLocal);
    }
    }
    }


    // v0_0_37_nodes_response->nodes
    if(v0_0_37_nodes_response->nodes) {
    cJSON *nodes = cJSON_AddArrayToObject(item, "nodes");
    if(nodes == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *nodesListEntry;
    if (v0_0_37_nodes_response->nodes) {
    list_ForEach(nodesListEntry, v0_0_37_nodes_response->nodes) {
    cJSON *itemLocal = v0_0_37_node_convertToJSON(nodesListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(nodes, itemLocal);
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

v0_0_37_nodes_response_t *v0_0_37_nodes_response_parseFromJSON(cJSON *v0_0_37_nodes_responseJSON){

    v0_0_37_nodes_response_t *v0_0_37_nodes_response_local_var = NULL;

    // define the local list for v0_0_37_nodes_response->errors
    list_t *errorsList = NULL;

    // define the local list for v0_0_37_nodes_response->nodes
    list_t *nodesList = NULL;

    // v0_0_37_nodes_response->errors
    cJSON *errors = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodes_responseJSON, "errors");
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

    // v0_0_37_nodes_response->nodes
    cJSON *nodes = cJSON_GetObjectItemCaseSensitive(v0_0_37_nodes_responseJSON, "nodes");
    if (nodes) { 
    cJSON *nodes_local_nonprimitive = NULL;
    if(!cJSON_IsArray(nodes)){
        goto end; //nonprimitive container
    }

    nodesList = list_createList();

    cJSON_ArrayForEach(nodes_local_nonprimitive,nodes )
    {
        if(!cJSON_IsObject(nodes_local_nonprimitive)){
            goto end;
        }
        v0_0_37_node_t *nodesItem = v0_0_37_node_parseFromJSON(nodes_local_nonprimitive);

        list_addElement(nodesList, nodesItem);
    }
    }


    v0_0_37_nodes_response_local_var = v0_0_37_nodes_response_create (
        errors ? errorsList : NULL,
        nodes ? nodesList : NULL
        );

    return v0_0_37_nodes_response_local_var;
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
    if (nodesList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, nodesList) {
            v0_0_37_node_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(nodesList);
        nodesList = NULL;
    }
    return NULL;

}
