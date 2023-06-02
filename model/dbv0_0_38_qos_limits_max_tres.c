#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_qos_limits_max_tres.h"



dbv0_0_38_qos_limits_max_tres_t *dbv0_0_38_qos_limits_max_tres_create(
    dbv0_0_38_qos_limits_max_tres_minutes_t *minutes,
    dbv0_0_38_qos_limits_max_tres_per_t *per
    ) {
    dbv0_0_38_qos_limits_max_tres_t *dbv0_0_38_qos_limits_max_tres_local_var = malloc(sizeof(dbv0_0_38_qos_limits_max_tres_t));
    if (!dbv0_0_38_qos_limits_max_tres_local_var) {
        return NULL;
    }
    dbv0_0_38_qos_limits_max_tres_local_var->minutes = minutes;
    dbv0_0_38_qos_limits_max_tres_local_var->per = per;

    return dbv0_0_38_qos_limits_max_tres_local_var;
}


void dbv0_0_38_qos_limits_max_tres_free(dbv0_0_38_qos_limits_max_tres_t *dbv0_0_38_qos_limits_max_tres) {
    if(NULL == dbv0_0_38_qos_limits_max_tres){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_38_qos_limits_max_tres->minutes) {
        dbv0_0_38_qos_limits_max_tres_minutes_free(dbv0_0_38_qos_limits_max_tres->minutes);
        dbv0_0_38_qos_limits_max_tres->minutes = NULL;
    }
    if (dbv0_0_38_qos_limits_max_tres->per) {
        dbv0_0_38_qos_limits_max_tres_per_free(dbv0_0_38_qos_limits_max_tres->per);
        dbv0_0_38_qos_limits_max_tres->per = NULL;
    }
    free(dbv0_0_38_qos_limits_max_tres);
}

cJSON *dbv0_0_38_qos_limits_max_tres_convertToJSON(dbv0_0_38_qos_limits_max_tres_t *dbv0_0_38_qos_limits_max_tres) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_qos_limits_max_tres->minutes
    if(dbv0_0_38_qos_limits_max_tres->minutes) {
    cJSON *minutes_local_JSON = dbv0_0_38_qos_limits_max_tres_minutes_convertToJSON(dbv0_0_38_qos_limits_max_tres->minutes);
    if(minutes_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "minutes", minutes_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_38_qos_limits_max_tres->per
    if(dbv0_0_38_qos_limits_max_tres->per) {
    cJSON *per_local_JSON = dbv0_0_38_qos_limits_max_tres_per_convertToJSON(dbv0_0_38_qos_limits_max_tres->per);
    if(per_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "per", per_local_JSON);
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

dbv0_0_38_qos_limits_max_tres_t *dbv0_0_38_qos_limits_max_tres_parseFromJSON(cJSON *dbv0_0_38_qos_limits_max_tresJSON){

    dbv0_0_38_qos_limits_max_tres_t *dbv0_0_38_qos_limits_max_tres_local_var = NULL;

    // define the local variable for dbv0_0_38_qos_limits_max_tres->minutes
    dbv0_0_38_qos_limits_max_tres_minutes_t *minutes_local_nonprim = NULL;

    // define the local variable for dbv0_0_38_qos_limits_max_tres->per
    dbv0_0_38_qos_limits_max_tres_per_t *per_local_nonprim = NULL;

    // dbv0_0_38_qos_limits_max_tres->minutes
    cJSON *minutes = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_qos_limits_max_tresJSON, "minutes");
    if (minutes) { 
    minutes_local_nonprim = dbv0_0_38_qos_limits_max_tres_minutes_parseFromJSON(minutes); //nonprimitive
    }

    // dbv0_0_38_qos_limits_max_tres->per
    cJSON *per = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_qos_limits_max_tresJSON, "per");
    if (per) { 
    per_local_nonprim = dbv0_0_38_qos_limits_max_tres_per_parseFromJSON(per); //nonprimitive
    }


    dbv0_0_38_qos_limits_max_tres_local_var = dbv0_0_38_qos_limits_max_tres_create (
        minutes ? minutes_local_nonprim : NULL,
        per ? per_local_nonprim : NULL
        );

    return dbv0_0_38_qos_limits_max_tres_local_var;
end:
    if (minutes_local_nonprim) {
        dbv0_0_38_qos_limits_max_tres_minutes_free(minutes_local_nonprim);
        minutes_local_nonprim = NULL;
    }
    if (per_local_nonprim) {
        dbv0_0_38_qos_limits_max_tres_per_free(per_local_nonprim);
        per_local_nonprim = NULL;
    }
    return NULL;

}
