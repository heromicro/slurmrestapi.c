#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_qos_limits_max_tres_minutes.h"



dbv0_0_38_qos_limits_max_tres_minutes_t *dbv0_0_38_qos_limits_max_tres_minutes_create(
    dbv0_0_38_qos_limits_max_tres_minutes_per_t *per
    ) {
    dbv0_0_38_qos_limits_max_tres_minutes_t *dbv0_0_38_qos_limits_max_tres_minutes_local_var = malloc(sizeof(dbv0_0_38_qos_limits_max_tres_minutes_t));
    if (!dbv0_0_38_qos_limits_max_tres_minutes_local_var) {
        return NULL;
    }
    dbv0_0_38_qos_limits_max_tres_minutes_local_var->per = per;

    return dbv0_0_38_qos_limits_max_tres_minutes_local_var;
}


void dbv0_0_38_qos_limits_max_tres_minutes_free(dbv0_0_38_qos_limits_max_tres_minutes_t *dbv0_0_38_qos_limits_max_tres_minutes) {
    if(NULL == dbv0_0_38_qos_limits_max_tres_minutes){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_38_qos_limits_max_tres_minutes->per) {
        dbv0_0_38_qos_limits_max_tres_minutes_per_free(dbv0_0_38_qos_limits_max_tres_minutes->per);
        dbv0_0_38_qos_limits_max_tres_minutes->per = NULL;
    }
    free(dbv0_0_38_qos_limits_max_tres_minutes);
}

cJSON *dbv0_0_38_qos_limits_max_tres_minutes_convertToJSON(dbv0_0_38_qos_limits_max_tres_minutes_t *dbv0_0_38_qos_limits_max_tres_minutes) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_qos_limits_max_tres_minutes->per
    if(dbv0_0_38_qos_limits_max_tres_minutes->per) {
    cJSON *per_local_JSON = dbv0_0_38_qos_limits_max_tres_minutes_per_convertToJSON(dbv0_0_38_qos_limits_max_tres_minutes->per);
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

dbv0_0_38_qos_limits_max_tres_minutes_t *dbv0_0_38_qos_limits_max_tres_minutes_parseFromJSON(cJSON *dbv0_0_38_qos_limits_max_tres_minutesJSON){

    dbv0_0_38_qos_limits_max_tres_minutes_t *dbv0_0_38_qos_limits_max_tres_minutes_local_var = NULL;

    // define the local variable for dbv0_0_38_qos_limits_max_tres_minutes->per
    dbv0_0_38_qos_limits_max_tres_minutes_per_t *per_local_nonprim = NULL;

    // dbv0_0_38_qos_limits_max_tres_minutes->per
    cJSON *per = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_qos_limits_max_tres_minutesJSON, "per");
    if (per) { 
    per_local_nonprim = dbv0_0_38_qos_limits_max_tres_minutes_per_parseFromJSON(per); //nonprimitive
    }


    dbv0_0_38_qos_limits_max_tres_minutes_local_var = dbv0_0_38_qos_limits_max_tres_minutes_create (
        per ? per_local_nonprim : NULL
        );

    return dbv0_0_38_qos_limits_max_tres_minutes_local_var;
end:
    if (per_local_nonprim) {
        dbv0_0_38_qos_limits_max_tres_minutes_per_free(per_local_nonprim);
        per_local_nonprim = NULL;
    }
    return NULL;

}
