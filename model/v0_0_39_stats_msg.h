/*
 * v0_0_39_stats_msg.h
 *
 * 
 */

#ifndef _v0_0_39_stats_msg_H_
#define _v0_0_39_stats_msg_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_stats_msg_t v0_0_39_stats_msg_t;

#include "v0_0_39_stats_msg_rpcs_by_type_inner.h"
#include "v0_0_39_stats_msg_rpcs_by_user_inner.h"



typedef struct v0_0_39_stats_msg_t {
    int parts_packed; //numeric
    long req_time; //numeric
    long req_time_start; //numeric
    int server_thread_count; //numeric
    int agent_queue_size; //numeric
    int agent_count; //numeric
    int agent_thread_count; //numeric
    int dbd_agent_queue_size; //numeric
    int gettimeofday_latency; //numeric
    int schedule_cycle_max; //numeric
    int schedule_cycle_last; //numeric
    int schedule_cycle_total; //numeric
    long schedule_cycle_mean; //numeric
    long schedule_cycle_mean_depth; //numeric
    long schedule_cycle_per_minute; //numeric
    int schedule_queue_length; //numeric
    int jobs_submitted; //numeric
    int jobs_started; //numeric
    int jobs_completed; //numeric
    int jobs_canceled; //numeric
    int jobs_failed; //numeric
    int jobs_pending; //numeric
    int jobs_running; //numeric
    long job_states_ts; //numeric
    int bf_backfilled_jobs; //numeric
    int bf_last_backfilled_jobs; //numeric
    int bf_backfilled_het_jobs; //numeric
    int bf_cycle_counter; //numeric
    long bf_cycle_mean; //numeric
    long bf_depth_mean; //numeric
    long bf_depth_mean_try; //numeric
    long bf_cycle_sum; //numeric
    int bf_cycle_last; //numeric
    int bf_last_depth; //numeric
    int bf_last_depth_try; //numeric
    int bf_depth_sum; //numeric
    int bf_depth_try_sum; //numeric
    int bf_queue_len; //numeric
    long bf_queue_len_mean; //numeric
    int bf_queue_len_sum; //numeric
    int bf_table_size; //numeric
    long bf_table_size_mean; //numeric
    long bf_when_last_cycle; //numeric
    int bf_active; //boolean
    list_t *rpcs_by_message_type; //nonprimitive container
    list_t *rpcs_by_user; //nonprimitive container

} v0_0_39_stats_msg_t;

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
);

void v0_0_39_stats_msg_free(v0_0_39_stats_msg_t *v0_0_39_stats_msg);

v0_0_39_stats_msg_t *v0_0_39_stats_msg_parseFromJSON(cJSON *v0_0_39_stats_msgJSON);

cJSON *v0_0_39_stats_msg_convertToJSON(v0_0_39_stats_msg_t *v0_0_39_stats_msg);

#endif /* _v0_0_39_stats_msg_H_ */

