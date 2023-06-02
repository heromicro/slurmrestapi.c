#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_user_associations.h"



dbv0_0_37_user_associations_t *dbv0_0_37_user_associations_create(
    dbv0_0_37_association_short_info_t *root
    ) {
    dbv0_0_37_user_associations_t *dbv0_0_37_user_associations_local_var = malloc(sizeof(dbv0_0_37_user_associations_t));
    if (!dbv0_0_37_user_associations_local_var) {
        return NULL;
    }
    dbv0_0_37_user_associations_local_var->root = root;

    return dbv0_0_37_user_associations_local_var;
}


void dbv0_0_37_user_associations_free(dbv0_0_37_user_associations_t *dbv0_0_37_user_associations) {
    if(NULL == dbv0_0_37_user_associations){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_37_user_associations->root) {
        dbv0_0_37_association_short_info_free(dbv0_0_37_user_associations->root);
        dbv0_0_37_user_associations->root = NULL;
    }
    free(dbv0_0_37_user_associations);
}

cJSON *dbv0_0_37_user_associations_convertToJSON(dbv0_0_37_user_associations_t *dbv0_0_37_user_associations) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_user_associations->root
    if(dbv0_0_37_user_associations->root) {
    cJSON *root_local_JSON = dbv0_0_37_association_short_info_convertToJSON(dbv0_0_37_user_associations->root);
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

dbv0_0_37_user_associations_t *dbv0_0_37_user_associations_parseFromJSON(cJSON *dbv0_0_37_user_associationsJSON){

    dbv0_0_37_user_associations_t *dbv0_0_37_user_associations_local_var = NULL;

    // define the local variable for dbv0_0_37_user_associations->root
    dbv0_0_37_association_short_info_t *root_local_nonprim = NULL;

    // dbv0_0_37_user_associations->root
    cJSON *root = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_user_associationsJSON, "root");
    if (root) { 
    root_local_nonprim = dbv0_0_37_association_short_info_parseFromJSON(root); //nonprimitive
    }


    dbv0_0_37_user_associations_local_var = dbv0_0_37_user_associations_create (
        root ? root_local_nonprim : NULL
        );

    return dbv0_0_37_user_associations_local_var;
end:
    if (root_local_nonprim) {
        dbv0_0_37_association_short_info_free(root_local_nonprim);
        root_local_nonprim = NULL;
    }
    return NULL;

}
