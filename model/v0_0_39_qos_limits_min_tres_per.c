#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_qos_limits_min_tres_per.h"



v0_0_39_qos_limits_min_tres_per_t *v0_0_39_qos_limits_min_tres_per_create(
    list_t *job
    ) {
    v0_0_39_qos_limits_min_tres_per_t *v0_0_39_qos_limits_min_tres_per_local_var = malloc(sizeof(v0_0_39_qos_limits_min_tres_per_t));
    if (!v0_0_39_qos_limits_min_tres_per_local_var) {
        return NULL;
    }
    v0_0_39_qos_limits_min_tres_per_local_var->job = job;

    return v0_0_39_qos_limits_min_tres_per_local_var;
}


void v0_0_39_qos_limits_min_tres_per_free(v0_0_39_qos_limits_min_tres_per_t *v0_0_39_qos_limits_min_tres_per) {
    if(NULL == v0_0_39_qos_limits_min_tres_per){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_qos_limits_min_tres_per->job) {
        list_ForEach(listEntry, v0_0_39_qos_limits_min_tres_per->job) {
            v0_0_39_tres_free(listEntry->data);
        }
        list_freeList(v0_0_39_qos_limits_min_tres_per->job);
        v0_0_39_qos_limits_min_tres_per->job = NULL;
    }
    free(v0_0_39_qos_limits_min_tres_per);
}

cJSON *v0_0_39_qos_limits_min_tres_per_convertToJSON(v0_0_39_qos_limits_min_tres_per_t *v0_0_39_qos_limits_min_tres_per) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_qos_limits_min_tres_per->job
    if(v0_0_39_qos_limits_min_tres_per->job) {
    cJSON *job = cJSON_AddArrayToObject(item, "job");
    if(job == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *jobListEntry;
    if (v0_0_39_qos_limits_min_tres_per->job) {
    list_ForEach(jobListEntry, v0_0_39_qos_limits_min_tres_per->job) {
    cJSON *itemLocal = v0_0_39_tres_convertToJSON(jobListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(job, itemLocal);
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

v0_0_39_qos_limits_min_tres_per_t *v0_0_39_qos_limits_min_tres_per_parseFromJSON(cJSON *v0_0_39_qos_limits_min_tres_perJSON){

    v0_0_39_qos_limits_min_tres_per_t *v0_0_39_qos_limits_min_tres_per_local_var = NULL;

    // define the local list for v0_0_39_qos_limits_min_tres_per->job
    list_t *jobList = NULL;

    // v0_0_39_qos_limits_min_tres_per->job
    cJSON *job = cJSON_GetObjectItemCaseSensitive(v0_0_39_qos_limits_min_tres_perJSON, "job");
    if (job) { 
    cJSON *job_local_nonprimitive = NULL;
    if(!cJSON_IsArray(job)){
        goto end; //nonprimitive container
    }

    jobList = list_createList();

    cJSON_ArrayForEach(job_local_nonprimitive,job )
    {
        if(!cJSON_IsObject(job_local_nonprimitive)){
            goto end;
        }
        v0_0_39_tres_t *jobItem = v0_0_39_tres_parseFromJSON(job_local_nonprimitive);

        list_addElement(jobList, jobItem);
    }
    }


    v0_0_39_qos_limits_min_tres_per_local_var = v0_0_39_qos_limits_min_tres_per_create (
        job ? jobList : NULL
        );

    return v0_0_39_qos_limits_min_tres_per_local_var;
end:
    if (jobList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, jobList) {
            v0_0_39_tres_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(jobList);
        jobList = NULL;
    }
    return NULL;

}
