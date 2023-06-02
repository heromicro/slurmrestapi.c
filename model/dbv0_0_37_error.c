#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_error.h"



dbv0_0_37_error_t *dbv0_0_37_error_create(
    int errno,
    char *error
    ) {
    dbv0_0_37_error_t *dbv0_0_37_error_local_var = malloc(sizeof(dbv0_0_37_error_t));
    if (!dbv0_0_37_error_local_var) {
        return NULL;
    }
    dbv0_0_37_error_local_var->errno = errno;
    dbv0_0_37_error_local_var->error = error;

    return dbv0_0_37_error_local_var;
}


void dbv0_0_37_error_free(dbv0_0_37_error_t *dbv0_0_37_error) {
    if(NULL == dbv0_0_37_error){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_37_error->error) {
        free(dbv0_0_37_error->error);
        dbv0_0_37_error->error = NULL;
    }
    free(dbv0_0_37_error);
}

cJSON *dbv0_0_37_error_convertToJSON(dbv0_0_37_error_t *dbv0_0_37_error) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_error->errno
    if(dbv0_0_37_error->errno) {
    if(cJSON_AddNumberToObject(item, "errno", dbv0_0_37_error->errno) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_37_error->error
    if(dbv0_0_37_error->error) {
    if(cJSON_AddStringToObject(item, "error", dbv0_0_37_error->error) == NULL) {
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

dbv0_0_37_error_t *dbv0_0_37_error_parseFromJSON(cJSON *dbv0_0_37_errorJSON){

    dbv0_0_37_error_t *dbv0_0_37_error_local_var = NULL;

    // dbv0_0_37_error->errno
    cJSON *errno = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_errorJSON, "errno");
    if (errno) { 
    if(!cJSON_IsNumber(errno))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_37_error->error
    cJSON *error = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_errorJSON, "error");
    if (error) { 
    if(!cJSON_IsString(error) && !cJSON_IsNull(error))
    {
    goto end; //String
    }
    }


    dbv0_0_37_error_local_var = dbv0_0_37_error_create (
        errno ? errno->valuedouble : 0,
        error && !cJSON_IsNull(error) ? strdup(error->valuestring) : NULL
        );

    return dbv0_0_37_error_local_var;
end:
    return NULL;

}
