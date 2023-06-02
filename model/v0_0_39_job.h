/*
 * v0_0_39_job.h
 *
 * 
 */

#ifndef _v0_0_39_job_H_
#define _v0_0_39_job_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_job_t v0_0_39_job_t;

#include "v0_0_39_assoc_short.h"
#include "v0_0_39_job_array.h"
#include "v0_0_39_job_comment.h"
#include "v0_0_39_job_exit_code.h"
#include "v0_0_39_job_het.h"
#include "v0_0_39_job_mcs.h"
#include "v0_0_39_job_required.h"
#include "v0_0_39_job_reservation.h"
#include "v0_0_39_job_state.h"
#include "v0_0_39_job_time.h"
#include "v0_0_39_job_tres.h"
#include "v0_0_39_step.h"
#include "v0_0_39_uint32_no_val.h"
#include "v0_0_39_wckey_tag.h"

// Enum FLAGS for v0_0_39_job

typedef enum  { slurm_rest_api_v0_0_39_job_FLAGS_NULL = 0, slurm_rest_api_v0_0_39_job_FLAGS_NONE, slurm_rest_api_v0_0_39_job_FLAGS_CLEAR_SCHEDULING, slurm_rest_api_v0_0_39_job_FLAGS_NOT_SET, slurm_rest_api_v0_0_39_job_FLAGS_STARTED_ON_SUBMIT, slurm_rest_api_v0_0_39_job_FLAGS_STARTED_ON_SCHEDULE, slurm_rest_api_v0_0_39_job_FLAGS_STARTED_ON_BACKFILL } slurm_rest_api_v0_0_39_job_FLAGS_e;

char* v0_0_39_job_flags_ToString(slurm_rest_api_v0_0_39_job_FLAGS_e flags);

slurm_rest_api_v0_0_39_job_FLAGS_e v0_0_39_job_flags_FromString(char* flags);



typedef struct v0_0_39_job_t {
    char *account; // string
    struct v0_0_39_job_comment_t *comment; //model
    int allocation_nodes; //numeric
    struct v0_0_39_job_array_t *array; //model
    struct v0_0_39_assoc_short_t *association; //model
    char *block; // string
    char *cluster; // string
    char *constraints; // string
    char *container; // string
    struct v0_0_39_job_exit_code_t *derived_exit_code; //model
    struct v0_0_39_job_time_t *time; //model
    struct v0_0_39_job_exit_code_t *exit_code; //model
    char *extra; // string
    char *failed_node; // string
    list_t *flags; //primitive container
    char *group; // string
    struct v0_0_39_job_het_t *het; //model
    int job_id; //numeric
    char *name; // string
    char *licenses; // string
    struct v0_0_39_job_mcs_t *mcs; //model
    char *nodes; // string
    char *partition; // string
    struct v0_0_39_uint32_no_val_t *priority; //model
    char *qos; // string
    struct v0_0_39_job_required_t *required; //model
    char *kill_request_user; // string
    struct v0_0_39_job_reservation_t *reservation; //model
    char *script; // string
    struct v0_0_39_job_state_t *state; //model
    list_t *steps; //nonprimitive container
    char *submit_line; // string
    struct v0_0_39_job_tres_t *tres; //model
    char *used_gres; // string
    char *user; // string
    struct v0_0_39_wckey_tag_t *wckey; //model
    char *working_directory; // string

} v0_0_39_job_t;

v0_0_39_job_t *v0_0_39_job_create(
    char *account,
    v0_0_39_job_comment_t *comment,
    int allocation_nodes,
    v0_0_39_job_array_t *array,
    v0_0_39_assoc_short_t *association,
    char *block,
    char *cluster,
    char *constraints,
    char *container,
    v0_0_39_job_exit_code_t *derived_exit_code,
    v0_0_39_job_time_t *time,
    v0_0_39_job_exit_code_t *exit_code,
    char *extra,
    char *failed_node,
    list_t *flags,
    char *group,
    v0_0_39_job_het_t *het,
    int job_id,
    char *name,
    char *licenses,
    v0_0_39_job_mcs_t *mcs,
    char *nodes,
    char *partition,
    v0_0_39_uint32_no_val_t *priority,
    char *qos,
    v0_0_39_job_required_t *required,
    char *kill_request_user,
    v0_0_39_job_reservation_t *reservation,
    char *script,
    v0_0_39_job_state_t *state,
    list_t *steps,
    char *submit_line,
    v0_0_39_job_tres_t *tres,
    char *used_gres,
    char *user,
    v0_0_39_wckey_tag_t *wckey,
    char *working_directory
);

void v0_0_39_job_free(v0_0_39_job_t *v0_0_39_job);

v0_0_39_job_t *v0_0_39_job_parseFromJSON(cJSON *v0_0_39_jobJSON);

cJSON *v0_0_39_job_convertToJSON(v0_0_39_job_t *v0_0_39_job);

#endif /* _v0_0_39_job_H_ */

