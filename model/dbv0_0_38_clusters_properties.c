#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_clusters_properties.h"



dbv0_0_38_clusters_properties_t *dbv0_0_38_clusters_properties_create(
    dbv0_0_38_cluster_info_t *clusters
    ) {
    dbv0_0_38_clusters_properties_t *dbv0_0_38_clusters_properties_local_var = malloc(sizeof(dbv0_0_38_clusters_properties_t));
    if (!dbv0_0_38_clusters_properties_local_var) {
        return NULL;
    }
    dbv0_0_38_clusters_properties_local_var->clusters = clusters;

    return dbv0_0_38_clusters_properties_local_var;
}


void dbv0_0_38_clusters_properties_free(dbv0_0_38_clusters_properties_t *dbv0_0_38_clusters_properties) {
    if(NULL == dbv0_0_38_clusters_properties){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_38_clusters_properties->clusters) {
        dbv0_0_38_cluster_info_free(dbv0_0_38_clusters_properties->clusters);
        dbv0_0_38_clusters_properties->clusters = NULL;
    }
    free(dbv0_0_38_clusters_properties);
}

cJSON *dbv0_0_38_clusters_properties_convertToJSON(dbv0_0_38_clusters_properties_t *dbv0_0_38_clusters_properties) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_clusters_properties->clusters
    if(dbv0_0_38_clusters_properties->clusters) {
    cJSON *clusters_local_JSON = dbv0_0_38_cluster_info_convertToJSON(dbv0_0_38_clusters_properties->clusters);
    if(clusters_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "clusters", clusters_local_JSON);
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

dbv0_0_38_clusters_properties_t *dbv0_0_38_clusters_properties_parseFromJSON(cJSON *dbv0_0_38_clusters_propertiesJSON){

    dbv0_0_38_clusters_properties_t *dbv0_0_38_clusters_properties_local_var = NULL;

    // define the local variable for dbv0_0_38_clusters_properties->clusters
    dbv0_0_38_cluster_info_t *clusters_local_nonprim = NULL;

    // dbv0_0_38_clusters_properties->clusters
    cJSON *clusters = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_clusters_propertiesJSON, "clusters");
    if (clusters) { 
    clusters_local_nonprim = dbv0_0_38_cluster_info_parseFromJSON(clusters); //nonprimitive
    }


    dbv0_0_38_clusters_properties_local_var = dbv0_0_38_clusters_properties_create (
        clusters ? clusters_local_nonprim : NULL
        );

    return dbv0_0_38_clusters_properties_local_var;
end:
    if (clusters_local_nonprim) {
        dbv0_0_38_cluster_info_free(clusters_local_nonprim);
        clusters_local_nonprim = NULL;
    }
    return NULL;

}
