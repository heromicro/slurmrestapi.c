#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_association_usage.h"



dbv0_0_37_association_usage_t *dbv0_0_37_association_usage_create(
    int accrue_job_count,
    double group_used_wallclock,
    double fairshare_factor,
    int fairshare_shares,
    int normalized_priority,
    double normalized_shares,
    double effective_normalized_usage,
    int raw_usage,
    int job_count,
    double fairshare_level
    ) {
    dbv0_0_37_association_usage_t *dbv0_0_37_association_usage_local_var = malloc(sizeof(dbv0_0_37_association_usage_t));
    if (!dbv0_0_37_association_usage_local_var) {
        return NULL;
    }
    dbv0_0_37_association_usage_local_var->accrue_job_count = accrue_job_count;
    dbv0_0_37_association_usage_local_var->group_used_wallclock = group_used_wallclock;
    dbv0_0_37_association_usage_local_var->fairshare_factor = fairshare_factor;
    dbv0_0_37_association_usage_local_var->fairshare_shares = fairshare_shares;
    dbv0_0_37_association_usage_local_var->normalized_priority = normalized_priority;
    dbv0_0_37_association_usage_local_var->normalized_shares = normalized_shares;
    dbv0_0_37_association_usage_local_var->effective_normalized_usage = effective_normalized_usage;
    dbv0_0_37_association_usage_local_var->raw_usage = raw_usage;
    dbv0_0_37_association_usage_local_var->job_count = job_count;
    dbv0_0_37_association_usage_local_var->fairshare_level = fairshare_level;

    return dbv0_0_37_association_usage_local_var;
}


void dbv0_0_37_association_usage_free(dbv0_0_37_association_usage_t *dbv0_0_37_association_usage) {
    if(NULL == dbv0_0_37_association_usage){
        return ;
    }
    listEntry_t *listEntry;
    free(dbv0_0_37_association_usage);
}

cJSON *dbv0_0_37_association_usage_convertToJSON(dbv0_0_37_association_usage_t *dbv0_0_37_association_usage) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_association_usage->accrue_job_count
    if(dbv0_0_37_association_usage->accrue_job_count) {
    if(cJSON_AddNumberToObject(item, "accrue_job_count", dbv0_0_37_association_usage->accrue_job_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_37_association_usage->group_used_wallclock
    if(dbv0_0_37_association_usage->group_used_wallclock) {
    if(cJSON_AddNumberToObject(item, "group_used_wallclock", dbv0_0_37_association_usage->group_used_wallclock) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_37_association_usage->fairshare_factor
    if(dbv0_0_37_association_usage->fairshare_factor) {
    if(cJSON_AddNumberToObject(item, "fairshare_factor", dbv0_0_37_association_usage->fairshare_factor) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_37_association_usage->fairshare_shares
    if(dbv0_0_37_association_usage->fairshare_shares) {
    if(cJSON_AddNumberToObject(item, "fairshare_shares", dbv0_0_37_association_usage->fairshare_shares) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_37_association_usage->normalized_priority
    if(dbv0_0_37_association_usage->normalized_priority) {
    if(cJSON_AddNumberToObject(item, "normalized_priority", dbv0_0_37_association_usage->normalized_priority) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_37_association_usage->normalized_shares
    if(dbv0_0_37_association_usage->normalized_shares) {
    if(cJSON_AddNumberToObject(item, "normalized_shares", dbv0_0_37_association_usage->normalized_shares) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_37_association_usage->effective_normalized_usage
    if(dbv0_0_37_association_usage->effective_normalized_usage) {
    if(cJSON_AddNumberToObject(item, "effective_normalized_usage", dbv0_0_37_association_usage->effective_normalized_usage) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_37_association_usage->raw_usage
    if(dbv0_0_37_association_usage->raw_usage) {
    if(cJSON_AddNumberToObject(item, "raw_usage", dbv0_0_37_association_usage->raw_usage) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_37_association_usage->job_count
    if(dbv0_0_37_association_usage->job_count) {
    if(cJSON_AddNumberToObject(item, "job_count", dbv0_0_37_association_usage->job_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_37_association_usage->fairshare_level
    if(dbv0_0_37_association_usage->fairshare_level) {
    if(cJSON_AddNumberToObject(item, "fairshare_level", dbv0_0_37_association_usage->fairshare_level) == NULL) {
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

dbv0_0_37_association_usage_t *dbv0_0_37_association_usage_parseFromJSON(cJSON *dbv0_0_37_association_usageJSON){

    dbv0_0_37_association_usage_t *dbv0_0_37_association_usage_local_var = NULL;

    // dbv0_0_37_association_usage->accrue_job_count
    cJSON *accrue_job_count = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_association_usageJSON, "accrue_job_count");
    if (accrue_job_count) { 
    if(!cJSON_IsNumber(accrue_job_count))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_37_association_usage->group_used_wallclock
    cJSON *group_used_wallclock = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_association_usageJSON, "group_used_wallclock");
    if (group_used_wallclock) { 
    if(!cJSON_IsNumber(group_used_wallclock))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_37_association_usage->fairshare_factor
    cJSON *fairshare_factor = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_association_usageJSON, "fairshare_factor");
    if (fairshare_factor) { 
    if(!cJSON_IsNumber(fairshare_factor))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_37_association_usage->fairshare_shares
    cJSON *fairshare_shares = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_association_usageJSON, "fairshare_shares");
    if (fairshare_shares) { 
    if(!cJSON_IsNumber(fairshare_shares))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_37_association_usage->normalized_priority
    cJSON *normalized_priority = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_association_usageJSON, "normalized_priority");
    if (normalized_priority) { 
    if(!cJSON_IsNumber(normalized_priority))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_37_association_usage->normalized_shares
    cJSON *normalized_shares = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_association_usageJSON, "normalized_shares");
    if (normalized_shares) { 
    if(!cJSON_IsNumber(normalized_shares))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_37_association_usage->effective_normalized_usage
    cJSON *effective_normalized_usage = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_association_usageJSON, "effective_normalized_usage");
    if (effective_normalized_usage) { 
    if(!cJSON_IsNumber(effective_normalized_usage))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_37_association_usage->raw_usage
    cJSON *raw_usage = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_association_usageJSON, "raw_usage");
    if (raw_usage) { 
    if(!cJSON_IsNumber(raw_usage))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_37_association_usage->job_count
    cJSON *job_count = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_association_usageJSON, "job_count");
    if (job_count) { 
    if(!cJSON_IsNumber(job_count))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_37_association_usage->fairshare_level
    cJSON *fairshare_level = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_association_usageJSON, "fairshare_level");
    if (fairshare_level) { 
    if(!cJSON_IsNumber(fairshare_level))
    {
    goto end; //Numeric
    }
    }


    dbv0_0_37_association_usage_local_var = dbv0_0_37_association_usage_create (
        accrue_job_count ? accrue_job_count->valuedouble : 0,
        group_used_wallclock ? group_used_wallclock->valuedouble : 0,
        fairshare_factor ? fairshare_factor->valuedouble : 0,
        fairshare_shares ? fairshare_shares->valuedouble : 0,
        normalized_priority ? normalized_priority->valuedouble : 0,
        normalized_shares ? normalized_shares->valuedouble : 0,
        effective_normalized_usage ? effective_normalized_usage->valuedouble : 0,
        raw_usage ? raw_usage->valuedouble : 0,
        job_count ? job_count->valuedouble : 0,
        fairshare_level ? fairshare_level->valuedouble : 0
        );

    return dbv0_0_37_association_usage_local_var;
end:
    return NULL;

}
