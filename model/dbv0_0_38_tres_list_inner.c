#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_tres_list_inner.h"



dbv0_0_38_tres_list_inner_t *dbv0_0_38_tres_list_inner_create(
    char *type,
    char *name,
    int id,
    int count
    ) {
    dbv0_0_38_tres_list_inner_t *dbv0_0_38_tres_list_inner_local_var = malloc(sizeof(dbv0_0_38_tres_list_inner_t));
    if (!dbv0_0_38_tres_list_inner_local_var) {
        return NULL;
    }
    dbv0_0_38_tres_list_inner_local_var->type = type;
    dbv0_0_38_tres_list_inner_local_var->name = name;
    dbv0_0_38_tres_list_inner_local_var->id = id;
    dbv0_0_38_tres_list_inner_local_var->count = count;

    return dbv0_0_38_tres_list_inner_local_var;
}


void dbv0_0_38_tres_list_inner_free(dbv0_0_38_tres_list_inner_t *dbv0_0_38_tres_list_inner) {
    if(NULL == dbv0_0_38_tres_list_inner){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_38_tres_list_inner->type) {
        free(dbv0_0_38_tres_list_inner->type);
        dbv0_0_38_tres_list_inner->type = NULL;
    }
    if (dbv0_0_38_tres_list_inner->name) {
        free(dbv0_0_38_tres_list_inner->name);
        dbv0_0_38_tres_list_inner->name = NULL;
    }
    free(dbv0_0_38_tres_list_inner);
}

cJSON *dbv0_0_38_tres_list_inner_convertToJSON(dbv0_0_38_tres_list_inner_t *dbv0_0_38_tres_list_inner) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_tres_list_inner->type
    if(dbv0_0_38_tres_list_inner->type) {
    if(cJSON_AddStringToObject(item, "type", dbv0_0_38_tres_list_inner->type) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_38_tres_list_inner->name
    if(dbv0_0_38_tres_list_inner->name) {
    if(cJSON_AddStringToObject(item, "name", dbv0_0_38_tres_list_inner->name) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_38_tres_list_inner->id
    if(dbv0_0_38_tres_list_inner->id) {
    if(cJSON_AddNumberToObject(item, "id", dbv0_0_38_tres_list_inner->id) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_38_tres_list_inner->count
    if(dbv0_0_38_tres_list_inner->count) {
    if(cJSON_AddNumberToObject(item, "count", dbv0_0_38_tres_list_inner->count) == NULL) {
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

dbv0_0_38_tres_list_inner_t *dbv0_0_38_tres_list_inner_parseFromJSON(cJSON *dbv0_0_38_tres_list_innerJSON){

    dbv0_0_38_tres_list_inner_t *dbv0_0_38_tres_list_inner_local_var = NULL;

    // dbv0_0_38_tres_list_inner->type
    cJSON *type = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_tres_list_innerJSON, "type");
    if (type) { 
    if(!cJSON_IsString(type) && !cJSON_IsNull(type))
    {
    goto end; //String
    }
    }

    // dbv0_0_38_tres_list_inner->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_tres_list_innerJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // dbv0_0_38_tres_list_inner->id
    cJSON *id = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_tres_list_innerJSON, "id");
    if (id) { 
    if(!cJSON_IsNumber(id))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_38_tres_list_inner->count
    cJSON *count = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_tres_list_innerJSON, "count");
    if (count) { 
    if(!cJSON_IsNumber(count))
    {
    goto end; //Numeric
    }
    }


    dbv0_0_38_tres_list_inner_local_var = dbv0_0_38_tres_list_inner_create (
        type && !cJSON_IsNull(type) ? strdup(type->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        id ? id->valuedouble : 0,
        count ? count->valuedouble : 0
        );

    return dbv0_0_38_tres_list_inner_local_var;
end:
    return NULL;

}
