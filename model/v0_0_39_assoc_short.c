#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_assoc_short.h"



v0_0_39_assoc_short_t *v0_0_39_assoc_short_create(
    char *account,
    char *cluster,
    char *partition,
    char *user
    ) {
    v0_0_39_assoc_short_t *v0_0_39_assoc_short_local_var = malloc(sizeof(v0_0_39_assoc_short_t));
    if (!v0_0_39_assoc_short_local_var) {
        return NULL;
    }
    v0_0_39_assoc_short_local_var->account = account;
    v0_0_39_assoc_short_local_var->cluster = cluster;
    v0_0_39_assoc_short_local_var->partition = partition;
    v0_0_39_assoc_short_local_var->user = user;

    return v0_0_39_assoc_short_local_var;
}


void v0_0_39_assoc_short_free(v0_0_39_assoc_short_t *v0_0_39_assoc_short) {
    if(NULL == v0_0_39_assoc_short){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_assoc_short->account) {
        free(v0_0_39_assoc_short->account);
        v0_0_39_assoc_short->account = NULL;
    }
    if (v0_0_39_assoc_short->cluster) {
        free(v0_0_39_assoc_short->cluster);
        v0_0_39_assoc_short->cluster = NULL;
    }
    if (v0_0_39_assoc_short->partition) {
        free(v0_0_39_assoc_short->partition);
        v0_0_39_assoc_short->partition = NULL;
    }
    if (v0_0_39_assoc_short->user) {
        free(v0_0_39_assoc_short->user);
        v0_0_39_assoc_short->user = NULL;
    }
    free(v0_0_39_assoc_short);
}

cJSON *v0_0_39_assoc_short_convertToJSON(v0_0_39_assoc_short_t *v0_0_39_assoc_short) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_assoc_short->account
    if(v0_0_39_assoc_short->account) {
    if(cJSON_AddStringToObject(item, "account", v0_0_39_assoc_short->account) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_assoc_short->cluster
    if(v0_0_39_assoc_short->cluster) {
    if(cJSON_AddStringToObject(item, "cluster", v0_0_39_assoc_short->cluster) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_assoc_short->partition
    if(v0_0_39_assoc_short->partition) {
    if(cJSON_AddStringToObject(item, "partition", v0_0_39_assoc_short->partition) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_assoc_short->user
    if (!v0_0_39_assoc_short->user) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "user", v0_0_39_assoc_short->user) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

v0_0_39_assoc_short_t *v0_0_39_assoc_short_parseFromJSON(cJSON *v0_0_39_assoc_shortJSON){

    v0_0_39_assoc_short_t *v0_0_39_assoc_short_local_var = NULL;

    // v0_0_39_assoc_short->account
    cJSON *account = cJSON_GetObjectItemCaseSensitive(v0_0_39_assoc_shortJSON, "account");
    if (account) { 
    if(!cJSON_IsString(account) && !cJSON_IsNull(account))
    {
    goto end; //String
    }
    }

    // v0_0_39_assoc_short->cluster
    cJSON *cluster = cJSON_GetObjectItemCaseSensitive(v0_0_39_assoc_shortJSON, "cluster");
    if (cluster) { 
    if(!cJSON_IsString(cluster) && !cJSON_IsNull(cluster))
    {
    goto end; //String
    }
    }

    // v0_0_39_assoc_short->partition
    cJSON *partition = cJSON_GetObjectItemCaseSensitive(v0_0_39_assoc_shortJSON, "partition");
    if (partition) { 
    if(!cJSON_IsString(partition) && !cJSON_IsNull(partition))
    {
    goto end; //String
    }
    }

    // v0_0_39_assoc_short->user
    cJSON *user = cJSON_GetObjectItemCaseSensitive(v0_0_39_assoc_shortJSON, "user");
    if (!user) {
        goto end;
    }

    
    if(!cJSON_IsString(user))
    {
    goto end; //String
    }


    v0_0_39_assoc_short_local_var = v0_0_39_assoc_short_create (
        account && !cJSON_IsNull(account) ? strdup(account->valuestring) : NULL,
        cluster && !cJSON_IsNull(cluster) ? strdup(cluster->valuestring) : NULL,
        partition && !cJSON_IsNull(partition) ? strdup(partition->valuestring) : NULL,
        strdup(user->valuestring)
        );

    return v0_0_39_assoc_short_local_var;
end:
    return NULL;

}
