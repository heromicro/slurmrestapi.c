/*
 * v0_0_37_reservation_purge_completed.h
 *
 * If PURGE_COMP flag is set the amount of seconds this reservation will sit idle until it is revoked
 */

#ifndef _v0_0_37_reservation_purge_completed_H_
#define _v0_0_37_reservation_purge_completed_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_37_reservation_purge_completed_t v0_0_37_reservation_purge_completed_t;




typedef struct v0_0_37_reservation_purge_completed_t {
    int time; //numeric

} v0_0_37_reservation_purge_completed_t;

v0_0_37_reservation_purge_completed_t *v0_0_37_reservation_purge_completed_create(
    int time
);

void v0_0_37_reservation_purge_completed_free(v0_0_37_reservation_purge_completed_t *v0_0_37_reservation_purge_completed);

v0_0_37_reservation_purge_completed_t *v0_0_37_reservation_purge_completed_parseFromJSON(cJSON *v0_0_37_reservation_purge_completedJSON);

cJSON *v0_0_37_reservation_purge_completed_convertToJSON(v0_0_37_reservation_purge_completed_t *v0_0_37_reservation_purge_completed);

#endif /* _v0_0_37_reservation_purge_completed_H_ */

