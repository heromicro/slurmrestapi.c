#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_step_time.h"



v0_0_39_step_time_t *v0_0_39_step_time_create(
    v0_0_39_step_time_user_t *user
    ) {
    v0_0_39_step_time_t *v0_0_39_step_time_local_var = malloc(sizeof(v0_0_39_step_time_t));
    if (!v0_0_39_step_time_local_var) {
        return NULL;
    }
    v0_0_39_step_time_local_var->user = user;

    return v0_0_39_step_time_local_var;
}


void v0_0_39_step_time_free(v0_0_39_step_time_t *v0_0_39_step_time) {
    if(NULL == v0_0_39_step_time){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_step_time->user) {
        v0_0_39_step_time_user_free(v0_0_39_step_time->user);
        v0_0_39_step_time->user = NULL;
    }
    free(v0_0_39_step_time);
}

cJSON *v0_0_39_step_time_convertToJSON(v0_0_39_step_time_t *v0_0_39_step_time) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_step_time->user
    if(v0_0_39_step_time->user) {
    cJSON *user_local_JSON = v0_0_39_step_time_user_convertToJSON(v0_0_39_step_time->user);
    if(user_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "user", user_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

v0_0_39_step_time_t *v0_0_39_step_time_parseFromJSON(cJSON *v0_0_39_step_timeJSON){

    v0_0_39_step_time_t *v0_0_39_step_time_local_var = NULL;

    // define the local variable for v0_0_39_step_time->user
    v0_0_39_step_time_user_t *user_local_nonprim = NULL;

    // v0_0_39_step_time->user
    cJSON *user = cJSON_GetObjectItemCaseSensitive(v0_0_39_step_timeJSON, "user");
    if (user) { 
    user_local_nonprim = v0_0_39_step_time_user_parseFromJSON(user); //nonprimitive
    }


    v0_0_39_step_time_local_var = v0_0_39_step_time_create (
        user ? user_local_nonprim : NULL
        );

    return v0_0_39_step_time_local_var;
end:
    if (user_local_nonprim) {
        v0_0_39_step_time_user_free(user_local_nonprim);
        user_local_nonprim = NULL;
    }
    return NULL;

}
