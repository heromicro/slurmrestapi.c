#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_association_max_per_account.h"



dbv0_0_37_association_max_per_account_t *dbv0_0_37_association_max_per_account_create(
    int wall_clock
    ) {
    dbv0_0_37_association_max_per_account_t *dbv0_0_37_association_max_per_account_local_var = malloc(sizeof(dbv0_0_37_association_max_per_account_t));
    if (!dbv0_0_37_association_max_per_account_local_var) {
        return NULL;
    }
    dbv0_0_37_association_max_per_account_local_var->wall_clock = wall_clock;

    return dbv0_0_37_association_max_per_account_local_var;
}


void dbv0_0_37_association_max_per_account_free(dbv0_0_37_association_max_per_account_t *dbv0_0_37_association_max_per_account) {
    if(NULL == dbv0_0_37_association_max_per_account){
        return ;
    }
    listEntry_t *listEntry;
    free(dbv0_0_37_association_max_per_account);
}

cJSON *dbv0_0_37_association_max_per_account_convertToJSON(dbv0_0_37_association_max_per_account_t *dbv0_0_37_association_max_per_account) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_association_max_per_account->wall_clock
    if(dbv0_0_37_association_max_per_account->wall_clock) {
    if(cJSON_AddNumberToObject(item, "wall_clock", dbv0_0_37_association_max_per_account->wall_clock) == NULL) {
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

dbv0_0_37_association_max_per_account_t *dbv0_0_37_association_max_per_account_parseFromJSON(cJSON *dbv0_0_37_association_max_per_accountJSON){

    dbv0_0_37_association_max_per_account_t *dbv0_0_37_association_max_per_account_local_var = NULL;

    // dbv0_0_37_association_max_per_account->wall_clock
    cJSON *wall_clock = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_association_max_per_accountJSON, "wall_clock");
    if (wall_clock) { 
    if(!cJSON_IsNumber(wall_clock))
    {
    goto end; //Numeric
    }
    }


    dbv0_0_37_association_max_per_account_local_var = dbv0_0_37_association_max_per_account_create (
        wall_clock ? wall_clock->valuedouble : 0
        );

    return dbv0_0_37_association_max_per_account_local_var;
end:
    return NULL;

}
