#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_partition_info_accounts.h"



v0_0_39_partition_info_accounts_t *v0_0_39_partition_info_accounts_create(
    char *deny
    ) {
    v0_0_39_partition_info_accounts_t *v0_0_39_partition_info_accounts_local_var = malloc(sizeof(v0_0_39_partition_info_accounts_t));
    if (!v0_0_39_partition_info_accounts_local_var) {
        return NULL;
    }
    v0_0_39_partition_info_accounts_local_var->deny = deny;

    return v0_0_39_partition_info_accounts_local_var;
}


void v0_0_39_partition_info_accounts_free(v0_0_39_partition_info_accounts_t *v0_0_39_partition_info_accounts) {
    if(NULL == v0_0_39_partition_info_accounts){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_partition_info_accounts->deny) {
        free(v0_0_39_partition_info_accounts->deny);
        v0_0_39_partition_info_accounts->deny = NULL;
    }
    free(v0_0_39_partition_info_accounts);
}

cJSON *v0_0_39_partition_info_accounts_convertToJSON(v0_0_39_partition_info_accounts_t *v0_0_39_partition_info_accounts) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_partition_info_accounts->deny
    if(v0_0_39_partition_info_accounts->deny) {
    if(cJSON_AddStringToObject(item, "deny", v0_0_39_partition_info_accounts->deny) == NULL) {
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

v0_0_39_partition_info_accounts_t *v0_0_39_partition_info_accounts_parseFromJSON(cJSON *v0_0_39_partition_info_accountsJSON){

    v0_0_39_partition_info_accounts_t *v0_0_39_partition_info_accounts_local_var = NULL;

    // v0_0_39_partition_info_accounts->deny
    cJSON *deny = cJSON_GetObjectItemCaseSensitive(v0_0_39_partition_info_accountsJSON, "deny");
    if (deny) { 
    if(!cJSON_IsString(deny) && !cJSON_IsNull(deny))
    {
    goto end; //String
    }
    }


    v0_0_39_partition_info_accounts_local_var = v0_0_39_partition_info_accounts_create (
        deny && !cJSON_IsNull(deny) ? strdup(deny->valuestring) : NULL
        );

    return v0_0_39_partition_info_accounts_local_var;
end:
    return NULL;

}
