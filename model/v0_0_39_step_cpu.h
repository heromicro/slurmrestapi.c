/*
 * v0_0_39_step_cpu.h
 *
 * 
 */

#ifndef _v0_0_39_step_cpu_H_
#define _v0_0_39_step_cpu_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_step_cpu_t v0_0_39_step_cpu_t;




typedef struct v0_0_39_step_cpu_t {
    char *governor; // string

} v0_0_39_step_cpu_t;

v0_0_39_step_cpu_t *v0_0_39_step_cpu_create(
    char *governor
);

void v0_0_39_step_cpu_free(v0_0_39_step_cpu_t *v0_0_39_step_cpu);

v0_0_39_step_cpu_t *v0_0_39_step_cpu_parseFromJSON(cJSON *v0_0_39_step_cpuJSON);

cJSON *v0_0_39_step_cpu_convertToJSON(v0_0_39_step_cpu_t *v0_0_39_step_cpu);

#endif /* _v0_0_39_step_cpu_H_ */

