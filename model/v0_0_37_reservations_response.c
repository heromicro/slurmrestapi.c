#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_37_reservations_response.h"



v0_0_37_reservations_response_t *v0_0_37_reservations_response_create(
    list_t *errors,
    list_t *reservations
    ) {
    v0_0_37_reservations_response_t *v0_0_37_reservations_response_local_var = malloc(sizeof(v0_0_37_reservations_response_t));
    if (!v0_0_37_reservations_response_local_var) {
        return NULL;
    }
    v0_0_37_reservations_response_local_var->errors = errors;
    v0_0_37_reservations_response_local_var->reservations = reservations;

    return v0_0_37_reservations_response_local_var;
}


void v0_0_37_reservations_response_free(v0_0_37_reservations_response_t *v0_0_37_reservations_response) {
    if(NULL == v0_0_37_reservations_response){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_37_reservations_response->errors) {
        list_ForEach(listEntry, v0_0_37_reservations_response->errors) {
            v0_0_37_error_free(listEntry->data);
        }
        list_freeList(v0_0_37_reservations_response->errors);
        v0_0_37_reservations_response->errors = NULL;
    }
    if (v0_0_37_reservations_response->reservations) {
        list_ForEach(listEntry, v0_0_37_reservations_response->reservations) {
            v0_0_37_reservation_free(listEntry->data);
        }
        list_freeList(v0_0_37_reservations_response->reservations);
        v0_0_37_reservations_response->reservations = NULL;
    }
    free(v0_0_37_reservations_response);
}

cJSON *v0_0_37_reservations_response_convertToJSON(v0_0_37_reservations_response_t *v0_0_37_reservations_response) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_37_reservations_response->errors
    if(v0_0_37_reservations_response->errors) {
    cJSON *errors = cJSON_AddArrayToObject(item, "errors");
    if(errors == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *errorsListEntry;
    if (v0_0_37_reservations_response->errors) {
    list_ForEach(errorsListEntry, v0_0_37_reservations_response->errors) {
    cJSON *itemLocal = v0_0_37_error_convertToJSON(errorsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(errors, itemLocal);
    }
    }
    }


    // v0_0_37_reservations_response->reservations
    if(v0_0_37_reservations_response->reservations) {
    cJSON *reservations = cJSON_AddArrayToObject(item, "reservations");
    if(reservations == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *reservationsListEntry;
    if (v0_0_37_reservations_response->reservations) {
    list_ForEach(reservationsListEntry, v0_0_37_reservations_response->reservations) {
    cJSON *itemLocal = v0_0_37_reservation_convertToJSON(reservationsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(reservations, itemLocal);
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

v0_0_37_reservations_response_t *v0_0_37_reservations_response_parseFromJSON(cJSON *v0_0_37_reservations_responseJSON){

    v0_0_37_reservations_response_t *v0_0_37_reservations_response_local_var = NULL;

    // define the local list for v0_0_37_reservations_response->errors
    list_t *errorsList = NULL;

    // define the local list for v0_0_37_reservations_response->reservations
    list_t *reservationsList = NULL;

    // v0_0_37_reservations_response->errors
    cJSON *errors = cJSON_GetObjectItemCaseSensitive(v0_0_37_reservations_responseJSON, "errors");
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

    // v0_0_37_reservations_response->reservations
    cJSON *reservations = cJSON_GetObjectItemCaseSensitive(v0_0_37_reservations_responseJSON, "reservations");
    if (reservations) { 
    cJSON *reservations_local_nonprimitive = NULL;
    if(!cJSON_IsArray(reservations)){
        goto end; //nonprimitive container
    }

    reservationsList = list_createList();

    cJSON_ArrayForEach(reservations_local_nonprimitive,reservations )
    {
        if(!cJSON_IsObject(reservations_local_nonprimitive)){
            goto end;
        }
        v0_0_37_reservation_t *reservationsItem = v0_0_37_reservation_parseFromJSON(reservations_local_nonprimitive);

        list_addElement(reservationsList, reservationsItem);
    }
    }


    v0_0_37_reservations_response_local_var = v0_0_37_reservations_response_create (
        errors ? errorsList : NULL,
        reservations ? reservationsList : NULL
        );

    return v0_0_37_reservations_response_local_var;
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
    if (reservationsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, reservationsList) {
            v0_0_37_reservation_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(reservationsList);
        reservationsList = NULL;
    }
    return NULL;

}
