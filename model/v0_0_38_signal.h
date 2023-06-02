/*
 * v0_0_38_signal.h
 *
 * POSIX signal name
 */

#ifndef _v0_0_38_signal_H_
#define _v0_0_38_signal_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_38_signal_t v0_0_38_signal_t;


// Enum  for v0_0_38_signal

typedef enum { slurm_rest_api_v0_0_38_signal__NULL = 0, slurm_rest_api_v0_0_38_signal__HUP, slurm_rest_api_v0_0_38_signal___INT, slurm_rest_api_v0_0_38_signal__QUIT, slurm_rest_api_v0_0_38_signal__ABRT, slurm_rest_api_v0_0_38_signal__KILL, slurm_rest_api_v0_0_38_signal__ALRM, slurm_rest_api_v0_0_38_signal__TERM, slurm_rest_api_v0_0_38_signal__USR1, slurm_rest_api_v0_0_38_signal__USR2, slurm_rest_api_v0_0_38_signal__URG, slurm_rest_api_v0_0_38_signal__CONT, slurm_rest_api_v0_0_38_signal__STOP, slurm_rest_api_v0_0_38_signal__TSTP, slurm_rest_api_v0_0_38_signal__TTIN, slurm_rest_api_v0_0_38_signal__TTOU } slurm_rest_api_v0_0_38_signal__e;

char* v0_0_38_signal_v0_0_38_signal_ToString(slurm_rest_api_v0_0_38_signal__e v0_0_38_signal);

slurm_rest_api_v0_0_38_signal__e v0_0_38_signal_v0_0_38_signal_FromString(char* v0_0_38_signal);

//cJSON *v0_0_38_signal_v0_0_38_signal_convertToJSON(slurm_rest_api_v0_0_38_signal__e v0_0_38_signal);

//slurm_rest_api_v0_0_38_signal__e v0_0_38_signal_v0_0_38_signal_parseFromJSON(cJSON *v0_0_38_signalJSON);

#endif /* _v0_0_38_signal_H_ */

