#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_reservation_core_spec.h"



v0_0_39_reservation_core_spec_t *v0_0_39_reservation_core_spec_create(
    char *node,
    char *core
    ) {
    v0_0_39_reservation_core_spec_t *v0_0_39_reservation_core_spec_local_var = malloc(sizeof(v0_0_39_reservation_core_spec_t));
    if (!v0_0_39_reservation_core_spec_local_var) {
        return NULL;
    }
    v0_0_39_reservation_core_spec_local_var->node = node;
    v0_0_39_reservation_core_spec_local_var->core = core;

    return v0_0_39_reservation_core_spec_local_var;
}


void v0_0_39_reservation_core_spec_free(v0_0_39_reservation_core_spec_t *v0_0_39_reservation_core_spec) {
    if(NULL == v0_0_39_reservation_core_spec){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_reservation_core_spec->node) {
        free(v0_0_39_reservation_core_spec->node);
        v0_0_39_reservation_core_spec->node = NULL;
    }
    if (v0_0_39_reservation_core_spec->core) {
        free(v0_0_39_reservation_core_spec->core);
        v0_0_39_reservation_core_spec->core = NULL;
    }
    free(v0_0_39_reservation_core_spec);
}

cJSON *v0_0_39_reservation_core_spec_convertToJSON(v0_0_39_reservation_core_spec_t *v0_0_39_reservation_core_spec) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_reservation_core_spec->node
    if(v0_0_39_reservation_core_spec->node) {
    if(cJSON_AddStringToObject(item, "node", v0_0_39_reservation_core_spec->node) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_reservation_core_spec->core
    if(v0_0_39_reservation_core_spec->core) {
    if(cJSON_AddStringToObject(item, "core", v0_0_39_reservation_core_spec->core) == NULL) {
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

v0_0_39_reservation_core_spec_t *v0_0_39_reservation_core_spec_parseFromJSON(cJSON *v0_0_39_reservation_core_specJSON){

    v0_0_39_reservation_core_spec_t *v0_0_39_reservation_core_spec_local_var = NULL;

    // v0_0_39_reservation_core_spec->node
    cJSON *node = cJSON_GetObjectItemCaseSensitive(v0_0_39_reservation_core_specJSON, "node");
    if (node) { 
    if(!cJSON_IsString(node) && !cJSON_IsNull(node))
    {
    goto end; //String
    }
    }

    // v0_0_39_reservation_core_spec->core
    cJSON *core = cJSON_GetObjectItemCaseSensitive(v0_0_39_reservation_core_specJSON, "core");
    if (core) { 
    if(!cJSON_IsString(core) && !cJSON_IsNull(core))
    {
    goto end; //String
    }
    }


    v0_0_39_reservation_core_spec_local_var = v0_0_39_reservation_core_spec_create (
        node && !cJSON_IsNull(node) ? strdup(node->valuestring) : NULL,
        core && !cJSON_IsNull(core) ? strdup(core->valuestring) : NULL
        );

    return v0_0_39_reservation_core_spec_local_var;
end:
    return NULL;

}
