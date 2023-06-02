/*
 * status.h
 *
 * 
 */

#ifndef _status_H_
#define _status_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct status_t status_t;

#include "dbv0_0_39_error.h"
#include "dbv0_0_39_meta.h"
#include "dbv0_0_39_warning.h"



typedef struct status_t {
    struct dbv0_0_39_meta_t *meta; //model
    list_t *errors; //nonprimitive container
    list_t *warnings; //nonprimitive container

} status_t;

status_t *status_create(
    dbv0_0_39_meta_t *meta,
    list_t *errors,
    list_t *warnings
);

void status_free(status_t *status);

status_t *status_parseFromJSON(cJSON *statusJSON);

cJSON *status_convertToJSON(status_t *status);

#endif /* _status_H_ */

