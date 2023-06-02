#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_coordinator_info.h"



dbv0_0_37_coordinator_info_t *dbv0_0_37_coordinator_info_create(
    char *name,
    int direct
    ) {
    dbv0_0_37_coordinator_info_t *dbv0_0_37_coordinator_info_local_var = malloc(sizeof(dbv0_0_37_coordinator_info_t));
    if (!dbv0_0_37_coordinator_info_local_var) {
        return NULL;
    }
    dbv0_0_37_coordinator_info_local_var->name = name;
    dbv0_0_37_coordinator_info_local_var->direct = direct;

    return dbv0_0_37_coordinator_info_local_var;
}


void dbv0_0_37_coordinator_info_free(dbv0_0_37_coordinator_info_t *dbv0_0_37_coordinator_info) {
    if(NULL == dbv0_0_37_coordinator_info){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_37_coordinator_info->name) {
        free(dbv0_0_37_coordinator_info->name);
        dbv0_0_37_coordinator_info->name = NULL;
    }
    free(dbv0_0_37_coordinator_info);
}

cJSON *dbv0_0_37_coordinator_info_convertToJSON(dbv0_0_37_coordinator_info_t *dbv0_0_37_coordinator_info) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_coordinator_info->name
    if(dbv0_0_37_coordinator_info->name) {
    if(cJSON_AddStringToObject(item, "name", dbv0_0_37_coordinator_info->name) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_37_coordinator_info->direct
    if(dbv0_0_37_coordinator_info->direct) {
    if(cJSON_AddNumberToObject(item, "direct", dbv0_0_37_coordinator_info->direct) == NULL) {
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

dbv0_0_37_coordinator_info_t *dbv0_0_37_coordinator_info_parseFromJSON(cJSON *dbv0_0_37_coordinator_infoJSON){

    dbv0_0_37_coordinator_info_t *dbv0_0_37_coordinator_info_local_var = NULL;

    // dbv0_0_37_coordinator_info->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_coordinator_infoJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // dbv0_0_37_coordinator_info->direct
    cJSON *direct = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_coordinator_infoJSON, "direct");
    if (direct) { 
    if(!cJSON_IsNumber(direct))
    {
    goto end; //Numeric
    }
    }


    dbv0_0_37_coordinator_info_local_var = dbv0_0_37_coordinator_info_create (
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        direct ? direct->valuedouble : 0
        );

    return dbv0_0_37_coordinator_info_local_var;
end:
    return NULL;

}
