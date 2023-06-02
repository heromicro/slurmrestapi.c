#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_job_het.h"



dbv0_0_37_job_het_t *dbv0_0_37_job_het_create(
    object_t *job_id,
    object_t *job_offset
    ) {
    dbv0_0_37_job_het_t *dbv0_0_37_job_het_local_var = malloc(sizeof(dbv0_0_37_job_het_t));
    if (!dbv0_0_37_job_het_local_var) {
        return NULL;
    }
    dbv0_0_37_job_het_local_var->job_id = job_id;
    dbv0_0_37_job_het_local_var->job_offset = job_offset;

    return dbv0_0_37_job_het_local_var;
}


void dbv0_0_37_job_het_free(dbv0_0_37_job_het_t *dbv0_0_37_job_het) {
    if(NULL == dbv0_0_37_job_het){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_37_job_het->job_id) {
        object_free(dbv0_0_37_job_het->job_id);
        dbv0_0_37_job_het->job_id = NULL;
    }
    if (dbv0_0_37_job_het->job_offset) {
        object_free(dbv0_0_37_job_het->job_offset);
        dbv0_0_37_job_het->job_offset = NULL;
    }
    free(dbv0_0_37_job_het);
}

cJSON *dbv0_0_37_job_het_convertToJSON(dbv0_0_37_job_het_t *dbv0_0_37_job_het) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_job_het->job_id
    if(dbv0_0_37_job_het->job_id) {
    cJSON *job_id_object = object_convertToJSON(dbv0_0_37_job_het->job_id);
    if(job_id_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "job_id", job_id_object);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_37_job_het->job_offset
    if(dbv0_0_37_job_het->job_offset) {
    cJSON *job_offset_object = object_convertToJSON(dbv0_0_37_job_het->job_offset);
    if(job_offset_object == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "job_offset", job_offset_object);
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

dbv0_0_37_job_het_t *dbv0_0_37_job_het_parseFromJSON(cJSON *dbv0_0_37_job_hetJSON){

    dbv0_0_37_job_het_t *dbv0_0_37_job_het_local_var = NULL;

    // dbv0_0_37_job_het->job_id
    cJSON *job_id = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_job_hetJSON, "job_id");
    object_t *job_id_local_object = NULL;
    if (job_id) { 
    job_id_local_object = object_parseFromJSON(job_id); //object
    }

    // dbv0_0_37_job_het->job_offset
    cJSON *job_offset = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_job_hetJSON, "job_offset");
    object_t *job_offset_local_object = NULL;
    if (job_offset) { 
    job_offset_local_object = object_parseFromJSON(job_offset); //object
    }


    dbv0_0_37_job_het_local_var = dbv0_0_37_job_het_create (
        job_id ? job_id_local_object : NULL,
        job_offset ? job_offset_local_object : NULL
        );

    return dbv0_0_37_job_het_local_var;
end:
    return NULL;

}
