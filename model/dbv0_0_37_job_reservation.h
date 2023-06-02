/*
 * dbv0_0_37_job_reservation.h
 *
 * Reservation usage details
 */

#ifndef _dbv0_0_37_job_reservation_H_
#define _dbv0_0_37_job_reservation_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct dbv0_0_37_job_reservation_t dbv0_0_37_job_reservation_t;




typedef struct dbv0_0_37_job_reservation_t {
    int id; //numeric
    int name; //numeric

} dbv0_0_37_job_reservation_t;

dbv0_0_37_job_reservation_t *dbv0_0_37_job_reservation_create(
    int id,
    int name
);

void dbv0_0_37_job_reservation_free(dbv0_0_37_job_reservation_t *dbv0_0_37_job_reservation);

dbv0_0_37_job_reservation_t *dbv0_0_37_job_reservation_parseFromJSON(cJSON *dbv0_0_37_job_reservationJSON);

cJSON *dbv0_0_37_job_reservation_convertToJSON(dbv0_0_37_job_reservation_t *dbv0_0_37_job_reservation);

#endif /* _dbv0_0_37_job_reservation_H_ */

