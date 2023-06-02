#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_association_min.h"



dbv0_0_38_association_min_t *dbv0_0_38_association_min_create(
    int priority_threshold
    ) {
    dbv0_0_38_association_min_t *dbv0_0_38_association_min_local_var = malloc(sizeof(dbv0_0_38_association_min_t));
    if (!dbv0_0_38_association_min_local_var) {
        return NULL;
    }
    dbv0_0_38_association_min_local_var->priority_threshold = priority_threshold;

    return dbv0_0_38_association_min_local_var;
}


void dbv0_0_38_association_min_free(dbv0_0_38_association_min_t *dbv0_0_38_association_min) {
    if(NULL == dbv0_0_38_association_min){
        return ;
    }
    listEntry_t *listEntry;
    free(dbv0_0_38_association_min);
}

cJSON *dbv0_0_38_association_min_convertToJSON(dbv0_0_38_association_min_t *dbv0_0_38_association_min) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_association_min->priority_threshold
    if(dbv0_0_38_association_min->priority_threshold) {
    if(cJSON_AddNumberToObject(item, "priority_threshold", dbv0_0_38_association_min->priority_threshold) == NULL) {
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

dbv0_0_38_association_min_t *dbv0_0_38_association_min_parseFromJSON(cJSON *dbv0_0_38_association_minJSON){

    dbv0_0_38_association_min_t *dbv0_0_38_association_min_local_var = NULL;

    // dbv0_0_38_association_min->priority_threshold
    cJSON *priority_threshold = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_association_minJSON, "priority_threshold");
    if (priority_threshold) { 
    if(!cJSON_IsNumber(priority_threshold))
    {
    goto end; //Numeric
    }
    }


    dbv0_0_38_association_min_local_var = dbv0_0_38_association_min_create (
        priority_threshold ? priority_threshold->valuedouble : 0
        );

    return dbv0_0_38_association_min_local_var;
end:
    return NULL;

}
