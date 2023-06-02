/*
 * v0_0_37_reservation.h
 *
 * 
 */

#ifndef _v0_0_37_reservation_H_
#define _v0_0_37_reservation_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_37_reservation_t v0_0_37_reservation_t;

#include "v0_0_37_reservation_purge_completed.h"



typedef struct v0_0_37_reservation_t {
    char *accounts; // string
    char *burst_buffer; // string
    int core_count; //numeric
    int core_spec_cnt; //numeric
    int end_time; //numeric
    char *features; // string
    list_t *flags; //primitive container
    char *groups; // string
    char *licenses; // string
    int max_start_delay; //numeric
    char *name; // string
    int node_count; //numeric
    char *node_list; // string
    char *partition; // string
    struct v0_0_37_reservation_purge_completed_t *purge_completed; //model
    int start_time; //numeric
    int watts; //numeric
    char *tres; // string
    char *users; // string

} v0_0_37_reservation_t;

v0_0_37_reservation_t *v0_0_37_reservation_create(
    char *accounts,
    char *burst_buffer,
    int core_count,
    int core_spec_cnt,
    int end_time,
    char *features,
    list_t *flags,
    char *groups,
    char *licenses,
    int max_start_delay,
    char *name,
    int node_count,
    char *node_list,
    char *partition,
    v0_0_37_reservation_purge_completed_t *purge_completed,
    int start_time,
    int watts,
    char *tres,
    char *users
);

void v0_0_37_reservation_free(v0_0_37_reservation_t *v0_0_37_reservation);

v0_0_37_reservation_t *v0_0_37_reservation_parseFromJSON(cJSON *v0_0_37_reservationJSON);

cJSON *v0_0_37_reservation_convertToJSON(v0_0_37_reservation_t *v0_0_37_reservation);

#endif /* _v0_0_37_reservation_H_ */

