#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_37_reservation_purge_completed.h"



v0_0_37_reservation_purge_completed_t *v0_0_37_reservation_purge_completed_create(
    int time
    ) {
    v0_0_37_reservation_purge_completed_t *v0_0_37_reservation_purge_completed_local_var = malloc(sizeof(v0_0_37_reservation_purge_completed_t));
    if (!v0_0_37_reservation_purge_completed_local_var) {
        return NULL;
    }
    v0_0_37_reservation_purge_completed_local_var->time = time;

    return v0_0_37_reservation_purge_completed_local_var;
}


void v0_0_37_reservation_purge_completed_free(v0_0_37_reservation_purge_completed_t *v0_0_37_reservation_purge_completed) {
    if(NULL == v0_0_37_reservation_purge_completed){
        return ;
    }
    listEntry_t *listEntry;
    free(v0_0_37_reservation_purge_completed);
}

cJSON *v0_0_37_reservation_purge_completed_convertToJSON(v0_0_37_reservation_purge_completed_t *v0_0_37_reservation_purge_completed) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_37_reservation_purge_completed->time
    if(v0_0_37_reservation_purge_completed->time) {
    if(cJSON_AddNumberToObject(item, "time", v0_0_37_reservation_purge_completed->time) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

v0_0_37_reservation_purge_completed_t *v0_0_37_reservation_purge_completed_parseFromJSON(cJSON *v0_0_37_reservation_purge_completedJSON){

    v0_0_37_reservation_purge_completed_t *v0_0_37_reservation_purge_completed_local_var = NULL;

    // v0_0_37_reservation_purge_completed->time
    cJSON *time = cJSON_GetObjectItemCaseSensitive(v0_0_37_reservation_purge_completedJSON, "time");
    if (time) { 
    if(!cJSON_IsNumber(time))
    {
    goto end; //Numeric
    }
    }


    v0_0_37_reservation_purge_completed_local_var = v0_0_37_reservation_purge_completed_create (
        time ? time->valuedouble : 0
        );

    return v0_0_37_reservation_purge_completed_local_var;
end:
    return NULL;

}
