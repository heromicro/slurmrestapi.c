/*
 * v0_0_39_reservation_info.h
 *
 * 
 */

#ifndef _v0_0_39_reservation_info_H_
#define _v0_0_39_reservation_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_reservation_info_t v0_0_39_reservation_info_t;

#include "v0_0_39_reservation_core_spec.h"
#include "v0_0_39_reservation_info_purge_completed.h"
#include "v0_0_39_uint32_no_val.h"

// Enum FLAGS for v0_0_39_reservation_info

typedef enum  { slurm_rest_api_v0_0_39_reservation_info_FLAGS_NULL = 0, slurm_rest_api_v0_0_39_reservation_info_FLAGS_MAINT, slurm_rest_api_v0_0_39_reservation_info_FLAGS_NO_MAINT, slurm_rest_api_v0_0_39_reservation_info_FLAGS_DAILY, slurm_rest_api_v0_0_39_reservation_info_FLAGS_NO_DAILY, slurm_rest_api_v0_0_39_reservation_info_FLAGS_WEEKLY, slurm_rest_api_v0_0_39_reservation_info_FLAGS_NO_WEEKLY, slurm_rest_api_v0_0_39_reservation_info_FLAGS_IGNORE_JOBS, slurm_rest_api_v0_0_39_reservation_info_FLAGS_NO_IGNORE_JOBS, slurm_rest_api_v0_0_39_reservation_info_FLAGS_ANY_NODES, slurm_rest_api_v0_0_39_reservation_info_FLAGS__STATIC, slurm_rest_api_v0_0_39_reservation_info_FLAGS_NO_STATIC, slurm_rest_api_v0_0_39_reservation_info_FLAGS_PART_NODES, slurm_rest_api_v0_0_39_reservation_info_FLAGS_NO_PART_NODES, slurm_rest_api_v0_0_39_reservation_info_FLAGS_OVERLAP, slurm_rest_api_v0_0_39_reservation_info_FLAGS_SPEC_NODES, slurm_rest_api_v0_0_39_reservation_info_FLAGS_FIRST_CORES, slurm_rest_api_v0_0_39_reservation_info_FLAGS_TIME_FLOAT, slurm_rest_api_v0_0_39_reservation_info_FLAGS_REPLACE, slurm_rest_api_v0_0_39_reservation_info_FLAGS_ALL_NODES, slurm_rest_api_v0_0_39_reservation_info_FLAGS_PURGE_COMP, slurm_rest_api_v0_0_39_reservation_info_FLAGS_WEEKDAY, slurm_rest_api_v0_0_39_reservation_info_FLAGS_NO_WEEKDAY, slurm_rest_api_v0_0_39_reservation_info_FLAGS_WEEKEND, slurm_rest_api_v0_0_39_reservation_info_FLAGS_NO_WEEKEND, slurm_rest_api_v0_0_39_reservation_info_FLAGS_FLEX, slurm_rest_api_v0_0_39_reservation_info_FLAGS_NO_FLEX, slurm_rest_api_v0_0_39_reservation_info_FLAGS_DURATION_PLUS, slurm_rest_api_v0_0_39_reservation_info_FLAGS_DURATION_MINUS, slurm_rest_api_v0_0_39_reservation_info_FLAGS_NO_HOLD_JOBS_AFTER_END, slurm_rest_api_v0_0_39_reservation_info_FLAGS_NO_PURGE_COMP, slurm_rest_api_v0_0_39_reservation_info_FLAGS_MAGNETIC, slurm_rest_api_v0_0_39_reservation_info_FLAGS_SKIP, slurm_rest_api_v0_0_39_reservation_info_FLAGS_HOURLY, slurm_rest_api_v0_0_39_reservation_info_FLAGS_NO_HOURLY, slurm_rest_api_v0_0_39_reservation_info_FLAGS_REOCCURRING } slurm_rest_api_v0_0_39_reservation_info_FLAGS_e;

char* v0_0_39_reservation_info_flags_ToString(slurm_rest_api_v0_0_39_reservation_info_FLAGS_e flags);

slurm_rest_api_v0_0_39_reservation_info_FLAGS_e v0_0_39_reservation_info_flags_FromString(char* flags);



typedef struct v0_0_39_reservation_info_t {
    char *accounts; // string
    char *burst_buffer; // string
    int core_count; //numeric
    list_t *core_specializations; //nonprimitive container
    long end_time; //numeric
    char *features; // string
    list_t *flags; //primitive container
    char *groups; // string
    char *licenses; // string
    int max_start_delay; //numeric
    char *name; // string
    int node_count; //numeric
    char *node_list; // string
    char *partition; // string
    struct v0_0_39_reservation_info_purge_completed_t *purge_completed; //model
    long start_time; //numeric
    struct v0_0_39_uint32_no_val_t *watts; //model
    char *tres; // string
    char *users; // string

} v0_0_39_reservation_info_t;

v0_0_39_reservation_info_t *v0_0_39_reservation_info_create(
    char *accounts,
    char *burst_buffer,
    int core_count,
    list_t *core_specializations,
    long end_time,
    char *features,
    list_t *flags,
    char *groups,
    char *licenses,
    int max_start_delay,
    char *name,
    int node_count,
    char *node_list,
    char *partition,
    v0_0_39_reservation_info_purge_completed_t *purge_completed,
    long start_time,
    v0_0_39_uint32_no_val_t *watts,
    char *tres,
    char *users
);

void v0_0_39_reservation_info_free(v0_0_39_reservation_info_t *v0_0_39_reservation_info);

v0_0_39_reservation_info_t *v0_0_39_reservation_info_parseFromJSON(cJSON *v0_0_39_reservation_infoJSON);

cJSON *v0_0_39_reservation_info_convertToJSON(v0_0_39_reservation_info_t *v0_0_39_reservation_info);

#endif /* _v0_0_39_reservation_info_H_ */

