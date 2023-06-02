#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_qos_limits_min.h"



v0_0_39_qos_limits_min_t *v0_0_39_qos_limits_min_create(
    v0_0_39_qos_limits_min_tres_t *tres
    ) {
    v0_0_39_qos_limits_min_t *v0_0_39_qos_limits_min_local_var = malloc(sizeof(v0_0_39_qos_limits_min_t));
    if (!v0_0_39_qos_limits_min_local_var) {
        return NULL;
    }
    v0_0_39_qos_limits_min_local_var->tres = tres;

    return v0_0_39_qos_limits_min_local_var;
}


void v0_0_39_qos_limits_min_free(v0_0_39_qos_limits_min_t *v0_0_39_qos_limits_min) {
    if(NULL == v0_0_39_qos_limits_min){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_qos_limits_min->tres) {
        v0_0_39_qos_limits_min_tres_free(v0_0_39_qos_limits_min->tres);
        v0_0_39_qos_limits_min->tres = NULL;
    }
    free(v0_0_39_qos_limits_min);
}

cJSON *v0_0_39_qos_limits_min_convertToJSON(v0_0_39_qos_limits_min_t *v0_0_39_qos_limits_min) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_qos_limits_min->tres
    if(v0_0_39_qos_limits_min->tres) {
    cJSON *tres_local_JSON = v0_0_39_qos_limits_min_tres_convertToJSON(v0_0_39_qos_limits_min->tres);
    if(tres_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "tres", tres_local_JSON);
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

v0_0_39_qos_limits_min_t *v0_0_39_qos_limits_min_parseFromJSON(cJSON *v0_0_39_qos_limits_minJSON){

    v0_0_39_qos_limits_min_t *v0_0_39_qos_limits_min_local_var = NULL;

    // define the local variable for v0_0_39_qos_limits_min->tres
    v0_0_39_qos_limits_min_tres_t *tres_local_nonprim = NULL;

    // v0_0_39_qos_limits_min->tres
    cJSON *tres = cJSON_GetObjectItemCaseSensitive(v0_0_39_qos_limits_minJSON, "tres");
    if (tres) { 
    tres_local_nonprim = v0_0_39_qos_limits_min_tres_parseFromJSON(tres); //nonprimitive
    }


    v0_0_39_qos_limits_min_local_var = v0_0_39_qos_limits_min_create (
        tres ? tres_local_nonprim : NULL
        );

    return v0_0_39_qos_limits_min_local_var;
end:
    if (tres_local_nonprim) {
        v0_0_39_qos_limits_min_tres_free(tres_local_nonprim);
        tres_local_nonprim = NULL;
    }
    return NULL;

}
