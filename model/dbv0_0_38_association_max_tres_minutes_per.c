#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_association_max_tres_minutes_per.h"



dbv0_0_38_association_max_tres_minutes_per_t *dbv0_0_38_association_max_tres_minutes_per_create(
    list_t *job
    ) {
    dbv0_0_38_association_max_tres_minutes_per_t *dbv0_0_38_association_max_tres_minutes_per_local_var = malloc(sizeof(dbv0_0_38_association_max_tres_minutes_per_t));
    if (!dbv0_0_38_association_max_tres_minutes_per_local_var) {
        return NULL;
    }
    dbv0_0_38_association_max_tres_minutes_per_local_var->job = job;

    return dbv0_0_38_association_max_tres_minutes_per_local_var;
}


void dbv0_0_38_association_max_tres_minutes_per_free(dbv0_0_38_association_max_tres_minutes_per_t *dbv0_0_38_association_max_tres_minutes_per) {
    if(NULL == dbv0_0_38_association_max_tres_minutes_per){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_38_association_max_tres_minutes_per->job) {
        list_ForEach(listEntry, dbv0_0_38_association_max_tres_minutes_per->job) {
            dbv0_0_38_tres_list_inner_free(listEntry->data);
        }
        list_freeList(dbv0_0_38_association_max_tres_minutes_per->job);
        dbv0_0_38_association_max_tres_minutes_per->job = NULL;
    }
    free(dbv0_0_38_association_max_tres_minutes_per);
}

cJSON *dbv0_0_38_association_max_tres_minutes_per_convertToJSON(dbv0_0_38_association_max_tres_minutes_per_t *dbv0_0_38_association_max_tres_minutes_per) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_association_max_tres_minutes_per->job
    if(dbv0_0_38_association_max_tres_minutes_per->job) {
    cJSON *job = cJSON_AddArrayToObject(item, "job");
    if(job == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *jobListEntry;
    if (dbv0_0_38_association_max_tres_minutes_per->job) {
    list_ForEach(jobListEntry, dbv0_0_38_association_max_tres_minutes_per->job) {
    cJSON *itemLocal = dbv0_0_38_tres_list_inner_convertToJSON(jobListEntry->data);
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

dbv0_0_38_association_max_tres_minutes_per_t *dbv0_0_38_association_max_tres_minutes_per_parseFromJSON(cJSON *dbv0_0_38_association_max_tres_minutes_perJSON){

    dbv0_0_38_association_max_tres_minutes_per_t *dbv0_0_38_association_max_tres_minutes_per_local_var = NULL;

    // define the local list for dbv0_0_38_association_max_tres_minutes_per->job
    list_t *jobList = NULL;

    // dbv0_0_38_association_max_tres_minutes_per->job
    cJSON *job = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_association_max_tres_minutes_perJSON, "job");
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
        dbv0_0_38_tres_list_inner_t *jobItem = dbv0_0_38_tres_list_inner_parseFromJSON(job_local_nonprimitive);

        list_addElement(jobList, jobItem);
    }
    }


    dbv0_0_38_association_max_tres_minutes_per_local_var = dbv0_0_38_association_max_tres_minutes_per_create (
        job ? jobList : NULL
        );

    return dbv0_0_38_association_max_tres_minutes_per_local_var;
end:
    if (jobList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, jobList) {
            dbv0_0_38_tres_list_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(jobList);
        jobList = NULL;
    }
    return NULL;

}
