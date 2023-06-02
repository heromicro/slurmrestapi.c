/*
 * dbv0_0_38_job.h
 *
 * Single job description
 */

#ifndef _dbv0_0_38_job_H_
#define _dbv0_0_38_job_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_38_job_t dbv0_0_38_job_t;

#include "dbv0_0_38_association_short_info.h"
#include "dbv0_0_38_job_array.h"
#include "dbv0_0_38_job_comment.h"
#include "dbv0_0_38_job_exit_code.h"
#include "dbv0_0_38_job_het.h"
#include "dbv0_0_38_job_mcs.h"
#include "dbv0_0_38_job_required.h"
#include "dbv0_0_38_job_reservation.h"
#include "dbv0_0_38_job_state.h"
#include "dbv0_0_38_job_step.h"
#include "dbv0_0_38_job_time.h"
#include "dbv0_0_38_job_tres.h"
#include "dbv0_0_38_job_wckey.h"



typedef struct dbv0_0_38_job_t {
    char *account; // string
    struct dbv0_0_38_job_comment_t *comment; //model
    char *allocation_nodes; // string
    struct dbv0_0_38_job_array_t *array; //model
    struct dbv0_0_38_job_time_t *time; //model
    struct dbv0_0_38_association_short_info_t *association; //model
    char *cluster; // string
    char *constraints; // string
    struct dbv0_0_38_job_exit_code_t *derived_exit_code; //model
    struct dbv0_0_38_job_exit_code_t *exit_code; //model
    list_t *flags; //primitive container
    char *group; // string
    struct dbv0_0_38_job_het_t *het; //model
    int job_id; //numeric
    char *name; // string
    struct dbv0_0_38_job_mcs_t *mcs; //model
    char *nodes; // string
    char *partition; // string
    int priority; //numeric
    char *qos; // string
    struct dbv0_0_38_job_required_t *required; //model
    char *kill_request_user; // string
    struct dbv0_0_38_job_reservation_t *reservation; //model
    struct dbv0_0_38_job_state_t *state; //model
    list_t *steps; //nonprimitive container
    struct dbv0_0_38_job_tres_t *tres; //model
    char *user; // string
    struct dbv0_0_38_job_wckey_t *wckey; //model
    char *working_directory; // string
    char *container; // string

} dbv0_0_38_job_t;

dbv0_0_38_job_t *dbv0_0_38_job_create(
    char *account,
    dbv0_0_38_job_comment_t *comment,
    char *allocation_nodes,
    dbv0_0_38_job_array_t *array,
    dbv0_0_38_job_time_t *time,
    dbv0_0_38_association_short_info_t *association,
    char *cluster,
    char *constraints,
    dbv0_0_38_job_exit_code_t *derived_exit_code,
    dbv0_0_38_job_exit_code_t *exit_code,
    list_t *flags,
    char *group,
    dbv0_0_38_job_het_t *het,
    int job_id,
    char *name,
    dbv0_0_38_job_mcs_t *mcs,
    char *nodes,
    char *partition,
    int priority,
    char *qos,
    dbv0_0_38_job_required_t *required,
    char *kill_request_user,
    dbv0_0_38_job_reservation_t *reservation,
    dbv0_0_38_job_state_t *state,
    list_t *steps,
    dbv0_0_38_job_tres_t *tres,
    char *user,
    dbv0_0_38_job_wckey_t *wckey,
    char *working_directory,
    char *container
);

void dbv0_0_38_job_free(dbv0_0_38_job_t *dbv0_0_38_job);

dbv0_0_38_job_t *dbv0_0_38_job_parseFromJSON(cJSON *dbv0_0_38_jobJSON);

cJSON *dbv0_0_38_job_convertToJSON(dbv0_0_38_job_t *dbv0_0_38_job);

#endif /* _dbv0_0_38_job_H_ */

