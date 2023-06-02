/*
 * v0_0_39_cron_entry.h
 *
 * 
 */

#ifndef _v0_0_39_cron_entry_H_
#define _v0_0_39_cron_entry_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_cron_entry_t v0_0_39_cron_entry_t;

#include "v0_0_39_cron_entry_line.h"

// Enum FLAGS for v0_0_39_cron_entry

typedef enum  { slurm_rest_api_v0_0_39_cron_entry_FLAGS_NULL = 0, slurm_rest_api_v0_0_39_cron_entry_FLAGS_WILD_MINUTE, slurm_rest_api_v0_0_39_cron_entry_FLAGS_WILD_HOUR, slurm_rest_api_v0_0_39_cron_entry_FLAGS_WILD_DAY_OF_MONTH, slurm_rest_api_v0_0_39_cron_entry_FLAGS_WILD_MONTH, slurm_rest_api_v0_0_39_cron_entry_FLAGS_WILD_DAY_OF_WEEK } slurm_rest_api_v0_0_39_cron_entry_FLAGS_e;

char* v0_0_39_cron_entry_flags_ToString(slurm_rest_api_v0_0_39_cron_entry_FLAGS_e flags);

slurm_rest_api_v0_0_39_cron_entry_FLAGS_e v0_0_39_cron_entry_flags_FromString(char* flags);



typedef struct v0_0_39_cron_entry_t {
    list_t *flags; //primitive container
    char *minute; // string
    char *hour; // string
    char *day_of_month; // string
    char *month; // string
    char *day_of_week; // string
    char *specification; // string
    char *command; // string
    struct v0_0_39_cron_entry_line_t *line; //model

} v0_0_39_cron_entry_t;

v0_0_39_cron_entry_t *v0_0_39_cron_entry_create(
    list_t *flags,
    char *minute,
    char *hour,
    char *day_of_month,
    char *month,
    char *day_of_week,
    char *specification,
    char *command,
    v0_0_39_cron_entry_line_t *line
);

void v0_0_39_cron_entry_free(v0_0_39_cron_entry_t *v0_0_39_cron_entry);

v0_0_39_cron_entry_t *v0_0_39_cron_entry_parseFromJSON(cJSON *v0_0_39_cron_entryJSON);

cJSON *v0_0_39_cron_entry_convertToJSON(v0_0_39_cron_entry_t *v0_0_39_cron_entry);

#endif /* _v0_0_39_cron_entry_H_ */

