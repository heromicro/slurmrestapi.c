#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_38_error.h"



v0_0_38_error_t *v0_0_38_error_create(
    char *error,
    int error_number
    ) {
    v0_0_38_error_t *v0_0_38_error_local_var = malloc(sizeof(v0_0_38_error_t));
    if (!v0_0_38_error_local_var) {
        return NULL;
    }
    v0_0_38_error_local_var->error = error;
    v0_0_38_error_local_var->error_number = error_number;

    return v0_0_38_error_local_var;
}


void v0_0_38_error_free(v0_0_38_error_t *v0_0_38_error) {
    if(NULL == v0_0_38_error){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_38_error->error) {
        free(v0_0_38_error->error);
        v0_0_38_error->error = NULL;
    }
    free(v0_0_38_error);
}

cJSON *v0_0_38_error_convertToJSON(v0_0_38_error_t *v0_0_38_error) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_38_error->error
    if(v0_0_38_error->error) {
    if(cJSON_AddStringToObject(item, "error", v0_0_38_error->error) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_38_error->error_number
    if(v0_0_38_error->error_number) {
    if(cJSON_AddNumberToObject(item, "error_number", v0_0_38_error->error_number) == NULL) {
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

v0_0_38_error_t *v0_0_38_error_parseFromJSON(cJSON *v0_0_38_errorJSON){

    v0_0_38_error_t *v0_0_38_error_local_var = NULL;

    // v0_0_38_error->error
    cJSON *error = cJSON_GetObjectItemCaseSensitive(v0_0_38_errorJSON, "error");
    if (error) { 
    if(!cJSON_IsString(error) && !cJSON_IsNull(error))
    {
    goto end; //String
    }
    }

    // v0_0_38_error->error_number
    cJSON *error_number = cJSON_GetObjectItemCaseSensitive(v0_0_38_errorJSON, "error_number");
    if (error_number) { 
    if(!cJSON_IsNumber(error_number))
    {
    goto end; //Numeric
    }
    }


    v0_0_38_error_local_var = v0_0_38_error_create (
        error && !cJSON_IsNull(error) ? strdup(error->valuestring) : NULL,
        error_number ? error_number->valuedouble : 0
        );

    return v0_0_38_error_local_var;
end:
    return NULL;

}
