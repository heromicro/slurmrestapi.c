#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_accounting.h"



v0_0_39_accounting_t *v0_0_39_accounting_create(
    v0_0_39_accounting_allocated_t *allocated,
    int id,
    long start,
    v0_0_39_tres_t *tres
    ) {
    v0_0_39_accounting_t *v0_0_39_accounting_local_var = malloc(sizeof(v0_0_39_accounting_t));
    if (!v0_0_39_accounting_local_var) {
        return NULL;
    }
    v0_0_39_accounting_local_var->allocated = allocated;
    v0_0_39_accounting_local_var->id = id;
    v0_0_39_accounting_local_var->start = start;
    v0_0_39_accounting_local_var->tres = tres;

    return v0_0_39_accounting_local_var;
}


void v0_0_39_accounting_free(v0_0_39_accounting_t *v0_0_39_accounting) {
    if(NULL == v0_0_39_accounting){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_accounting->allocated) {
        v0_0_39_accounting_allocated_free(v0_0_39_accounting->allocated);
        v0_0_39_accounting->allocated = NULL;
    }
    if (v0_0_39_accounting->tres) {
        v0_0_39_tres_free(v0_0_39_accounting->tres);
        v0_0_39_accounting->tres = NULL;
    }
    free(v0_0_39_accounting);
}

cJSON *v0_0_39_accounting_convertToJSON(v0_0_39_accounting_t *v0_0_39_accounting) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_accounting->allocated
    if(v0_0_39_accounting->allocated) {
    cJSON *allocated_local_JSON = v0_0_39_accounting_allocated_convertToJSON(v0_0_39_accounting->allocated);
    if(allocated_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "allocated", allocated_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_accounting->id
    if(v0_0_39_accounting->id) {
    if(cJSON_AddNumberToObject(item, "id", v0_0_39_accounting->id) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_accounting->start
    if(v0_0_39_accounting->start) {
    if(cJSON_AddNumberToObject(item, "start", v0_0_39_accounting->start) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_accounting->tres
    if(v0_0_39_accounting->tres) {
    cJSON *tres_local_JSON = v0_0_39_tres_convertToJSON(v0_0_39_accounting->tres);
    if(tres_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "TRES", tres_local_JSON);
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

v0_0_39_accounting_t *v0_0_39_accounting_parseFromJSON(cJSON *v0_0_39_accountingJSON){

    v0_0_39_accounting_t *v0_0_39_accounting_local_var = NULL;

    // define the local variable for v0_0_39_accounting->allocated
    v0_0_39_accounting_allocated_t *allocated_local_nonprim = NULL;

    // define the local variable for v0_0_39_accounting->tres
    v0_0_39_tres_t *tres_local_nonprim = NULL;

    // v0_0_39_accounting->allocated
    cJSON *allocated = cJSON_GetObjectItemCaseSensitive(v0_0_39_accountingJSON, "allocated");
    if (allocated) { 
    allocated_local_nonprim = v0_0_39_accounting_allocated_parseFromJSON(allocated); //nonprimitive
    }

    // v0_0_39_accounting->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(v0_0_39_accountingJSON, "id");
    if (id) { 
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_accounting->start
    cJSON *start = cJSON_GetObjectItemCaseSensitive(v0_0_39_accountingJSON, "start");
    if (start) { 
    if(!cJSON_IsNumber(start))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_accounting->tres
    cJSON *tres = cJSON_GetObjectItemCaseSensitive(v0_0_39_accountingJSON, "TRES");
    if (tres) { 
    tres_local_nonprim = v0_0_39_tres_parseFromJSON(tres); //nonprimitive
    }


    v0_0_39_accounting_local_var = v0_0_39_accounting_create (
        allocated ? allocated_local_nonprim : NULL,
        id ? id->valuedouble : 0,
        start ? start->valuedouble : 0,
        tres ? tres_local_nonprim : NULL
        );

    return v0_0_39_accounting_local_var;
end:
    if (allocated_local_nonprim) {
        v0_0_39_accounting_allocated_free(allocated_local_nonprim);
        allocated_local_nonprim = NULL;
    }
    if (tres_local_nonprim) {
        v0_0_39_tres_free(tres_local_nonprim);
        tres_local_nonprim = NULL;
    }
    return NULL;

}
