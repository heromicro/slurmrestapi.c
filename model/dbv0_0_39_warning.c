#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_39_warning.h"



dbv0_0_39_warning_t *dbv0_0_39_warning_create(
    char *warning,
    char *source,
    char *description
    ) {
    dbv0_0_39_warning_t *dbv0_0_39_warning_local_var = malloc(sizeof(dbv0_0_39_warning_t));
    if (!dbv0_0_39_warning_local_var) {
        return NULL;
    }
    dbv0_0_39_warning_local_var->warning = warning;
    dbv0_0_39_warning_local_var->source = source;
    dbv0_0_39_warning_local_var->description = description;

    return dbv0_0_39_warning_local_var;
}


void dbv0_0_39_warning_free(dbv0_0_39_warning_t *dbv0_0_39_warning) {
    if(NULL == dbv0_0_39_warning){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_39_warning->warning) {
        free(dbv0_0_39_warning->warning);
        dbv0_0_39_warning->warning = NULL;
    }
    if (dbv0_0_39_warning->source) {
        free(dbv0_0_39_warning->source);
        dbv0_0_39_warning->source = NULL;
    }
    if (dbv0_0_39_warning->description) {
        free(dbv0_0_39_warning->description);
        dbv0_0_39_warning->description = NULL;
    }
    free(dbv0_0_39_warning);
}

cJSON *dbv0_0_39_warning_convertToJSON(dbv0_0_39_warning_t *dbv0_0_39_warning) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_39_warning->warning
    if(dbv0_0_39_warning->warning) {
    if(cJSON_AddStringToObject(item, "warning", dbv0_0_39_warning->warning) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_39_warning->source
    if(dbv0_0_39_warning->source) {
    if(cJSON_AddStringToObject(item, "source", dbv0_0_39_warning->source) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_39_warning->description
    if(dbv0_0_39_warning->description) {
    if(cJSON_AddStringToObject(item, "description", dbv0_0_39_warning->description) == NULL) {
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

dbv0_0_39_warning_t *dbv0_0_39_warning_parseFromJSON(cJSON *dbv0_0_39_warningJSON){

    dbv0_0_39_warning_t *dbv0_0_39_warning_local_var = NULL;

    // dbv0_0_39_warning->warning
    cJSON *warning = cJSON_GetObjectItemCaseSensitive(dbv0_0_39_warningJSON, "warning");
    if (warning) { 
    if(!cJSON_IsString(warning) && !cJSON_IsNull(warning))
    {
    goto end; //String
    }
    }

    // dbv0_0_39_warning->source
    cJSON *source = cJSON_GetObjectItemCaseSensitive(dbv0_0_39_warningJSON, "source");
    if (source) { 
    if(!cJSON_IsString(source) && !cJSON_IsNull(source))
    {
    goto end; //String
    }
    }

    // dbv0_0_39_warning->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(dbv0_0_39_warningJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    dbv0_0_39_warning_local_var = dbv0_0_39_warning_create (
        warning && !cJSON_IsNull(warning) ? strdup(warning->valuestring) : NULL,
        source && !cJSON_IsNull(source) ? strdup(source->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return dbv0_0_39_warning_local_var;
end:
    return NULL;

}
