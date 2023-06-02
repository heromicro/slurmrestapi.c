#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_association_max.h"



dbv0_0_37_association_max_t *dbv0_0_37_association_max_create(
    dbv0_0_37_association_max_jobs_t *jobs,
    dbv0_0_37_association_max_per_t *per,
    dbv0_0_37_association_max_tres_t *tres
    ) {
    dbv0_0_37_association_max_t *dbv0_0_37_association_max_local_var = malloc(sizeof(dbv0_0_37_association_max_t));
    if (!dbv0_0_37_association_max_local_var) {
        return NULL;
    }
    dbv0_0_37_association_max_local_var->jobs = jobs;
    dbv0_0_37_association_max_local_var->per = per;
    dbv0_0_37_association_max_local_var->tres = tres;

    return dbv0_0_37_association_max_local_var;
}


void dbv0_0_37_association_max_free(dbv0_0_37_association_max_t *dbv0_0_37_association_max) {
    if(NULL == dbv0_0_37_association_max){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_37_association_max->jobs) {
        dbv0_0_37_association_max_jobs_free(dbv0_0_37_association_max->jobs);
        dbv0_0_37_association_max->jobs = NULL;
    }
    if (dbv0_0_37_association_max->per) {
        dbv0_0_37_association_max_per_free(dbv0_0_37_association_max->per);
        dbv0_0_37_association_max->per = NULL;
    }
    if (dbv0_0_37_association_max->tres) {
        dbv0_0_37_association_max_tres_free(dbv0_0_37_association_max->tres);
        dbv0_0_37_association_max->tres = NULL;
    }
    free(dbv0_0_37_association_max);
}

cJSON *dbv0_0_37_association_max_convertToJSON(dbv0_0_37_association_max_t *dbv0_0_37_association_max) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_association_max->jobs
    if(dbv0_0_37_association_max->jobs) {
    cJSON *jobs_local_JSON = dbv0_0_37_association_max_jobs_convertToJSON(dbv0_0_37_association_max->jobs);
    if(jobs_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "jobs", jobs_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_37_association_max->per
    if(dbv0_0_37_association_max->per) {
    cJSON *per_local_JSON = dbv0_0_37_association_max_per_convertToJSON(dbv0_0_37_association_max->per);
    if(per_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "per", per_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_37_association_max->tres
    if(dbv0_0_37_association_max->tres) {
    cJSON *tres_local_JSON = dbv0_0_37_association_max_tres_convertToJSON(dbv0_0_37_association_max->tres);
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

dbv0_0_37_association_max_t *dbv0_0_37_association_max_parseFromJSON(cJSON *dbv0_0_37_association_maxJSON){

    dbv0_0_37_association_max_t *dbv0_0_37_association_max_local_var = NULL;

    // define the local variable for dbv0_0_37_association_max->jobs
    dbv0_0_37_association_max_jobs_t *jobs_local_nonprim = NULL;

    // define the local variable for dbv0_0_37_association_max->per
    dbv0_0_37_association_max_per_t *per_local_nonprim = NULL;

    // define the local variable for dbv0_0_37_association_max->tres
    dbv0_0_37_association_max_tres_t *tres_local_nonprim = NULL;

    // dbv0_0_37_association_max->jobs
    cJSON *jobs = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_association_maxJSON, "jobs");
    if (jobs) { 
    jobs_local_nonprim = dbv0_0_37_association_max_jobs_parseFromJSON(jobs); //nonprimitive
    }

    // dbv0_0_37_association_max->per
    cJSON *per = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_association_maxJSON, "per");
    if (per) { 
    per_local_nonprim = dbv0_0_37_association_max_per_parseFromJSON(per); //nonprimitive
    }

    // dbv0_0_37_association_max->tres
    cJSON *tres = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_association_maxJSON, "tres");
    if (tres) { 
    tres_local_nonprim = dbv0_0_37_association_max_tres_parseFromJSON(tres); //nonprimitive
    }


    dbv0_0_37_association_max_local_var = dbv0_0_37_association_max_create (
        jobs ? jobs_local_nonprim : NULL,
        per ? per_local_nonprim : NULL,
        tres ? tres_local_nonprim : NULL
        );

    return dbv0_0_37_association_max_local_var;
end:
    if (jobs_local_nonprim) {
        dbv0_0_37_association_max_jobs_free(jobs_local_nonprim);
        jobs_local_nonprim = NULL;
    }
    if (per_local_nonprim) {
        dbv0_0_37_association_max_per_free(per_local_nonprim);
        per_local_nonprim = NULL;
    }
    if (tres_local_nonprim) {
        dbv0_0_37_association_max_tres_free(tres_local_nonprim);
        tres_local_nonprim = NULL;
    }
    return NULL;

}
