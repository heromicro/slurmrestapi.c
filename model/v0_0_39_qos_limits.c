#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_qos_limits.h"



v0_0_39_qos_limits_t *v0_0_39_qos_limits_create(
    v0_0_39_qos_limits_min_t *min
    ) {
    v0_0_39_qos_limits_t *v0_0_39_qos_limits_local_var = malloc(sizeof(v0_0_39_qos_limits_t));
    if (!v0_0_39_qos_limits_local_var) {
        return NULL;
    }
    v0_0_39_qos_limits_local_var->min = min;

    return v0_0_39_qos_limits_local_var;
}


void v0_0_39_qos_limits_free(v0_0_39_qos_limits_t *v0_0_39_qos_limits) {
    if(NULL == v0_0_39_qos_limits){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_qos_limits->min) {
        v0_0_39_qos_limits_min_free(v0_0_39_qos_limits->min);
        v0_0_39_qos_limits->min = NULL;
    }
    free(v0_0_39_qos_limits);
}

cJSON *v0_0_39_qos_limits_convertToJSON(v0_0_39_qos_limits_t *v0_0_39_qos_limits) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_qos_limits->min
    if(v0_0_39_qos_limits->min) {
    cJSON *min_local_JSON = v0_0_39_qos_limits_min_convertToJSON(v0_0_39_qos_limits->min);
    if(min_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "min", min_local_JSON);
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

v0_0_39_qos_limits_t *v0_0_39_qos_limits_parseFromJSON(cJSON *v0_0_39_qos_limitsJSON){

    v0_0_39_qos_limits_t *v0_0_39_qos_limits_local_var = NULL;

    // define the local variable for v0_0_39_qos_limits->min
    v0_0_39_qos_limits_min_t *min_local_nonprim = NULL;

    // v0_0_39_qos_limits->min
    cJSON *min = cJSON_GetObjectItemCaseSensitive(v0_0_39_qos_limitsJSON, "min");
    if (min) { 
    min_local_nonprim = v0_0_39_qos_limits_min_parseFromJSON(min); //nonprimitive
    }


    v0_0_39_qos_limits_local_var = v0_0_39_qos_limits_create (
        min ? min_local_nonprim : NULL
        );

    return v0_0_39_qos_limits_local_var;
end:
    if (min_local_nonprim) {
        v0_0_39_qos_limits_min_free(min_local_nonprim);
        min_local_nonprim = NULL;
    }
    return NULL;

}
