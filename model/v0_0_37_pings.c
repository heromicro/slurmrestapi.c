#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_37_pings.h"



v0_0_37_pings_t *v0_0_37_pings_create(
    list_t *errors,
    list_t *pings
    ) {
    v0_0_37_pings_t *v0_0_37_pings_local_var = malloc(sizeof(v0_0_37_pings_t));
    if (!v0_0_37_pings_local_var) {
        return NULL;
    }
    v0_0_37_pings_local_var->errors = errors;
    v0_0_37_pings_local_var->pings = pings;

    return v0_0_37_pings_local_var;
}


void v0_0_37_pings_free(v0_0_37_pings_t *v0_0_37_pings) {
    if(NULL == v0_0_37_pings){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_37_pings->errors) {
        list_ForEach(listEntry, v0_0_37_pings->errors) {
            v0_0_37_error_free(listEntry->data);
        }
        list_freeList(v0_0_37_pings->errors);
        v0_0_37_pings->errors = NULL;
    }
    if (v0_0_37_pings->pings) {
        list_ForEach(listEntry, v0_0_37_pings->pings) {
            v0_0_37_ping_free(listEntry->data);
        }
        list_freeList(v0_0_37_pings->pings);
        v0_0_37_pings->pings = NULL;
    }
    free(v0_0_37_pings);
}

cJSON *v0_0_37_pings_convertToJSON(v0_0_37_pings_t *v0_0_37_pings) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_37_pings->errors
    if(v0_0_37_pings->errors) {
    cJSON *errors = cJSON_AddArrayToObject(item, "errors");
    if(errors == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *errorsListEntry;
    if (v0_0_37_pings->errors) {
    list_ForEach(errorsListEntry, v0_0_37_pings->errors) {
    cJSON *itemLocal = v0_0_37_error_convertToJSON(errorsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(errors, itemLocal);
    }
    }
    }


    // v0_0_37_pings->pings
    if(v0_0_37_pings->pings) {
    cJSON *pings = cJSON_AddArrayToObject(item, "pings");
    if(pings == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *pingsListEntry;
    if (v0_0_37_pings->pings) {
    list_ForEach(pingsListEntry, v0_0_37_pings->pings) {
    cJSON *itemLocal = v0_0_37_ping_convertToJSON(pingsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(pings, itemLocal);
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

v0_0_37_pings_t *v0_0_37_pings_parseFromJSON(cJSON *v0_0_37_pingsJSON){

    v0_0_37_pings_t *v0_0_37_pings_local_var = NULL;

    // define the local list for v0_0_37_pings->errors
    list_t *errorsList = NULL;

    // define the local list for v0_0_37_pings->pings
    list_t *pingsList = NULL;

    // v0_0_37_pings->errors
    cJSON *errors = cJSON_GetObjectItemCaseSensitive(v0_0_37_pingsJSON, "errors");
    if (errors) { 
    cJSON *errors_local_nonprimitive = NULL;
    if(!cJSON_IsArray(errors)){
        goto end; //nonprimitive container
    }

    errorsList = list_createList();

    cJSON_ArrayForEach(errors_local_nonprimitive,errors )
    {
        if(!cJSON_IsObject(errors_local_nonprimitive)){
            goto end;
        }
        v0_0_37_error_t *errorsItem = v0_0_37_error_parseFromJSON(errors_local_nonprimitive);

        list_addElement(errorsList, errorsItem);
    }
    }

    // v0_0_37_pings->pings
    cJSON *pings = cJSON_GetObjectItemCaseSensitive(v0_0_37_pingsJSON, "pings");
    if (pings) { 
    cJSON *pings_local_nonprimitive = NULL;
    if(!cJSON_IsArray(pings)){
        goto end; //nonprimitive container
    }

    pingsList = list_createList();

    cJSON_ArrayForEach(pings_local_nonprimitive,pings )
    {
        if(!cJSON_IsObject(pings_local_nonprimitive)){
            goto end;
        }
        v0_0_37_ping_t *pingsItem = v0_0_37_ping_parseFromJSON(pings_local_nonprimitive);

        list_addElement(pingsList, pingsItem);
    }
    }


    v0_0_37_pings_local_var = v0_0_37_pings_create (
        errors ? errorsList : NULL,
        pings ? pingsList : NULL
        );

    return v0_0_37_pings_local_var;
end:
    if (errorsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, errorsList) {
            v0_0_37_error_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(errorsList);
        errorsList = NULL;
    }
    if (pingsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, pingsList) {
            v0_0_37_ping_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(pingsList);
        pingsList = NULL;
    }
    return NULL;

}
