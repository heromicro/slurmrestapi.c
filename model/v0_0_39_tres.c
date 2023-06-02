#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_tres.h"



v0_0_39_tres_t *v0_0_39_tres_create(
    char *type,
    char *name,
    int id,
    long count
    ) {
    v0_0_39_tres_t *v0_0_39_tres_local_var = malloc(sizeof(v0_0_39_tres_t));
    if (!v0_0_39_tres_local_var) {
        return NULL;
    }
    v0_0_39_tres_local_var->type = type;
    v0_0_39_tres_local_var->name = name;
    v0_0_39_tres_local_var->id = id;
    v0_0_39_tres_local_var->count = count;

    return v0_0_39_tres_local_var;
}


void v0_0_39_tres_free(v0_0_39_tres_t *v0_0_39_tres) {
    if(NULL == v0_0_39_tres){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_tres->type) {
        free(v0_0_39_tres->type);
        v0_0_39_tres->type = NULL;
    }
    if (v0_0_39_tres->name) {
        free(v0_0_39_tres->name);
        v0_0_39_tres->name = NULL;
    }
    free(v0_0_39_tres);
}

cJSON *v0_0_39_tres_convertToJSON(v0_0_39_tres_t *v0_0_39_tres) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_tres->type
    if (!v0_0_39_tres->type) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "type", v0_0_39_tres->type) == NULL) {
    goto fail; //String
    }


    // v0_0_39_tres->name
    if(v0_0_39_tres->name) {
    if(cJSON_AddStringToObject(item, "name", v0_0_39_tres->name) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_tres->id
    if(v0_0_39_tres->id) {
    if(cJSON_AddNumberToObject(item, "id", v0_0_39_tres->id) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_tres->count
    if(v0_0_39_tres->count) {
    if(cJSON_AddNumberToObject(item, "count", v0_0_39_tres->count) == NULL) {
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

v0_0_39_tres_t *v0_0_39_tres_parseFromJSON(cJSON *v0_0_39_tresJSON){

    v0_0_39_tres_t *v0_0_39_tres_local_var = NULL;

    // v0_0_39_tres->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(v0_0_39_tresJSON, "type");
    if (!type) {
        goto end;
    }

    
    if(!cJSON_IsString(type))
    {
    goto end; //String
    }

    // v0_0_39_tres->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(v0_0_39_tresJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // v0_0_39_tres->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(v0_0_39_tresJSON, "id");
    if (id) { 
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_tres->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(v0_0_39_tresJSON, "count");
    if (count) { 
    if(!cJSON_IsNumber(count))
    {
    goto end; //Numeric
    }
    }


    v0_0_39_tres_local_var = v0_0_39_tres_create (
        strdup(type->valuestring),
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        id ? id->valuedouble : 0,
        count ? count->valuedouble : 0
        );

    return v0_0_39_tres_local_var;
end:
    return NULL;

}
