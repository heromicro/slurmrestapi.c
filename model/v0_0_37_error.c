#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_37_error.h"



v0_0_37_error_t *v0_0_37_error_create(
    char *error,
    int errno
    ) {
    v0_0_37_error_t *v0_0_37_error_local_var = malloc(sizeof(v0_0_37_error_t));
    if (!v0_0_37_error_local_var) {
        return NULL;
    }
    v0_0_37_error_local_var->error = error;
    v0_0_37_error_local_var->errno = errno;

    return v0_0_37_error_local_var;
}


void v0_0_37_error_free(v0_0_37_error_t *v0_0_37_error) {
    if(NULL == v0_0_37_error){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_37_error->error) {
        free(v0_0_37_error->error);
        v0_0_37_error->error = NULL;
    }
    free(v0_0_37_error);
}

cJSON *v0_0_37_error_convertToJSON(v0_0_37_error_t *v0_0_37_error) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_37_error->error
    if(v0_0_37_error->error) {
    if(cJSON_AddStringToObject(item, "error", v0_0_37_error->error) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_37_error->errno
    if(v0_0_37_error->errno) {
    if(cJSON_AddNumberToObject(item, "errno", v0_0_37_error->errno) == NULL) {
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

v0_0_37_error_t *v0_0_37_error_parseFromJSON(cJSON *v0_0_37_errorJSON){

    v0_0_37_error_t *v0_0_37_error_local_var = NULL;

    // v0_0_37_error->error
    cJSON *error = cJSON_GetObjectItemCaseSensitive(v0_0_37_errorJSON, "error");
    if (error) { 
    if(!cJSON_IsString(error) && !cJSON_IsNull(error))
    {
    goto end; //String
    }
    }

    // v0_0_37_error->errno
    cJSON *errno = cJSON_GetObjectItemCaseSensitive(v0_0_37_errorJSON, "errno");
    if (errno) { 
    if(!cJSON_IsNumber(errno))
    {
    goto end; //Numeric
    }
    }


    v0_0_37_error_local_var = v0_0_37_error_create (
        error && !cJSON_IsNull(error) ? strdup(error->valuestring) : NULL,
        errno ? errno->valuedouble : 0
        );

    return v0_0_37_error_local_var;
end:
    return NULL;

}
