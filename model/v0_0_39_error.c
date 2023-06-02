#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_error.h"



v0_0_39_error_t *v0_0_39_error_create(
    int error_number,
    char *error,
    char *source,
    char *description
    ) {
    v0_0_39_error_t *v0_0_39_error_local_var = malloc(sizeof(v0_0_39_error_t));
    if (!v0_0_39_error_local_var) {
        return NULL;
    }
    v0_0_39_error_local_var->error_number = error_number;
    v0_0_39_error_local_var->error = error;
    v0_0_39_error_local_var->source = source;
    v0_0_39_error_local_var->description = description;

    return v0_0_39_error_local_var;
}


void v0_0_39_error_free(v0_0_39_error_t *v0_0_39_error) {
    if(NULL == v0_0_39_error){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_error->error) {
        free(v0_0_39_error->error);
        v0_0_39_error->error = NULL;
    }
    if (v0_0_39_error->source) {
        free(v0_0_39_error->source);
        v0_0_39_error->source = NULL;
    }
    if (v0_0_39_error->description) {
        free(v0_0_39_error->description);
        v0_0_39_error->description = NULL;
    }
    free(v0_0_39_error);
}

cJSON *v0_0_39_error_convertToJSON(v0_0_39_error_t *v0_0_39_error) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_error->error_number
    if(v0_0_39_error->error_number) {
    if(cJSON_AddNumberToObject(item, "error_number", v0_0_39_error->error_number) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_error->error
    if(v0_0_39_error->error) {
    if(cJSON_AddStringToObject(item, "error", v0_0_39_error->error) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_error->source
    if(v0_0_39_error->source) {
    if(cJSON_AddStringToObject(item, "source", v0_0_39_error->source) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_error->description
    if(v0_0_39_error->description) {
    if(cJSON_AddStringToObject(item, "description", v0_0_39_error->description) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

v0_0_39_error_t *v0_0_39_error_parseFromJSON(cJSON *v0_0_39_errorJSON){

    v0_0_39_error_t *v0_0_39_error_local_var = NULL;

    // v0_0_39_error->error_number
    cJSON *error_number = cJSON_GetObjectItemCaseSensitive(v0_0_39_errorJSON, "error_number");
    if (error_number) { 
    if(!cJSON_IsNumber(error_number))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_error->error
    cJSON *error = cJSON_GetObjectItemCaseSensitive(v0_0_39_errorJSON, "error");
    if (error) { 
    if(!cJSON_IsString(error) && !cJSON_IsNull(error))
    {
    goto end; //String
    }
    }

    // v0_0_39_error->source
    cJSON *source = cJSON_GetObjectItemCaseSensitive(v0_0_39_errorJSON, "source");
    if (source) { 
    if(!cJSON_IsString(source) && !cJSON_IsNull(source))
    {
    goto end; //String
    }
    }

    // v0_0_39_error->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(v0_0_39_errorJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    v0_0_39_error_local_var = v0_0_39_error_create (
        error_number ? error_number->valuedouble : 0,
        error && !cJSON_IsNull(error) ? strdup(error->valuestring) : NULL,
        source && !cJSON_IsNull(source) ? strdup(source->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return v0_0_39_error_local_var;
end:
    return NULL;

}
