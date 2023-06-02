#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_job_step_tres_requested.h"



dbv0_0_38_job_step_tres_requested_t *dbv0_0_38_job_step_tres_requested_create(
    list_t *average,
    list_t *max,
    list_t *min,
    list_t *total
    ) {
    dbv0_0_38_job_step_tres_requested_t *dbv0_0_38_job_step_tres_requested_local_var = malloc(sizeof(dbv0_0_38_job_step_tres_requested_t));
    if (!dbv0_0_38_job_step_tres_requested_local_var) {
        return NULL;
    }
    dbv0_0_38_job_step_tres_requested_local_var->average = average;
    dbv0_0_38_job_step_tres_requested_local_var->max = max;
    dbv0_0_38_job_step_tres_requested_local_var->min = min;
    dbv0_0_38_job_step_tres_requested_local_var->total = total;

    return dbv0_0_38_job_step_tres_requested_local_var;
}


void dbv0_0_38_job_step_tres_requested_free(dbv0_0_38_job_step_tres_requested_t *dbv0_0_38_job_step_tres_requested) {
    if(NULL == dbv0_0_38_job_step_tres_requested){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_38_job_step_tres_requested->average) {
        list_ForEach(listEntry, dbv0_0_38_job_step_tres_requested->average) {
            dbv0_0_38_tres_list_inner_free(listEntry->data);
        }
        list_freeList(dbv0_0_38_job_step_tres_requested->average);
        dbv0_0_38_job_step_tres_requested->average = NULL;
    }
    if (dbv0_0_38_job_step_tres_requested->max) {
        list_ForEach(listEntry, dbv0_0_38_job_step_tres_requested->max) {
            dbv0_0_38_tres_list_inner_free(listEntry->data);
        }
        list_freeList(dbv0_0_38_job_step_tres_requested->max);
        dbv0_0_38_job_step_tres_requested->max = NULL;
    }
    if (dbv0_0_38_job_step_tres_requested->min) {
        list_ForEach(listEntry, dbv0_0_38_job_step_tres_requested->min) {
            dbv0_0_38_tres_list_inner_free(listEntry->data);
        }
        list_freeList(dbv0_0_38_job_step_tres_requested->min);
        dbv0_0_38_job_step_tres_requested->min = NULL;
    }
    if (dbv0_0_38_job_step_tres_requested->total) {
        list_ForEach(listEntry, dbv0_0_38_job_step_tres_requested->total) {
            dbv0_0_38_tres_list_inner_free(listEntry->data);
        }
        list_freeList(dbv0_0_38_job_step_tres_requested->total);
        dbv0_0_38_job_step_tres_requested->total = NULL;
    }
    free(dbv0_0_38_job_step_tres_requested);
}

cJSON *dbv0_0_38_job_step_tres_requested_convertToJSON(dbv0_0_38_job_step_tres_requested_t *dbv0_0_38_job_step_tres_requested) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_job_step_tres_requested->average
    if(dbv0_0_38_job_step_tres_requested->average) {
    cJSON *average = cJSON_AddArrayToObject(item, "average");
    if(average == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *averageListEntry;
    if (dbv0_0_38_job_step_tres_requested->average) {
    list_ForEach(averageListEntry, dbv0_0_38_job_step_tres_requested->average) {
    cJSON *itemLocal = dbv0_0_38_tres_list_inner_convertToJSON(averageListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(average, itemLocal);
    }
    }
    }


    // dbv0_0_38_job_step_tres_requested->max
    if(dbv0_0_38_job_step_tres_requested->max) {
    cJSON *max = cJSON_AddArrayToObject(item, "max");
    if(max == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *maxListEntry;
    if (dbv0_0_38_job_step_tres_requested->max) {
    list_ForEach(maxListEntry, dbv0_0_38_job_step_tres_requested->max) {
    cJSON *itemLocal = dbv0_0_38_tres_list_inner_convertToJSON(maxListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(max, itemLocal);
    }
    }
    }


    // dbv0_0_38_job_step_tres_requested->min
    if(dbv0_0_38_job_step_tres_requested->min) {
    cJSON *min = cJSON_AddArrayToObject(item, "min");
    if(min == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *minListEntry;
    if (dbv0_0_38_job_step_tres_requested->min) {
    list_ForEach(minListEntry, dbv0_0_38_job_step_tres_requested->min) {
    cJSON *itemLocal = dbv0_0_38_tres_list_inner_convertToJSON(minListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(min, itemLocal);
    }
    }
    }


    // dbv0_0_38_job_step_tres_requested->total
    if(dbv0_0_38_job_step_tres_requested->total) {
    cJSON *total = cJSON_AddArrayToObject(item, "total");
    if(total == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *totalListEntry;
    if (dbv0_0_38_job_step_tres_requested->total) {
    list_ForEach(totalListEntry, dbv0_0_38_job_step_tres_requested->total) {
    cJSON *itemLocal = dbv0_0_38_tres_list_inner_convertToJSON(totalListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(total, itemLocal);
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

dbv0_0_38_job_step_tres_requested_t *dbv0_0_38_job_step_tres_requested_parseFromJSON(cJSON *dbv0_0_38_job_step_tres_requestedJSON){

    dbv0_0_38_job_step_tres_requested_t *dbv0_0_38_job_step_tres_requested_local_var = NULL;

    // define the local list for dbv0_0_38_job_step_tres_requested->average
    list_t *averageList = NULL;

    // define the local list for dbv0_0_38_job_step_tres_requested->max
    list_t *maxList = NULL;

    // define the local list for dbv0_0_38_job_step_tres_requested->min
    list_t *minList = NULL;

    // define the local list for dbv0_0_38_job_step_tres_requested->total
    list_t *totalList = NULL;

    // dbv0_0_38_job_step_tres_requested->average
    cJSON *average = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_step_tres_requestedJSON, "average");
    if (average) { 
    cJSON *average_local_nonprimitive = NULL;
    if(!cJSON_IsArray(average)){
        goto end; //nonprimitive container
    }

    averageList = list_createList();

    cJSON_ArrayForEach(average_local_nonprimitive,average )
    {
        if(!cJSON_IsObject(average_local_nonprimitive)){
            goto end;
        }
        dbv0_0_38_tres_list_inner_t *averageItem = dbv0_0_38_tres_list_inner_parseFromJSON(average_local_nonprimitive);

        list_addElement(averageList, averageItem);
    }
    }

    // dbv0_0_38_job_step_tres_requested->max
    cJSON *max = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_step_tres_requestedJSON, "max");
    if (max) { 
    cJSON *max_local_nonprimitive = NULL;
    if(!cJSON_IsArray(max)){
        goto end; //nonprimitive container
    }

    maxList = list_createList();

    cJSON_ArrayForEach(max_local_nonprimitive,max )
    {
        if(!cJSON_IsObject(max_local_nonprimitive)){
            goto end;
        }
        dbv0_0_38_tres_list_inner_t *maxItem = dbv0_0_38_tres_list_inner_parseFromJSON(max_local_nonprimitive);

        list_addElement(maxList, maxItem);
    }
    }

    // dbv0_0_38_job_step_tres_requested->min
    cJSON *min = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_step_tres_requestedJSON, "min");
    if (min) { 
    cJSON *min_local_nonprimitive = NULL;
    if(!cJSON_IsArray(min)){
        goto end; //nonprimitive container
    }

    minList = list_createList();

    cJSON_ArrayForEach(min_local_nonprimitive,min )
    {
        if(!cJSON_IsObject(min_local_nonprimitive)){
            goto end;
        }
        dbv0_0_38_tres_list_inner_t *minItem = dbv0_0_38_tres_list_inner_parseFromJSON(min_local_nonprimitive);

        list_addElement(minList, minItem);
    }
    }

    // dbv0_0_38_job_step_tres_requested->total
    cJSON *total = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_step_tres_requestedJSON, "total");
    if (total) { 
    cJSON *total_local_nonprimitive = NULL;
    if(!cJSON_IsArray(total)){
        goto end; //nonprimitive container
    }

    totalList = list_createList();

    cJSON_ArrayForEach(total_local_nonprimitive,total )
    {
        if(!cJSON_IsObject(total_local_nonprimitive)){
            goto end;
        }
        dbv0_0_38_tres_list_inner_t *totalItem = dbv0_0_38_tres_list_inner_parseFromJSON(total_local_nonprimitive);

        list_addElement(totalList, totalItem);
    }
    }


    dbv0_0_38_job_step_tres_requested_local_var = dbv0_0_38_job_step_tres_requested_create (
        average ? averageList : NULL,
        max ? maxList : NULL,
        min ? minList : NULL,
        total ? totalList : NULL
        );

    return dbv0_0_38_job_step_tres_requested_local_var;
end:
    if (averageList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, averageList) {
            dbv0_0_38_tres_list_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(averageList);
        averageList = NULL;
    }
    if (maxList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, maxList) {
            dbv0_0_38_tres_list_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(maxList);
        maxList = NULL;
    }
    if (minList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, minList) {
            dbv0_0_38_tres_list_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(minList);
        minList = NULL;
    }
    if (totalList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, totalList) {
            dbv0_0_38_tres_list_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(totalList);
        totalList = NULL;
    }
    return NULL;

}
