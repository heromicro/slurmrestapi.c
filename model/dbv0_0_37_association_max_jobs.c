#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_association_max_jobs.h"



dbv0_0_37_association_max_jobs_t *dbv0_0_37_association_max_jobs_create(
    int active,
    int accruing,
    int total,
    dbv0_0_37_association_max_jobs_per_t *per
    ) {
    dbv0_0_37_association_max_jobs_t *dbv0_0_37_association_max_jobs_local_var = malloc(sizeof(dbv0_0_37_association_max_jobs_t));
    if (!dbv0_0_37_association_max_jobs_local_var) {
        return NULL;
    }
    dbv0_0_37_association_max_jobs_local_var->active = active;
    dbv0_0_37_association_max_jobs_local_var->accruing = accruing;
    dbv0_0_37_association_max_jobs_local_var->total = total;
    dbv0_0_37_association_max_jobs_local_var->per = per;

    return dbv0_0_37_association_max_jobs_local_var;
}


void dbv0_0_37_association_max_jobs_free(dbv0_0_37_association_max_jobs_t *dbv0_0_37_association_max_jobs) {
    if(NULL == dbv0_0_37_association_max_jobs){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_37_association_max_jobs->per) {
        dbv0_0_37_association_max_jobs_per_free(dbv0_0_37_association_max_jobs->per);
        dbv0_0_37_association_max_jobs->per = NULL;
    }
    free(dbv0_0_37_association_max_jobs);
}

cJSON *dbv0_0_37_association_max_jobs_convertToJSON(dbv0_0_37_association_max_jobs_t *dbv0_0_37_association_max_jobs) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_association_max_jobs->active
    if(dbv0_0_37_association_max_jobs->active) {
    if(cJSON_AddNumberToObject(item, "active", dbv0_0_37_association_max_jobs->active) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_37_association_max_jobs->accruing
    if(dbv0_0_37_association_max_jobs->accruing) {
    if(cJSON_AddNumberToObject(item, "accruing", dbv0_0_37_association_max_jobs->accruing) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_37_association_max_jobs->total
    if(dbv0_0_37_association_max_jobs->total) {
    if(cJSON_AddNumberToObject(item, "total", dbv0_0_37_association_max_jobs->total) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_37_association_max_jobs->per
    if(dbv0_0_37_association_max_jobs->per) {
    cJSON *per_local_JSON = dbv0_0_37_association_max_jobs_per_convertToJSON(dbv0_0_37_association_max_jobs->per);
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

dbv0_0_37_association_max_jobs_t *dbv0_0_37_association_max_jobs_parseFromJSON(cJSON *dbv0_0_37_association_max_jobsJSON){

    dbv0_0_37_association_max_jobs_t *dbv0_0_37_association_max_jobs_local_var = NULL;

    // define the local variable for dbv0_0_37_association_max_jobs->per
    dbv0_0_37_association_max_jobs_per_t *per_local_nonprim = NULL;

    // dbv0_0_37_association_max_jobs->active
    cJSON *active = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_association_max_jobsJSON, "active");
    if (active) { 
    if(!cJSON_IsNumber(active))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_37_association_max_jobs->accruing
    cJSON *accruing = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_association_max_jobsJSON, "accruing");
    if (accruing) { 
    if(!cJSON_IsNumber(accruing))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_37_association_max_jobs->total
    cJSON *total = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_association_max_jobsJSON, "total");
    if (total) { 
    if(!cJSON_IsNumber(total))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_37_association_max_jobs->per
    cJSON *per = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_association_max_jobsJSON, "per");
    if (per) { 
    per_local_nonprim = dbv0_0_37_association_max_jobs_per_parseFromJSON(per); //nonprimitive
    }


    dbv0_0_37_association_max_jobs_local_var = dbv0_0_37_association_max_jobs_create (
        active ? active->valuedouble : 0,
        accruing ? accruing->valuedouble : 0,
        total ? total->valuedouble : 0,
        per ? per_local_nonprim : NULL
        );

    return dbv0_0_37_association_max_jobs_local_var;
end:
    if (per_local_nonprim) {
        dbv0_0_37_association_max_jobs_per_free(per_local_nonprim);
        per_local_nonprim = NULL;
    }
    return NULL;

}
