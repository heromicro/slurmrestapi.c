/*
 * v0_0_39_reservation_info_purge_completed.h
 *
 * 
 */

#ifndef _v0_0_39_reservation_info_purge_completed_H_
#define _v0_0_39_reservation_info_purge_completed_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_reservation_info_purge_completed_t v0_0_39_reservation_info_purge_completed_t;

#include "v0_0_39_uint32_no_val.h"



typedef struct v0_0_39_reservation_info_purge_completed_t {
    struct v0_0_39_uint32_no_val_t *time; //model

} v0_0_39_reservation_info_purge_completed_t;

v0_0_39_reservation_info_purge_completed_t *v0_0_39_reservation_info_purge_completed_create(
    v0_0_39_uint32_no_val_t *time
);

void v0_0_39_reservation_info_purge_completed_free(v0_0_39_reservation_info_purge_completed_t *v0_0_39_reservation_info_purge_completed);

v0_0_39_reservation_info_purge_completed_t *v0_0_39_reservation_info_purge_completed_parseFromJSON(cJSON *v0_0_39_reservation_info_purge_completedJSON);

cJSON *v0_0_39_reservation_info_purge_completed_convertToJSON(v0_0_39_reservation_info_purge_completed_t *v0_0_39_reservation_info_purge_completed);

#endif /* _v0_0_39_reservation_info_purge_completed_H_ */

