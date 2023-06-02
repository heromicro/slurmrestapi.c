/*
 * v0_0_38_diag_statistics.h
 *
 * Slurm statistics
 */

#ifndef _v0_0_38_diag_statistics_H_
#define _v0_0_38_diag_statistics_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_38_diag_statistics_t v0_0_38_diag_statistics_t;

#include "v0_0_38_diag_rpcm.h"
#include "v0_0_38_diag_rpcu.h"



typedef struct v0_0_38_diag_statistics_t {
    int parts_packed; //numeric
    int req_time; //numeric
    int req_time_start; //numeric
    int server_thread_count; //numeric
    int agent_queue_size; //numeric
    int agent_count; //numeric
    int agent_thread_count; //numeric
    int dbd_agent_queue_size; //numeric
    int gettimeofday_latency; //numeric
    int schedule_cycle_max; //numeric
    int schedule_cycle_last; //numeric
    int schedule_cycle_total; //numeric
    int schedule_cycle_mean; //numeric
    int schedule_cycle_mean_depth; //numeric
    int schedule_cycle_per_minute; //numeric
    int schedule_queue_length; //numeric
    int jobs_submitted; //numeric
    int jobs_started; //numeric
    int jobs_completed; //numeric
    int jobs_canceled; //numeric
    int jobs_failed; //numeric
    int jobs_pending; //numeric
    int jobs_running; //numeric
    int job_states_ts; //numeric
    int bf_backfilled_jobs; //numeric
    int bf_last_backfilled_jobs; //numeric
    int bf_backfilled_het_jobs; //numeric
    int bf_cycle_counter; //numeric
    int bf_cycle_mean; //numeric
    int bf_cycle_max; //numeric
    int bf_last_depth; //numeric
    int bf_last_depth_try; //numeric
    int bf_depth_mean; //numeric
    int bf_depth_mean_try; //numeric
    int bf_cycle_last; //numeric
    int bf_queue_len; //numeric
    int bf_queue_len_mean; //numeric
    int bf_table_size; //numeric
    int bf_table_size_mean; //numeric
    int bf_when_last_cycle; //numeric
    int bf_active; //boolean
    list_t *rpcs_by_message_type; //nonprimitive container
    list_t *rpcs_by_user; //nonprimitive container

} v0_0_38_diag_statistics_t;

v0_0_38_diag_statistics_t *v0_0_38_diag_statistics_create(
    int parts_packed,
    int req_time,
    int req_time_start,
    int server_thread_count,
    int agent_queue_size,
    int agent_count,
    int agent_thread_count,
    int dbd_agent_queue_size,
    int gettimeofday_latency,
    int schedule_cycle_max,
    int schedule_cycle_last,
    int schedule_cycle_total,
    int schedule_cycle_mean,
    int schedule_cycle_mean_depth,
    int schedule_cycle_per_minute,
    int schedule_queue_length,
    int jobs_submitted,
    int jobs_started,
    int jobs_completed,
    int jobs_canceled,
    int jobs_failed,
    int jobs_pending,
    int jobs_running,
    int job_states_ts,
    int bf_backfilled_jobs,
    int bf_last_backfilled_jobs,
    int bf_backfilled_het_jobs,
    int bf_cycle_counter,
    int bf_cycle_mean,
    int bf_cycle_max,
    int bf_last_depth,
    int bf_last_depth_try,
    int bf_depth_mean,
    int bf_depth_mean_try,
    int bf_cycle_last,
    int bf_queue_len,
    int bf_queue_len_mean,
    int bf_table_size,
    int bf_table_size_mean,
    int bf_when_last_cycle,
    int bf_active,
    list_t *rpcs_by_message_type,
    list_t *rpcs_by_user
);

void v0_0_38_diag_statistics_free(v0_0_38_diag_statistics_t *v0_0_38_diag_statistics);

v0_0_38_diag_statistics_t *v0_0_38_diag_statistics_parseFromJSON(cJSON *v0_0_38_diag_statisticsJSON);

cJSON *v0_0_38_diag_statistics_convertToJSON(v0_0_38_diag_statistics_t *v0_0_38_diag_statistics);

#endif /* _v0_0_38_diag_statistics_H_ */

