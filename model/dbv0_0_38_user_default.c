#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_user_default.h"



dbv0_0_38_user_default_t *dbv0_0_38_user_default_create(
    char *account,
    char *wckey
    ) {
    dbv0_0_38_user_default_t *dbv0_0_38_user_default_local_var = malloc(sizeof(dbv0_0_38_user_default_t));
    if (!dbv0_0_38_user_default_local_var) {
        return NULL;
    }
    dbv0_0_38_user_default_local_var->account = account;
    dbv0_0_38_user_default_local_var->wckey = wckey;

    return dbv0_0_38_user_default_local_var;
}


void dbv0_0_38_user_default_free(dbv0_0_38_user_default_t *dbv0_0_38_user_default) {
    if(NULL == dbv0_0_38_user_default){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_38_user_default->account) {
        free(dbv0_0_38_user_default->account);
        dbv0_0_38_user_default->account = NULL;
    }
    if (dbv0_0_38_user_default->wckey) {
        free(dbv0_0_38_user_default->wckey);
        dbv0_0_38_user_default->wckey = NULL;
    }
    free(dbv0_0_38_user_default);
}

cJSON *dbv0_0_38_user_default_convertToJSON(dbv0_0_38_user_default_t *dbv0_0_38_user_default) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_user_default->account
    if(dbv0_0_38_user_default->account) {
    if(cJSON_AddStringToObject(item, "account", dbv0_0_38_user_default->account) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_38_user_default->wckey
    if(dbv0_0_38_user_default->wckey) {
    if(cJSON_AddStringToObject(item, "wckey", dbv0_0_38_user_default->wckey) == NULL) {
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

dbv0_0_38_user_default_t *dbv0_0_38_user_default_parseFromJSON(cJSON *dbv0_0_38_user_defaultJSON){

    dbv0_0_38_user_default_t *dbv0_0_38_user_default_local_var = NULL;

    // dbv0_0_38_user_default->account
    cJSON *account = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_user_defaultJSON, "account");
    if (account) { 
    if(!cJSON_IsString(account) && !cJSON_IsNull(account))
    {
    goto end; //String
    }
    }

    // dbv0_0_38_user_default->wckey
    cJSON *wckey = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_user_defaultJSON, "wckey");
    if (wckey) { 
    if(!cJSON_IsString(wckey) && !cJSON_IsNull(wckey))
    {
    goto end; //String
    }
    }


    dbv0_0_38_user_default_local_var = dbv0_0_38_user_default_create (
        account && !cJSON_IsNull(account) ? strdup(account->valuestring) : NULL,
        wckey && !cJSON_IsNull(wckey) ? strdup(wckey->valuestring) : NULL
        );

    return dbv0_0_38_user_default_local_var;
end:
    return NULL;

}
