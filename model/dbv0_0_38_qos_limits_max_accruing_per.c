#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_qos_limits_max_accruing_per.h"



dbv0_0_38_qos_limits_max_accruing_per_t *dbv0_0_38_qos_limits_max_accruing_per_create(
    int account,
    int user
    ) {
    dbv0_0_38_qos_limits_max_accruing_per_t *dbv0_0_38_qos_limits_max_accruing_per_local_var = malloc(sizeof(dbv0_0_38_qos_limits_max_accruing_per_t));
    if (!dbv0_0_38_qos_limits_max_accruing_per_local_var) {
        return NULL;
    }
    dbv0_0_38_qos_limits_max_accruing_per_local_var->account = account;
    dbv0_0_38_qos_limits_max_accruing_per_local_var->user = user;

    return dbv0_0_38_qos_limits_max_accruing_per_local_var;
}


void dbv0_0_38_qos_limits_max_accruing_per_free(dbv0_0_38_qos_limits_max_accruing_per_t *dbv0_0_38_qos_limits_max_accruing_per) {
    if(NULL == dbv0_0_38_qos_limits_max_accruing_per){
        return ;
    }
    listEntry_t *listEntry;
    free(dbv0_0_38_qos_limits_max_accruing_per);
}

cJSON *dbv0_0_38_qos_limits_max_accruing_per_convertToJSON(dbv0_0_38_qos_limits_max_accruing_per_t *dbv0_0_38_qos_limits_max_accruing_per) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_qos_limits_max_accruing_per->account
    if(dbv0_0_38_qos_limits_max_accruing_per->account) {
    if(cJSON_AddNumberToObject(item, "account", dbv0_0_38_qos_limits_max_accruing_per->account) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_38_qos_limits_max_accruing_per->user
    if(dbv0_0_38_qos_limits_max_accruing_per->user) {
    if(cJSON_AddNumberToObject(item, "user", dbv0_0_38_qos_limits_max_accruing_per->user) == NULL) {
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

dbv0_0_38_qos_limits_max_accruing_per_t *dbv0_0_38_qos_limits_max_accruing_per_parseFromJSON(cJSON *dbv0_0_38_qos_limits_max_accruing_perJSON){

    dbv0_0_38_qos_limits_max_accruing_per_t *dbv0_0_38_qos_limits_max_accruing_per_local_var = NULL;

    // dbv0_0_38_qos_limits_max_accruing_per->account
    cJSON *account = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_qos_limits_max_accruing_perJSON, "account");
    if (account) { 
    if(!cJSON_IsNumber(account))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_38_qos_limits_max_accruing_per->user
    cJSON *user = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_qos_limits_max_accruing_perJSON, "user");
    if (user) { 
    if(!cJSON_IsNumber(user))
    {
    goto end; //Numeric
    }
    }


    dbv0_0_38_qos_limits_max_accruing_per_local_var = dbv0_0_38_qos_limits_max_accruing_per_create (
        account ? account->valuedouble : 0,
        user ? user->valuedouble : 0
        );

    return dbv0_0_38_qos_limits_max_accruing_per_local_var;
end:
    return NULL;

}
