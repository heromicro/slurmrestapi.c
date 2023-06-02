#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_qos_preempt.h"



v0_0_39_qos_preempt_t *v0_0_39_qos_preempt_create(
    v0_0_39_uint32_no_val_t *exempt_time
    ) {
    v0_0_39_qos_preempt_t *v0_0_39_qos_preempt_local_var = malloc(sizeof(v0_0_39_qos_preempt_t));
    if (!v0_0_39_qos_preempt_local_var) {
        return NULL;
    }
    v0_0_39_qos_preempt_local_var->exempt_time = exempt_time;

    return v0_0_39_qos_preempt_local_var;
}


void v0_0_39_qos_preempt_free(v0_0_39_qos_preempt_t *v0_0_39_qos_preempt) {
    if(NULL == v0_0_39_qos_preempt){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_qos_preempt->exempt_time) {
        v0_0_39_uint32_no_val_free(v0_0_39_qos_preempt->exempt_time);
        v0_0_39_qos_preempt->exempt_time = NULL;
    }
    free(v0_0_39_qos_preempt);
}

cJSON *v0_0_39_qos_preempt_convertToJSON(v0_0_39_qos_preempt_t *v0_0_39_qos_preempt) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_qos_preempt->exempt_time
    if(v0_0_39_qos_preempt->exempt_time) {
    cJSON *exempt_time_local_JSON = v0_0_39_uint32_no_val_convertToJSON(v0_0_39_qos_preempt->exempt_time);
    if(exempt_time_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "exempt_time", exempt_time_local_JSON);
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

v0_0_39_qos_preempt_t *v0_0_39_qos_preempt_parseFromJSON(cJSON *v0_0_39_qos_preemptJSON){

    v0_0_39_qos_preempt_t *v0_0_39_qos_preempt_local_var = NULL;

    // define the local variable for v0_0_39_qos_preempt->exempt_time
    v0_0_39_uint32_no_val_t *exempt_time_local_nonprim = NULL;

    // v0_0_39_qos_preempt->exempt_time
    cJSON *exempt_time = cJSON_GetObjectItemCaseSensitive(v0_0_39_qos_preemptJSON, "exempt_time");
    if (exempt_time) { 
    exempt_time_local_nonprim = v0_0_39_uint32_no_val_parseFromJSON(exempt_time); //nonprimitive
    }


    v0_0_39_qos_preempt_local_var = v0_0_39_qos_preempt_create (
        exempt_time ? exempt_time_local_nonprim : NULL
        );

    return v0_0_39_qos_preempt_local_var;
end:
    if (exempt_time_local_nonprim) {
        v0_0_39_uint32_no_val_free(exempt_time_local_nonprim);
        exempt_time_local_nonprim = NULL;
    }
    return NULL;

}
