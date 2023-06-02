/*
 * v0_0_39_job_info_power.h
 *
 * 
 */

#ifndef _v0_0_39_job_info_power_H_
#define _v0_0_39_job_info_power_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_job_info_power_t v0_0_39_job_info_power_t;


// Enum FLAGS for v0_0_39_job_info_power

typedef enum  { slurm_rest_api_v0_0_39_job_info_power_FLAGS_NULL = 0, slurm_rest_api_v0_0_39_job_info_power_FLAGS_EQUAL_POWER } slurm_rest_api_v0_0_39_job_info_power_FLAGS_e;

char* v0_0_39_job_info_power_flags_ToString(slurm_rest_api_v0_0_39_job_info_power_FLAGS_e flags);

slurm_rest_api_v0_0_39_job_info_power_FLAGS_e v0_0_39_job_info_power_flags_FromString(char* flags);



typedef struct v0_0_39_job_info_power_t {
    list_t *flags; //primitive container

} v0_0_39_job_info_power_t;

v0_0_39_job_info_power_t *v0_0_39_job_info_power_create(
    list_t *flags
);

void v0_0_39_job_info_power_free(v0_0_39_job_info_power_t *v0_0_39_job_info_power);

v0_0_39_job_info_power_t *v0_0_39_job_info_power_parseFromJSON(cJSON *v0_0_39_job_info_powerJSON);

cJSON *v0_0_39_job_info_power_convertToJSON(v0_0_39_job_info_power_t *v0_0_39_job_info_power);

#endif /* _v0_0_39_job_info_power_H_ */

