#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_39_meta.h"



dbv0_0_39_meta_t *dbv0_0_39_meta_create(
    v0_0_39_meta_plugin_t *plugin,
    v0_0_39_meta_slurm_t *slurm
    ) {
    dbv0_0_39_meta_t *dbv0_0_39_meta_local_var = malloc(sizeof(dbv0_0_39_meta_t));
    if (!dbv0_0_39_meta_local_var) {
        return NULL;
    }
    dbv0_0_39_meta_local_var->plugin = plugin;
    dbv0_0_39_meta_local_var->slurm = slurm;

    return dbv0_0_39_meta_local_var;
}


void dbv0_0_39_meta_free(dbv0_0_39_meta_t *dbv0_0_39_meta) {
    if(NULL == dbv0_0_39_meta){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_39_meta->plugin) {
        v0_0_39_meta_plugin_free(dbv0_0_39_meta->plugin);
        dbv0_0_39_meta->plugin = NULL;
    }
    if (dbv0_0_39_meta->slurm) {
        v0_0_39_meta_slurm_free(dbv0_0_39_meta->slurm);
        dbv0_0_39_meta->slurm = NULL;
    }
    free(dbv0_0_39_meta);
}

cJSON *dbv0_0_39_meta_convertToJSON(dbv0_0_39_meta_t *dbv0_0_39_meta) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_39_meta->plugin
    if(dbv0_0_39_meta->plugin) {
    cJSON *plugin_local_JSON = v0_0_39_meta_plugin_convertToJSON(dbv0_0_39_meta->plugin);
    if(plugin_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "plugin", plugin_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_39_meta->slurm
    if(dbv0_0_39_meta->slurm) {
    cJSON *slurm_local_JSON = v0_0_39_meta_slurm_convertToJSON(dbv0_0_39_meta->slurm);
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

dbv0_0_39_meta_t *dbv0_0_39_meta_parseFromJSON(cJSON *dbv0_0_39_metaJSON){

    dbv0_0_39_meta_t *dbv0_0_39_meta_local_var = NULL;

    // define the local variable for dbv0_0_39_meta->plugin
    v0_0_39_meta_plugin_t *plugin_local_nonprim = NULL;

    // define the local variable for dbv0_0_39_meta->slurm
    v0_0_39_meta_slurm_t *slurm_local_nonprim = NULL;

    // dbv0_0_39_meta->plugin
    cJSON *plugin = cJSON_GetObjectItemCaseSensitive(dbv0_0_39_metaJSON, "plugin");
    if (plugin) { 
    plugin_local_nonprim = v0_0_39_meta_plugin_parseFromJSON(plugin); //nonprimitive
    }

    // dbv0_0_39_meta->slurm
    cJSON *slurm = cJSON_GetObjectItemCaseSensitive(dbv0_0_39_metaJSON, "Slurm");
    if (slurm) { 
    slurm_local_nonprim = v0_0_39_meta_slurm_parseFromJSON(slurm); //nonprimitive
    }


    dbv0_0_39_meta_local_var = dbv0_0_39_meta_create (
        plugin ? plugin_local_nonprim : NULL,
        slurm ? slurm_local_nonprim : NULL
        );

    return dbv0_0_39_meta_local_var;
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
