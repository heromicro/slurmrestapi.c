#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_error.h"



dbv0_0_38_error_t *dbv0_0_38_error_create(
    int error_number,
    char *error,
    char *source,
    char *description
    ) {
    dbv0_0_38_error_t *dbv0_0_38_error_local_var = malloc(sizeof(dbv0_0_38_error_t));
    if (!dbv0_0_38_error_local_var) {
        return NULL;
    }
    dbv0_0_38_error_local_var->error_number = error_number;
    dbv0_0_38_error_local_var->error = error;
    dbv0_0_38_error_local_var->source = source;
    dbv0_0_38_error_local_var->description = description;

    return dbv0_0_38_error_local_var;
}


void dbv0_0_38_error_free(dbv0_0_38_error_t *dbv0_0_38_error) {
    if(NULL == dbv0_0_38_error){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_38_error->error) {
        free(dbv0_0_38_error->error);
        dbv0_0_38_error->error = NULL;
    }
    if (dbv0_0_38_error->source) {
        free(dbv0_0_38_error->source);
        dbv0_0_38_error->source = NULL;
    }
    if (dbv0_0_38_error->description) {
        free(dbv0_0_38_error->description);
        dbv0_0_38_error->description = NULL;
    }
    free(dbv0_0_38_error);
}

cJSON *dbv0_0_38_error_convertToJSON(dbv0_0_38_error_t *dbv0_0_38_error) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_error->error_number
    if(dbv0_0_38_error->error_number) {
    if(cJSON_AddNumberToObject(item, "error_number", dbv0_0_38_error->error_number) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_38_error->error
    if(dbv0_0_38_error->error) {
    if(cJSON_AddStringToObject(item, "error", dbv0_0_38_error->error) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_38_error->source
    if(dbv0_0_38_error->source) {
    if(cJSON_AddStringToObject(item, "source", dbv0_0_38_error->source) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_38_error->description
    if(dbv0_0_38_error->description) {
    if(cJSON_AddStringToObject(item, "description", dbv0_0_38_error->description) == NULL) {
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

dbv0_0_38_error_t *dbv0_0_38_error_parseFromJSON(cJSON *dbv0_0_38_errorJSON){

    dbv0_0_38_error_t *dbv0_0_38_error_local_var = NULL;

    // dbv0_0_38_error->error_number
    cJSON *error_number = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_errorJSON, "error_number");
    if (error_number) { 
    if(!cJSON_IsNumber(error_number))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_38_error->error
    cJSON *error = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_errorJSON, "error");
    if (error) { 
    if(!cJSON_IsString(error) && !cJSON_IsNull(error))
    {
    goto end; //String
    }
    }

    // dbv0_0_38_error->source
    cJSON *source = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_errorJSON, "source");
    if (source) { 
    if(!cJSON_IsString(source) && !cJSON_IsNull(source))
    {
    goto end; //String
    }
    }

    // dbv0_0_38_error->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_errorJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    dbv0_0_38_error_local_var = dbv0_0_38_error_create (
        error_number ? error_number->valuedouble : 0,
        error && !cJSON_IsNull(error) ? strdup(error->valuestring) : NULL,
        source && !cJSON_IsNull(source) ? strdup(source->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return dbv0_0_38_error_local_var;
end:
    return NULL;

}
