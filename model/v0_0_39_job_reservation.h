/*
 * v0_0_39_job_reservation.h
 *
 * 
 */

#ifndef _v0_0_39_job_reservation_H_
#define _v0_0_39_job_reservation_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_job_reservation_t v0_0_39_job_reservation_t;




typedef struct v0_0_39_job_reservation_t {
    char *name; // string

} v0_0_39_job_reservation_t;

v0_0_39_job_reservation_t *v0_0_39_job_reservation_create(
    char *name
);

void v0_0_39_job_reservation_free(v0_0_39_job_reservation_t *v0_0_39_job_reservation);

v0_0_39_job_reservation_t *v0_0_39_job_reservation_parseFromJSON(cJSON *v0_0_39_job_reservationJSON);

cJSON *v0_0_39_job_reservation_convertToJSON(v0_0_39_job_reservation_t *v0_0_39_job_reservation);

#endif /* _v0_0_39_job_reservation_H_ */

