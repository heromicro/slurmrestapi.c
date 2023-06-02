/*
 * v0_0_39_partition_info.h
 *
 * 
 */

#ifndef _v0_0_39_partition_info_H_
#define _v0_0_39_partition_info_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_partition_info_t v0_0_39_partition_info_t;

#include "v0_0_39_partition_info_accounts.h"
#include "v0_0_39_partition_info_defaults.h"
#include "v0_0_39_partition_info_groups.h"
#include "v0_0_39_partition_info_maximums.h"
#include "v0_0_39_partition_info_minimums.h"
#include "v0_0_39_partition_info_nodes.h"
#include "v0_0_39_partition_info_priority.h"
#include "v0_0_39_partition_info_qos.h"
#include "v0_0_39_partition_info_timeouts.h"
#include "v0_0_39_partition_info_tres.h"
#include "v0_0_39_uint32_no_val.h"



typedef struct v0_0_39_partition_info_t {
    struct v0_0_39_partition_info_nodes_t *nodes; //model
    struct v0_0_39_partition_info_accounts_t *accounts; //model
    struct v0_0_39_partition_info_groups_t *groups; //model
    struct v0_0_39_partition_info_qos_t *qos; //model
    char *alternate; // string
    struct v0_0_39_partition_info_tres_t *tres; //model
    char *cluster; // string
    struct v0_0_39_partition_info_nodes_t *cpus; //model
    struct v0_0_39_partition_info_defaults_t *defaults; //model
    int grace_time; //numeric
    struct v0_0_39_partition_info_maximums_t *maximums; //model
    struct v0_0_39_partition_info_minimums_t *minimums; //model
    char *name; // string
    char *node_sets; // string
    struct v0_0_39_partition_info_priority_t *priority; //model
    struct v0_0_39_partition_info_timeouts_t *timeouts; //model
    struct v0_0_39_uint32_no_val_t *suspend_time; //model

} v0_0_39_partition_info_t;

v0_0_39_partition_info_t *v0_0_39_partition_info_create(
    v0_0_39_partition_info_nodes_t *nodes,
    v0_0_39_partition_info_accounts_t *accounts,
    v0_0_39_partition_info_groups_t *groups,
    v0_0_39_partition_info_qos_t *qos,
    char *alternate,
    v0_0_39_partition_info_tres_t *tres,
    char *cluster,
    v0_0_39_partition_info_nodes_t *cpus,
    v0_0_39_partition_info_defaults_t *defaults,
    int grace_time,
    v0_0_39_partition_info_maximums_t *maximums,
    v0_0_39_partition_info_minimums_t *minimums,
    char *name,
    char *node_sets,
    v0_0_39_partition_info_priority_t *priority,
    v0_0_39_partition_info_timeouts_t *timeouts,
    v0_0_39_uint32_no_val_t *suspend_time
);

void v0_0_39_partition_info_free(v0_0_39_partition_info_t *v0_0_39_partition_info);

v0_0_39_partition_info_t *v0_0_39_partition_info_parseFromJSON(cJSON *v0_0_39_partition_infoJSON);

cJSON *v0_0_39_partition_info_convertToJSON(v0_0_39_partition_info_t *v0_0_39_partition_info);

#endif /* _v0_0_39_partition_info_H_ */

