#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_qos_limits.h"



dbv0_0_38_qos_limits_t *dbv0_0_38_qos_limits_create(
    double factor,
    dbv0_0_38_qos_limits_max_t *max,
    dbv0_0_38_qos_limits_min_t *min
    ) {
    dbv0_0_38_qos_limits_t *dbv0_0_38_qos_limits_local_var = malloc(sizeof(dbv0_0_38_qos_limits_t));
    if (!dbv0_0_38_qos_limits_local_var) {
        return NULL;
    }
    dbv0_0_38_qos_limits_local_var->factor = factor;
    dbv0_0_38_qos_limits_local_var->max = max;
    dbv0_0_38_qos_limits_local_var->min = min;

    return dbv0_0_38_qos_limits_local_var;
}


void dbv0_0_38_qos_limits_free(dbv0_0_38_qos_limits_t *dbv0_0_38_qos_limits) {
    if(NULL == dbv0_0_38_qos_limits){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_38_qos_limits->max) {
        dbv0_0_38_qos_limits_max_free(dbv0_0_38_qos_limits->max);
        dbv0_0_38_qos_limits->max = NULL;
    }
    if (dbv0_0_38_qos_limits->min) {
        dbv0_0_38_qos_limits_min_free(dbv0_0_38_qos_limits->min);
        dbv0_0_38_qos_limits->min = NULL;
    }
    free(dbv0_0_38_qos_limits);
}

cJSON *dbv0_0_38_qos_limits_convertToJSON(dbv0_0_38_qos_limits_t *dbv0_0_38_qos_limits) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_qos_limits->factor
    if(dbv0_0_38_qos_limits->factor) {
    if(cJSON_AddNumberToObject(item, "factor", dbv0_0_38_qos_limits->factor) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_38_qos_limits->max
    if(dbv0_0_38_qos_limits->max) {
    cJSON *max_local_JSON = dbv0_0_38_qos_limits_max_convertToJSON(dbv0_0_38_qos_limits->max);
    if(max_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "max", max_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_38_qos_limits->min
    if(dbv0_0_38_qos_limits->min) {
    cJSON *min_local_JSON = dbv0_0_38_qos_limits_min_convertToJSON(dbv0_0_38_qos_limits->min);
    if(min_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "min", min_local_JSON);
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

dbv0_0_38_qos_limits_t *dbv0_0_38_qos_limits_parseFromJSON(cJSON *dbv0_0_38_qos_limitsJSON){

    dbv0_0_38_qos_limits_t *dbv0_0_38_qos_limits_local_var = NULL;

    // define the local variable for dbv0_0_38_qos_limits->max
    dbv0_0_38_qos_limits_max_t *max_local_nonprim = NULL;

    // define the local variable for dbv0_0_38_qos_limits->min
    dbv0_0_38_qos_limits_min_t *min_local_nonprim = NULL;

    // dbv0_0_38_qos_limits->factor
    cJSON *factor = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_qos_limitsJSON, "factor");
    if (factor) { 
    if(!cJSON_IsNumber(factor))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_38_qos_limits->max
    cJSON *max = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_qos_limitsJSON, "max");
    if (max) { 
    max_local_nonprim = dbv0_0_38_qos_limits_max_parseFromJSON(max); //nonprimitive
    }

    // dbv0_0_38_qos_limits->min
    cJSON *min = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_qos_limitsJSON, "min");
    if (min) { 
    min_local_nonprim = dbv0_0_38_qos_limits_min_parseFromJSON(min); //nonprimitive
    }


    dbv0_0_38_qos_limits_local_var = dbv0_0_38_qos_limits_create (
        factor ? factor->valuedouble : 0,
        max ? max_local_nonprim : NULL,
        min ? min_local_nonprim : NULL
        );

    return dbv0_0_38_qos_limits_local_var;
end:
    if (max_local_nonprim) {
        dbv0_0_38_qos_limits_max_free(max_local_nonprim);
        max_local_nonprim = NULL;
    }
    if (min_local_nonprim) {
        dbv0_0_38_qos_limits_min_free(min_local_nonprim);
        min_local_nonprim = NULL;
    }
    return NULL;

}
