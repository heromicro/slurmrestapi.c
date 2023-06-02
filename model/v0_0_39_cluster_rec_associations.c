#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_cluster_rec_associations.h"



v0_0_39_cluster_rec_associations_t *v0_0_39_cluster_rec_associations_create(
    v0_0_39_assoc_short_t *root
    ) {
    v0_0_39_cluster_rec_associations_t *v0_0_39_cluster_rec_associations_local_var = malloc(sizeof(v0_0_39_cluster_rec_associations_t));
    if (!v0_0_39_cluster_rec_associations_local_var) {
        return NULL;
    }
    v0_0_39_cluster_rec_associations_local_var->root = root;

    return v0_0_39_cluster_rec_associations_local_var;
}


void v0_0_39_cluster_rec_associations_free(v0_0_39_cluster_rec_associations_t *v0_0_39_cluster_rec_associations) {
    if(NULL == v0_0_39_cluster_rec_associations){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_cluster_rec_associations->root) {
        v0_0_39_assoc_short_free(v0_0_39_cluster_rec_associations->root);
        v0_0_39_cluster_rec_associations->root = NULL;
    }
    free(v0_0_39_cluster_rec_associations);
}

cJSON *v0_0_39_cluster_rec_associations_convertToJSON(v0_0_39_cluster_rec_associations_t *v0_0_39_cluster_rec_associations) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_cluster_rec_associations->root
    if(v0_0_39_cluster_rec_associations->root) {
    cJSON *root_local_JSON = v0_0_39_assoc_short_convertToJSON(v0_0_39_cluster_rec_associations->root);
    if(root_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "root", root_local_JSON);
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

v0_0_39_cluster_rec_associations_t *v0_0_39_cluster_rec_associations_parseFromJSON(cJSON *v0_0_39_cluster_rec_associationsJSON){

    v0_0_39_cluster_rec_associations_t *v0_0_39_cluster_rec_associations_local_var = NULL;

    // define the local variable for v0_0_39_cluster_rec_associations->root
    v0_0_39_assoc_short_t *root_local_nonprim = NULL;

    // v0_0_39_cluster_rec_associations->root
    cJSON *root = cJSON_GetObjectItemCaseSensitive(v0_0_39_cluster_rec_associationsJSON, "root");
    if (root) { 
    root_local_nonprim = v0_0_39_assoc_short_parseFromJSON(root); //nonprimitive
    }


    v0_0_39_cluster_rec_associations_local_var = v0_0_39_cluster_rec_associations_create (
        root ? root_local_nonprim : NULL
        );

    return v0_0_39_cluster_rec_associations_local_var;
end:
    if (root_local_nonprim) {
        v0_0_39_assoc_short_free(root_local_nonprim);
        root_local_nonprim = NULL;
    }
    return NULL;

}
