#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_qos_limits_max_wall_clock.h"



dbv0_0_38_qos_limits_max_wall_clock_t *dbv0_0_38_qos_limits_max_wall_clock_create(
    dbv0_0_38_qos_limits_max_wall_clock_per_t *per
    ) {
    dbv0_0_38_qos_limits_max_wall_clock_t *dbv0_0_38_qos_limits_max_wall_clock_local_var = malloc(sizeof(dbv0_0_38_qos_limits_max_wall_clock_t));
    if (!dbv0_0_38_qos_limits_max_wall_clock_local_var) {
        return NULL;
    }
    dbv0_0_38_qos_limits_max_wall_clock_local_var->per = per;

    return dbv0_0_38_qos_limits_max_wall_clock_local_var;
}


void dbv0_0_38_qos_limits_max_wall_clock_free(dbv0_0_38_qos_limits_max_wall_clock_t *dbv0_0_38_qos_limits_max_wall_clock) {
    if(NULL == dbv0_0_38_qos_limits_max_wall_clock){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_38_qos_limits_max_wall_clock->per) {
        dbv0_0_38_qos_limits_max_wall_clock_per_free(dbv0_0_38_qos_limits_max_wall_clock->per);
        dbv0_0_38_qos_limits_max_wall_clock->per = NULL;
    }
    free(dbv0_0_38_qos_limits_max_wall_clock);
}

cJSON *dbv0_0_38_qos_limits_max_wall_clock_convertToJSON(dbv0_0_38_qos_limits_max_wall_clock_t *dbv0_0_38_qos_limits_max_wall_clock) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_qos_limits_max_wall_clock->per
    if(dbv0_0_38_qos_limits_max_wall_clock->per) {
    cJSON *per_local_JSON = dbv0_0_38_qos_limits_max_wall_clock_per_convertToJSON(dbv0_0_38_qos_limits_max_wall_clock->per);
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

dbv0_0_38_qos_limits_max_wall_clock_t *dbv0_0_38_qos_limits_max_wall_clock_parseFromJSON(cJSON *dbv0_0_38_qos_limits_max_wall_clockJSON){

    dbv0_0_38_qos_limits_max_wall_clock_t *dbv0_0_38_qos_limits_max_wall_clock_local_var = NULL;

    // define the local variable for dbv0_0_38_qos_limits_max_wall_clock->per
    dbv0_0_38_qos_limits_max_wall_clock_per_t *per_local_nonprim = NULL;

    // dbv0_0_38_qos_limits_max_wall_clock->per
    cJSON *per = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_qos_limits_max_wall_clockJSON, "per");
    if (per) { 
    per_local_nonprim = dbv0_0_38_qos_limits_max_wall_clock_per_parseFromJSON(per); //nonprimitive
    }


    dbv0_0_38_qos_limits_max_wall_clock_local_var = dbv0_0_38_qos_limits_max_wall_clock_create (
        per ? per_local_nonprim : NULL
        );

    return dbv0_0_38_qos_limits_max_wall_clock_local_var;
end:
    if (per_local_nonprim) {
        dbv0_0_38_qos_limits_max_wall_clock_per_free(per_local_nonprim);
        per_local_nonprim = NULL;
    }
    return NULL;

}
