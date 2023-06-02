/*
 * v0_0_39_step_task.h
 *
 * 
 */

#ifndef _v0_0_39_step_task_H_
#define _v0_0_39_step_task_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_step_task_t v0_0_39_step_task_t;




typedef struct v0_0_39_step_task_t {
    char *distribution; // string

} v0_0_39_step_task_t;

v0_0_39_step_task_t *v0_0_39_step_task_create(
    char *distribution
);

void v0_0_39_step_task_free(v0_0_39_step_task_t *v0_0_39_step_task);

v0_0_39_step_task_t *v0_0_39_step_task_parseFromJSON(cJSON *v0_0_39_step_taskJSON);

cJSON *v0_0_39_step_task_convertToJSON(v0_0_39_step_task_t *v0_0_39_step_task);

#endif /* _v0_0_39_step_task_H_ */

