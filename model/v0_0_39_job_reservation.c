#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_job_reservation.h"



v0_0_39_job_reservation_t *v0_0_39_job_reservation_create(
    char *name
    ) {
    v0_0_39_job_reservation_t *v0_0_39_job_reservation_local_var = malloc(sizeof(v0_0_39_job_reservation_t));
    if (!v0_0_39_job_reservation_local_var) {
        return NULL;
    }
    v0_0_39_job_reservation_local_var->name = name;

    return v0_0_39_job_reservation_local_var;
}


void v0_0_39_job_reservation_free(v0_0_39_job_reservation_t *v0_0_39_job_reservation) {
    if(NULL == v0_0_39_job_reservation){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_job_reservation->name) {
        free(v0_0_39_job_reservation->name);
        v0_0_39_job_reservation->name = NULL;
    }
    free(v0_0_39_job_reservation);
}

cJSON *v0_0_39_job_reservation_convertToJSON(v0_0_39_job_reservation_t *v0_0_39_job_reservation) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_job_reservation->name
    if(v0_0_39_job_reservation->name) {
    if(cJSON_AddStringToObject(item, "name", v0_0_39_job_reservation->name) == NULL) {
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

v0_0_39_job_reservation_t *v0_0_39_job_reservation_parseFromJSON(cJSON *v0_0_39_job_reservationJSON){

    v0_0_39_job_reservation_t *v0_0_39_job_reservation_local_var = NULL;

    // v0_0_39_job_reservation->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_reservationJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }


    v0_0_39_job_reservation_local_var = v0_0_39_job_reservation_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL
        );

    return v0_0_39_job_reservation_local_var;
end:
    return NULL;

}
