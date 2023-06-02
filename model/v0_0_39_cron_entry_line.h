/*
 * v0_0_39_cron_entry_line.h
 *
 * 
 */

#ifndef _v0_0_39_cron_entry_line_H_
#define _v0_0_39_cron_entry_line_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_cron_entry_line_t v0_0_39_cron_entry_line_t;




typedef struct v0_0_39_cron_entry_line_t {
    int end; //numeric

} v0_0_39_cron_entry_line_t;

v0_0_39_cron_entry_line_t *v0_0_39_cron_entry_line_create(
    int end
);

void v0_0_39_cron_entry_line_free(v0_0_39_cron_entry_line_t *v0_0_39_cron_entry_line);

v0_0_39_cron_entry_line_t *v0_0_39_cron_entry_line_parseFromJSON(cJSON *v0_0_39_cron_entry_lineJSON);

cJSON *v0_0_39_cron_entry_line_convertToJSON(v0_0_39_cron_entry_line_t *v0_0_39_cron_entry_line);

#endif /* _v0_0_39_cron_entry_line_H_ */

