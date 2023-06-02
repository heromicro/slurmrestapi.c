#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_qos_limits_min.h"



dbv0_0_37_qos_limits_min_t *dbv0_0_37_qos_limits_min_create(
    int priority_threshold,
    dbv0_0_37_qos_limits_min_tres_t *tres
    ) {
    dbv0_0_37_qos_limits_min_t *dbv0_0_37_qos_limits_min_local_var = malloc(sizeof(dbv0_0_37_qos_limits_min_t));
    if (!dbv0_0_37_qos_limits_min_local_var) {
        return NULL;
    }
    dbv0_0_37_qos_limits_min_local_var->priority_threshold = priority_threshold;
    dbv0_0_37_qos_limits_min_local_var->tres = tres;

    return dbv0_0_37_qos_limits_min_local_var;
}


void dbv0_0_37_qos_limits_min_free(dbv0_0_37_qos_limits_min_t *dbv0_0_37_qos_limits_min) {
    if(NULL == dbv0_0_37_qos_limits_min){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_37_qos_limits_min->tres) {
        dbv0_0_37_qos_limits_min_tres_free(dbv0_0_37_qos_limits_min->tres);
        dbv0_0_37_qos_limits_min->tres = NULL;
    }
    free(dbv0_0_37_qos_limits_min);
}

cJSON *dbv0_0_37_qos_limits_min_convertToJSON(dbv0_0_37_qos_limits_min_t *dbv0_0_37_qos_limits_min) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_qos_limits_min->priority_threshold
    if(dbv0_0_37_qos_limits_min->priority_threshold) {
    if(cJSON_AddNumberToObject(item, "priority_threshold", dbv0_0_37_qos_limits_min->priority_threshold) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_37_qos_limits_min->tres
    if(dbv0_0_37_qos_limits_min->tres) {
    cJSON *tres_local_JSON = dbv0_0_37_qos_limits_min_tres_convertToJSON(dbv0_0_37_qos_limits_min->tres);
    if(tres_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "tres", tres_local_JSON);
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

dbv0_0_37_qos_limits_min_t *dbv0_0_37_qos_limits_min_parseFromJSON(cJSON *dbv0_0_37_qos_limits_minJSON){

    dbv0_0_37_qos_limits_min_t *dbv0_0_37_qos_limits_min_local_var = NULL;

    // define the local variable for dbv0_0_37_qos_limits_min->tres
    dbv0_0_37_qos_limits_min_tres_t *tres_local_nonprim = NULL;

    // dbv0_0_37_qos_limits_min->priority_threshold
    cJSON *priority_threshold = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_qos_limits_minJSON, "priority_threshold");
    if (priority_threshold) { 
    if(!cJSON_IsNumber(priority_threshold))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_37_qos_limits_min->tres
    cJSON *tres = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_qos_limits_minJSON, "tres");
    if (tres) { 
    tres_local_nonprim = dbv0_0_37_qos_limits_min_tres_parseFromJSON(tres); //nonprimitive
    }


    dbv0_0_37_qos_limits_min_local_var = dbv0_0_37_qos_limits_min_create (
        priority_threshold ? priority_threshold->valuedouble : 0,
        tres ? tres_local_nonprim : NULL
        );

    return dbv0_0_37_qos_limits_min_local_var;
end:
    if (tres_local_nonprim) {
        dbv0_0_37_qos_limits_min_tres_free(tres_local_nonprim);
        tres_local_nonprim = NULL;
    }
    return NULL;

}
