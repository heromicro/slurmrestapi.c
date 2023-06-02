/*
 * v0_0_39_cluster_rec_controller.h
 *
 * 
 */

#ifndef _v0_0_39_cluster_rec_controller_H_
#define _v0_0_39_cluster_rec_controller_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_cluster_rec_controller_t v0_0_39_cluster_rec_controller_t;




typedef struct v0_0_39_cluster_rec_controller_t {
    int port; //numeric

} v0_0_39_cluster_rec_controller_t;

v0_0_39_cluster_rec_controller_t *v0_0_39_cluster_rec_controller_create(
    int port
);

void v0_0_39_cluster_rec_controller_free(v0_0_39_cluster_rec_controller_t *v0_0_39_cluster_rec_controller);

v0_0_39_cluster_rec_controller_t *v0_0_39_cluster_rec_controller_parseFromJSON(cJSON *v0_0_39_cluster_rec_controllerJSON);

cJSON *v0_0_39_cluster_rec_controller_convertToJSON(v0_0_39_cluster_rec_controller_t *v0_0_39_cluster_rec_controller);

#endif /* _v0_0_39_cluster_rec_controller_H_ */

