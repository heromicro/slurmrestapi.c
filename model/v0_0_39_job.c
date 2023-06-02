#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_job.h"


char* flagsv0_0_39_job_ToString(slurm_rest_api_v0_0_39_job_FLAGS_e flags) {
	char *flagsArray[] =  { "NULL", "NONE", "CLEAR_SCHEDULING", "NOT_SET", "STARTED_ON_SUBMIT", "STARTED_ON_SCHEDULE", "STARTED_ON_BACKFILL" };
	return flagsArray[flags - 1];
}

slurm_rest_api_v0_0_39_job_FLAGS_e flagsv0_0_39_job_FromString(char* flags) {
    int stringToReturn = 0;
    char *flagsArray[] =  { "NULL", "NONE", "CLEAR_SCHEDULING", "NOT_SET", "STARTED_ON_SUBMIT", "STARTED_ON_SCHEDULE", "STARTED_ON_BACKFILL" };
    size_t sizeofArray = sizeof(flagsArray) / sizeof(flagsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(flags, flagsArray[stringToReturn]) == 0) {
            return stringToReturn + 1;
        }
        stringToReturn++;
    }
    return 0;
}

v0_0_39_job_t *v0_0_39_job_create(
    char *account,
    v0_0_39_job_comment_t *comment,
    int allocation_nodes,
    v0_0_39_job_array_t *array,
    v0_0_39_assoc_short_t *association,
    char *block,
    char *cluster,
    char *constraints,
    char *container,
    v0_0_39_job_exit_code_t *derived_exit_code,
    v0_0_39_job_time_t *time,
    v0_0_39_job_exit_code_t *exit_code,
    char *extra,
    char *failed_node,
    list_t *flags,
    char *group,
    v0_0_39_job_het_t *het,
    int job_id,
    char *name,
    char *licenses,
    v0_0_39_job_mcs_t *mcs,
    char *nodes,
    char *partition,
    v0_0_39_uint32_no_val_t *priority,
    char *qos,
    v0_0_39_job_required_t *required,
    char *kill_request_user,
    v0_0_39_job_reservation_t *reservation,
    char *script,
    v0_0_39_job_state_t *state,
    list_t *steps,
    char *submit_line,
    v0_0_39_job_tres_t *tres,
    char *used_gres,
    char *user,
    v0_0_39_wckey_tag_t *wckey,
    char *working_directory
    ) {
    v0_0_39_job_t *v0_0_39_job_local_var = malloc(sizeof(v0_0_39_job_t));
    if (!v0_0_39_job_local_var) {
        return NULL;
    }
    v0_0_39_job_local_var->account = account;
    v0_0_39_job_local_var->comment = comment;
    v0_0_39_job_local_var->allocation_nodes = allocation_nodes;
    v0_0_39_job_local_var->array = array;
    v0_0_39_job_local_var->association = association;
    v0_0_39_job_local_var->block = block;
    v0_0_39_job_local_var->cluster = cluster;
    v0_0_39_job_local_var->constraints = constraints;
    v0_0_39_job_local_var->container = container;
    v0_0_39_job_local_var->derived_exit_code = derived_exit_code;
    v0_0_39_job_local_var->time = time;
    v0_0_39_job_local_var->exit_code = exit_code;
    v0_0_39_job_local_var->extra = extra;
    v0_0_39_job_local_var->failed_node = failed_node;
    v0_0_39_job_local_var->flags = flags;
    v0_0_39_job_local_var->group = group;
    v0_0_39_job_local_var->het = het;
    v0_0_39_job_local_var->job_id = job_id;
    v0_0_39_job_local_var->name = name;
    v0_0_39_job_local_var->licenses = licenses;
    v0_0_39_job_local_var->mcs = mcs;
    v0_0_39_job_local_var->nodes = nodes;
    v0_0_39_job_local_var->partition = partition;
    v0_0_39_job_local_var->priority = priority;
    v0_0_39_job_local_var->qos = qos;
    v0_0_39_job_local_var->required = required;
    v0_0_39_job_local_var->kill_request_user = kill_request_user;
    v0_0_39_job_local_var->reservation = reservation;
    v0_0_39_job_local_var->script = script;
    v0_0_39_job_local_var->state = state;
    v0_0_39_job_local_var->steps = steps;
    v0_0_39_job_local_var->submit_line = submit_line;
    v0_0_39_job_local_var->tres = tres;
    v0_0_39_job_local_var->used_gres = used_gres;
    v0_0_39_job_local_var->user = user;
    v0_0_39_job_local_var->wckey = wckey;
    v0_0_39_job_local_var->working_directory = working_directory;

    return v0_0_39_job_local_var;
}


void v0_0_39_job_free(v0_0_39_job_t *v0_0_39_job) {
    if(NULL == v0_0_39_job){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_job->account) {
        free(v0_0_39_job->account);
        v0_0_39_job->account = NULL;
    }
    if (v0_0_39_job->comment) {
        v0_0_39_job_comment_free(v0_0_39_job->comment);
        v0_0_39_job->comment = NULL;
    }
    if (v0_0_39_job->array) {
        v0_0_39_job_array_free(v0_0_39_job->array);
        v0_0_39_job->array = NULL;
    }
    if (v0_0_39_job->association) {
        v0_0_39_assoc_short_free(v0_0_39_job->association);
        v0_0_39_job->association = NULL;
    }
    if (v0_0_39_job->block) {
        free(v0_0_39_job->block);
        v0_0_39_job->block = NULL;
    }
    if (v0_0_39_job->cluster) {
        free(v0_0_39_job->cluster);
        v0_0_39_job->cluster = NULL;
    }
    if (v0_0_39_job->constraints) {
        free(v0_0_39_job->constraints);
        v0_0_39_job->constraints = NULL;
    }
    if (v0_0_39_job->container) {
        free(v0_0_39_job->container);
        v0_0_39_job->container = NULL;
    }
    if (v0_0_39_job->derived_exit_code) {
        v0_0_39_job_exit_code_free(v0_0_39_job->derived_exit_code);
        v0_0_39_job->derived_exit_code = NULL;
    }
    if (v0_0_39_job->time) {
        v0_0_39_job_time_free(v0_0_39_job->time);
        v0_0_39_job->time = NULL;
    }
    if (v0_0_39_job->exit_code) {
        v0_0_39_job_exit_code_free(v0_0_39_job->exit_code);
        v0_0_39_job->exit_code = NULL;
    }
    if (v0_0_39_job->extra) {
        free(v0_0_39_job->extra);
        v0_0_39_job->extra = NULL;
    }
    if (v0_0_39_job->failed_node) {
        free(v0_0_39_job->failed_node);
        v0_0_39_job->failed_node = NULL;
    }
    if (v0_0_39_job->flags) {
        list_ForEach(listEntry, v0_0_39_job->flags) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_job->flags);
        v0_0_39_job->flags = NULL;
    }
    if (v0_0_39_job->group) {
        free(v0_0_39_job->group);
        v0_0_39_job->group = NULL;
    }
    if (v0_0_39_job->het) {
        v0_0_39_job_het_free(v0_0_39_job->het);
        v0_0_39_job->het = NULL;
    }
    if (v0_0_39_job->name) {
        free(v0_0_39_job->name);
        v0_0_39_job->name = NULL;
    }
    if (v0_0_39_job->licenses) {
        free(v0_0_39_job->licenses);
        v0_0_39_job->licenses = NULL;
    }
    if (v0_0_39_job->mcs) {
        v0_0_39_job_mcs_free(v0_0_39_job->mcs);
        v0_0_39_job->mcs = NULL;
    }
    if (v0_0_39_job->nodes) {
        free(v0_0_39_job->nodes);
        v0_0_39_job->nodes = NULL;
    }
    if (v0_0_39_job->partition) {
        free(v0_0_39_job->partition);
        v0_0_39_job->partition = NULL;
    }
    if (v0_0_39_job->priority) {
        v0_0_39_uint32_no_val_free(v0_0_39_job->priority);
        v0_0_39_job->priority = NULL;
    }
    if (v0_0_39_job->qos) {
        free(v0_0_39_job->qos);
        v0_0_39_job->qos = NULL;
    }
    if (v0_0_39_job->required) {
        v0_0_39_job_required_free(v0_0_39_job->required);
        v0_0_39_job->required = NULL;
    }
    if (v0_0_39_job->kill_request_user) {
        free(v0_0_39_job->kill_request_user);
        v0_0_39_job->kill_request_user = NULL;
    }
    if (v0_0_39_job->reservation) {
        v0_0_39_job_reservation_free(v0_0_39_job->reservation);
        v0_0_39_job->reservation = NULL;
    }
    if (v0_0_39_job->script) {
        free(v0_0_39_job->script);
        v0_0_39_job->script = NULL;
    }
    if (v0_0_39_job->state) {
        v0_0_39_job_state_free(v0_0_39_job->state);
        v0_0_39_job->state = NULL;
    }
    if (v0_0_39_job->steps) {
        list_ForEach(listEntry, v0_0_39_job->steps) {
            v0_0_39_step_free(listEntry->data);
        }
        list_freeList(v0_0_39_job->steps);
        v0_0_39_job->steps = NULL;
    }
    if (v0_0_39_job->submit_line) {
        free(v0_0_39_job->submit_line);
        v0_0_39_job->submit_line = NULL;
    }
    if (v0_0_39_job->tres) {
        v0_0_39_job_tres_free(v0_0_39_job->tres);
        v0_0_39_job->tres = NULL;
    }
    if (v0_0_39_job->used_gres) {
        free(v0_0_39_job->used_gres);
        v0_0_39_job->used_gres = NULL;
    }
    if (v0_0_39_job->user) {
        free(v0_0_39_job->user);
        v0_0_39_job->user = NULL;
    }
    if (v0_0_39_job->wckey) {
        v0_0_39_wckey_tag_free(v0_0_39_job->wckey);
        v0_0_39_job->wckey = NULL;
    }
    if (v0_0_39_job->working_directory) {
        free(v0_0_39_job->working_directory);
        v0_0_39_job->working_directory = NULL;
    }
    free(v0_0_39_job);
}

cJSON *v0_0_39_job_convertToJSON(v0_0_39_job_t *v0_0_39_job) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_job->account
    if(v0_0_39_job->account) {
    if(cJSON_AddStringToObject(item, "account", v0_0_39_job->account) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job->comment
    if(v0_0_39_job->comment) {
    cJSON *comment_local_JSON = v0_0_39_job_comment_convertToJSON(v0_0_39_job->comment);
    if(comment_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "comment", comment_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job->allocation_nodes
    if(v0_0_39_job->allocation_nodes) {
    if(cJSON_AddNumberToObject(item, "allocation_nodes", v0_0_39_job->allocation_nodes) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job->array
    if(v0_0_39_job->array) {
    cJSON *array_local_JSON = v0_0_39_job_array_convertToJSON(v0_0_39_job->array);
    if(array_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "array", array_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job->association
    if(v0_0_39_job->association) {
    cJSON *association_local_JSON = v0_0_39_assoc_short_convertToJSON(v0_0_39_job->association);
    if(association_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "association", association_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job->block
    if(v0_0_39_job->block) {
    if(cJSON_AddStringToObject(item, "block", v0_0_39_job->block) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job->cluster
    if(v0_0_39_job->cluster) {
    if(cJSON_AddStringToObject(item, "cluster", v0_0_39_job->cluster) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job->constraints
    if(v0_0_39_job->constraints) {
    if(cJSON_AddStringToObject(item, "constraints", v0_0_39_job->constraints) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job->container
    if(v0_0_39_job->container) {
    if(cJSON_AddStringToObject(item, "container", v0_0_39_job->container) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job->derived_exit_code
    if(v0_0_39_job->derived_exit_code) {
    cJSON *derived_exit_code_local_JSON = v0_0_39_job_exit_code_convertToJSON(v0_0_39_job->derived_exit_code);
    if(derived_exit_code_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "derived_exit_code", derived_exit_code_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job->time
    if(v0_0_39_job->time) {
    cJSON *time_local_JSON = v0_0_39_job_time_convertToJSON(v0_0_39_job->time);
    if(time_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "time", time_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job->exit_code
    if(v0_0_39_job->exit_code) {
    cJSON *exit_code_local_JSON = v0_0_39_job_exit_code_convertToJSON(v0_0_39_job->exit_code);
    if(exit_code_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "exit_code", exit_code_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job->extra
    if(v0_0_39_job->extra) {
    if(cJSON_AddStringToObject(item, "extra", v0_0_39_job->extra) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job->failed_node
    if(v0_0_39_job->failed_node) {
    if(cJSON_AddStringToObject(item, "failed_node", v0_0_39_job->failed_node) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job->flags
    if(v0_0_39_job->flags != slurm_rest_api_v0_0_39_job_FLAGS_NULL) {
    cJSON *flags = cJSON_AddArrayToObject(item, "flags");
    if(flags == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *flagsListEntry;
    list_ForEach(flagsListEntry, v0_0_39_job->flags) {
    if(cJSON_AddStringToObject(flags, "", (char*)flagsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_job->group
    if(v0_0_39_job->group) {
    if(cJSON_AddStringToObject(item, "group", v0_0_39_job->group) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job->het
    if(v0_0_39_job->het) {
    cJSON *het_local_JSON = v0_0_39_job_het_convertToJSON(v0_0_39_job->het);
    if(het_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "het", het_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job->job_id
    if(v0_0_39_job->job_id) {
    if(cJSON_AddNumberToObject(item, "job_id", v0_0_39_job->job_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job->name
    if(v0_0_39_job->name) {
    if(cJSON_AddStringToObject(item, "name", v0_0_39_job->name) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job->licenses
    if(v0_0_39_job->licenses) {
    if(cJSON_AddStringToObject(item, "licenses", v0_0_39_job->licenses) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job->mcs
    if(v0_0_39_job->mcs) {
    cJSON *mcs_local_JSON = v0_0_39_job_mcs_convertToJSON(v0_0_39_job->mcs);
    if(mcs_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "mcs", mcs_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job->nodes
    if(v0_0_39_job->nodes) {
    if(cJSON_AddStringToObject(item, "nodes", v0_0_39_job->nodes) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job->partition
    if(v0_0_39_job->partition) {
    if(cJSON_AddStringToObject(item, "partition", v0_0_39_job->partition) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job->priority
    if(v0_0_39_job->priority) {
    cJSON *priority_local_JSON = v0_0_39_uint32_no_val_convertToJSON(v0_0_39_job->priority);
    if(priority_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "priority", priority_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job->qos
    if(v0_0_39_job->qos) {
    if(cJSON_AddStringToObject(item, "qos", v0_0_39_job->qos) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job->required
    if(v0_0_39_job->required) {
    cJSON *required_local_JSON = v0_0_39_job_required_convertToJSON(v0_0_39_job->required);
    if(required_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "required", required_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job->kill_request_user
    if(v0_0_39_job->kill_request_user) {
    if(cJSON_AddStringToObject(item, "kill_request_user", v0_0_39_job->kill_request_user) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job->reservation
    if(v0_0_39_job->reservation) {
    cJSON *reservation_local_JSON = v0_0_39_job_reservation_convertToJSON(v0_0_39_job->reservation);
    if(reservation_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "reservation", reservation_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job->script
    if(v0_0_39_job->script) {
    if(cJSON_AddStringToObject(item, "script", v0_0_39_job->script) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job->state
    if(v0_0_39_job->state) {
    cJSON *state_local_JSON = v0_0_39_job_state_convertToJSON(v0_0_39_job->state);
    if(state_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "state", state_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job->steps
    if(v0_0_39_job->steps) {
    cJSON *steps = cJSON_AddArrayToObject(item, "steps");
    if(steps == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *stepsListEntry;
    if (v0_0_39_job->steps) {
    list_ForEach(stepsListEntry, v0_0_39_job->steps) {
    cJSON *itemLocal = v0_0_39_step_convertToJSON(stepsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(steps, itemLocal);
    }
    }
    }


    // v0_0_39_job->submit_line
    if(v0_0_39_job->submit_line) {
    if(cJSON_AddStringToObject(item, "submit_line", v0_0_39_job->submit_line) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job->tres
    if(v0_0_39_job->tres) {
    cJSON *tres_local_JSON = v0_0_39_job_tres_convertToJSON(v0_0_39_job->tres);
    if(tres_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "tres", tres_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job->used_gres
    if(v0_0_39_job->used_gres) {
    if(cJSON_AddStringToObject(item, "used_gres", v0_0_39_job->used_gres) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job->user
    if(v0_0_39_job->user) {
    if(cJSON_AddStringToObject(item, "user", v0_0_39_job->user) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job->wckey
    if(v0_0_39_job->wckey) {
    cJSON *wckey_local_JSON = v0_0_39_wckey_tag_convertToJSON(v0_0_39_job->wckey);
    if(wckey_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "wckey", wckey_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_job->working_directory
    if(v0_0_39_job->working_directory) {
    if(cJSON_AddStringToObject(item, "working_directory", v0_0_39_job->working_directory) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

v0_0_39_job_t *v0_0_39_job_parseFromJSON(cJSON *v0_0_39_jobJSON){

    v0_0_39_job_t *v0_0_39_job_local_var = NULL;

    // define the local variable for v0_0_39_job->comment
    v0_0_39_job_comment_t *comment_local_nonprim = NULL;

    // define the local variable for v0_0_39_job->array
    v0_0_39_job_array_t *array_local_nonprim = NULL;

    // define the local variable for v0_0_39_job->association
    v0_0_39_assoc_short_t *association_local_nonprim = NULL;

    // define the local variable for v0_0_39_job->derived_exit_code
    v0_0_39_job_exit_code_t *derived_exit_code_local_nonprim = NULL;

    // define the local variable for v0_0_39_job->time
    v0_0_39_job_time_t *time_local_nonprim = NULL;

    // define the local variable for v0_0_39_job->exit_code
    v0_0_39_job_exit_code_t *exit_code_local_nonprim = NULL;

    // define the local list for v0_0_39_job->flags
    list_t *flagsList = NULL;

    // define the local variable for v0_0_39_job->het
    v0_0_39_job_het_t *het_local_nonprim = NULL;

    // define the local variable for v0_0_39_job->mcs
    v0_0_39_job_mcs_t *mcs_local_nonprim = NULL;

    // define the local variable for v0_0_39_job->priority
    v0_0_39_uint32_no_val_t *priority_local_nonprim = NULL;

    // define the local variable for v0_0_39_job->required
    v0_0_39_job_required_t *required_local_nonprim = NULL;

    // define the local variable for v0_0_39_job->reservation
    v0_0_39_job_reservation_t *reservation_local_nonprim = NULL;

    // define the local variable for v0_0_39_job->state
    v0_0_39_job_state_t *state_local_nonprim = NULL;

    // define the local list for v0_0_39_job->steps
    list_t *stepsList = NULL;

    // define the local variable for v0_0_39_job->tres
    v0_0_39_job_tres_t *tres_local_nonprim = NULL;

    // define the local variable for v0_0_39_job->wckey
    v0_0_39_wckey_tag_t *wckey_local_nonprim = NULL;

    // v0_0_39_job->account
    cJSON *account = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobJSON, "account");
    if (account) { 
    if(!cJSON_IsString(account) && !cJSON_IsNull(account))
    {
    goto end; //String
    }
    }

    // v0_0_39_job->comment
    cJSON *comment = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobJSON, "comment");
    if (comment) { 
    comment_local_nonprim = v0_0_39_job_comment_parseFromJSON(comment); //nonprimitive
    }

    // v0_0_39_job->allocation_nodes
    cJSON *allocation_nodes = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobJSON, "allocation_nodes");
    if (allocation_nodes) { 
    if(!cJSON_IsNumber(allocation_nodes))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job->array
    cJSON *array = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobJSON, "array");
    if (array) { 
    array_local_nonprim = v0_0_39_job_array_parseFromJSON(array); //nonprimitive
    }

    // v0_0_39_job->association
    cJSON *association = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobJSON, "association");
    if (association) { 
    association_local_nonprim = v0_0_39_assoc_short_parseFromJSON(association); //nonprimitive
    }

    // v0_0_39_job->block
    cJSON *block = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobJSON, "block");
    if (block) { 
    if(!cJSON_IsString(block) && !cJSON_IsNull(block))
    {
    goto end; //String
    }
    }

    // v0_0_39_job->cluster
    cJSON *cluster = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobJSON, "cluster");
    if (cluster) { 
    if(!cJSON_IsString(cluster) && !cJSON_IsNull(cluster))
    {
    goto end; //String
    }
    }

    // v0_0_39_job->constraints
    cJSON *constraints = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobJSON, "constraints");
    if (constraints) { 
    if(!cJSON_IsString(constraints) && !cJSON_IsNull(constraints))
    {
    goto end; //String
    }
    }

    // v0_0_39_job->container
    cJSON *container = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobJSON, "container");
    if (container) { 
    if(!cJSON_IsString(container) && !cJSON_IsNull(container))
    {
    goto end; //String
    }
    }

    // v0_0_39_job->derived_exit_code
    cJSON *derived_exit_code = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobJSON, "derived_exit_code");
    if (derived_exit_code) { 
    derived_exit_code_local_nonprim = v0_0_39_job_exit_code_parseFromJSON(derived_exit_code); //nonprimitive
    }

    // v0_0_39_job->time
    cJSON *time = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobJSON, "time");
    if (time) { 
    time_local_nonprim = v0_0_39_job_time_parseFromJSON(time); //nonprimitive
    }

    // v0_0_39_job->exit_code
    cJSON *exit_code = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobJSON, "exit_code");
    if (exit_code) { 
    exit_code_local_nonprim = v0_0_39_job_exit_code_parseFromJSON(exit_code); //nonprimitive
    }

    // v0_0_39_job->extra
    cJSON *extra = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobJSON, "extra");
    if (extra) { 
    if(!cJSON_IsString(extra) && !cJSON_IsNull(extra))
    {
    goto end; //String
    }
    }

    // v0_0_39_job->failed_node
    cJSON *failed_node = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobJSON, "failed_node");
    if (failed_node) { 
    if(!cJSON_IsString(failed_node) && !cJSON_IsNull(failed_node))
    {
    goto end; //String
    }
    }

    // v0_0_39_job->flags
    cJSON *flags = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobJSON, "flags");
    if (flags) { 
    cJSON *flags_local = NULL;
    if(!cJSON_IsArray(flags)) {
        goto end;//primitive container
    }
    flagsList = list_createList();

    cJSON_ArrayForEach(flags_local, flags)
    {
        if(!cJSON_IsString(flags_local))
        {
            goto end;
        }
        list_addElement(flagsList , strdup(flags_local->valuestring));
    }
    }

    // v0_0_39_job->group
    cJSON *group = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobJSON, "group");
    if (group) { 
    if(!cJSON_IsString(group) && !cJSON_IsNull(group))
    {
    goto end; //String
    }
    }

    // v0_0_39_job->het
    cJSON *het = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobJSON, "het");
    if (het) { 
    het_local_nonprim = v0_0_39_job_het_parseFromJSON(het); //nonprimitive
    }

    // v0_0_39_job->job_id
    cJSON *job_id = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobJSON, "job_id");
    if (job_id) { 
    if(!cJSON_IsNumber(job_id))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // v0_0_39_job->licenses
    cJSON *licenses = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobJSON, "licenses");
    if (licenses) { 
    if(!cJSON_IsString(licenses) && !cJSON_IsNull(licenses))
    {
    goto end; //String
    }
    }

    // v0_0_39_job->mcs
    cJSON *mcs = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobJSON, "mcs");
    if (mcs) { 
    mcs_local_nonprim = v0_0_39_job_mcs_parseFromJSON(mcs); //nonprimitive
    }

    // v0_0_39_job->nodes
    cJSON *nodes = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobJSON, "nodes");
    if (nodes) { 
    if(!cJSON_IsString(nodes) && !cJSON_IsNull(nodes))
    {
    goto end; //String
    }
    }

    // v0_0_39_job->partition
    cJSON *partition = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobJSON, "partition");
    if (partition) { 
    if(!cJSON_IsString(partition) && !cJSON_IsNull(partition))
    {
    goto end; //String
    }
    }

    // v0_0_39_job->priority
    cJSON *priority = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobJSON, "priority");
    if (priority) { 
    priority_local_nonprim = v0_0_39_uint32_no_val_parseFromJSON(priority); //nonprimitive
    }

    // v0_0_39_job->qos
    cJSON *qos = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobJSON, "qos");
    if (qos) { 
    if(!cJSON_IsString(qos) && !cJSON_IsNull(qos))
    {
    goto end; //String
    }
    }

    // v0_0_39_job->required
    cJSON *required = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobJSON, "required");
    if (required) { 
    required_local_nonprim = v0_0_39_job_required_parseFromJSON(required); //nonprimitive
    }

    // v0_0_39_job->kill_request_user
    cJSON *kill_request_user = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobJSON, "kill_request_user");
    if (kill_request_user) { 
    if(!cJSON_IsString(kill_request_user) && !cJSON_IsNull(kill_request_user))
    {
    goto end; //String
    }
    }

    // v0_0_39_job->reservation
    cJSON *reservation = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobJSON, "reservation");
    if (reservation) { 
    reservation_local_nonprim = v0_0_39_job_reservation_parseFromJSON(reservation); //nonprimitive
    }

    // v0_0_39_job->script
    cJSON *script = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobJSON, "script");
    if (script) { 
    if(!cJSON_IsString(script) && !cJSON_IsNull(script))
    {
    goto end; //String
    }
    }

    // v0_0_39_job->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobJSON, "state");
    if (state) { 
    state_local_nonprim = v0_0_39_job_state_parseFromJSON(state); //nonprimitive
    }

    // v0_0_39_job->steps
    cJSON *steps = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobJSON, "steps");
    if (steps) { 
    cJSON *steps_local_nonprimitive = NULL;
    if(!cJSON_IsArray(steps)){
        goto end; //nonprimitive container
    }

    stepsList = list_createList();

    cJSON_ArrayForEach(steps_local_nonprimitive,steps )
    {
        if(!cJSON_IsObject(steps_local_nonprimitive)){
            goto end;
        }
        v0_0_39_step_t *stepsItem = v0_0_39_step_parseFromJSON(steps_local_nonprimitive);

        list_addElement(stepsList, stepsItem);
    }
    }

    // v0_0_39_job->submit_line
    cJSON *submit_line = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobJSON, "submit_line");
    if (submit_line) { 
    if(!cJSON_IsString(submit_line) && !cJSON_IsNull(submit_line))
    {
    goto end; //String
    }
    }

    // v0_0_39_job->tres
    cJSON *tres = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobJSON, "tres");
    if (tres) { 
    tres_local_nonprim = v0_0_39_job_tres_parseFromJSON(tres); //nonprimitive
    }

    // v0_0_39_job->used_gres
    cJSON *used_gres = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobJSON, "used_gres");
    if (used_gres) { 
    if(!cJSON_IsString(used_gres) && !cJSON_IsNull(used_gres))
    {
    goto end; //String
    }
    }

    // v0_0_39_job->user
    cJSON *user = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobJSON, "user");
    if (user) { 
    if(!cJSON_IsString(user) && !cJSON_IsNull(user))
    {
    goto end; //String
    }
    }

    // v0_0_39_job->wckey
    cJSON *wckey = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobJSON, "wckey");
    if (wckey) { 
    wckey_local_nonprim = v0_0_39_wckey_tag_parseFromJSON(wckey); //nonprimitive
    }

    // v0_0_39_job->working_directory
    cJSON *working_directory = cJSON_GetObjectItemCaseSensitive(v0_0_39_jobJSON, "working_directory");
    if (working_directory) { 
    if(!cJSON_IsString(working_directory) && !cJSON_IsNull(working_directory))
    {
    goto end; //String
    }
    }


    v0_0_39_job_local_var = v0_0_39_job_create (
        account && !cJSON_IsNull(account) ? strdup(account->valuestring) : NULL,
        comment ? comment_local_nonprim : NULL,
        allocation_nodes ? allocation_nodes->valuedouble : 0,
        array ? array_local_nonprim : NULL,
        association ? association_local_nonprim : NULL,
        block && !cJSON_IsNull(block) ? strdup(block->valuestring) : NULL,
        cluster && !cJSON_IsNull(cluster) ? strdup(cluster->valuestring) : NULL,
        constraints && !cJSON_IsNull(constraints) ? strdup(constraints->valuestring) : NULL,
        container && !cJSON_IsNull(container) ? strdup(container->valuestring) : NULL,
        derived_exit_code ? derived_exit_code_local_nonprim : NULL,
        time ? time_local_nonprim : NULL,
        exit_code ? exit_code_local_nonprim : NULL,
        extra && !cJSON_IsNull(extra) ? strdup(extra->valuestring) : NULL,
        failed_node && !cJSON_IsNull(failed_node) ? strdup(failed_node->valuestring) : NULL,
        flags ? flagsList : NULL,
        group && !cJSON_IsNull(group) ? strdup(group->valuestring) : NULL,
        het ? het_local_nonprim : NULL,
        job_id ? job_id->valuedouble : 0,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        licenses && !cJSON_IsNull(licenses) ? strdup(licenses->valuestring) : NULL,
        mcs ? mcs_local_nonprim : NULL,
        nodes && !cJSON_IsNull(nodes) ? strdup(nodes->valuestring) : NULL,
        partition && !cJSON_IsNull(partition) ? strdup(partition->valuestring) : NULL,
        priority ? priority_local_nonprim : NULL,
        qos && !cJSON_IsNull(qos) ? strdup(qos->valuestring) : NULL,
        required ? required_local_nonprim : NULL,
        kill_request_user && !cJSON_IsNull(kill_request_user) ? strdup(kill_request_user->valuestring) : NULL,
        reservation ? reservation_local_nonprim : NULL,
        script && !cJSON_IsNull(script) ? strdup(script->valuestring) : NULL,
        state ? state_local_nonprim : NULL,
        steps ? stepsList : NULL,
        submit_line && !cJSON_IsNull(submit_line) ? strdup(submit_line->valuestring) : NULL,
        tres ? tres_local_nonprim : NULL,
        used_gres && !cJSON_IsNull(used_gres) ? strdup(used_gres->valuestring) : NULL,
        user && !cJSON_IsNull(user) ? strdup(user->valuestring) : NULL,
        wckey ? wckey_local_nonprim : NULL,
        working_directory && !cJSON_IsNull(working_directory) ? strdup(working_directory->valuestring) : NULL
        );

    return v0_0_39_job_local_var;
end:
    if (comment_local_nonprim) {
        v0_0_39_job_comment_free(comment_local_nonprim);
        comment_local_nonprim = NULL;
    }
    if (array_local_nonprim) {
        v0_0_39_job_array_free(array_local_nonprim);
        array_local_nonprim = NULL;
    }
    if (association_local_nonprim) {
        v0_0_39_assoc_short_free(association_local_nonprim);
        association_local_nonprim = NULL;
    }
    if (derived_exit_code_local_nonprim) {
        v0_0_39_job_exit_code_free(derived_exit_code_local_nonprim);
        derived_exit_code_local_nonprim = NULL;
    }
    if (time_local_nonprim) {
        v0_0_39_job_time_free(time_local_nonprim);
        time_local_nonprim = NULL;
    }
    if (exit_code_local_nonprim) {
        v0_0_39_job_exit_code_free(exit_code_local_nonprim);
        exit_code_local_nonprim = NULL;
    }
    if (flagsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, flagsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(flagsList);
        flagsList = NULL;
    }
    if (het_local_nonprim) {
        v0_0_39_job_het_free(het_local_nonprim);
        het_local_nonprim = NULL;
    }
    if (mcs_local_nonprim) {
        v0_0_39_job_mcs_free(mcs_local_nonprim);
        mcs_local_nonprim = NULL;
    }
    if (priority_local_nonprim) {
        v0_0_39_uint32_no_val_free(priority_local_nonprim);
        priority_local_nonprim = NULL;
    }
    if (required_local_nonprim) {
        v0_0_39_job_required_free(required_local_nonprim);
        required_local_nonprim = NULL;
    }
    if (reservation_local_nonprim) {
        v0_0_39_job_reservation_free(reservation_local_nonprim);
        reservation_local_nonprim = NULL;
    }
    if (state_local_nonprim) {
        v0_0_39_job_state_free(state_local_nonprim);
        state_local_nonprim = NULL;
    }
    if (stepsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, stepsList) {
            v0_0_39_step_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(stepsList);
        stepsList = NULL;
    }
    if (tres_local_nonprim) {
        v0_0_39_job_tres_free(tres_local_nonprim);
        tres_local_nonprim = NULL;
    }
    if (wckey_local_nonprim) {
        v0_0_39_wckey_tag_free(wckey_local_nonprim);
        wckey_local_nonprim = NULL;
    }
    return NULL;

}
