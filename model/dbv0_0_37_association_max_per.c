#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_association_max_per.h"



dbv0_0_37_association_max_per_t *dbv0_0_37_association_max_per_create(
    dbv0_0_37_association_max_per_account_t *account
    ) {
    dbv0_0_37_association_max_per_t *dbv0_0_37_association_max_per_local_var = malloc(sizeof(dbv0_0_37_association_max_per_t));
    if (!dbv0_0_37_association_max_per_local_var) {
        return NULL;
    }
    dbv0_0_37_association_max_per_local_var->account = account;

    return dbv0_0_37_association_max_per_local_var;
}


void dbv0_0_37_association_max_per_free(dbv0_0_37_association_max_per_t *dbv0_0_37_association_max_per) {
    if(NULL == dbv0_0_37_association_max_per){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_37_association_max_per->account) {
        dbv0_0_37_association_max_per_account_free(dbv0_0_37_association_max_per->account);
        dbv0_0_37_association_max_per->account = NULL;
    }
    free(dbv0_0_37_association_max_per);
}

cJSON *dbv0_0_37_association_max_per_convertToJSON(dbv0_0_37_association_max_per_t *dbv0_0_37_association_max_per) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_association_max_per->account
    if(dbv0_0_37_association_max_per->account) {
    cJSON *account_local_JSON = dbv0_0_37_association_max_per_account_convertToJSON(dbv0_0_37_association_max_per->account);
    if(account_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "account", account_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

dbv0_0_37_association_max_per_t *dbv0_0_37_association_max_per_parseFromJSON(cJSON *dbv0_0_37_association_max_perJSON){

    dbv0_0_37_association_max_per_t *dbv0_0_37_association_max_per_local_var = NULL;

    // define the local variable for dbv0_0_37_association_max_per->account
    dbv0_0_37_association_max_per_account_t *account_local_nonprim = NULL;

    // dbv0_0_37_association_max_per->account
    cJSON *account = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_association_max_perJSON, "account");
    if (account) { 
    account_local_nonprim = dbv0_0_37_association_max_per_account_parseFromJSON(account); //nonprimitive
    }


    dbv0_0_37_association_max_per_local_var = dbv0_0_37_association_max_per_create (
        account ? account_local_nonprim : NULL
        );

    return dbv0_0_37_association_max_per_local_var;
end:
    if (account_local_nonprim) {
        dbv0_0_37_association_max_per_account_free(account_local_nonprim);
        account_local_nonprim = NULL;
    }
    return NULL;

}
