#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_coord.h"



v0_0_39_coord_t *v0_0_39_coord_create(
    char *name,
    int direct
    ) {
    v0_0_39_coord_t *v0_0_39_coord_local_var = malloc(sizeof(v0_0_39_coord_t));
    if (!v0_0_39_coord_local_var) {
        return NULL;
    }
    v0_0_39_coord_local_var->name = name;
    v0_0_39_coord_local_var->direct = direct;

    return v0_0_39_coord_local_var;
}


void v0_0_39_coord_free(v0_0_39_coord_t *v0_0_39_coord) {
    if(NULL == v0_0_39_coord){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_coord->name) {
        free(v0_0_39_coord->name);
        v0_0_39_coord->name = NULL;
    }
    free(v0_0_39_coord);
}

cJSON *v0_0_39_coord_convertToJSON(v0_0_39_coord_t *v0_0_39_coord) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_coord->name
    if (!v0_0_39_coord->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", v0_0_39_coord->name) == NULL) {
    goto fail; //String
    }


    // v0_0_39_coord->direct
    if(v0_0_39_coord->direct) {
    if(cJSON_AddBoolToObject(item, "direct", v0_0_39_coord->direct) == NULL) {
    goto fail; //Bool
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

v0_0_39_coord_t *v0_0_39_coord_parseFromJSON(cJSON *v0_0_39_coordJSON){

    v0_0_39_coord_t *v0_0_39_coord_local_var = NULL;

    // v0_0_39_coord->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(v0_0_39_coordJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // v0_0_39_coord->direct
    cJSON *direct = cJSON_GetObjectItemCaseSensitive(v0_0_39_coordJSON, "direct");
    if (direct) { 
    if(!cJSON_IsBool(direct))
    {
    goto end; //Bool
    }
    }


    v0_0_39_coord_local_var = v0_0_39_coord_create (
        strdup(name->valuestring),
        direct ? direct->valueint : 0
        );

    return v0_0_39_coord_local_var;
end:
    return NULL;

}
