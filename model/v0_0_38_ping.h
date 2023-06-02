/*
 * v0_0_38_ping.h
 *
 * 
 */

#ifndef _v0_0_38_ping_H_
#define _v0_0_38_ping_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_38_ping_t v0_0_38_ping_t;


// Enum PING for v0_0_38_ping

typedef enum  { slurm_rest_api_v0_0_38_ping_PING_NULL = 0, slurm_rest_api_v0_0_38_ping_PING_UP, slurm_rest_api_v0_0_38_ping_PING_DOWN } slurm_rest_api_v0_0_38_ping_PING_e;

char* v0_0_38_ping_ping_ToString(slurm_rest_api_v0_0_38_ping_PING_e ping);

slurm_rest_api_v0_0_38_ping_PING_e v0_0_38_ping_ping_FromString(char* ping);



typedef struct v0_0_38_ping_t {
    char *hostname; // string
    slurm_rest_api_v0_0_38_ping_PING_e ping; //enum
    char *mode; // string
    int status; //numeric

} v0_0_38_ping_t;

v0_0_38_ping_t *v0_0_38_ping_create(
    char *hostname,
    slurm_rest_api_v0_0_38_ping_PING_e ping,
    char *mode,
    int status
);

void v0_0_38_ping_free(v0_0_38_ping_t *v0_0_38_ping);

v0_0_38_ping_t *v0_0_38_ping_parseFromJSON(cJSON *v0_0_38_pingJSON);

cJSON *v0_0_38_ping_convertToJSON(v0_0_38_ping_t *v0_0_38_ping);

#endif /* _v0_0_38_ping_H_ */

