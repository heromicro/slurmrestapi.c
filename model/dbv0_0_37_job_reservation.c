#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_job_reservation.h"



dbv0_0_37_job_reservation_t *dbv0_0_37_job_reservation_create(
    int id,
    int name
    ) {
    dbv0_0_37_job_reservation_t *dbv0_0_37_job_reservation_local_var = malloc(sizeof(dbv0_0_37_job_reservation_t));
    if (!dbv0_0_37_job_reservation_local_var) {
        return NULL;
    }
    dbv0_0_37_job_reservation_local_var->id = id;
    dbv0_0_37_job_reservation_local_var->name = name;

    return dbv0_0_37_job_reservation_local_var;
}


void dbv0_0_37_job_reservation_free(dbv0_0_37_job_reservation_t *dbv0_0_37_job_reservation) {
    if(NULL == dbv0_0_37_job_reservation){
        return ;
    }
    listEntry_t *listEntry;
    free(dbv0_0_37_job_reservation);
}

cJSON *dbv0_0_37_job_reservation_convertToJSON(dbv0_0_37_job_reservation_t *dbv0_0_37_job_reservation) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_job_reservation->id
    if(dbv0_0_37_job_reservation->id) {
    if(cJSON_AddNumberToObject(item, "id", dbv0_0_37_job_reservation->id) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_37_job_reservation->name
    if(dbv0_0_37_job_reservation->name) {
    if(cJSON_AddNumberToObject(item, "name", dbv0_0_37_job_reservation->name) == NULL) {
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

dbv0_0_37_job_reservation_t *dbv0_0_37_job_reservation_parseFromJSON(cJSON *dbv0_0_37_job_reservationJSON){

    dbv0_0_37_job_reservation_t *dbv0_0_37_job_reservation_local_var = NULL;

    // dbv0_0_37_job_reservation->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_job_reservationJSON, "id");
    if (id) { 
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_37_job_reservation->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_job_reservationJSON, "name");
    if (name) { 
    if(!cJSON_IsNumber(name))
    {
    goto end; //Numeric
    }
    }


    dbv0_0_37_job_reservation_local_var = dbv0_0_37_job_reservation_create (
        id ? id->valuedouble : 0,
        name ? name->valuedouble : 0
        );

    return dbv0_0_37_job_reservation_local_var;
end:
    return NULL;

}
