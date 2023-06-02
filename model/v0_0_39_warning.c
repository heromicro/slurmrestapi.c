#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_warning.h"



v0_0_39_warning_t *v0_0_39_warning_create(
    char *warning,
    char *source,
    char *description
    ) {
    v0_0_39_warning_t *v0_0_39_warning_local_var = malloc(sizeof(v0_0_39_warning_t));
    if (!v0_0_39_warning_local_var) {
        return NULL;
    }
    v0_0_39_warning_local_var->warning = warning;
    v0_0_39_warning_local_var->source = source;
    v0_0_39_warning_local_var->description = description;

    return v0_0_39_warning_local_var;
}


void v0_0_39_warning_free(v0_0_39_warning_t *v0_0_39_warning) {
    if(NULL == v0_0_39_warning){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_warning->warning) {
        free(v0_0_39_warning->warning);
        v0_0_39_warning->warning = NULL;
    }
    if (v0_0_39_warning->source) {
        free(v0_0_39_warning->source);
        v0_0_39_warning->source = NULL;
    }
    if (v0_0_39_warning->description) {
        free(v0_0_39_warning->description);
        v0_0_39_warning->description = NULL;
    }
    free(v0_0_39_warning);
}

cJSON *v0_0_39_warning_convertToJSON(v0_0_39_warning_t *v0_0_39_warning) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_warning->warning
    if(v0_0_39_warning->warning) {
    if(cJSON_AddStringToObject(item, "warning", v0_0_39_warning->warning) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_warning->source
    if(v0_0_39_warning->source) {
    if(cJSON_AddStringToObject(item, "source", v0_0_39_warning->source) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_warning->description
    if(v0_0_39_warning->description) {
    if(cJSON_AddStringToObject(item, "description", v0_0_39_warning->description) == NULL) {
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

v0_0_39_warning_t *v0_0_39_warning_parseFromJSON(cJSON *v0_0_39_warningJSON){

    v0_0_39_warning_t *v0_0_39_warning_local_var = NULL;

    // v0_0_39_warning->warning
    cJSON *warning = cJSON_GetObjectItemCaseSensitive(v0_0_39_warningJSON, "warning");
    if (warning) { 
    if(!cJSON_IsString(warning) && !cJSON_IsNull(warning))
    {
    goto end; //String
    }
    }

    // v0_0_39_warning->source
    cJSON *source = cJSON_GetObjectItemCaseSensitive(v0_0_39_warningJSON, "source");
    if (source) { 
    if(!cJSON_IsString(source) && !cJSON_IsNull(source))
    {
    goto end; //String
    }
    }

    // v0_0_39_warning->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(v0_0_39_warningJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }


    v0_0_39_warning_local_var = v0_0_39_warning_create (
        warning && !cJSON_IsNull(warning) ? strdup(warning->valuestring) : NULL,
        source && !cJSON_IsNull(source) ? strdup(source->valuestring) : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL
        );

    return v0_0_39_warning_local_var;
end:
    return NULL;

}
