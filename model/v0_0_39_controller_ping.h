/*
 * v0_0_39_controller_ping.h
 *
 * 
 */

#ifndef _v0_0_39_controller_ping_H_
#define _v0_0_39_controller_ping_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_controller_ping_t v0_0_39_controller_ping_t;




typedef struct v0_0_39_controller_ping_t {
    char *hostname; // string
    char *pinged; // string
    long latency; //numeric
    char *mode; // string

} v0_0_39_controller_ping_t;

v0_0_39_controller_ping_t *v0_0_39_controller_ping_create(
    char *hostname,
    char *pinged,
    long latency,
    char *mode
);

void v0_0_39_controller_ping_free(v0_0_39_controller_ping_t *v0_0_39_controller_ping);

v0_0_39_controller_ping_t *v0_0_39_controller_ping_parseFromJSON(cJSON *v0_0_39_controller_pingJSON);

cJSON *v0_0_39_controller_ping_convertToJSON(v0_0_39_controller_ping_t *v0_0_39_controller_ping);

#endif /* _v0_0_39_controller_ping_H_ */

