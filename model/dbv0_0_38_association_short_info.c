#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_association_short_info.h"



dbv0_0_38_association_short_info_t *dbv0_0_38_association_short_info_create(
    char *account,
    char *cluster,
    char *partition,
    char *user
    ) {
    dbv0_0_38_association_short_info_t *dbv0_0_38_association_short_info_local_var = malloc(sizeof(dbv0_0_38_association_short_info_t));
    if (!dbv0_0_38_association_short_info_local_var) {
        return NULL;
    }
    dbv0_0_38_association_short_info_local_var->account = account;
    dbv0_0_38_association_short_info_local_var->cluster = cluster;
    dbv0_0_38_association_short_info_local_var->partition = partition;
    dbv0_0_38_association_short_info_local_var->user = user;

    return dbv0_0_38_association_short_info_local_var;
}


void dbv0_0_38_association_short_info_free(dbv0_0_38_association_short_info_t *dbv0_0_38_association_short_info) {
    if(NULL == dbv0_0_38_association_short_info){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_38_association_short_info->account) {
        free(dbv0_0_38_association_short_info->account);
        dbv0_0_38_association_short_info->account = NULL;
    }
    if (dbv0_0_38_association_short_info->cluster) {
        free(dbv0_0_38_association_short_info->cluster);
        dbv0_0_38_association_short_info->cluster = NULL;
    }
    if (dbv0_0_38_association_short_info->partition) {
        free(dbv0_0_38_association_short_info->partition);
        dbv0_0_38_association_short_info->partition = NULL;
    }
    if (dbv0_0_38_association_short_info->user) {
        free(dbv0_0_38_association_short_info->user);
        dbv0_0_38_association_short_info->user = NULL;
    }
    free(dbv0_0_38_association_short_info);
}

cJSON *dbv0_0_38_association_short_info_convertToJSON(dbv0_0_38_association_short_info_t *dbv0_0_38_association_short_info) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_association_short_info->account
    if(dbv0_0_38_association_short_info->account) {
    if(cJSON_AddStringToObject(item, "account", dbv0_0_38_association_short_info->account) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_38_association_short_info->cluster
    if(dbv0_0_38_association_short_info->cluster) {
    if(cJSON_AddStringToObject(item, "cluster", dbv0_0_38_association_short_info->cluster) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_38_association_short_info->partition
    if(dbv0_0_38_association_short_info->partition) {
    if(cJSON_AddStringToObject(item, "partition", dbv0_0_38_association_short_info->partition) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_38_association_short_info->user
    if(dbv0_0_38_association_short_info->user) {
    if(cJSON_AddStringToObject(item, "user", dbv0_0_38_association_short_info->user) == NULL) {
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

dbv0_0_38_association_short_info_t *dbv0_0_38_association_short_info_parseFromJSON(cJSON *dbv0_0_38_association_short_infoJSON){

    dbv0_0_38_association_short_info_t *dbv0_0_38_association_short_info_local_var = NULL;

    // dbv0_0_38_association_short_info->account
    cJSON *account = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_association_short_infoJSON, "account");
    if (account) { 
    if(!cJSON_IsString(account) && !cJSON_IsNull(account))
    {
    goto end; //String
    }
    }

    // dbv0_0_38_association_short_info->cluster
    cJSON *cluster = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_association_short_infoJSON, "cluster");
    if (cluster) { 
    if(!cJSON_IsString(cluster) && !cJSON_IsNull(cluster))
    {
    goto end; //String
    }
    }

    // dbv0_0_38_association_short_info->partition
    cJSON *partition = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_association_short_infoJSON, "partition");
    if (partition) { 
    if(!cJSON_IsString(partition) && !cJSON_IsNull(partition))
    {
    goto end; //String
    }
    }

    // dbv0_0_38_association_short_info->user
    cJSON *user = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_association_short_infoJSON, "user");
    if (user) { 
    if(!cJSON_IsString(user) && !cJSON_IsNull(user))
    {
    goto end; //String
    }
    }


    dbv0_0_38_association_short_info_local_var = dbv0_0_38_association_short_info_create (
        account && !cJSON_IsNull(account) ? strdup(account->valuestring) : NULL,
        cluster && !cJSON_IsNull(cluster) ? strdup(cluster->valuestring) : NULL,
        partition && !cJSON_IsNull(partition) ? strdup(partition->valuestring) : NULL,
        user && !cJSON_IsNull(user) ? strdup(user->valuestring) : NULL
        );

    return dbv0_0_38_association_short_info_local_var;
end:
    return NULL;

}
