/*
 * v0_0_37_job_response_properties.h
 *
 * 
 */

#ifndef _v0_0_37_job_response_properties_H_
#define _v0_0_37_job_response_properties_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_37_job_response_properties_t v0_0_37_job_response_properties_t;

#include "v0_0_37_job_resources.h"



typedef struct v0_0_37_job_response_properties_t {
    char *account; // string
    long accrue_time; //numeric
    char *admin_comment; // string
    char *array_job_id; // string
    char *array_task_id; // string
    char *array_max_tasks; // string
    char *array_task_string; // string
    char *association_id; // string
    char *batch_features; // string
    int batch_flag; //boolean
    char *batch_host; // string
    list_t *flags; //primitive container
    char *burst_buffer; // string
    char *burst_buffer_state; // string
    char *cluster; // string
    char *cluster_features; // string
    char *command; // string
    char *comment; // string
    int contiguous; //boolean
    char *core_spec; // string
    char *thread_spec; // string
    char *cores_per_socket; // string
    char *billable_tres; // string
    char *cpus_per_task; // string
    char *cpu_frequency_minimum; // string
    char *cpu_frequency_maximum; // string
    char *cpu_frequency_governor; // string
    char *cpus_per_tres; // string
    char *deadline; // string
    char *delay_boot; // string
    char *dependency; // string
    char *derived_exit_code; // string
    long eligible_time; //numeric
    long end_time; //numeric
    char *excluded_nodes; // string
    int exit_code; //numeric
    char *features; // string
    char *federation_origin; // string
    char *federation_siblings_active; // string
    char *federation_siblings_viable; // string
    list_t *gres_detail; //primitive container
    char *group_id; // string
    char *job_id; // string
    struct v0_0_37_job_resources_t *job_resources; //model
    char *job_state; // string
    char *last_sched_evaluation; // string
    char *licenses; // string
    char *max_cpus; // string
    char *max_nodes; // string
    char *mcs_label; // string
    char *memory_per_tres; // string
    char *name; // string
    char *nodes; // string
    char *nice; // string
    char *tasks_per_core; // string
    char *tasks_per_socket; // string
    char *tasks_per_board; // string
    char *cpus; // string
    char *node_count; // string
    char *tasks; // string
    char *het_job_id; // string
    char *het_job_id_set; // string
    char *het_job_offset; // string
    char *partition; // string
    char *memory_per_node; // string
    char *memory_per_cpu; // string
    char *minimum_cpus_per_node; // string
    char *minimum_tmp_disk_per_node; // string
    long preempt_time; //numeric
    long pre_sus_time; //numeric
    char *priority; // string
    list_t *profile; //primitive container
    char *qos; // string
    int reboot; //boolean
    char *required_nodes; // string
    int requeue; //boolean
    long resize_time; //numeric
    char *restart_cnt; // string
    char *resv_name; // string
    char *shared; // string
    list_t *show_flags; //primitive container
    char *sockets_per_board; // string
    char *sockets_per_node; // string
    long start_time; //numeric
    char *state_description; // string
    char *state_reason; // string
    char *standard_error; // string
    char *standard_input; // string
    char *standard_output; // string
    long submit_time; //numeric
    long suspend_time; //numeric
    char *system_comment; // string
    char *time_limit; // string
    char *time_minimum; // string
    char *threads_per_core; // string
    char *tres_bind; // string
    char *tres_freq; // string
    char *tres_per_job; // string
    char *tres_per_node; // string
    char *tres_per_socket; // string
    char *tres_per_task; // string
    char *tres_req_str; // string
    char *tres_alloc_str; // string
    char *user_id; // string
    char *user_name; // string
    char *wckey; // string
    char *current_working_directory; // string

} v0_0_37_job_response_properties_t;

v0_0_37_job_response_properties_t *v0_0_37_job_response_properties_create(
    char *account,
    long accrue_time,
    char *admin_comment,
    char *array_job_id,
    char *array_task_id,
    char *array_max_tasks,
    char *array_task_string,
    char *association_id,
    char *batch_features,
    int batch_flag,
    char *batch_host,
    list_t *flags,
    char *burst_buffer,
    char *burst_buffer_state,
    char *cluster,
    char *cluster_features,
    char *command,
    char *comment,
    int contiguous,
    char *core_spec,
    char *thread_spec,
    char *cores_per_socket,
    char *billable_tres,
    char *cpus_per_task,
    char *cpu_frequency_minimum,
    char *cpu_frequency_maximum,
    char *cpu_frequency_governor,
    char *cpus_per_tres,
    char *deadline,
    char *delay_boot,
    char *dependency,
    char *derived_exit_code,
    long eligible_time,
    long end_time,
    char *excluded_nodes,
    int exit_code,
    char *features,
    char *federation_origin,
    char *federation_siblings_active,
    char *federation_siblings_viable,
    list_t *gres_detail,
    char *group_id,
    char *job_id,
    v0_0_37_job_resources_t *job_resources,
    char *job_state,
    char *last_sched_evaluation,
    char *licenses,
    char *max_cpus,
    char *max_nodes,
    char *mcs_label,
    char *memory_per_tres,
    char *name,
    char *nodes,
    char *nice,
    char *tasks_per_core,
    char *tasks_per_socket,
    char *tasks_per_board,
    char *cpus,
    char *node_count,
    char *tasks,
    char *het_job_id,
    char *het_job_id_set,
    char *het_job_offset,
    char *partition,
    char *memory_per_node,
    char *memory_per_cpu,
    char *minimum_cpus_per_node,
    char *minimum_tmp_disk_per_node,
    long preempt_time,
    long pre_sus_time,
    char *priority,
    list_t *profile,
    char *qos,
    int reboot,
    char *required_nodes,
    int requeue,
    long resize_time,
    char *restart_cnt,
    char *resv_name,
    char *shared,
    list_t *show_flags,
    char *sockets_per_board,
    char *sockets_per_node,
    long start_time,
    char *state_description,
    char *state_reason,
    char *standard_error,
    char *standard_input,
    char *standard_output,
    long submit_time,
    long suspend_time,
    char *system_comment,
    char *time_limit,
    char *time_minimum,
    char *threads_per_core,
    char *tres_bind,
    char *tres_freq,
    char *tres_per_job,
    char *tres_per_node,
    char *tres_per_socket,
    char *tres_per_task,
    char *tres_req_str,
    char *tres_alloc_str,
    char *user_id,
    char *user_name,
    char *wckey,
    char *current_working_directory
);

void v0_0_37_job_response_properties_free(v0_0_37_job_response_properties_t *v0_0_37_job_response_properties);

v0_0_37_job_response_properties_t *v0_0_37_job_response_properties_parseFromJSON(cJSON *v0_0_37_job_response_propertiesJSON);

cJSON *v0_0_37_job_response_properties_convertToJSON(v0_0_37_job_response_properties_t *v0_0_37_job_response_properties);

#endif /* _v0_0_37_job_response_properties_H_ */

