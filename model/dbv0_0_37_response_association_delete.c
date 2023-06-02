#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_response_association_delete.h"



dbv0_0_37_response_association_delete_t *dbv0_0_37_response_association_delete_create(
    list_t *errors
    ) {
    dbv0_0_37_response_association_delete_t *dbv0_0_37_response_association_delete_local_var = malloc(sizeof(dbv0_0_37_response_association_delete_t));
    if (!dbv0_0_37_response_association_delete_local_var) {
        return NULL;
    }
    dbv0_0_37_response_association_delete_local_var->errors = errors;

    return dbv0_0_37_response_association_delete_local_var;
}


void dbv0_0_37_response_association_delete_free(dbv0_0_37_response_association_delete_t *dbv0_0_37_response_association_delete) {
    if(NULL == dbv0_0_37_response_association_delete){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_37_response_association_delete->errors) {
        list_ForEach(listEntry, dbv0_0_37_response_association_delete->errors) {
            dbv0_0_37_error_free(listEntry->data);
        }
        list_freeList(dbv0_0_37_response_association_delete->errors);
        dbv0_0_37_response_association_delete->errors = NULL;
    }
    free(dbv0_0_37_response_association_delete);
}

cJSON *dbv0_0_37_response_association_delete_convertToJSON(dbv0_0_37_response_association_delete_t *dbv0_0_37_response_association_delete) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_response_association_delete->errors
    if(dbv0_0_37_response_association_delete->errors) {
    cJSON *errors = cJSON_AddArrayToObject(item, "errors");
    if(errors == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *errorsListEntry;
    if (dbv0_0_37_response_association_delete->errors) {
    list_ForEach(errorsListEntry, dbv0_0_37_response_association_delete->errors) {
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

dbv0_0_37_response_association_delete_t *dbv0_0_37_response_association_delete_parseFromJSON(cJSON *dbv0_0_37_response_association_deleteJSON){

    dbv0_0_37_response_association_delete_t *dbv0_0_37_response_association_delete_local_var = NULL;

    // define the local list for dbv0_0_37_response_association_delete->errors
    list_t *errorsList = NULL;

    // dbv0_0_37_response_association_delete->errors
    cJSON *errors = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_response_association_deleteJSON, "errors");
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


    dbv0_0_37_response_association_delete_local_var = dbv0_0_37_response_association_delete_create (
        errors ? errorsList : NULL
        );

    return dbv0_0_37_response_association_delete_local_var;
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
