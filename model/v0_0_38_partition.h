/*
 * v0_0_38_partition.h
 *
 * 
 */

#ifndef _v0_0_38_partition_H_
#define _v0_0_38_partition_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_38_partition_t v0_0_38_partition_t;




typedef struct v0_0_38_partition_t {
    list_t *flags; //primitive container
    list_t *preemption_mode; //primitive container
    char *allowed_allocation_nodes; // string
    char *allowed_accounts; // string
    char *allowed_groups; // string
    char *allowed_qos; // string
    char *alternative; // string
    char *billing_weights; // string
    long default_memory_per_cpu; //numeric
    long default_time_limit; //numeric
    char *denied_accounts; // string
    char *denied_qos; // string
    long preemption_grace_time; //numeric
    int maximum_cpus_per_node; //numeric
    long maximum_memory_per_node; //numeric
    int maximum_nodes_per_job; //numeric
    long max_time_limit; //numeric
    int min_nodes_per_job; //numeric
    char *name; // string
    char *nodes; // string
    int over_time_limit; //numeric
    int priority_job_factor; //numeric
    int priority_tier; //numeric
    char *qos; // string
    char *state; // string
    int total_cpus; //numeric
    int total_nodes; //numeric
    char *tres; // string
    long maximum_memory_per_cpu; //numeric
    long default_memory_per_node; //numeric

} v0_0_38_partition_t;

v0_0_38_partition_t *v0_0_38_partition_create(
    list_t *flags,
    list_t *preemption_mode,
    char *allowed_allocation_nodes,
    char *allowed_accounts,
    char *allowed_groups,
    char *allowed_qos,
    char *alternative,
    char *billing_weights,
    long default_memory_per_cpu,
    long default_time_limit,
    char *denied_accounts,
    char *denied_qos,
    long preemption_grace_time,
    int maximum_cpus_per_node,
    long maximum_memory_per_node,
    int maximum_nodes_per_job,
    long max_time_limit,
    int min_nodes_per_job,
    char *name,
    char *nodes,
    int over_time_limit,
    int priority_job_factor,
    int priority_tier,
    char *qos,
    char *state,
    int total_cpus,
    int total_nodes,
    char *tres,
    long maximum_memory_per_cpu,
    long default_memory_per_node
);

void v0_0_38_partition_free(v0_0_38_partition_t *v0_0_38_partition);

v0_0_38_partition_t *v0_0_38_partition_parseFromJSON(cJSON *v0_0_38_partitionJSON);

cJSON *v0_0_38_partition_convertToJSON(v0_0_38_partition_t *v0_0_38_partition);

#endif /* _v0_0_38_partition_H_ */

