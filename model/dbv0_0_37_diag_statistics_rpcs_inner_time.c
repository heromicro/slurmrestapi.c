#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_diag_statistics_rpcs_inner_time.h"



dbv0_0_37_diag_statistics_rpcs_inner_time_t *dbv0_0_37_diag_statistics_rpcs_inner_time_create(
    int average,
    int total
    ) {
    dbv0_0_37_diag_statistics_rpcs_inner_time_t *dbv0_0_37_diag_statistics_rpcs_inner_time_local_var = malloc(sizeof(dbv0_0_37_diag_statistics_rpcs_inner_time_t));
    if (!dbv0_0_37_diag_statistics_rpcs_inner_time_local_var) {
        return NULL;
    }
    dbv0_0_37_diag_statistics_rpcs_inner_time_local_var->average = average;
    dbv0_0_37_diag_statistics_rpcs_inner_time_local_var->total = total;

    return dbv0_0_37_diag_statistics_rpcs_inner_time_local_var;
}


void dbv0_0_37_diag_statistics_rpcs_inner_time_free(dbv0_0_37_diag_statistics_rpcs_inner_time_t *dbv0_0_37_diag_statistics_rpcs_inner_time) {
    if(NULL == dbv0_0_37_diag_statistics_rpcs_inner_time){
        return ;
    }
    listEntry_t *listEntry;
    free(dbv0_0_37_diag_statistics_rpcs_inner_time);
}

cJSON *dbv0_0_37_diag_statistics_rpcs_inner_time_convertToJSON(dbv0_0_37_diag_statistics_rpcs_inner_time_t *dbv0_0_37_diag_statistics_rpcs_inner_time) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_diag_statistics_rpcs_inner_time->average
    if(dbv0_0_37_diag_statistics_rpcs_inner_time->average) {
    if(cJSON_AddNumberToObject(item, "average", dbv0_0_37_diag_statistics_rpcs_inner_time->average) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_37_diag_statistics_rpcs_inner_time->total
    if(dbv0_0_37_diag_statistics_rpcs_inner_time->total) {
    if(cJSON_AddNumberToObject(item, "total", dbv0_0_37_diag_statistics_rpcs_inner_time->total) == NULL) {
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

dbv0_0_37_diag_statistics_rpcs_inner_time_t *dbv0_0_37_diag_statistics_rpcs_inner_time_parseFromJSON(cJSON *dbv0_0_37_diag_statistics_rpcs_inner_timeJSON){

    dbv0_0_37_diag_statistics_rpcs_inner_time_t *dbv0_0_37_diag_statistics_rpcs_inner_time_local_var = NULL;

    // dbv0_0_37_diag_statistics_rpcs_inner_time->average
    cJSON *average = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_diag_statistics_rpcs_inner_timeJSON, "average");
    if (average) { 
    if(!cJSON_IsNumber(average))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_37_diag_statistics_rpcs_inner_time->total
    cJSON *total = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_diag_statistics_rpcs_inner_timeJSON, "total");
    if (total) { 
    if(!cJSON_IsNumber(total))
    {
    goto end; //Numeric
    }
    }


    dbv0_0_37_diag_statistics_rpcs_inner_time_local_var = dbv0_0_37_diag_statistics_rpcs_inner_time_create (
        average ? average->valuedouble : 0,
        total ? total->valuedouble : 0
        );

    return dbv0_0_37_diag_statistics_rpcs_inner_time_local_var;
end:
    return NULL;

}
