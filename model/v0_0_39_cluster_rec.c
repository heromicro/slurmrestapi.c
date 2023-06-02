#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_cluster_rec.h"


char* flagsv0_0_39_cluster_rec_ToString(slurm_rest_api_v0_0_39_cluster_rec_FLAGS_e flags) {
	char *flagsArray[] =  { "NULL", "REGISTERING", "MULTIPLE_SLURMD", "FRONT_END", "CRAY_NATIVE", "FEDERATION", "EXTERNAL" };
	return flagsArray[flags - 1];
}

slurm_rest_api_v0_0_39_cluster_rec_FLAGS_e flagsv0_0_39_cluster_rec_FromString(char* flags) {
    int stringToReturn = 0;
    char *flagsArray[] =  { "NULL", "REGISTERING", "MULTIPLE_SLURMD", "FRONT_END", "CRAY_NATIVE", "FEDERATION", "EXTERNAL" };
    size_t sizeofArray = sizeof(flagsArray) / sizeof(flagsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(flags, flagsArray[stringToReturn]) == 0) {
            return stringToReturn + 1;
        }
        stringToReturn++;
    }
    return 0;
}

v0_0_39_cluster_rec_t *v0_0_39_cluster_rec_create(
    v0_0_39_cluster_rec_controller_t *controller,
    list_t *flags,
    char *name,
    char *nodes,
    char *select_plugin,
    v0_0_39_cluster_rec_associations_t *associations,
    int rpc_version,
    list_t *tres
    ) {
    v0_0_39_cluster_rec_t *v0_0_39_cluster_rec_local_var = malloc(sizeof(v0_0_39_cluster_rec_t));
    if (!v0_0_39_cluster_rec_local_var) {
        return NULL;
    }
    v0_0_39_cluster_rec_local_var->controller = controller;
    v0_0_39_cluster_rec_local_var->flags = flags;
    v0_0_39_cluster_rec_local_var->name = name;
    v0_0_39_cluster_rec_local_var->nodes = nodes;
    v0_0_39_cluster_rec_local_var->select_plugin = select_plugin;
    v0_0_39_cluster_rec_local_var->associations = associations;
    v0_0_39_cluster_rec_local_var->rpc_version = rpc_version;
    v0_0_39_cluster_rec_local_var->tres = tres;

    return v0_0_39_cluster_rec_local_var;
}


void v0_0_39_cluster_rec_free(v0_0_39_cluster_rec_t *v0_0_39_cluster_rec) {
    if(NULL == v0_0_39_cluster_rec){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_cluster_rec->controller) {
        v0_0_39_cluster_rec_controller_free(v0_0_39_cluster_rec->controller);
        v0_0_39_cluster_rec->controller = NULL;
    }
    if (v0_0_39_cluster_rec->flags) {
        list_ForEach(listEntry, v0_0_39_cluster_rec->flags) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_cluster_rec->flags);
        v0_0_39_cluster_rec->flags = NULL;
    }
    if (v0_0_39_cluster_rec->name) {
        free(v0_0_39_cluster_rec->name);
        v0_0_39_cluster_rec->name = NULL;
    }
    if (v0_0_39_cluster_rec->nodes) {
        free(v0_0_39_cluster_rec->nodes);
        v0_0_39_cluster_rec->nodes = NULL;
    }
    if (v0_0_39_cluster_rec->select_plugin) {
        free(v0_0_39_cluster_rec->select_plugin);
        v0_0_39_cluster_rec->select_plugin = NULL;
    }
    if (v0_0_39_cluster_rec->associations) {
        v0_0_39_cluster_rec_associations_free(v0_0_39_cluster_rec->associations);
        v0_0_39_cluster_rec->associations = NULL;
    }
    if (v0_0_39_cluster_rec->tres) {
        list_ForEach(listEntry, v0_0_39_cluster_rec->tres) {
            v0_0_39_tres_free(listEntry->data);
        }
        list_freeList(v0_0_39_cluster_rec->tres);
        v0_0_39_cluster_rec->tres = NULL;
    }
    free(v0_0_39_cluster_rec);
}

cJSON *v0_0_39_cluster_rec_convertToJSON(v0_0_39_cluster_rec_t *v0_0_39_cluster_rec) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_cluster_rec->controller
    if(v0_0_39_cluster_rec->controller) {
    cJSON *controller_local_JSON = v0_0_39_cluster_rec_controller_convertToJSON(v0_0_39_cluster_rec->controller);
    if(controller_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "controller", controller_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_cluster_rec->flags
    if(v0_0_39_cluster_rec->flags != slurm_rest_api_v0_0_39_cluster_rec_FLAGS_NULL) {
    cJSON *flags = cJSON_AddArrayToObject(item, "flags");
    if(flags == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *flagsListEntry;
    list_ForEach(flagsListEntry, v0_0_39_cluster_rec->flags) {
    if(cJSON_AddStringToObject(flags, "", (char*)flagsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_cluster_rec->name
    if(v0_0_39_cluster_rec->name) {
    if(cJSON_AddStringToObject(item, "name", v0_0_39_cluster_rec->name) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_cluster_rec->nodes
    if(v0_0_39_cluster_rec->nodes) {
    if(cJSON_AddStringToObject(item, "nodes", v0_0_39_cluster_rec->nodes) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_cluster_rec->select_plugin
    if(v0_0_39_cluster_rec->select_plugin) {
    if(cJSON_AddStringToObject(item, "select_plugin", v0_0_39_cluster_rec->select_plugin) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_cluster_rec->associations
    if(v0_0_39_cluster_rec->associations) {
    cJSON *associations_local_JSON = v0_0_39_cluster_rec_associations_convertToJSON(v0_0_39_cluster_rec->associations);
    if(associations_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "associations", associations_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_cluster_rec->rpc_version
    if(v0_0_39_cluster_rec->rpc_version) {
    if(cJSON_AddNumberToObject(item, "rpc_version", v0_0_39_cluster_rec->rpc_version) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_cluster_rec->tres
    if(v0_0_39_cluster_rec->tres) {
    cJSON *tres = cJSON_AddArrayToObject(item, "tres");
    if(tres == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *tresListEntry;
    if (v0_0_39_cluster_rec->tres) {
    list_ForEach(tresListEntry, v0_0_39_cluster_rec->tres) {
    cJSON *itemLocal = v0_0_39_tres_convertToJSON(tresListEntry->data);
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

v0_0_39_cluster_rec_t *v0_0_39_cluster_rec_parseFromJSON(cJSON *v0_0_39_cluster_recJSON){

    v0_0_39_cluster_rec_t *v0_0_39_cluster_rec_local_var = NULL;

    // define the local variable for v0_0_39_cluster_rec->controller
    v0_0_39_cluster_rec_controller_t *controller_local_nonprim = NULL;

    // define the local list for v0_0_39_cluster_rec->flags
    list_t *flagsList = NULL;

    // define the local variable for v0_0_39_cluster_rec->associations
    v0_0_39_cluster_rec_associations_t *associations_local_nonprim = NULL;

    // define the local list for v0_0_39_cluster_rec->tres
    list_t *tresList = NULL;

    // v0_0_39_cluster_rec->controller
    cJSON *controller = cJSON_GetObjectItemCaseSensitive(v0_0_39_cluster_recJSON, "controller");
    if (controller) { 
    controller_local_nonprim = v0_0_39_cluster_rec_controller_parseFromJSON(controller); //nonprimitive
    }

    // v0_0_39_cluster_rec->flags
    cJSON *flags = cJSON_GetObjectItemCaseSensitive(v0_0_39_cluster_recJSON, "flags");
    if (flags) { 
    cJSON *flags_local = NULL;
    if(!cJSON_IsArray(flags)) {
        goto end;//primitive container
    }
    flagsList = list_createList();

    cJSON_ArrayForEach(flags_local, flags)
    {
        if(!cJSON_IsString(flags_local))
        {
            goto end;
        }
        list_addElement(flagsList , strdup(flags_local->valuestring));
    }
    }

    // v0_0_39_cluster_rec->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(v0_0_39_cluster_recJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // v0_0_39_cluster_rec->nodes
    cJSON *nodes = cJSON_GetObjectItemCaseSensitive(v0_0_39_cluster_recJSON, "nodes");
    if (nodes) { 
    if(!cJSON_IsString(nodes) && !cJSON_IsNull(nodes))
    {
    goto end; //String
    }
    }

    // v0_0_39_cluster_rec->select_plugin
    cJSON *select_plugin = cJSON_GetObjectItemCaseSensitive(v0_0_39_cluster_recJSON, "select_plugin");
    if (select_plugin) { 
    if(!cJSON_IsString(select_plugin) && !cJSON_IsNull(select_plugin))
    {
    goto end; //String
    }
    }

    // v0_0_39_cluster_rec->associations
    cJSON *associations = cJSON_GetObjectItemCaseSensitive(v0_0_39_cluster_recJSON, "associations");
    if (associations) { 
    associations_local_nonprim = v0_0_39_cluster_rec_associations_parseFromJSON(associations); //nonprimitive
    }

    // v0_0_39_cluster_rec->rpc_version
    cJSON *rpc_version = cJSON_GetObjectItemCaseSensitive(v0_0_39_cluster_recJSON, "rpc_version");
    if (rpc_version) { 
    if(!cJSON_IsNumber(rpc_version))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_cluster_rec->tres
    cJSON *tres = cJSON_GetObjectItemCaseSensitive(v0_0_39_cluster_recJSON, "tres");
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
        v0_0_39_tres_t *tresItem = v0_0_39_tres_parseFromJSON(tres_local_nonprimitive);

        list_addElement(tresList, tresItem);
    }
    }


    v0_0_39_cluster_rec_local_var = v0_0_39_cluster_rec_create (
        controller ? controller_local_nonprim : NULL,
        flags ? flagsList : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        nodes && !cJSON_IsNull(nodes) ? strdup(nodes->valuestring) : NULL,
        select_plugin && !cJSON_IsNull(select_plugin) ? strdup(select_plugin->valuestring) : NULL,
        associations ? associations_local_nonprim : NULL,
        rpc_version ? rpc_version->valuedouble : 0,
        tres ? tresList : NULL
        );

    return v0_0_39_cluster_rec_local_var;
end:
    if (controller_local_nonprim) {
        v0_0_39_cluster_rec_controller_free(controller_local_nonprim);
        controller_local_nonprim = NULL;
    }
    if (flagsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, flagsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(flagsList);
        flagsList = NULL;
    }
    if (associations_local_nonprim) {
        v0_0_39_cluster_rec_associations_free(associations_local_nonprim);
        associations_local_nonprim = NULL;
    }
    if (tresList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, tresList) {
            v0_0_39_tres_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(tresList);
        tresList = NULL;
    }
    return NULL;

}
