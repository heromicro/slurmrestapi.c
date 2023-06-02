#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_job_step_step.h"



dbv0_0_38_job_step_step_t *dbv0_0_38_job_step_step_create(
    int job_id,
    dbv0_0_38_job_step_step_het_t *het,
    char *id,
    char *name
    ) {
    dbv0_0_38_job_step_step_t *dbv0_0_38_job_step_step_local_var = malloc(sizeof(dbv0_0_38_job_step_step_t));
    if (!dbv0_0_38_job_step_step_local_var) {
        return NULL;
    }
    dbv0_0_38_job_step_step_local_var->job_id = job_id;
    dbv0_0_38_job_step_step_local_var->het = het;
    dbv0_0_38_job_step_step_local_var->id = id;
    dbv0_0_38_job_step_step_local_var->name = name;

    return dbv0_0_38_job_step_step_local_var;
}


void dbv0_0_38_job_step_step_free(dbv0_0_38_job_step_step_t *dbv0_0_38_job_step_step) {
    if(NULL == dbv0_0_38_job_step_step){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_38_job_step_step->het) {
        dbv0_0_38_job_step_step_het_free(dbv0_0_38_job_step_step->het);
        dbv0_0_38_job_step_step->het = NULL;
    }
    if (dbv0_0_38_job_step_step->id) {
        free(dbv0_0_38_job_step_step->id);
        dbv0_0_38_job_step_step->id = NULL;
    }
    if (dbv0_0_38_job_step_step->name) {
        free(dbv0_0_38_job_step_step->name);
        dbv0_0_38_job_step_step->name = NULL;
    }
    free(dbv0_0_38_job_step_step);
}

cJSON *dbv0_0_38_job_step_step_convertToJSON(dbv0_0_38_job_step_step_t *dbv0_0_38_job_step_step) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_job_step_step->job_id
    if(dbv0_0_38_job_step_step->job_id) {
    if(cJSON_AddNumberToObject(item, "job_id", dbv0_0_38_job_step_step->job_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_38_job_step_step->het
    if(dbv0_0_38_job_step_step->het) {
    cJSON *het_local_JSON = dbv0_0_38_job_step_step_het_convertToJSON(dbv0_0_38_job_step_step->het);
    if(het_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "het", het_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_38_job_step_step->id
    if(dbv0_0_38_job_step_step->id) {
    if(cJSON_AddStringToObject(item, "id", dbv0_0_38_job_step_step->id) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_38_job_step_step->name
    if(dbv0_0_38_job_step_step->name) {
    if(cJSON_AddStringToObject(item, "name", dbv0_0_38_job_step_step->name) == NULL) {
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

dbv0_0_38_job_step_step_t *dbv0_0_38_job_step_step_parseFromJSON(cJSON *dbv0_0_38_job_step_stepJSON){

    dbv0_0_38_job_step_step_t *dbv0_0_38_job_step_step_local_var = NULL;

    // define the local variable for dbv0_0_38_job_step_step->het
    dbv0_0_38_job_step_step_het_t *het_local_nonprim = NULL;

    // dbv0_0_38_job_step_step->job_id
    cJSON *job_id = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_step_stepJSON, "job_id");
    if (job_id) { 
    if(!cJSON_IsNumber(job_id))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_38_job_step_step->het
    cJSON *het = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_step_stepJSON, "het");
    if (het) { 
    het_local_nonprim = dbv0_0_38_job_step_step_het_parseFromJSON(het); //nonprimitive
    }

    // dbv0_0_38_job_step_step->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_step_stepJSON, "id");
    if (id) { 
    if(!cJSON_IsString(id) && !cJSON_IsNull(id))
    {
    goto end; //String
    }
    }

    // dbv0_0_38_job_step_step->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_step_stepJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }


    dbv0_0_38_job_step_step_local_var = dbv0_0_38_job_step_step_create (
        job_id ? job_id->valuedouble : 0,
        het ? het_local_nonprim : NULL,
        id && !cJSON_IsNull(id) ? strdup(id->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL
        );

    return dbv0_0_38_job_step_step_local_var;
end:
    if (het_local_nonprim) {
        dbv0_0_38_job_step_step_het_free(het_local_nonprim);
        het_local_nonprim = NULL;
    }
    return NULL;

}
