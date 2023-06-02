#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_assoc_usage.h"



v0_0_39_assoc_usage_t *v0_0_39_assoc_usage_create(
    int accrue_job_count,
    double group_used_wallclock,
    double fairshare_factor,
    int fairshare_shares,
    double normalized_priority,
    double normalized_shares,
    double effective_normalized_usage,
    double normalized_usage,
    double raw_usage,
    int active_jobs,
    int job_count,
    double fairshare_level
    ) {
    v0_0_39_assoc_usage_t *v0_0_39_assoc_usage_local_var = malloc(sizeof(v0_0_39_assoc_usage_t));
    if (!v0_0_39_assoc_usage_local_var) {
        return NULL;
    }
    v0_0_39_assoc_usage_local_var->accrue_job_count = accrue_job_count;
    v0_0_39_assoc_usage_local_var->group_used_wallclock = group_used_wallclock;
    v0_0_39_assoc_usage_local_var->fairshare_factor = fairshare_factor;
    v0_0_39_assoc_usage_local_var->fairshare_shares = fairshare_shares;
    v0_0_39_assoc_usage_local_var->normalized_priority = normalized_priority;
    v0_0_39_assoc_usage_local_var->normalized_shares = normalized_shares;
    v0_0_39_assoc_usage_local_var->effective_normalized_usage = effective_normalized_usage;
    v0_0_39_assoc_usage_local_var->normalized_usage = normalized_usage;
    v0_0_39_assoc_usage_local_var->raw_usage = raw_usage;
    v0_0_39_assoc_usage_local_var->active_jobs = active_jobs;
    v0_0_39_assoc_usage_local_var->job_count = job_count;
    v0_0_39_assoc_usage_local_var->fairshare_level = fairshare_level;

    return v0_0_39_assoc_usage_local_var;
}


void v0_0_39_assoc_usage_free(v0_0_39_assoc_usage_t *v0_0_39_assoc_usage) {
    if(NULL == v0_0_39_assoc_usage){
        return ;
    }
    listEntry_t *listEntry;
    free(v0_0_39_assoc_usage);
}

cJSON *v0_0_39_assoc_usage_convertToJSON(v0_0_39_assoc_usage_t *v0_0_39_assoc_usage) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_assoc_usage->accrue_job_count
    if(v0_0_39_assoc_usage->accrue_job_count) {
    if(cJSON_AddNumberToObject(item, "accrue_job_count", v0_0_39_assoc_usage->accrue_job_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_assoc_usage->group_used_wallclock
    if(v0_0_39_assoc_usage->group_used_wallclock) {
    if(cJSON_AddNumberToObject(item, "group_used_wallclock", v0_0_39_assoc_usage->group_used_wallclock) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_assoc_usage->fairshare_factor
    if(v0_0_39_assoc_usage->fairshare_factor) {
    if(cJSON_AddNumberToObject(item, "fairshare_factor", v0_0_39_assoc_usage->fairshare_factor) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_assoc_usage->fairshare_shares
    if(v0_0_39_assoc_usage->fairshare_shares) {
    if(cJSON_AddNumberToObject(item, "fairshare_shares", v0_0_39_assoc_usage->fairshare_shares) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_assoc_usage->normalized_priority
    if(v0_0_39_assoc_usage->normalized_priority) {
    if(cJSON_AddNumberToObject(item, "normalized_priority", v0_0_39_assoc_usage->normalized_priority) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_assoc_usage->normalized_shares
    if(v0_0_39_assoc_usage->normalized_shares) {
    if(cJSON_AddNumberToObject(item, "normalized_shares", v0_0_39_assoc_usage->normalized_shares) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_assoc_usage->effective_normalized_usage
    if(v0_0_39_assoc_usage->effective_normalized_usage) {
    if(cJSON_AddNumberToObject(item, "effective_normalized_usage", v0_0_39_assoc_usage->effective_normalized_usage) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_assoc_usage->normalized_usage
    if(v0_0_39_assoc_usage->normalized_usage) {
    if(cJSON_AddNumberToObject(item, "normalized_usage", v0_0_39_assoc_usage->normalized_usage) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_assoc_usage->raw_usage
    if(v0_0_39_assoc_usage->raw_usage) {
    if(cJSON_AddNumberToObject(item, "raw_usage", v0_0_39_assoc_usage->raw_usage) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_assoc_usage->active_jobs
    if(v0_0_39_assoc_usage->active_jobs) {
    if(cJSON_AddNumberToObject(item, "active_jobs", v0_0_39_assoc_usage->active_jobs) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_assoc_usage->job_count
    if(v0_0_39_assoc_usage->job_count) {
    if(cJSON_AddNumberToObject(item, "job_count", v0_0_39_assoc_usage->job_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_assoc_usage->fairshare_level
    if(v0_0_39_assoc_usage->fairshare_level) {
    if(cJSON_AddNumberToObject(item, "fairshare_level", v0_0_39_assoc_usage->fairshare_level) == NULL) {
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

v0_0_39_assoc_usage_t *v0_0_39_assoc_usage_parseFromJSON(cJSON *v0_0_39_assoc_usageJSON){

    v0_0_39_assoc_usage_t *v0_0_39_assoc_usage_local_var = NULL;

    // v0_0_39_assoc_usage->accrue_job_count
    cJSON *accrue_job_count = cJSON_GetObjectItemCaseSensitive(v0_0_39_assoc_usageJSON, "accrue_job_count");
    if (accrue_job_count) { 
    if(!cJSON_IsNumber(accrue_job_count))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_assoc_usage->group_used_wallclock
    cJSON *group_used_wallclock = cJSON_GetObjectItemCaseSensitive(v0_0_39_assoc_usageJSON, "group_used_wallclock");
    if (group_used_wallclock) { 
    if(!cJSON_IsNumber(group_used_wallclock))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_assoc_usage->fairshare_factor
    cJSON *fairshare_factor = cJSON_GetObjectItemCaseSensitive(v0_0_39_assoc_usageJSON, "fairshare_factor");
    if (fairshare_factor) { 
    if(!cJSON_IsNumber(fairshare_factor))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_assoc_usage->fairshare_shares
    cJSON *fairshare_shares = cJSON_GetObjectItemCaseSensitive(v0_0_39_assoc_usageJSON, "fairshare_shares");
    if (fairshare_shares) { 
    if(!cJSON_IsNumber(fairshare_shares))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_assoc_usage->normalized_priority
    cJSON *normalized_priority = cJSON_GetObjectItemCaseSensitive(v0_0_39_assoc_usageJSON, "normalized_priority");
    if (normalized_priority) { 
    if(!cJSON_IsNumber(normalized_priority))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_assoc_usage->normalized_shares
    cJSON *normalized_shares = cJSON_GetObjectItemCaseSensitive(v0_0_39_assoc_usageJSON, "normalized_shares");
    if (normalized_shares) { 
    if(!cJSON_IsNumber(normalized_shares))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_assoc_usage->effective_normalized_usage
    cJSON *effective_normalized_usage = cJSON_GetObjectItemCaseSensitive(v0_0_39_assoc_usageJSON, "effective_normalized_usage");
    if (effective_normalized_usage) { 
    if(!cJSON_IsNumber(effective_normalized_usage))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_assoc_usage->normalized_usage
    cJSON *normalized_usage = cJSON_GetObjectItemCaseSensitive(v0_0_39_assoc_usageJSON, "normalized_usage");
    if (normalized_usage) { 
    if(!cJSON_IsNumber(normalized_usage))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_assoc_usage->raw_usage
    cJSON *raw_usage = cJSON_GetObjectItemCaseSensitive(v0_0_39_assoc_usageJSON, "raw_usage");
    if (raw_usage) { 
    if(!cJSON_IsNumber(raw_usage))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_assoc_usage->active_jobs
    cJSON *active_jobs = cJSON_GetObjectItemCaseSensitive(v0_0_39_assoc_usageJSON, "active_jobs");
    if (active_jobs) { 
    if(!cJSON_IsNumber(active_jobs))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_assoc_usage->job_count
    cJSON *job_count = cJSON_GetObjectItemCaseSensitive(v0_0_39_assoc_usageJSON, "job_count");
    if (job_count) { 
    if(!cJSON_IsNumber(job_count))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_assoc_usage->fairshare_level
    cJSON *fairshare_level = cJSON_GetObjectItemCaseSensitive(v0_0_39_assoc_usageJSON, "fairshare_level");
    if (fairshare_level) { 
    if(!cJSON_IsNumber(fairshare_level))
    {
    goto end; //Numeric
    }
    }


    v0_0_39_assoc_usage_local_var = v0_0_39_assoc_usage_create (
        accrue_job_count ? accrue_job_count->valuedouble : 0,
        group_used_wallclock ? group_used_wallclock->valuedouble : 0,
        fairshare_factor ? fairshare_factor->valuedouble : 0,
        fairshare_shares ? fairshare_shares->valuedouble : 0,
        normalized_priority ? normalized_priority->valuedouble : 0,
        normalized_shares ? normalized_shares->valuedouble : 0,
        effective_normalized_usage ? effective_normalized_usage->valuedouble : 0,
        normalized_usage ? normalized_usage->valuedouble : 0,
        raw_usage ? raw_usage->valuedouble : 0,
        active_jobs ? active_jobs->valuedouble : 0,
        job_count ? job_count->valuedouble : 0,
        fairshare_level ? fairshare_level->valuedouble : 0
        );

    return v0_0_39_assoc_usage_local_var;
end:
    return NULL;

}
