#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_user_default.h"



v0_0_39_user_default_t *v0_0_39_user_default_create(
    char *wckey
    ) {
    v0_0_39_user_default_t *v0_0_39_user_default_local_var = malloc(sizeof(v0_0_39_user_default_t));
    if (!v0_0_39_user_default_local_var) {
        return NULL;
    }
    v0_0_39_user_default_local_var->wckey = wckey;

    return v0_0_39_user_default_local_var;
}


void v0_0_39_user_default_free(v0_0_39_user_default_t *v0_0_39_user_default) {
    if(NULL == v0_0_39_user_default){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_user_default->wckey) {
        free(v0_0_39_user_default->wckey);
        v0_0_39_user_default->wckey = NULL;
    }
    free(v0_0_39_user_default);
}

cJSON *v0_0_39_user_default_convertToJSON(v0_0_39_user_default_t *v0_0_39_user_default) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_user_default->wckey
    if(v0_0_39_user_default->wckey) {
    if(cJSON_AddStringToObject(item, "wckey", v0_0_39_user_default->wckey) == NULL) {
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

v0_0_39_user_default_t *v0_0_39_user_default_parseFromJSON(cJSON *v0_0_39_user_defaultJSON){

    v0_0_39_user_default_t *v0_0_39_user_default_local_var = NULL;

    // v0_0_39_user_default->wckey
    cJSON *wckey = cJSON_GetObjectItemCaseSensitive(v0_0_39_user_defaultJSON, "wckey");
    if (wckey) { 
    if(!cJSON_IsString(wckey) && !cJSON_IsNull(wckey))
    {
    goto end; //String
    }
    }


    v0_0_39_user_default_local_var = v0_0_39_user_default_create (
        wckey && !cJSON_IsNull(wckey) ? strdup(wckey->valuestring) : NULL
        );

    return v0_0_39_user_default_local_var;
end:
    return NULL;

}
