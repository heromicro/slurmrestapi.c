#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_job_mcs.h"



dbv0_0_38_job_mcs_t *dbv0_0_38_job_mcs_create(
    char *label
    ) {
    dbv0_0_38_job_mcs_t *dbv0_0_38_job_mcs_local_var = malloc(sizeof(dbv0_0_38_job_mcs_t));
    if (!dbv0_0_38_job_mcs_local_var) {
        return NULL;
    }
    dbv0_0_38_job_mcs_local_var->label = label;

    return dbv0_0_38_job_mcs_local_var;
}


void dbv0_0_38_job_mcs_free(dbv0_0_38_job_mcs_t *dbv0_0_38_job_mcs) {
    if(NULL == dbv0_0_38_job_mcs){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_38_job_mcs->label) {
        free(dbv0_0_38_job_mcs->label);
        dbv0_0_38_job_mcs->label = NULL;
    }
    free(dbv0_0_38_job_mcs);
}

cJSON *dbv0_0_38_job_mcs_convertToJSON(dbv0_0_38_job_mcs_t *dbv0_0_38_job_mcs) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_job_mcs->label
    if(dbv0_0_38_job_mcs->label) {
    if(cJSON_AddStringToObject(item, "label", dbv0_0_38_job_mcs->label) == NULL) {
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

dbv0_0_38_job_mcs_t *dbv0_0_38_job_mcs_parseFromJSON(cJSON *dbv0_0_38_job_mcsJSON){

    dbv0_0_38_job_mcs_t *dbv0_0_38_job_mcs_local_var = NULL;

    // dbv0_0_38_job_mcs->label
    cJSON *label = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_mcsJSON, "label");
    if (label) { 
    if(!cJSON_IsString(label) && !cJSON_IsNull(label))
    {
    goto end; //String
    }
    }


    dbv0_0_38_job_mcs_local_var = dbv0_0_38_job_mcs_create (
        label && !cJSON_IsNull(label) ? strdup(label->valuestring) : NULL
        );

    return dbv0_0_38_job_mcs_local_var;
end:
    return NULL;

}
