#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_partition_info_timeouts.h"



v0_0_39_partition_info_timeouts_t *v0_0_39_partition_info_timeouts_create(
    v0_0_39_uint16_no_val_t *suspend
    ) {
    v0_0_39_partition_info_timeouts_t *v0_0_39_partition_info_timeouts_local_var = malloc(sizeof(v0_0_39_partition_info_timeouts_t));
    if (!v0_0_39_partition_info_timeouts_local_var) {
        return NULL;
    }
    v0_0_39_partition_info_timeouts_local_var->suspend = suspend;

    return v0_0_39_partition_info_timeouts_local_var;
}


void v0_0_39_partition_info_timeouts_free(v0_0_39_partition_info_timeouts_t *v0_0_39_partition_info_timeouts) {
    if(NULL == v0_0_39_partition_info_timeouts){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_partition_info_timeouts->suspend) {
        v0_0_39_uint16_no_val_free(v0_0_39_partition_info_timeouts->suspend);
        v0_0_39_partition_info_timeouts->suspend = NULL;
    }
    free(v0_0_39_partition_info_timeouts);
}

cJSON *v0_0_39_partition_info_timeouts_convertToJSON(v0_0_39_partition_info_timeouts_t *v0_0_39_partition_info_timeouts) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_partition_info_timeouts->suspend
    if(v0_0_39_partition_info_timeouts->suspend) {
    cJSON *suspend_local_JSON = v0_0_39_uint16_no_val_convertToJSON(v0_0_39_partition_info_timeouts->suspend);
    if(suspend_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "suspend", suspend_local_JSON);
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

v0_0_39_partition_info_timeouts_t *v0_0_39_partition_info_timeouts_parseFromJSON(cJSON *v0_0_39_partition_info_timeoutsJSON){

    v0_0_39_partition_info_timeouts_t *v0_0_39_partition_info_timeouts_local_var = NULL;

    // define the local variable for v0_0_39_partition_info_timeouts->suspend
    v0_0_39_uint16_no_val_t *suspend_local_nonprim = NULL;

    // v0_0_39_partition_info_timeouts->suspend
    cJSON *suspend = cJSON_GetObjectItemCaseSensitive(v0_0_39_partition_info_timeoutsJSON, "suspend");
    if (suspend) { 
    suspend_local_nonprim = v0_0_39_uint16_no_val_parseFromJSON(suspend); //nonprimitive
    }


    v0_0_39_partition_info_timeouts_local_var = v0_0_39_partition_info_timeouts_create (
        suspend ? suspend_local_nonprim : NULL
        );

    return v0_0_39_partition_info_timeouts_local_var;
end:
    if (suspend_local_nonprim) {
        v0_0_39_uint16_no_val_free(suspend_local_nonprim);
        suspend_local_nonprim = NULL;
    }
    return NULL;

}
