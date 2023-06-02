#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_accounting_allocated.h"



v0_0_39_accounting_allocated_t *v0_0_39_accounting_allocated_create(
    long seconds
    ) {
    v0_0_39_accounting_allocated_t *v0_0_39_accounting_allocated_local_var = malloc(sizeof(v0_0_39_accounting_allocated_t));
    if (!v0_0_39_accounting_allocated_local_var) {
        return NULL;
    }
    v0_0_39_accounting_allocated_local_var->seconds = seconds;

    return v0_0_39_accounting_allocated_local_var;
}


void v0_0_39_accounting_allocated_free(v0_0_39_accounting_allocated_t *v0_0_39_accounting_allocated) {
    if(NULL == v0_0_39_accounting_allocated){
        return ;
    }
    listEntry_t *listEntry;
    free(v0_0_39_accounting_allocated);
}

cJSON *v0_0_39_accounting_allocated_convertToJSON(v0_0_39_accounting_allocated_t *v0_0_39_accounting_allocated) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_accounting_allocated->seconds
    if(v0_0_39_accounting_allocated->seconds) {
    if(cJSON_AddNumberToObject(item, "seconds", v0_0_39_accounting_allocated->seconds) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

v0_0_39_accounting_allocated_t *v0_0_39_accounting_allocated_parseFromJSON(cJSON *v0_0_39_accounting_allocatedJSON){

    v0_0_39_accounting_allocated_t *v0_0_39_accounting_allocated_local_var = NULL;

    // v0_0_39_accounting_allocated->seconds
    cJSON *seconds = cJSON_GetObjectItemCaseSensitive(v0_0_39_accounting_allocatedJSON, "seconds");
    if (seconds) { 
    if(!cJSON_IsNumber(seconds))
    {
    goto end; //Numeric
    }
    }


    v0_0_39_accounting_allocated_local_var = v0_0_39_accounting_allocated_create (
        seconds ? seconds->valuedouble : 0
        );

    return v0_0_39_accounting_allocated_local_var;
end:
    return NULL;

}
