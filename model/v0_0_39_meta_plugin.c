#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_meta_plugin.h"



v0_0_39_meta_plugin_t *v0_0_39_meta_plugin_create(
    char *type,
    char *name
    ) {
    v0_0_39_meta_plugin_t *v0_0_39_meta_plugin_local_var = malloc(sizeof(v0_0_39_meta_plugin_t));
    if (!v0_0_39_meta_plugin_local_var) {
        return NULL;
    }
    v0_0_39_meta_plugin_local_var->type = type;
    v0_0_39_meta_plugin_local_var->name = name;

    return v0_0_39_meta_plugin_local_var;
}


void v0_0_39_meta_plugin_free(v0_0_39_meta_plugin_t *v0_0_39_meta_plugin) {
    if(NULL == v0_0_39_meta_plugin){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_meta_plugin->type) {
        free(v0_0_39_meta_plugin->type);
        v0_0_39_meta_plugin->type = NULL;
    }
    if (v0_0_39_meta_plugin->name) {
        free(v0_0_39_meta_plugin->name);
        v0_0_39_meta_plugin->name = NULL;
    }
    free(v0_0_39_meta_plugin);
}

cJSON *v0_0_39_meta_plugin_convertToJSON(v0_0_39_meta_plugin_t *v0_0_39_meta_plugin) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_meta_plugin->type
    if(v0_0_39_meta_plugin->type) {
    if(cJSON_AddStringToObject(item, "type", v0_0_39_meta_plugin->type) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_meta_plugin->name
    if(v0_0_39_meta_plugin->name) {
    if(cJSON_AddStringToObject(item, "name", v0_0_39_meta_plugin->name) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

v0_0_39_meta_plugin_t *v0_0_39_meta_plugin_parseFromJSON(cJSON *v0_0_39_meta_pluginJSON){

    v0_0_39_meta_plugin_t *v0_0_39_meta_plugin_local_var = NULL;

    // v0_0_39_meta_plugin->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(v0_0_39_meta_pluginJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // v0_0_39_meta_plugin->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(v0_0_39_meta_pluginJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }


    v0_0_39_meta_plugin_local_var = v0_0_39_meta_plugin_create (
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL
        );

    return v0_0_39_meta_plugin_local_var;
end:
    return NULL;

}
