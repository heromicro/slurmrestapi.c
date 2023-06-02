#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_reservation_info_purge_completed.h"



v0_0_39_reservation_info_purge_completed_t *v0_0_39_reservation_info_purge_completed_create(
    v0_0_39_uint32_no_val_t *time
    ) {
    v0_0_39_reservation_info_purge_completed_t *v0_0_39_reservation_info_purge_completed_local_var = malloc(sizeof(v0_0_39_reservation_info_purge_completed_t));
    if (!v0_0_39_reservation_info_purge_completed_local_var) {
        return NULL;
    }
    v0_0_39_reservation_info_purge_completed_local_var->time = time;

    return v0_0_39_reservation_info_purge_completed_local_var;
}


void v0_0_39_reservation_info_purge_completed_free(v0_0_39_reservation_info_purge_completed_t *v0_0_39_reservation_info_purge_completed) {
    if(NULL == v0_0_39_reservation_info_purge_completed){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_reservation_info_purge_completed->time) {
        v0_0_39_uint32_no_val_free(v0_0_39_reservation_info_purge_completed->time);
        v0_0_39_reservation_info_purge_completed->time = NULL;
    }
    free(v0_0_39_reservation_info_purge_completed);
}

cJSON *v0_0_39_reservation_info_purge_completed_convertToJSON(v0_0_39_reservation_info_purge_completed_t *v0_0_39_reservation_info_purge_completed) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_reservation_info_purge_completed->time
    if(v0_0_39_reservation_info_purge_completed->time) {
    cJSON *time_local_JSON = v0_0_39_uint32_no_val_convertToJSON(v0_0_39_reservation_info_purge_completed->time);
    if(time_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "time", time_local_JSON);
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

v0_0_39_reservation_info_purge_completed_t *v0_0_39_reservation_info_purge_completed_parseFromJSON(cJSON *v0_0_39_reservation_info_purge_completedJSON){

    v0_0_39_reservation_info_purge_completed_t *v0_0_39_reservation_info_purge_completed_local_var = NULL;

    // define the local variable for v0_0_39_reservation_info_purge_completed->time
    v0_0_39_uint32_no_val_t *time_local_nonprim = NULL;

    // v0_0_39_reservation_info_purge_completed->time
    cJSON *time = cJSON_GetObjectItemCaseSensitive(v0_0_39_reservation_info_purge_completedJSON, "time");
    if (time) { 
    time_local_nonprim = v0_0_39_uint32_no_val_parseFromJSON(time); //nonprimitive
    }


    v0_0_39_reservation_info_purge_completed_local_var = v0_0_39_reservation_info_purge_completed_create (
        time ? time_local_nonprim : NULL
        );

    return v0_0_39_reservation_info_purge_completed_local_var;
end:
    if (time_local_nonprim) {
        v0_0_39_uint32_no_val_free(time_local_nonprim);
        time_local_nonprim = NULL;
    }
    return NULL;

}
