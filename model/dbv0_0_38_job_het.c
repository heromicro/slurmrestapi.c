#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_job_het.h"



dbv0_0_38_job_het_t *dbv0_0_38_job_het_create(
    int job_id,
    int job_offset
    ) {
    dbv0_0_38_job_het_t *dbv0_0_38_job_het_local_var = malloc(sizeof(dbv0_0_38_job_het_t));
    if (!dbv0_0_38_job_het_local_var) {
        return NULL;
    }
    dbv0_0_38_job_het_local_var->job_id = job_id;
    dbv0_0_38_job_het_local_var->job_offset = job_offset;

    return dbv0_0_38_job_het_local_var;
}


void dbv0_0_38_job_het_free(dbv0_0_38_job_het_t *dbv0_0_38_job_het) {
    if(NULL == dbv0_0_38_job_het){
        return ;
    }
    listEntry_t *listEntry;
    free(dbv0_0_38_job_het);
}

cJSON *dbv0_0_38_job_het_convertToJSON(dbv0_0_38_job_het_t *dbv0_0_38_job_het) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_job_het->job_id
    if(dbv0_0_38_job_het->job_id) {
    if(cJSON_AddNumberToObject(item, "job_id", dbv0_0_38_job_het->job_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_38_job_het->job_offset
    if(dbv0_0_38_job_het->job_offset) {
    if(cJSON_AddNumberToObject(item, "job_offset", dbv0_0_38_job_het->job_offset) == NULL) {
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

dbv0_0_38_job_het_t *dbv0_0_38_job_het_parseFromJSON(cJSON *dbv0_0_38_job_hetJSON){

    dbv0_0_38_job_het_t *dbv0_0_38_job_het_local_var = NULL;

    // dbv0_0_38_job_het->job_id
    cJSON *job_id = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_hetJSON, "job_id");
    if (job_id) { 
    if(!cJSON_IsNumber(job_id))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_38_job_het->job_offset
    cJSON *job_offset = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_hetJSON, "job_offset");
    if (job_offset) { 
    if(!cJSON_IsNumber(job_offset))
    {
    goto end; //Numeric
    }
    }


    dbv0_0_38_job_het_local_var = dbv0_0_38_job_het_create (
        job_id ? job_id->valuedouble : 0,
        job_offset ? job_offset->valuedouble : 0
        );

    return dbv0_0_38_job_het_local_var;
end:
    return NULL;

}
