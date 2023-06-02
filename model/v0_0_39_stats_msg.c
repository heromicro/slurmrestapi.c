#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_stats_msg.h"



v0_0_39_stats_msg_t *v0_0_39_stats_msg_create(
    int parts_packed,
    long req_time,
    long req_time_start,
    int server_thread_count,
    int agent_queue_size,
    int agent_count,
    int agent_thread_count,
    int dbd_agent_queue_size,
    int gettimeofday_latency,
    int schedule_cycle_max,
    int schedule_cycle_last,
    int schedule_cycle_total,
    long schedule_cycle_mean,
    long schedule_cycle_mean_depth,
    long schedule_cycle_per_minute,
    int schedule_queue_length,
    int jobs_submitted,
    int jobs_started,
    int jobs_completed,
    int jobs_canceled,
    int jobs_failed,
    int jobs_pending,
    int jobs_running,
    long job_states_ts,
    int bf_backfilled_jobs,
    int bf_last_backfilled_jobs,
    int bf_backfilled_het_jobs,
    int bf_cycle_counter,
    long bf_cycle_mean,
    long bf_depth_mean,
    long bf_depth_mean_try,
    long bf_cycle_sum,
    int bf_cycle_last,
    int bf_last_depth,
    int bf_last_depth_try,
    int bf_depth_sum,
    int bf_depth_try_sum,
    int bf_queue_len,
    long bf_queue_len_mean,
    int bf_queue_len_sum,
    int bf_table_size,
    long bf_table_size_mean,
    long bf_when_last_cycle,
    int bf_active,
    list_t *rpcs_by_message_type,
    list_t *rpcs_by_user
    ) {
    v0_0_39_stats_msg_t *v0_0_39_stats_msg_local_var = malloc(sizeof(v0_0_39_stats_msg_t));
    if (!v0_0_39_stats_msg_local_var) {
        return NULL;
    }
    v0_0_39_stats_msg_local_var->parts_packed = parts_packed;
    v0_0_39_stats_msg_local_var->req_time = req_time;
    v0_0_39_stats_msg_local_var->req_time_start = req_time_start;
    v0_0_39_stats_msg_local_var->server_thread_count = server_thread_count;
    v0_0_39_stats_msg_local_var->agent_queue_size = agent_queue_size;
    v0_0_39_stats_msg_local_var->agent_count = agent_count;
    v0_0_39_stats_msg_local_var->agent_thread_count = agent_thread_count;
    v0_0_39_stats_msg_local_var->dbd_agent_queue_size = dbd_agent_queue_size;
    v0_0_39_stats_msg_local_var->gettimeofday_latency = gettimeofday_latency;
    v0_0_39_stats_msg_local_var->schedule_cycle_max = schedule_cycle_max;
    v0_0_39_stats_msg_local_var->schedule_cycle_last = schedule_cycle_last;
    v0_0_39_stats_msg_local_var->schedule_cycle_total = schedule_cycle_total;
    v0_0_39_stats_msg_local_var->schedule_cycle_mean = schedule_cycle_mean;
    v0_0_39_stats_msg_local_var->schedule_cycle_mean_depth = schedule_cycle_mean_depth;
    v0_0_39_stats_msg_local_var->schedule_cycle_per_minute = schedule_cycle_per_minute;
    v0_0_39_stats_msg_local_var->schedule_queue_length = schedule_queue_length;
    v0_0_39_stats_msg_local_var->jobs_submitted = jobs_submitted;
    v0_0_39_stats_msg_local_var->jobs_started = jobs_started;
    v0_0_39_stats_msg_local_var->jobs_completed = jobs_completed;
    v0_0_39_stats_msg_local_var->jobs_canceled = jobs_canceled;
    v0_0_39_stats_msg_local_var->jobs_failed = jobs_failed;
    v0_0_39_stats_msg_local_var->jobs_pending = jobs_pending;
    v0_0_39_stats_msg_local_var->jobs_running = jobs_running;
    v0_0_39_stats_msg_local_var->job_states_ts = job_states_ts;
    v0_0_39_stats_msg_local_var->bf_backfilled_jobs = bf_backfilled_jobs;
    v0_0_39_stats_msg_local_var->bf_last_backfilled_jobs = bf_last_backfilled_jobs;
    v0_0_39_stats_msg_local_var->bf_backfilled_het_jobs = bf_backfilled_het_jobs;
    v0_0_39_stats_msg_local_var->bf_cycle_counter = bf_cycle_counter;
    v0_0_39_stats_msg_local_var->bf_cycle_mean = bf_cycle_mean;
    v0_0_39_stats_msg_local_var->bf_depth_mean = bf_depth_mean;
    v0_0_39_stats_msg_local_var->bf_depth_mean_try = bf_depth_mean_try;
    v0_0_39_stats_msg_local_var->bf_cycle_sum = bf_cycle_sum;
    v0_0_39_stats_msg_local_var->bf_cycle_last = bf_cycle_last;
    v0_0_39_stats_msg_local_var->bf_last_depth = bf_last_depth;
    v0_0_39_stats_msg_local_var->bf_last_depth_try = bf_last_depth_try;
    v0_0_39_stats_msg_local_var->bf_depth_sum = bf_depth_sum;
    v0_0_39_stats_msg_local_var->bf_depth_try_sum = bf_depth_try_sum;
    v0_0_39_stats_msg_local_var->bf_queue_len = bf_queue_len;
    v0_0_39_stats_msg_local_var->bf_queue_len_mean = bf_queue_len_mean;
    v0_0_39_stats_msg_local_var->bf_queue_len_sum = bf_queue_len_sum;
    v0_0_39_stats_msg_local_var->bf_table_size = bf_table_size;
    v0_0_39_stats_msg_local_var->bf_table_size_mean = bf_table_size_mean;
    v0_0_39_stats_msg_local_var->bf_when_last_cycle = bf_when_last_cycle;
    v0_0_39_stats_msg_local_var->bf_active = bf_active;
    v0_0_39_stats_msg_local_var->rpcs_by_message_type = rpcs_by_message_type;
    v0_0_39_stats_msg_local_var->rpcs_by_user = rpcs_by_user;

    return v0_0_39_stats_msg_local_var;
}


void v0_0_39_stats_msg_free(v0_0_39_stats_msg_t *v0_0_39_stats_msg) {
    if(NULL == v0_0_39_stats_msg){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_stats_msg->rpcs_by_message_type) {
        list_ForEach(listEntry, v0_0_39_stats_msg->rpcs_by_message_type) {
            v0_0_39_stats_msg_rpcs_by_type_inner_free(listEntry->data);
        }
        list_freeList(v0_0_39_stats_msg->rpcs_by_message_type);
        v0_0_39_stats_msg->rpcs_by_message_type = NULL;
    }
    if (v0_0_39_stats_msg->rpcs_by_user) {
        list_ForEach(listEntry, v0_0_39_stats_msg->rpcs_by_user) {
            v0_0_39_stats_msg_rpcs_by_user_inner_free(listEntry->data);
        }
        list_freeList(v0_0_39_stats_msg->rpcs_by_user);
        v0_0_39_stats_msg->rpcs_by_user = NULL;
    }
    free(v0_0_39_stats_msg);
}

cJSON *v0_0_39_stats_msg_convertToJSON(v0_0_39_stats_msg_t *v0_0_39_stats_msg) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_stats_msg->parts_packed
    if(v0_0_39_stats_msg->parts_packed) {
    if(cJSON_AddNumberToObject(item, "parts_packed", v0_0_39_stats_msg->parts_packed) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->req_time
    if(v0_0_39_stats_msg->req_time) {
    if(cJSON_AddNumberToObject(item, "req_time", v0_0_39_stats_msg->req_time) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->req_time_start
    if(v0_0_39_stats_msg->req_time_start) {
    if(cJSON_AddNumberToObject(item, "req_time_start", v0_0_39_stats_msg->req_time_start) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->server_thread_count
    if(v0_0_39_stats_msg->server_thread_count) {
    if(cJSON_AddNumberToObject(item, "server_thread_count", v0_0_39_stats_msg->server_thread_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->agent_queue_size
    if(v0_0_39_stats_msg->agent_queue_size) {
    if(cJSON_AddNumberToObject(item, "agent_queue_size", v0_0_39_stats_msg->agent_queue_size) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->agent_count
    if(v0_0_39_stats_msg->agent_count) {
    if(cJSON_AddNumberToObject(item, "agent_count", v0_0_39_stats_msg->agent_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->agent_thread_count
    if(v0_0_39_stats_msg->agent_thread_count) {
    if(cJSON_AddNumberToObject(item, "agent_thread_count", v0_0_39_stats_msg->agent_thread_count) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->dbd_agent_queue_size
    if(v0_0_39_stats_msg->dbd_agent_queue_size) {
    if(cJSON_AddNumberToObject(item, "dbd_agent_queue_size", v0_0_39_stats_msg->dbd_agent_queue_size) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->gettimeofday_latency
    if(v0_0_39_stats_msg->gettimeofday_latency) {
    if(cJSON_AddNumberToObject(item, "gettimeofday_latency", v0_0_39_stats_msg->gettimeofday_latency) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->schedule_cycle_max
    if(v0_0_39_stats_msg->schedule_cycle_max) {
    if(cJSON_AddNumberToObject(item, "schedule_cycle_max", v0_0_39_stats_msg->schedule_cycle_max) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->schedule_cycle_last
    if(v0_0_39_stats_msg->schedule_cycle_last) {
    if(cJSON_AddNumberToObject(item, "schedule_cycle_last", v0_0_39_stats_msg->schedule_cycle_last) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->schedule_cycle_total
    if(v0_0_39_stats_msg->schedule_cycle_total) {
    if(cJSON_AddNumberToObject(item, "schedule_cycle_total", v0_0_39_stats_msg->schedule_cycle_total) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->schedule_cycle_mean
    if(v0_0_39_stats_msg->schedule_cycle_mean) {
    if(cJSON_AddNumberToObject(item, "schedule_cycle_mean", v0_0_39_stats_msg->schedule_cycle_mean) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->schedule_cycle_mean_depth
    if(v0_0_39_stats_msg->schedule_cycle_mean_depth) {
    if(cJSON_AddNumberToObject(item, "schedule_cycle_mean_depth", v0_0_39_stats_msg->schedule_cycle_mean_depth) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->schedule_cycle_per_minute
    if(v0_0_39_stats_msg->schedule_cycle_per_minute) {
    if(cJSON_AddNumberToObject(item, "schedule_cycle_per_minute", v0_0_39_stats_msg->schedule_cycle_per_minute) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->schedule_queue_length
    if(v0_0_39_stats_msg->schedule_queue_length) {
    if(cJSON_AddNumberToObject(item, "schedule_queue_length", v0_0_39_stats_msg->schedule_queue_length) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->jobs_submitted
    if(v0_0_39_stats_msg->jobs_submitted) {
    if(cJSON_AddNumberToObject(item, "jobs_submitted", v0_0_39_stats_msg->jobs_submitted) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->jobs_started
    if(v0_0_39_stats_msg->jobs_started) {
    if(cJSON_AddNumberToObject(item, "jobs_started", v0_0_39_stats_msg->jobs_started) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->jobs_completed
    if(v0_0_39_stats_msg->jobs_completed) {
    if(cJSON_AddNumberToObject(item, "jobs_completed", v0_0_39_stats_msg->jobs_completed) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->jobs_canceled
    if(v0_0_39_stats_msg->jobs_canceled) {
    if(cJSON_AddNumberToObject(item, "jobs_canceled", v0_0_39_stats_msg->jobs_canceled) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->jobs_failed
    if(v0_0_39_stats_msg->jobs_failed) {
    if(cJSON_AddNumberToObject(item, "jobs_failed", v0_0_39_stats_msg->jobs_failed) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->jobs_pending
    if(v0_0_39_stats_msg->jobs_pending) {
    if(cJSON_AddNumberToObject(item, "jobs_pending", v0_0_39_stats_msg->jobs_pending) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->jobs_running
    if(v0_0_39_stats_msg->jobs_running) {
    if(cJSON_AddNumberToObject(item, "jobs_running", v0_0_39_stats_msg->jobs_running) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->job_states_ts
    if(v0_0_39_stats_msg->job_states_ts) {
    if(cJSON_AddNumberToObject(item, "job_states_ts", v0_0_39_stats_msg->job_states_ts) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->bf_backfilled_jobs
    if(v0_0_39_stats_msg->bf_backfilled_jobs) {
    if(cJSON_AddNumberToObject(item, "bf_backfilled_jobs", v0_0_39_stats_msg->bf_backfilled_jobs) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->bf_last_backfilled_jobs
    if(v0_0_39_stats_msg->bf_last_backfilled_jobs) {
    if(cJSON_AddNumberToObject(item, "bf_last_backfilled_jobs", v0_0_39_stats_msg->bf_last_backfilled_jobs) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->bf_backfilled_het_jobs
    if(v0_0_39_stats_msg->bf_backfilled_het_jobs) {
    if(cJSON_AddNumberToObject(item, "bf_backfilled_het_jobs", v0_0_39_stats_msg->bf_backfilled_het_jobs) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->bf_cycle_counter
    if(v0_0_39_stats_msg->bf_cycle_counter) {
    if(cJSON_AddNumberToObject(item, "bf_cycle_counter", v0_0_39_stats_msg->bf_cycle_counter) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->bf_cycle_mean
    if(v0_0_39_stats_msg->bf_cycle_mean) {
    if(cJSON_AddNumberToObject(item, "bf_cycle_mean", v0_0_39_stats_msg->bf_cycle_mean) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->bf_depth_mean
    if(v0_0_39_stats_msg->bf_depth_mean) {
    if(cJSON_AddNumberToObject(item, "bf_depth_mean", v0_0_39_stats_msg->bf_depth_mean) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->bf_depth_mean_try
    if(v0_0_39_stats_msg->bf_depth_mean_try) {
    if(cJSON_AddNumberToObject(item, "bf_depth_mean_try", v0_0_39_stats_msg->bf_depth_mean_try) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->bf_cycle_sum
    if(v0_0_39_stats_msg->bf_cycle_sum) {
    if(cJSON_AddNumberToObject(item, "bf_cycle_sum", v0_0_39_stats_msg->bf_cycle_sum) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->bf_cycle_last
    if(v0_0_39_stats_msg->bf_cycle_last) {
    if(cJSON_AddNumberToObject(item, "bf_cycle_last", v0_0_39_stats_msg->bf_cycle_last) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->bf_last_depth
    if(v0_0_39_stats_msg->bf_last_depth) {
    if(cJSON_AddNumberToObject(item, "bf_last_depth", v0_0_39_stats_msg->bf_last_depth) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->bf_last_depth_try
    if(v0_0_39_stats_msg->bf_last_depth_try) {
    if(cJSON_AddNumberToObject(item, "bf_last_depth_try", v0_0_39_stats_msg->bf_last_depth_try) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->bf_depth_sum
    if(v0_0_39_stats_msg->bf_depth_sum) {
    if(cJSON_AddNumberToObject(item, "bf_depth_sum", v0_0_39_stats_msg->bf_depth_sum) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->bf_depth_try_sum
    if(v0_0_39_stats_msg->bf_depth_try_sum) {
    if(cJSON_AddNumberToObject(item, "bf_depth_try_sum", v0_0_39_stats_msg->bf_depth_try_sum) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->bf_queue_len
    if(v0_0_39_stats_msg->bf_queue_len) {
    if(cJSON_AddNumberToObject(item, "bf_queue_len", v0_0_39_stats_msg->bf_queue_len) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->bf_queue_len_mean
    if(v0_0_39_stats_msg->bf_queue_len_mean) {
    if(cJSON_AddNumberToObject(item, "bf_queue_len_mean", v0_0_39_stats_msg->bf_queue_len_mean) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->bf_queue_len_sum
    if(v0_0_39_stats_msg->bf_queue_len_sum) {
    if(cJSON_AddNumberToObject(item, "bf_queue_len_sum", v0_0_39_stats_msg->bf_queue_len_sum) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->bf_table_size
    if(v0_0_39_stats_msg->bf_table_size) {
    if(cJSON_AddNumberToObject(item, "bf_table_size", v0_0_39_stats_msg->bf_table_size) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->bf_table_size_mean
    if(v0_0_39_stats_msg->bf_table_size_mean) {
    if(cJSON_AddNumberToObject(item, "bf_table_size_mean", v0_0_39_stats_msg->bf_table_size_mean) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->bf_when_last_cycle
    if(v0_0_39_stats_msg->bf_when_last_cycle) {
    if(cJSON_AddNumberToObject(item, "bf_when_last_cycle", v0_0_39_stats_msg->bf_when_last_cycle) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_stats_msg->bf_active
    if(v0_0_39_stats_msg->bf_active) {
    if(cJSON_AddBoolToObject(item, "bf_active", v0_0_39_stats_msg->bf_active) == NULL) {
    goto fail; //Bool
    }
    }


    // v0_0_39_stats_msg->rpcs_by_message_type
    if(v0_0_39_stats_msg->rpcs_by_message_type) {
    cJSON *rpcs_by_message_type = cJSON_AddArrayToObject(item, "rpcs_by_message_type");
    if(rpcs_by_message_type == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *rpcs_by_message_typeListEntry;
    if (v0_0_39_stats_msg->rpcs_by_message_type) {
    list_ForEach(rpcs_by_message_typeListEntry, v0_0_39_stats_msg->rpcs_by_message_type) {
    cJSON *itemLocal = v0_0_39_stats_msg_rpcs_by_type_inner_convertToJSON(rpcs_by_message_typeListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(rpcs_by_message_type, itemLocal);
    }
    }
    }


    // v0_0_39_stats_msg->rpcs_by_user
    if(v0_0_39_stats_msg->rpcs_by_user) {
    cJSON *rpcs_by_user = cJSON_AddArrayToObject(item, "rpcs_by_user");
    if(rpcs_by_user == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *rpcs_by_userListEntry;
    if (v0_0_39_stats_msg->rpcs_by_user) {
    list_ForEach(rpcs_by_userListEntry, v0_0_39_stats_msg->rpcs_by_user) {
    cJSON *itemLocal = v0_0_39_stats_msg_rpcs_by_user_inner_convertToJSON(rpcs_by_userListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(rpcs_by_user, itemLocal);
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

v0_0_39_stats_msg_t *v0_0_39_stats_msg_parseFromJSON(cJSON *v0_0_39_stats_msgJSON){

    v0_0_39_stats_msg_t *v0_0_39_stats_msg_local_var = NULL;

    // define the local list for v0_0_39_stats_msg->rpcs_by_message_type
    list_t *rpcs_by_message_typeList = NULL;

    // define the local list for v0_0_39_stats_msg->rpcs_by_user
    list_t *rpcs_by_userList = NULL;

    // v0_0_39_stats_msg->parts_packed
    cJSON *parts_packed = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "parts_packed");
    if (parts_packed) { 
    if(!cJSON_IsNumber(parts_packed))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->req_time
    cJSON *req_time = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "req_time");
    if (req_time) { 
    if(!cJSON_IsNumber(req_time))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->req_time_start
    cJSON *req_time_start = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "req_time_start");
    if (req_time_start) { 
    if(!cJSON_IsNumber(req_time_start))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->server_thread_count
    cJSON *server_thread_count = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "server_thread_count");
    if (server_thread_count) { 
    if(!cJSON_IsNumber(server_thread_count))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->agent_queue_size
    cJSON *agent_queue_size = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "agent_queue_size");
    if (agent_queue_size) { 
    if(!cJSON_IsNumber(agent_queue_size))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->agent_count
    cJSON *agent_count = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "agent_count");
    if (agent_count) { 
    if(!cJSON_IsNumber(agent_count))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->agent_thread_count
    cJSON *agent_thread_count = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "agent_thread_count");
    if (agent_thread_count) { 
    if(!cJSON_IsNumber(agent_thread_count))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->dbd_agent_queue_size
    cJSON *dbd_agent_queue_size = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "dbd_agent_queue_size");
    if (dbd_agent_queue_size) { 
    if(!cJSON_IsNumber(dbd_agent_queue_size))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->gettimeofday_latency
    cJSON *gettimeofday_latency = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "gettimeofday_latency");
    if (gettimeofday_latency) { 
    if(!cJSON_IsNumber(gettimeofday_latency))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->schedule_cycle_max
    cJSON *schedule_cycle_max = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "schedule_cycle_max");
    if (schedule_cycle_max) { 
    if(!cJSON_IsNumber(schedule_cycle_max))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->schedule_cycle_last
    cJSON *schedule_cycle_last = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "schedule_cycle_last");
    if (schedule_cycle_last) { 
    if(!cJSON_IsNumber(schedule_cycle_last))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->schedule_cycle_total
    cJSON *schedule_cycle_total = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "schedule_cycle_total");
    if (schedule_cycle_total) { 
    if(!cJSON_IsNumber(schedule_cycle_total))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->schedule_cycle_mean
    cJSON *schedule_cycle_mean = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "schedule_cycle_mean");
    if (schedule_cycle_mean) { 
    if(!cJSON_IsNumber(schedule_cycle_mean))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->schedule_cycle_mean_depth
    cJSON *schedule_cycle_mean_depth = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "schedule_cycle_mean_depth");
    if (schedule_cycle_mean_depth) { 
    if(!cJSON_IsNumber(schedule_cycle_mean_depth))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->schedule_cycle_per_minute
    cJSON *schedule_cycle_per_minute = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "schedule_cycle_per_minute");
    if (schedule_cycle_per_minute) { 
    if(!cJSON_IsNumber(schedule_cycle_per_minute))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->schedule_queue_length
    cJSON *schedule_queue_length = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "schedule_queue_length");
    if (schedule_queue_length) { 
    if(!cJSON_IsNumber(schedule_queue_length))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->jobs_submitted
    cJSON *jobs_submitted = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "jobs_submitted");
    if (jobs_submitted) { 
    if(!cJSON_IsNumber(jobs_submitted))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->jobs_started
    cJSON *jobs_started = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "jobs_started");
    if (jobs_started) { 
    if(!cJSON_IsNumber(jobs_started))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->jobs_completed
    cJSON *jobs_completed = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "jobs_completed");
    if (jobs_completed) { 
    if(!cJSON_IsNumber(jobs_completed))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->jobs_canceled
    cJSON *jobs_canceled = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "jobs_canceled");
    if (jobs_canceled) { 
    if(!cJSON_IsNumber(jobs_canceled))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->jobs_failed
    cJSON *jobs_failed = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "jobs_failed");
    if (jobs_failed) { 
    if(!cJSON_IsNumber(jobs_failed))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->jobs_pending
    cJSON *jobs_pending = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "jobs_pending");
    if (jobs_pending) { 
    if(!cJSON_IsNumber(jobs_pending))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->jobs_running
    cJSON *jobs_running = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "jobs_running");
    if (jobs_running) { 
    if(!cJSON_IsNumber(jobs_running))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->job_states_ts
    cJSON *job_states_ts = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "job_states_ts");
    if (job_states_ts) { 
    if(!cJSON_IsNumber(job_states_ts))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->bf_backfilled_jobs
    cJSON *bf_backfilled_jobs = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "bf_backfilled_jobs");
    if (bf_backfilled_jobs) { 
    if(!cJSON_IsNumber(bf_backfilled_jobs))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->bf_last_backfilled_jobs
    cJSON *bf_last_backfilled_jobs = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "bf_last_backfilled_jobs");
    if (bf_last_backfilled_jobs) { 
    if(!cJSON_IsNumber(bf_last_backfilled_jobs))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->bf_backfilled_het_jobs
    cJSON *bf_backfilled_het_jobs = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "bf_backfilled_het_jobs");
    if (bf_backfilled_het_jobs) { 
    if(!cJSON_IsNumber(bf_backfilled_het_jobs))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->bf_cycle_counter
    cJSON *bf_cycle_counter = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "bf_cycle_counter");
    if (bf_cycle_counter) { 
    if(!cJSON_IsNumber(bf_cycle_counter))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->bf_cycle_mean
    cJSON *bf_cycle_mean = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "bf_cycle_mean");
    if (bf_cycle_mean) { 
    if(!cJSON_IsNumber(bf_cycle_mean))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->bf_depth_mean
    cJSON *bf_depth_mean = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "bf_depth_mean");
    if (bf_depth_mean) { 
    if(!cJSON_IsNumber(bf_depth_mean))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->bf_depth_mean_try
    cJSON *bf_depth_mean_try = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "bf_depth_mean_try");
    if (bf_depth_mean_try) { 
    if(!cJSON_IsNumber(bf_depth_mean_try))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->bf_cycle_sum
    cJSON *bf_cycle_sum = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "bf_cycle_sum");
    if (bf_cycle_sum) { 
    if(!cJSON_IsNumber(bf_cycle_sum))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->bf_cycle_last
    cJSON *bf_cycle_last = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "bf_cycle_last");
    if (bf_cycle_last) { 
    if(!cJSON_IsNumber(bf_cycle_last))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->bf_last_depth
    cJSON *bf_last_depth = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "bf_last_depth");
    if (bf_last_depth) { 
    if(!cJSON_IsNumber(bf_last_depth))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->bf_last_depth_try
    cJSON *bf_last_depth_try = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "bf_last_depth_try");
    if (bf_last_depth_try) { 
    if(!cJSON_IsNumber(bf_last_depth_try))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->bf_depth_sum
    cJSON *bf_depth_sum = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "bf_depth_sum");
    if (bf_depth_sum) { 
    if(!cJSON_IsNumber(bf_depth_sum))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->bf_depth_try_sum
    cJSON *bf_depth_try_sum = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "bf_depth_try_sum");
    if (bf_depth_try_sum) { 
    if(!cJSON_IsNumber(bf_depth_try_sum))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->bf_queue_len
    cJSON *bf_queue_len = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "bf_queue_len");
    if (bf_queue_len) { 
    if(!cJSON_IsNumber(bf_queue_len))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->bf_queue_len_mean
    cJSON *bf_queue_len_mean = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "bf_queue_len_mean");
    if (bf_queue_len_mean) { 
    if(!cJSON_IsNumber(bf_queue_len_mean))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->bf_queue_len_sum
    cJSON *bf_queue_len_sum = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "bf_queue_len_sum");
    if (bf_queue_len_sum) { 
    if(!cJSON_IsNumber(bf_queue_len_sum))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->bf_table_size
    cJSON *bf_table_size = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "bf_table_size");
    if (bf_table_size) { 
    if(!cJSON_IsNumber(bf_table_size))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->bf_table_size_mean
    cJSON *bf_table_size_mean = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "bf_table_size_mean");
    if (bf_table_size_mean) { 
    if(!cJSON_IsNumber(bf_table_size_mean))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->bf_when_last_cycle
    cJSON *bf_when_last_cycle = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "bf_when_last_cycle");
    if (bf_when_last_cycle) { 
    if(!cJSON_IsNumber(bf_when_last_cycle))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_stats_msg->bf_active
    cJSON *bf_active = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "bf_active");
    if (bf_active) { 
    if(!cJSON_IsBool(bf_active))
    {
    goto end; //Bool
    }
    }

    // v0_0_39_stats_msg->rpcs_by_message_type
    cJSON *rpcs_by_message_type = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "rpcs_by_message_type");
    if (rpcs_by_message_type) { 
    cJSON *rpcs_by_message_type_local_nonprimitive = NULL;
    if(!cJSON_IsArray(rpcs_by_message_type)){
        goto end; //nonprimitive container
    }

    rpcs_by_message_typeList = list_createList();

    cJSON_ArrayForEach(rpcs_by_message_type_local_nonprimitive,rpcs_by_message_type )
    {
        if(!cJSON_IsObject(rpcs_by_message_type_local_nonprimitive)){
            goto end;
        }
        v0_0_39_stats_msg_rpcs_by_type_inner_t *rpcs_by_message_typeItem = v0_0_39_stats_msg_rpcs_by_type_inner_parseFromJSON(rpcs_by_message_type_local_nonprimitive);

        list_addElement(rpcs_by_message_typeList, rpcs_by_message_typeItem);
    }
    }

    // v0_0_39_stats_msg->rpcs_by_user
    cJSON *rpcs_by_user = cJSON_GetObjectItemCaseSensitive(v0_0_39_stats_msgJSON, "rpcs_by_user");
    if (rpcs_by_user) { 
    cJSON *rpcs_by_user_local_nonprimitive = NULL;
    if(!cJSON_IsArray(rpcs_by_user)){
        goto end; //nonprimitive container
    }

    rpcs_by_userList = list_createList();

    cJSON_ArrayForEach(rpcs_by_user_local_nonprimitive,rpcs_by_user )
    {
        if(!cJSON_IsObject(rpcs_by_user_local_nonprimitive)){
            goto end;
        }
        v0_0_39_stats_msg_rpcs_by_user_inner_t *rpcs_by_userItem = v0_0_39_stats_msg_rpcs_by_user_inner_parseFromJSON(rpcs_by_user_local_nonprimitive);

        list_addElement(rpcs_by_userList, rpcs_by_userItem);
    }
    }


    v0_0_39_stats_msg_local_var = v0_0_39_stats_msg_create (
        parts_packed ? parts_packed->valuedouble : 0,
        req_time ? req_time->valuedouble : 0,
        req_time_start ? req_time_start->valuedouble : 0,
        server_thread_count ? server_thread_count->valuedouble : 0,
        agent_queue_size ? agent_queue_size->valuedouble : 0,
        agent_count ? agent_count->valuedouble : 0,
        agent_thread_count ? agent_thread_count->valuedouble : 0,
        dbd_agent_queue_size ? dbd_agent_queue_size->valuedouble : 0,
        gettimeofday_latency ? gettimeofday_latency->valuedouble : 0,
        schedule_cycle_max ? schedule_cycle_max->valuedouble : 0,
        schedule_cycle_last ? schedule_cycle_last->valuedouble : 0,
        schedule_cycle_total ? schedule_cycle_total->valuedouble : 0,
        schedule_cycle_mean ? schedule_cycle_mean->valuedouble : 0,
        schedule_cycle_mean_depth ? schedule_cycle_mean_depth->valuedouble : 0,
        schedule_cycle_per_minute ? schedule_cycle_per_minute->valuedouble : 0,
        schedule_queue_length ? schedule_queue_length->valuedouble : 0,
        jobs_submitted ? jobs_submitted->valuedouble : 0,
        jobs_started ? jobs_started->valuedouble : 0,
        jobs_completed ? jobs_completed->valuedouble : 0,
        jobs_canceled ? jobs_canceled->valuedouble : 0,
        jobs_failed ? jobs_failed->valuedouble : 0,
        jobs_pending ? jobs_pending->valuedouble : 0,
        jobs_running ? jobs_running->valuedouble : 0,
        job_states_ts ? job_states_ts->valuedouble : 0,
        bf_backfilled_jobs ? bf_backfilled_jobs->valuedouble : 0,
        bf_last_backfilled_jobs ? bf_last_backfilled_jobs->valuedouble : 0,
        bf_backfilled_het_jobs ? bf_backfilled_het_jobs->valuedouble : 0,
        bf_cycle_counter ? bf_cycle_counter->valuedouble : 0,
        bf_cycle_mean ? bf_cycle_mean->valuedouble : 0,
        bf_depth_mean ? bf_depth_mean->valuedouble : 0,
        bf_depth_mean_try ? bf_depth_mean_try->valuedouble : 0,
        bf_cycle_sum ? bf_cycle_sum->valuedouble : 0,
        bf_cycle_last ? bf_cycle_last->valuedouble : 0,
        bf_last_depth ? bf_last_depth->valuedouble : 0,
        bf_last_depth_try ? bf_last_depth_try->valuedouble : 0,
        bf_depth_sum ? bf_depth_sum->valuedouble : 0,
        bf_depth_try_sum ? bf_depth_try_sum->valuedouble : 0,
        bf_queue_len ? bf_queue_len->valuedouble : 0,
        bf_queue_len_mean ? bf_queue_len_mean->valuedouble : 0,
        bf_queue_len_sum ? bf_queue_len_sum->valuedouble : 0,
        bf_table_size ? bf_table_size->valuedouble : 0,
        bf_table_size_mean ? bf_table_size_mean->valuedouble : 0,
        bf_when_last_cycle ? bf_when_last_cycle->valuedouble : 0,
        bf_active ? bf_active->valueint : 0,
        rpcs_by_message_type ? rpcs_by_message_typeList : NULL,
        rpcs_by_user ? rpcs_by_userList : NULL
        );

    return v0_0_39_stats_msg_local_var;
end:
    if (rpcs_by_message_typeList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, rpcs_by_message_typeList) {
            v0_0_39_stats_msg_rpcs_by_type_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(rpcs_by_message_typeList);
        rpcs_by_message_typeList = NULL;
    }
    if (rpcs_by_userList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, rpcs_by_userList) {
            v0_0_39_stats_msg_rpcs_by_user_inner_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(rpcs_by_userList);
        rpcs_by_userList = NULL;
    }
    return NULL;

}
