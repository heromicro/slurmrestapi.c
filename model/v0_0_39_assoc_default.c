#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_assoc_default.h"



v0_0_39_assoc_default_t *v0_0_39_assoc_default_create(
    char *qos
    ) {
    v0_0_39_assoc_default_t *v0_0_39_assoc_default_local_var = malloc(sizeof(v0_0_39_assoc_default_t));
    if (!v0_0_39_assoc_default_local_var) {
        return NULL;
    }
    v0_0_39_assoc_default_local_var->qos = qos;

    return v0_0_39_assoc_default_local_var;
}


void v0_0_39_assoc_default_free(v0_0_39_assoc_default_t *v0_0_39_assoc_default) {
    if(NULL == v0_0_39_assoc_default){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_assoc_default->qos) {
        free(v0_0_39_assoc_default->qos);
        v0_0_39_assoc_default->qos = NULL;
    }
    free(v0_0_39_assoc_default);
}

cJSON *v0_0_39_assoc_default_convertToJSON(v0_0_39_assoc_default_t *v0_0_39_assoc_default) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_assoc_default->qos
    if(v0_0_39_assoc_default->qos) {
    if(cJSON_AddStringToObject(item, "qos", v0_0_39_assoc_default->qos) == NULL) {
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

v0_0_39_assoc_default_t *v0_0_39_assoc_default_parseFromJSON(cJSON *v0_0_39_assoc_defaultJSON){

    v0_0_39_assoc_default_t *v0_0_39_assoc_default_local_var = NULL;

    // v0_0_39_assoc_default->qos
    cJSON *qos = cJSON_GetObjectItemCaseSensitive(v0_0_39_assoc_defaultJSON, "qos");
    if (qos) { 
    if(!cJSON_IsString(qos) && !cJSON_IsNull(qos))
    {
    goto end; //String
    }
    }


    v0_0_39_assoc_default_local_var = v0_0_39_assoc_default_create (
        qos && !cJSON_IsNull(qos) ? strdup(qos->valuestring) : NULL
        );

    return v0_0_39_assoc_default_local_var;
end:
    return NULL;

}
