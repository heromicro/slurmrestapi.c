#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_job_array_limits.h"



dbv0_0_38_job_array_limits_t *dbv0_0_38_job_array_limits_create(
    dbv0_0_38_job_array_limits_max_t *max
    ) {
    dbv0_0_38_job_array_limits_t *dbv0_0_38_job_array_limits_local_var = malloc(sizeof(dbv0_0_38_job_array_limits_t));
    if (!dbv0_0_38_job_array_limits_local_var) {
        return NULL;
    }
    dbv0_0_38_job_array_limits_local_var->max = max;

    return dbv0_0_38_job_array_limits_local_var;
}


void dbv0_0_38_job_array_limits_free(dbv0_0_38_job_array_limits_t *dbv0_0_38_job_array_limits) {
    if(NULL == dbv0_0_38_job_array_limits){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_38_job_array_limits->max) {
        dbv0_0_38_job_array_limits_max_free(dbv0_0_38_job_array_limits->max);
        dbv0_0_38_job_array_limits->max = NULL;
    }
    free(dbv0_0_38_job_array_limits);
}

cJSON *dbv0_0_38_job_array_limits_convertToJSON(dbv0_0_38_job_array_limits_t *dbv0_0_38_job_array_limits) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_job_array_limits->max
    if(dbv0_0_38_job_array_limits->max) {
    cJSON *max_local_JSON = dbv0_0_38_job_array_limits_max_convertToJSON(dbv0_0_38_job_array_limits->max);
    if(max_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "max", max_local_JSON);
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

dbv0_0_38_job_array_limits_t *dbv0_0_38_job_array_limits_parseFromJSON(cJSON *dbv0_0_38_job_array_limitsJSON){

    dbv0_0_38_job_array_limits_t *dbv0_0_38_job_array_limits_local_var = NULL;

    // define the local variable for dbv0_0_38_job_array_limits->max
    dbv0_0_38_job_array_limits_max_t *max_local_nonprim = NULL;

    // dbv0_0_38_job_array_limits->max
    cJSON *max = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_array_limitsJSON, "max");
    if (max) { 
    max_local_nonprim = dbv0_0_38_job_array_limits_max_parseFromJSON(max); //nonprimitive
    }


    dbv0_0_38_job_array_limits_local_var = dbv0_0_38_job_array_limits_create (
        max ? max_local_nonprim : NULL
        );

    return dbv0_0_38_job_array_limits_local_var;
end:
    if (max_local_nonprim) {
        dbv0_0_38_job_array_limits_max_free(max_local_nonprim);
        max_local_nonprim = NULL;
    }
    return NULL;

}
