#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_job_step_cpu.h"



dbv0_0_37_job_step_cpu_t *dbv0_0_37_job_step_cpu_create(
    dbv0_0_37_job_step_cpu_requested_frequency_t *requested_frequency,
    list_t *governor
    ) {
    dbv0_0_37_job_step_cpu_t *dbv0_0_37_job_step_cpu_local_var = malloc(sizeof(dbv0_0_37_job_step_cpu_t));
    if (!dbv0_0_37_job_step_cpu_local_var) {
        return NULL;
    }
    dbv0_0_37_job_step_cpu_local_var->requested_frequency = requested_frequency;
    dbv0_0_37_job_step_cpu_local_var->governor = governor;

    return dbv0_0_37_job_step_cpu_local_var;
}


void dbv0_0_37_job_step_cpu_free(dbv0_0_37_job_step_cpu_t *dbv0_0_37_job_step_cpu) {
    if(NULL == dbv0_0_37_job_step_cpu){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_37_job_step_cpu->requested_frequency) {
        dbv0_0_37_job_step_cpu_requested_frequency_free(dbv0_0_37_job_step_cpu->requested_frequency);
        dbv0_0_37_job_step_cpu->requested_frequency = NULL;
    }
    if (dbv0_0_37_job_step_cpu->governor) {
        list_ForEach(listEntry, dbv0_0_37_job_step_cpu->governor) {
            free(listEntry->data);
        }
        list_freeList(dbv0_0_37_job_step_cpu->governor);
        dbv0_0_37_job_step_cpu->governor = NULL;
    }
    free(dbv0_0_37_job_step_cpu);
}

cJSON *dbv0_0_37_job_step_cpu_convertToJSON(dbv0_0_37_job_step_cpu_t *dbv0_0_37_job_step_cpu) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_job_step_cpu->requested_frequency
    if(dbv0_0_37_job_step_cpu->requested_frequency) {
    cJSON *requested_frequency_local_JSON = dbv0_0_37_job_step_cpu_requested_frequency_convertToJSON(dbv0_0_37_job_step_cpu->requested_frequency);
    if(requested_frequency_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "requested_frequency", requested_frequency_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_37_job_step_cpu->governor
    if(dbv0_0_37_job_step_cpu->governor) {
    cJSON *governor = cJSON_AddArrayToObject(item, "governor");
    if(governor == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *governorListEntry;
    list_ForEach(governorListEntry, dbv0_0_37_job_step_cpu->governor) {
    if(cJSON_AddStringToObject(governor, "", (char*)governorListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

dbv0_0_37_job_step_cpu_t *dbv0_0_37_job_step_cpu_parseFromJSON(cJSON *dbv0_0_37_job_step_cpuJSON){

    dbv0_0_37_job_step_cpu_t *dbv0_0_37_job_step_cpu_local_var = NULL;

    // define the local variable for dbv0_0_37_job_step_cpu->requested_frequency
    dbv0_0_37_job_step_cpu_requested_frequency_t *requested_frequency_local_nonprim = NULL;

    // define the local list for dbv0_0_37_job_step_cpu->governor
    list_t *governorList = NULL;

    // dbv0_0_37_job_step_cpu->requested_frequency
    cJSON *requested_frequency = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_job_step_cpuJSON, "requested_frequency");
    if (requested_frequency) { 
    requested_frequency_local_nonprim = dbv0_0_37_job_step_cpu_requested_frequency_parseFromJSON(requested_frequency); //nonprimitive
    }

    // dbv0_0_37_job_step_cpu->governor
    cJSON *governor = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_job_step_cpuJSON, "governor");
    if (governor) { 
    cJSON *governor_local = NULL;
    if(!cJSON_IsArray(governor)) {
        goto end;//primitive container
    }
    governorList = list_createList();

    cJSON_ArrayForEach(governor_local, governor)
    {
        if(!cJSON_IsString(governor_local))
        {
            goto end;
        }
        list_addElement(governorList , strdup(governor_local->valuestring));
    }
    }


    dbv0_0_37_job_step_cpu_local_var = dbv0_0_37_job_step_cpu_create (
        requested_frequency ? requested_frequency_local_nonprim : NULL,
        governor ? governorList : NULL
        );

    return dbv0_0_37_job_step_cpu_local_var;
end:
    if (requested_frequency_local_nonprim) {
        dbv0_0_37_job_step_cpu_requested_frequency_free(requested_frequency_local_nonprim);
        requested_frequency_local_nonprim = NULL;
    }
    if (governorList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, governorList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(governorList);
        governorList = NULL;
    }
    return NULL;

}
