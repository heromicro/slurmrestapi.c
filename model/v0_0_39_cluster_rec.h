/*
 * v0_0_39_cluster_rec.h
 *
 * 
 */

#ifndef _v0_0_39_cluster_rec_H_
#define _v0_0_39_cluster_rec_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_cluster_rec_t v0_0_39_cluster_rec_t;

#include "v0_0_39_cluster_rec_associations.h"
#include "v0_0_39_cluster_rec_controller.h"
#include "v0_0_39_tres.h"

// Enum FLAGS for v0_0_39_cluster_rec

typedef enum  { slurm_rest_api_v0_0_39_cluster_rec_FLAGS_NULL = 0, slurm_rest_api_v0_0_39_cluster_rec_FLAGS_REGISTERING, slurm_rest_api_v0_0_39_cluster_rec_FLAGS_MULTIPLE_SLURMD, slurm_rest_api_v0_0_39_cluster_rec_FLAGS_FRONT_END, slurm_rest_api_v0_0_39_cluster_rec_FLAGS_CRAY_NATIVE, slurm_rest_api_v0_0_39_cluster_rec_FLAGS_FEDERATION, slurm_rest_api_v0_0_39_cluster_rec_FLAGS_EXTERNAL } slurm_rest_api_v0_0_39_cluster_rec_FLAGS_e;

char* v0_0_39_cluster_rec_flags_ToString(slurm_rest_api_v0_0_39_cluster_rec_FLAGS_e flags);

slurm_rest_api_v0_0_39_cluster_rec_FLAGS_e v0_0_39_cluster_rec_flags_FromString(char* flags);



typedef struct v0_0_39_cluster_rec_t {
    struct v0_0_39_cluster_rec_controller_t *controller; //model
    list_t *flags; //primitive container
    char *name; // string
    char *nodes; // string
    char *select_plugin; // string
    struct v0_0_39_cluster_rec_associations_t *associations; //model
    int rpc_version; //numeric
    list_t *tres; //nonprimitive container

} v0_0_39_cluster_rec_t;

v0_0_39_cluster_rec_t *v0_0_39_cluster_rec_create(
    v0_0_39_cluster_rec_controller_t *controller,
    list_t *flags,
    char *name,
    char *nodes,
    char *select_plugin,
    v0_0_39_cluster_rec_associations_t *associations,
    int rpc_version,
    list_t *tres
);

void v0_0_39_cluster_rec_free(v0_0_39_cluster_rec_t *v0_0_39_cluster_rec);

v0_0_39_cluster_rec_t *v0_0_39_cluster_rec_parseFromJSON(cJSON *v0_0_39_cluster_recJSON);

cJSON *v0_0_39_cluster_rec_convertToJSON(v0_0_39_cluster_rec_t *v0_0_39_cluster_rec);

#endif /* _v0_0_39_cluster_rec_H_ */

