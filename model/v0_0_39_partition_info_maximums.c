#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_partition_info_maximums.h"



v0_0_39_partition_info_maximums_t *v0_0_39_partition_info_maximums_create(
    v0_0_39_uint16_no_val_t *over_time_limit
    ) {
    v0_0_39_partition_info_maximums_t *v0_0_39_partition_info_maximums_local_var = malloc(sizeof(v0_0_39_partition_info_maximums_t));
    if (!v0_0_39_partition_info_maximums_local_var) {
        return NULL;
    }
    v0_0_39_partition_info_maximums_local_var->over_time_limit = over_time_limit;

    return v0_0_39_partition_info_maximums_local_var;
}


void v0_0_39_partition_info_maximums_free(v0_0_39_partition_info_maximums_t *v0_0_39_partition_info_maximums) {
    if(NULL == v0_0_39_partition_info_maximums){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_partition_info_maximums->over_time_limit) {
        v0_0_39_uint16_no_val_free(v0_0_39_partition_info_maximums->over_time_limit);
        v0_0_39_partition_info_maximums->over_time_limit = NULL;
    }
    free(v0_0_39_partition_info_maximums);
}

cJSON *v0_0_39_partition_info_maximums_convertToJSON(v0_0_39_partition_info_maximums_t *v0_0_39_partition_info_maximums) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_partition_info_maximums->over_time_limit
    if(v0_0_39_partition_info_maximums->over_time_limit) {
    cJSON *over_time_limit_local_JSON = v0_0_39_uint16_no_val_convertToJSON(v0_0_39_partition_info_maximums->over_time_limit);
    if(over_time_limit_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "over_time_limit", over_time_limit_local_JSON);
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

v0_0_39_partition_info_maximums_t *v0_0_39_partition_info_maximums_parseFromJSON(cJSON *v0_0_39_partition_info_maximumsJSON){

    v0_0_39_partition_info_maximums_t *v0_0_39_partition_info_maximums_local_var = NULL;

    // define the local variable for v0_0_39_partition_info_maximums->over_time_limit
    v0_0_39_uint16_no_val_t *over_time_limit_local_nonprim = NULL;

    // v0_0_39_partition_info_maximums->over_time_limit
    cJSON *over_time_limit = cJSON_GetObjectItemCaseSensitive(v0_0_39_partition_info_maximumsJSON, "over_time_limit");
    if (over_time_limit) { 
    over_time_limit_local_nonprim = v0_0_39_uint16_no_val_parseFromJSON(over_time_limit); //nonprimitive
    }


    v0_0_39_partition_info_maximums_local_var = v0_0_39_partition_info_maximums_create (
        over_time_limit ? over_time_limit_local_nonprim : NULL
        );

    return v0_0_39_partition_info_maximums_local_var;
end:
    if (over_time_limit_local_nonprim) {
        v0_0_39_uint16_no_val_free(over_time_limit_local_nonprim);
        over_time_limit_local_nonprim = NULL;
    }
    return NULL;

}
