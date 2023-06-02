#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_response_tres.h"



dbv0_0_37_response_tres_t *dbv0_0_37_response_tres_create(
    list_t *errors
    ) {
    dbv0_0_37_response_tres_t *dbv0_0_37_response_tres_local_var = malloc(sizeof(dbv0_0_37_response_tres_t));
    if (!dbv0_0_37_response_tres_local_var) {
        return NULL;
    }
    dbv0_0_37_response_tres_local_var->errors = errors;

    return dbv0_0_37_response_tres_local_var;
}


void dbv0_0_37_response_tres_free(dbv0_0_37_response_tres_t *dbv0_0_37_response_tres) {
    if(NULL == dbv0_0_37_response_tres){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_37_response_tres->errors) {
        list_ForEach(listEntry, dbv0_0_37_response_tres->errors) {
            dbv0_0_37_error_free(listEntry->data);
        }
        list_freeList(dbv0_0_37_response_tres->errors);
        dbv0_0_37_response_tres->errors = NULL;
    }
    free(dbv0_0_37_response_tres);
}

cJSON *dbv0_0_37_response_tres_convertToJSON(dbv0_0_37_response_tres_t *dbv0_0_37_response_tres) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_response_tres->errors
    if(dbv0_0_37_response_tres->errors) {
    cJSON *errors = cJSON_AddArrayToObject(item, "errors");
    if(errors == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *errorsListEntry;
    if (dbv0_0_37_response_tres->errors) {
    list_ForEach(errorsListEntry, dbv0_0_37_response_tres->errors) {
    cJSON *itemLocal = dbv0_0_37_error_convertToJSON(errorsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(errors, itemLocal);
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

dbv0_0_37_response_tres_t *dbv0_0_37_response_tres_parseFromJSON(cJSON *dbv0_0_37_response_tresJSON){

    dbv0_0_37_response_tres_t *dbv0_0_37_response_tres_local_var = NULL;

    // define the local list for dbv0_0_37_response_tres->errors
    list_t *errorsList = NULL;

    // dbv0_0_37_response_tres->errors
    cJSON *errors = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_response_tresJSON, "errors");
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
        dbv0_0_37_error_t *errorsItem = dbv0_0_37_error_parseFromJSON(errors_local_nonprimitive);

        list_addElement(errorsList, errorsItem);
    }
    }


    dbv0_0_37_response_tres_local_var = dbv0_0_37_response_tres_create (
        errors ? errorsList : NULL
        );

    return dbv0_0_37_response_tres_local_var;
end:
    if (errorsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, errorsList) {
            dbv0_0_37_error_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(errorsList);
        errorsList = NULL;
    }
    return NULL;

}
