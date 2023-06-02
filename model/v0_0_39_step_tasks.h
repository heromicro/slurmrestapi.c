/*
 * v0_0_39_step_tasks.h
 *
 * 
 */

#ifndef _v0_0_39_step_tasks_H_
#define _v0_0_39_step_tasks_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_step_tasks_t v0_0_39_step_tasks_t;




typedef struct v0_0_39_step_tasks_t {
    int count; //numeric

} v0_0_39_step_tasks_t;

v0_0_39_step_tasks_t *v0_0_39_step_tasks_create(
    int count
);

void v0_0_39_step_tasks_free(v0_0_39_step_tasks_t *v0_0_39_step_tasks);

v0_0_39_step_tasks_t *v0_0_39_step_tasks_parseFromJSON(cJSON *v0_0_39_step_tasksJSON);

cJSON *v0_0_39_step_tasks_convertToJSON(v0_0_39_step_tasks_t *v0_0_39_step_tasks);

#endif /* _v0_0_39_step_tasks_H_ */

