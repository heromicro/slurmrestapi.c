#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_association_default.h"



dbv0_0_37_association_default_t *dbv0_0_37_association_default_create(
    char *qos
    ) {
    dbv0_0_37_association_default_t *dbv0_0_37_association_default_local_var = malloc(sizeof(dbv0_0_37_association_default_t));
    if (!dbv0_0_37_association_default_local_var) {
        return NULL;
    }
    dbv0_0_37_association_default_local_var->qos = qos;

    return dbv0_0_37_association_default_local_var;
}


void dbv0_0_37_association_default_free(dbv0_0_37_association_default_t *dbv0_0_37_association_default) {
    if(NULL == dbv0_0_37_association_default){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_37_association_default->qos) {
        free(dbv0_0_37_association_default->qos);
        dbv0_0_37_association_default->qos = NULL;
    }
    free(dbv0_0_37_association_default);
}

cJSON *dbv0_0_37_association_default_convertToJSON(dbv0_0_37_association_default_t *dbv0_0_37_association_default) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_association_default->qos
    if(dbv0_0_37_association_default->qos) {
    if(cJSON_AddStringToObject(item, "qos", dbv0_0_37_association_default->qos) == NULL) {
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

dbv0_0_37_association_default_t *dbv0_0_37_association_default_parseFromJSON(cJSON *dbv0_0_37_association_defaultJSON){

    dbv0_0_37_association_default_t *dbv0_0_37_association_default_local_var = NULL;

    // dbv0_0_37_association_default->qos
    cJSON *qos = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_association_defaultJSON, "qos");
    if (qos) { 
    if(!cJSON_IsString(qos) && !cJSON_IsNull(qos))
    {
    goto end; //String
    }
    }


    dbv0_0_37_association_default_local_var = dbv0_0_37_association_default_create (
        qos && !cJSON_IsNull(qos) ? strdup(qos->valuestring) : NULL
        );

    return dbv0_0_37_association_default_local_var;
end:
    return NULL;

}
