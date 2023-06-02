#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_meta.h"



v0_0_39_meta_t *v0_0_39_meta_create(
    v0_0_39_meta_plugin_t *plugin,
    v0_0_39_meta_slurm_t *slurm
    ) {
    v0_0_39_meta_t *v0_0_39_meta_local_var = malloc(sizeof(v0_0_39_meta_t));
    if (!v0_0_39_meta_local_var) {
        return NULL;
    }
    v0_0_39_meta_local_var->plugin = plugin;
    v0_0_39_meta_local_var->slurm = slurm;

    return v0_0_39_meta_local_var;
}


void v0_0_39_meta_free(v0_0_39_meta_t *v0_0_39_meta) {
    if(NULL == v0_0_39_meta){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_meta->plugin) {
        v0_0_39_meta_plugin_free(v0_0_39_meta->plugin);
        v0_0_39_meta->plugin = NULL;
    }
    if (v0_0_39_meta->slurm) {
        v0_0_39_meta_slurm_free(v0_0_39_meta->slurm);
        v0_0_39_meta->slurm = NULL;
    }
    free(v0_0_39_meta);
}

cJSON *v0_0_39_meta_convertToJSON(v0_0_39_meta_t *v0_0_39_meta) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_meta->plugin
    if(v0_0_39_meta->plugin) {
    cJSON *plugin_local_JSON = v0_0_39_meta_plugin_convertToJSON(v0_0_39_meta->plugin);
    if(plugin_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "plugin", plugin_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_meta->slurm
    if(v0_0_39_meta->slurm) {
    cJSON *slurm_local_JSON = v0_0_39_meta_slurm_convertToJSON(v0_0_39_meta->slurm);
    if(slurm_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "Slurm", slurm_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

v0_0_39_meta_t *v0_0_39_meta_parseFromJSON(cJSON *v0_0_39_metaJSON){

    v0_0_39_meta_t *v0_0_39_meta_local_var = NULL;

    // define the local variable for v0_0_39_meta->plugin
    v0_0_39_meta_plugin_t *plugin_local_nonprim = NULL;

    // define the local variable for v0_0_39_meta->slurm
    v0_0_39_meta_slurm_t *slurm_local_nonprim = NULL;

    // v0_0_39_meta->plugin
    cJSON *plugin = cJSON_GetObjectItemCaseSensitive(v0_0_39_metaJSON, "plugin");
    if (plugin) { 
    plugin_local_nonprim = v0_0_39_meta_plugin_parseFromJSON(plugin); //nonprimitive
    }

    // v0_0_39_meta->slurm
    cJSON *slurm = cJSON_GetObjectItemCaseSensitive(v0_0_39_metaJSON, "Slurm");
    if (slurm) { 
    slurm_local_nonprim = v0_0_39_meta_slurm_parseFromJSON(slurm); //nonprimitive
    }


    v0_0_39_meta_local_var = v0_0_39_meta_create (
        plugin ? plugin_local_nonprim : NULL,
        slurm ? slurm_local_nonprim : NULL
        );

    return v0_0_39_meta_local_var;
end:
    if (plugin_local_nonprim) {
        v0_0_39_meta_plugin_free(plugin_local_nonprim);
        plugin_local_nonprim = NULL;
    }
    if (slurm_local_nonprim) {
        v0_0_39_meta_slurm_free(slurm_local_nonprim);
        slurm_local_nonprim = NULL;
    }
    return NULL;

}
