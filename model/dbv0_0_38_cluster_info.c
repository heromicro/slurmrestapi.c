#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_cluster_info.h"



dbv0_0_38_cluster_info_t *dbv0_0_38_cluster_info_create(
    dbv0_0_38_cluster_info_controller_t *controller,
    list_t *flags,
    char *name,
    char *nodes,
    char *select_plugin,
    dbv0_0_38_cluster_info_associations_t *associations,
    int rpc_version,
    list_t *tres
    ) {
    dbv0_0_38_cluster_info_t *dbv0_0_38_cluster_info_local_var = malloc(sizeof(dbv0_0_38_cluster_info_t));
    if (!dbv0_0_38_cluster_info_local_var) {
        return NULL;
    }
    dbv0_0_38_cluster_info_local_var->controller = controller;
    dbv0_0_38_cluster_info_local_var->flags = flags;
    dbv0_0_38_cluster_info_local_var->name = name;
    dbv0_0_38_cluster_info_local_var->nodes = nodes;
    dbv0_0_38_cluster_info_local_var->select_plugin = select_plugin;
    dbv0_0_38_cluster_info_local_var->associations = associations;
    dbv0_0_38_cluster_info_local_var->rpc_version = rpc_version;
    dbv0_0_38_cluster_info_local_var->tres = tres;

    return dbv0_0_38_cluster_info_local_var;
}


void dbv0_0_38_cluster_info_free(dbv0_0_38_cluster_info_t *dbv0_0_38_cluster_info) {
    if(NULL == dbv0_0_38_cluster_info){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_38_cluster_info->controller) {
        dbv0_0_38_cluster_info_controller_free(dbv0_0_38_cluster_info->controller);
        dbv0_0_38_cluster_info->controller = NULL;
    }
    if (dbv0_0_38_cluster_info->flags) {
        list_ForEach(listEntry, dbv0_0_38_cluster_info->flags) {
            free(listEntry->data);
        }
        list_freeList(dbv0_0_38_cluster_info->flags);
        dbv0_0_38_cluster_info->flags = NULL;
    }
    if (dbv0_0_38_cluster_info->name) {
        free(dbv0_0_38_cluster_info->name);
        dbv0_0_38_cluster_info->name = NULL;
    }
    if (dbv0_0_38_cluster_info->nodes) {
        free(dbv0_0_38_cluster_info->nodes);
        dbv0_0_38_cluster_info->nodes = NULL;
    }
    if (dbv0_0_38_cluster_info->select_plugin) {
        free(dbv0_0_38_cluster_info->select_plugin);
        dbv0_0_38_cluster_info->select_plugin = NULL;
    }
    if (dbv0_0_38_cluster_info->associations) {
        dbv0_0_38_cluster_info_associations_free(dbv0_0_38_cluster_info->associations);
        dbv0_0_38_cluster_info->associations = NULL;
    }
    if (dbv0_0_38_cluster_info->tres) {
        list_ForEach(listEntry, dbv0_0_38_cluster_info->tres) {
            dbv0_0_38_response_tres_free(listEntry->data);
        }
        list_freeList(dbv0_0_38_cluster_info->tres);
        dbv0_0_38_cluster_info->tres = NULL;
    }
    free(dbv0_0_38_cluster_info);
}

cJSON *dbv0_0_38_cluster_info_convertToJSON(dbv0_0_38_cluster_info_t *dbv0_0_38_cluster_info) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_cluster_info->controller
    if(dbv0_0_38_cluster_info->controller) {
    cJSON *controller_local_JSON = dbv0_0_38_cluster_info_controller_convertToJSON(dbv0_0_38_cluster_info->controller);
    if(controller_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "controller", controller_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_38_cluster_info->flags
    if(dbv0_0_38_cluster_info->flags) {
    cJSON *flags = cJSON_AddArrayToObject(item, "flags");
    if(flags == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *flagsListEntry;
    list_ForEach(flagsListEntry, dbv0_0_38_cluster_info->flags) {
    if(cJSON_AddStringToObject(flags, "", (char*)flagsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // dbv0_0_38_cluster_info->name
    if(dbv0_0_38_cluster_info->name) {
    if(cJSON_AddStringToObject(item, "name", dbv0_0_38_cluster_info->name) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_38_cluster_info->nodes
    if(dbv0_0_38_cluster_info->nodes) {
    if(cJSON_AddStringToObject(item, "nodes", dbv0_0_38_cluster_info->nodes) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_38_cluster_info->select_plugin
    if(dbv0_0_38_cluster_info->select_plugin) {
    if(cJSON_AddStringToObject(item, "select_plugin", dbv0_0_38_cluster_info->select_plugin) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_38_cluster_info->associations
    if(dbv0_0_38_cluster_info->associations) {
    cJSON *associations_local_JSON = dbv0_0_38_cluster_info_associations_convertToJSON(dbv0_0_38_cluster_info->associations);
    if(associations_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "associations", associations_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_38_cluster_info->rpc_version
    if(dbv0_0_38_cluster_info->rpc_version) {
    if(cJSON_AddNumberToObject(item, "rpc_version", dbv0_0_38_cluster_info->rpc_version) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_38_cluster_info->tres
    if(dbv0_0_38_cluster_info->tres) {
    cJSON *tres = cJSON_AddArrayToObject(item, "tres");
    if(tres == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *tresListEntry;
    if (dbv0_0_38_cluster_info->tres) {
    list_ForEach(tresListEntry, dbv0_0_38_cluster_info->tres) {
    cJSON *itemLocal = dbv0_0_38_response_tres_convertToJSON(tresListEntry->data);
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

dbv0_0_38_cluster_info_t *dbv0_0_38_cluster_info_parseFromJSON(cJSON *dbv0_0_38_cluster_infoJSON){

    dbv0_0_38_cluster_info_t *dbv0_0_38_cluster_info_local_var = NULL;

    // define the local variable for dbv0_0_38_cluster_info->controller
    dbv0_0_38_cluster_info_controller_t *controller_local_nonprim = NULL;

    // define the local list for dbv0_0_38_cluster_info->flags
    list_t *flagsList = NULL;

    // define the local variable for dbv0_0_38_cluster_info->associations
    dbv0_0_38_cluster_info_associations_t *associations_local_nonprim = NULL;

    // define the local list for dbv0_0_38_cluster_info->tres
    list_t *tresList = NULL;

    // dbv0_0_38_cluster_info->controller
    cJSON *controller = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_cluster_infoJSON, "controller");
    if (controller) { 
    controller_local_nonprim = dbv0_0_38_cluster_info_controller_parseFromJSON(controller); //nonprimitive
    }

    // dbv0_0_38_cluster_info->flags
    cJSON *flags = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_cluster_infoJSON, "flags");
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

    // dbv0_0_38_cluster_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_cluster_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // dbv0_0_38_cluster_info->nodes
    cJSON *nodes = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_cluster_infoJSON, "nodes");
    if (nodes) { 
    if(!cJSON_IsString(nodes) && !cJSON_IsNull(nodes))
    {
    goto end; //String
    }
    }

    // dbv0_0_38_cluster_info->select_plugin
    cJSON *select_plugin = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_cluster_infoJSON, "select_plugin");
    if (select_plugin) { 
    if(!cJSON_IsString(select_plugin) && !cJSON_IsNull(select_plugin))
    {
    goto end; //String
    }
    }

    // dbv0_0_38_cluster_info->associations
    cJSON *associations = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_cluster_infoJSON, "associations");
    if (associations) { 
    associations_local_nonprim = dbv0_0_38_cluster_info_associations_parseFromJSON(associations); //nonprimitive
    }

    // dbv0_0_38_cluster_info->rpc_version
    cJSON *rpc_version = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_cluster_infoJSON, "rpc_version");
    if (rpc_version) { 
    if(!cJSON_IsNumber(rpc_version))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_38_cluster_info->tres
    cJSON *tres = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_cluster_infoJSON, "tres");
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
        dbv0_0_38_response_tres_t *tresItem = dbv0_0_38_response_tres_parseFromJSON(tres_local_nonprimitive);

        list_addElement(tresList, tresItem);
    }
    }


    dbv0_0_38_cluster_info_local_var = dbv0_0_38_cluster_info_create (
        controller ? controller_local_nonprim : NULL,
        flags ? flagsList : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        nodes && !cJSON_IsNull(nodes) ? strdup(nodes->valuestring) : NULL,
        select_plugin && !cJSON_IsNull(select_plugin) ? strdup(select_plugin->valuestring) : NULL,
        associations ? associations_local_nonprim : NULL,
        rpc_version ? rpc_version->valuedouble : 0,
        tres ? tresList : NULL
        );

    return dbv0_0_38_cluster_info_local_var;
end:
    if (controller_local_nonprim) {
        dbv0_0_38_cluster_info_controller_free(controller_local_nonprim);
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
        dbv0_0_38_cluster_info_associations_free(associations_local_nonprim);
        associations_local_nonprim = NULL;
    }
    if (tresList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, tresList) {
            dbv0_0_38_response_tres_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(tresList);
        tresList = NULL;
    }
    return NULL;

}
