#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_job.h"



dbv0_0_37_job_t *dbv0_0_37_job_create(
    char *account,
    dbv0_0_37_job_comment_t *comment,
    char *allocation_nodes,
    dbv0_0_37_job_array_t *array,
    dbv0_0_37_job_time_t *time,
    dbv0_0_37_association_short_info_t *association,
    char *cluster,
    char *constraints,
    dbv0_0_37_job_exit_code_t *derived_exit_code,
    dbv0_0_37_job_exit_code_t *exit_code,
    list_t *flags,
    char *group,
    dbv0_0_37_job_het_t *het,
    int job_id,
    char *name,
    dbv0_0_37_job_mcs_t *mcs,
    char *nodes,
    char *partition,
    int priority,
    char *qos,
    dbv0_0_37_job_required_t *required,
    char *kill_request_user,
    dbv0_0_37_job_reservation_t *reservation,
    dbv0_0_37_job_state_t *state,
    list_t *steps,
    dbv0_0_37_job_tres_t *tres,
    char *user,
    dbv0_0_37_job_wckey_t *wckey,
    char *working_directory
    ) {
    dbv0_0_37_job_t *dbv0_0_37_job_local_var = malloc(sizeof(dbv0_0_37_job_t));
    if (!dbv0_0_37_job_local_var) {
        return NULL;
    }
    dbv0_0_37_job_local_var->account = account;
    dbv0_0_37_job_local_var->comment = comment;
    dbv0_0_37_job_local_var->allocation_nodes = allocation_nodes;
    dbv0_0_37_job_local_var->array = array;
    dbv0_0_37_job_local_var->time = time;
    dbv0_0_37_job_local_var->association = association;
    dbv0_0_37_job_local_var->cluster = cluster;
    dbv0_0_37_job_local_var->constraints = constraints;
    dbv0_0_37_job_local_var->derived_exit_code = derived_exit_code;
    dbv0_0_37_job_local_var->exit_code = exit_code;
    dbv0_0_37_job_local_var->flags = flags;
    dbv0_0_37_job_local_var->group = group;
    dbv0_0_37_job_local_var->het = het;
    dbv0_0_37_job_local_var->job_id = job_id;
    dbv0_0_37_job_local_var->name = name;
    dbv0_0_37_job_local_var->mcs = mcs;
    dbv0_0_37_job_local_var->nodes = nodes;
    dbv0_0_37_job_local_var->partition = partition;
    dbv0_0_37_job_local_var->priority = priority;
    dbv0_0_37_job_local_var->qos = qos;
    dbv0_0_37_job_local_var->required = required;
    dbv0_0_37_job_local_var->kill_request_user = kill_request_user;
    dbv0_0_37_job_local_var->reservation = reservation;
    dbv0_0_37_job_local_var->state = state;
    dbv0_0_37_job_local_var->steps = steps;
    dbv0_0_37_job_local_var->tres = tres;
    dbv0_0_37_job_local_var->user = user;
    dbv0_0_37_job_local_var->wckey = wckey;
    dbv0_0_37_job_local_var->working_directory = working_directory;

    return dbv0_0_37_job_local_var;
}


void dbv0_0_37_job_free(dbv0_0_37_job_t *dbv0_0_37_job) {
    if(NULL == dbv0_0_37_job){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_37_job->account) {
        free(dbv0_0_37_job->account);
        dbv0_0_37_job->account = NULL;
    }
    if (dbv0_0_37_job->comment) {
        dbv0_0_37_job_comment_free(dbv0_0_37_job->comment);
        dbv0_0_37_job->comment = NULL;
    }
    if (dbv0_0_37_job->allocation_nodes) {
        free(dbv0_0_37_job->allocation_nodes);
        dbv0_0_37_job->allocation_nodes = NULL;
    }
    if (dbv0_0_37_job->array) {
        dbv0_0_37_job_array_free(dbv0_0_37_job->array);
        dbv0_0_37_job->array = NULL;
    }
    if (dbv0_0_37_job->time) {
        dbv0_0_37_job_time_free(dbv0_0_37_job->time);
        dbv0_0_37_job->time = NULL;
    }
    if (dbv0_0_37_job->association) {
        dbv0_0_37_association_short_info_free(dbv0_0_37_job->association);
        dbv0_0_37_job->association = NULL;
    }
    if (dbv0_0_37_job->cluster) {
        free(dbv0_0_37_job->cluster);
        dbv0_0_37_job->cluster = NULL;
    }
    if (dbv0_0_37_job->constraints) {
        free(dbv0_0_37_job->constraints);
        dbv0_0_37_job->constraints = NULL;
    }
    if (dbv0_0_37_job->derived_exit_code) {
        dbv0_0_37_job_exit_code_free(dbv0_0_37_job->derived_exit_code);
        dbv0_0_37_job->derived_exit_code = NULL;
    }
    if (dbv0_0_37_job->exit_code) {
        dbv0_0_37_job_exit_code_free(dbv0_0_37_job->exit_code);
        dbv0_0_37_job->exit_code = NULL;
    }
    if (dbv0_0_37_job->flags) {
        list_ForEach(listEntry, dbv0_0_37_job->flags) {
            free(listEntry->data);
        }
        list_freeList(dbv0_0_37_job->flags);
        dbv0_0_37_job->flags = NULL;
    }
    if (dbv0_0_37_job->group) {
        free(dbv0_0_37_job->group);
        dbv0_0_37_job->group = NULL;
    }
    if (dbv0_0_37_job->het) {
        dbv0_0_37_job_het_free(dbv0_0_37_job->het);
        dbv0_0_37_job->het = NULL;
    }
    if (dbv0_0_37_job->name) {
        free(dbv0_0_37_job->name);
        dbv0_0_37_job->name = NULL;
    }
    if (dbv0_0_37_job->mcs) {
        dbv0_0_37_job_mcs_free(dbv0_0_37_job->mcs);
        dbv0_0_37_job->mcs = NULL;
    }
    if (dbv0_0_37_job->nodes) {
        free(dbv0_0_37_job->nodes);
        dbv0_0_37_job->nodes = NULL;
    }
    if (dbv0_0_37_job->partition) {
        free(dbv0_0_37_job->partition);
        dbv0_0_37_job->partition = NULL;
    }
    if (dbv0_0_37_job->qos) {
        free(dbv0_0_37_job->qos);
        dbv0_0_37_job->qos = NULL;
    }
    if (dbv0_0_37_job->required) {
        dbv0_0_37_job_required_free(dbv0_0_37_job->required);
        dbv0_0_37_job->required = NULL;
    }
    if (dbv0_0_37_job->kill_request_user) {
        free(dbv0_0_37_job->kill_request_user);
        dbv0_0_37_job->kill_request_user = NULL;
    }
    if (dbv0_0_37_job->reservation) {
        dbv0_0_37_job_reservation_free(dbv0_0_37_job->reservation);
        dbv0_0_37_job->reservation = NULL;
    }
    if (dbv0_0_37_job->state) {
        dbv0_0_37_job_state_free(dbv0_0_37_job->state);
        dbv0_0_37_job->state = NULL;
    }
    if (dbv0_0_37_job->steps) {
        list_ForEach(listEntry, dbv0_0_37_job->steps) {
            dbv0_0_37_job_step_free(listEntry->data);
        }
        list_freeList(dbv0_0_37_job->steps);
        dbv0_0_37_job->steps = NULL;
    }
    if (dbv0_0_37_job->tres) {
        dbv0_0_37_job_tres_free(dbv0_0_37_job->tres);
        dbv0_0_37_job->tres = NULL;
    }
    if (dbv0_0_37_job->user) {
        free(dbv0_0_37_job->user);
        dbv0_0_37_job->user = NULL;
    }
    if (dbv0_0_37_job->wckey) {
        dbv0_0_37_job_wckey_free(dbv0_0_37_job->wckey);
        dbv0_0_37_job->wckey = NULL;
    }
    if (dbv0_0_37_job->working_directory) {
        free(dbv0_0_37_job->working_directory);
        dbv0_0_37_job->working_directory = NULL;
    }
    free(dbv0_0_37_job);
}

cJSON *dbv0_0_37_job_convertToJSON(dbv0_0_37_job_t *dbv0_0_37_job) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_job->account
    if(dbv0_0_37_job->account) {
    if(cJSON_AddStringToObject(item, "account", dbv0_0_37_job->account) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_37_job->comment
    if(dbv0_0_37_job->comment) {
    cJSON *comment_local_JSON = dbv0_0_37_job_comment_convertToJSON(dbv0_0_37_job->comment);
    if(comment_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "comment", comment_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_37_job->allocation_nodes
    if(dbv0_0_37_job->allocation_nodes) {
    if(cJSON_AddStringToObject(item, "allocation_nodes", dbv0_0_37_job->allocation_nodes) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_37_job->array
    if(dbv0_0_37_job->array) {
    cJSON *array_local_JSON = dbv0_0_37_job_array_convertToJSON(dbv0_0_37_job->array);
    if(array_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "array", array_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_37_job->time
    if(dbv0_0_37_job->time) {
    cJSON *time_local_JSON = dbv0_0_37_job_time_convertToJSON(dbv0_0_37_job->time);
    if(time_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "time", time_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_37_job->association
    if(dbv0_0_37_job->association) {
    cJSON *association_local_JSON = dbv0_0_37_association_short_info_convertToJSON(dbv0_0_37_job->association);
    if(association_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "association", association_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_37_job->cluster
    if(dbv0_0_37_job->cluster) {
    if(cJSON_AddStringToObject(item, "cluster", dbv0_0_37_job->cluster) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_37_job->constraints
    if(dbv0_0_37_job->constraints) {
    if(cJSON_AddStringToObject(item, "constraints", dbv0_0_37_job->constraints) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_37_job->derived_exit_code
    if(dbv0_0_37_job->derived_exit_code) {
    cJSON *derived_exit_code_local_JSON = dbv0_0_37_job_exit_code_convertToJSON(dbv0_0_37_job->derived_exit_code);
    if(derived_exit_code_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "derived_exit_code", derived_exit_code_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_37_job->exit_code
    if(dbv0_0_37_job->exit_code) {
    cJSON *exit_code_local_JSON = dbv0_0_37_job_exit_code_convertToJSON(dbv0_0_37_job->exit_code);
    if(exit_code_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "exit_code", exit_code_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_37_job->flags
    if(dbv0_0_37_job->flags) {
    cJSON *flags = cJSON_AddArrayToObject(item, "flags");
    if(flags == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *flagsListEntry;
    list_ForEach(flagsListEntry, dbv0_0_37_job->flags) {
    if(cJSON_AddStringToObject(flags, "", (char*)flagsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // dbv0_0_37_job->group
    if(dbv0_0_37_job->group) {
    if(cJSON_AddStringToObject(item, "group", dbv0_0_37_job->group) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_37_job->het
    if(dbv0_0_37_job->het) {
    cJSON *het_local_JSON = dbv0_0_37_job_het_convertToJSON(dbv0_0_37_job->het);
    if(het_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "het", het_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_37_job->job_id
    if(dbv0_0_37_job->job_id) {
    if(cJSON_AddNumberToObject(item, "job_id", dbv0_0_37_job->job_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_37_job->name
    if(dbv0_0_37_job->name) {
    if(cJSON_AddStringToObject(item, "name", dbv0_0_37_job->name) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_37_job->mcs
    if(dbv0_0_37_job->mcs) {
    cJSON *mcs_local_JSON = dbv0_0_37_job_mcs_convertToJSON(dbv0_0_37_job->mcs);
    if(mcs_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "mcs", mcs_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_37_job->nodes
    if(dbv0_0_37_job->nodes) {
    if(cJSON_AddStringToObject(item, "nodes", dbv0_0_37_job->nodes) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_37_job->partition
    if(dbv0_0_37_job->partition) {
    if(cJSON_AddStringToObject(item, "partition", dbv0_0_37_job->partition) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_37_job->priority
    if(dbv0_0_37_job->priority) {
    if(cJSON_AddNumberToObject(item, "priority", dbv0_0_37_job->priority) == NULL) {
    goto fail; //Numeric
    }
    }


    // dbv0_0_37_job->qos
    if(dbv0_0_37_job->qos) {
    if(cJSON_AddStringToObject(item, "qos", dbv0_0_37_job->qos) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_37_job->required
    if(dbv0_0_37_job->required) {
    cJSON *required_local_JSON = dbv0_0_37_job_required_convertToJSON(dbv0_0_37_job->required);
    if(required_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "required", required_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_37_job->kill_request_user
    if(dbv0_0_37_job->kill_request_user) {
    if(cJSON_AddStringToObject(item, "kill_request_user", dbv0_0_37_job->kill_request_user) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_37_job->reservation
    if(dbv0_0_37_job->reservation) {
    cJSON *reservation_local_JSON = dbv0_0_37_job_reservation_convertToJSON(dbv0_0_37_job->reservation);
    if(reservation_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "reservation", reservation_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_37_job->state
    if(dbv0_0_37_job->state) {
    cJSON *state_local_JSON = dbv0_0_37_job_state_convertToJSON(dbv0_0_37_job->state);
    if(state_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "state", state_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_37_job->steps
    if(dbv0_0_37_job->steps) {
    cJSON *steps = cJSON_AddArrayToObject(item, "steps");
    if(steps == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *stepsListEntry;
    if (dbv0_0_37_job->steps) {
    list_ForEach(stepsListEntry, dbv0_0_37_job->steps) {
    cJSON *itemLocal = dbv0_0_37_job_step_convertToJSON(stepsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(steps, itemLocal);
    }
    }
    }


    // dbv0_0_37_job->tres
    if(dbv0_0_37_job->tres) {
    cJSON *tres_local_JSON = dbv0_0_37_job_tres_convertToJSON(dbv0_0_37_job->tres);
    if(tres_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "tres", tres_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_37_job->user
    if(dbv0_0_37_job->user) {
    if(cJSON_AddStringToObject(item, "user", dbv0_0_37_job->user) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_37_job->wckey
    if(dbv0_0_37_job->wckey) {
    cJSON *wckey_local_JSON = dbv0_0_37_job_wckey_convertToJSON(dbv0_0_37_job->wckey);
    if(wckey_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "wckey", wckey_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_37_job->working_directory
    if(dbv0_0_37_job->working_directory) {
    if(cJSON_AddStringToObject(item, "working_directory", dbv0_0_37_job->working_directory) == NULL) {
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

dbv0_0_37_job_t *dbv0_0_37_job_parseFromJSON(cJSON *dbv0_0_37_jobJSON){

    dbv0_0_37_job_t *dbv0_0_37_job_local_var = NULL;

    // define the local variable for dbv0_0_37_job->comment
    dbv0_0_37_job_comment_t *comment_local_nonprim = NULL;

    // define the local variable for dbv0_0_37_job->array
    dbv0_0_37_job_array_t *array_local_nonprim = NULL;

    // define the local variable for dbv0_0_37_job->time
    dbv0_0_37_job_time_t *time_local_nonprim = NULL;

    // define the local variable for dbv0_0_37_job->association
    dbv0_0_37_association_short_info_t *association_local_nonprim = NULL;

    // define the local variable for dbv0_0_37_job->derived_exit_code
    dbv0_0_37_job_exit_code_t *derived_exit_code_local_nonprim = NULL;

    // define the local variable for dbv0_0_37_job->exit_code
    dbv0_0_37_job_exit_code_t *exit_code_local_nonprim = NULL;

    // define the local list for dbv0_0_37_job->flags
    list_t *flagsList = NULL;

    // define the local variable for dbv0_0_37_job->het
    dbv0_0_37_job_het_t *het_local_nonprim = NULL;

    // define the local variable for dbv0_0_37_job->mcs
    dbv0_0_37_job_mcs_t *mcs_local_nonprim = NULL;

    // define the local variable for dbv0_0_37_job->required
    dbv0_0_37_job_required_t *required_local_nonprim = NULL;

    // define the local variable for dbv0_0_37_job->reservation
    dbv0_0_37_job_reservation_t *reservation_local_nonprim = NULL;

    // define the local variable for dbv0_0_37_job->state
    dbv0_0_37_job_state_t *state_local_nonprim = NULL;

    // define the local list for dbv0_0_37_job->steps
    list_t *stepsList = NULL;

    // define the local variable for dbv0_0_37_job->tres
    dbv0_0_37_job_tres_t *tres_local_nonprim = NULL;

    // define the local variable for dbv0_0_37_job->wckey
    dbv0_0_37_job_wckey_t *wckey_local_nonprim = NULL;

    // dbv0_0_37_job->account
    cJSON *account = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_jobJSON, "account");
    if (account) { 
    if(!cJSON_IsString(account) && !cJSON_IsNull(account))
    {
    goto end; //String
    }
    }

    // dbv0_0_37_job->comment
    cJSON *comment = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_jobJSON, "comment");
    if (comment) { 
    comment_local_nonprim = dbv0_0_37_job_comment_parseFromJSON(comment); //nonprimitive
    }

    // dbv0_0_37_job->allocation_nodes
    cJSON *allocation_nodes = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_jobJSON, "allocation_nodes");
    if (allocation_nodes) { 
    if(!cJSON_IsString(allocation_nodes) && !cJSON_IsNull(allocation_nodes))
    {
    goto end; //String
    }
    }

    // dbv0_0_37_job->array
    cJSON *array = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_jobJSON, "array");
    if (array) { 
    array_local_nonprim = dbv0_0_37_job_array_parseFromJSON(array); //nonprimitive
    }

    // dbv0_0_37_job->time
    cJSON *time = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_jobJSON, "time");
    if (time) { 
    time_local_nonprim = dbv0_0_37_job_time_parseFromJSON(time); //nonprimitive
    }

    // dbv0_0_37_job->association
    cJSON *association = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_jobJSON, "association");
    if (association) { 
    association_local_nonprim = dbv0_0_37_association_short_info_parseFromJSON(association); //nonprimitive
    }

    // dbv0_0_37_job->cluster
    cJSON *cluster = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_jobJSON, "cluster");
    if (cluster) { 
    if(!cJSON_IsString(cluster) && !cJSON_IsNull(cluster))
    {
    goto end; //String
    }
    }

    // dbv0_0_37_job->constraints
    cJSON *constraints = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_jobJSON, "constraints");
    if (constraints) { 
    if(!cJSON_IsString(constraints) && !cJSON_IsNull(constraints))
    {
    goto end; //String
    }
    }

    // dbv0_0_37_job->derived_exit_code
    cJSON *derived_exit_code = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_jobJSON, "derived_exit_code");
    if (derived_exit_code) { 
    derived_exit_code_local_nonprim = dbv0_0_37_job_exit_code_parseFromJSON(derived_exit_code); //nonprimitive
    }

    // dbv0_0_37_job->exit_code
    cJSON *exit_code = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_jobJSON, "exit_code");
    if (exit_code) { 
    exit_code_local_nonprim = dbv0_0_37_job_exit_code_parseFromJSON(exit_code); //nonprimitive
    }

    // dbv0_0_37_job->flags
    cJSON *flags = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_jobJSON, "flags");
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

    // dbv0_0_37_job->group
    cJSON *group = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_jobJSON, "group");
    if (group) { 
    if(!cJSON_IsString(group) && !cJSON_IsNull(group))
    {
    goto end; //String
    }
    }

    // dbv0_0_37_job->het
    cJSON *het = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_jobJSON, "het");
    if (het) { 
    het_local_nonprim = dbv0_0_37_job_het_parseFromJSON(het); //nonprimitive
    }

    // dbv0_0_37_job->job_id
    cJSON *job_id = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_jobJSON, "job_id");
    if (job_id) { 
    if(!cJSON_IsNumber(job_id))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_37_job->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_jobJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // dbv0_0_37_job->mcs
    cJSON *mcs = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_jobJSON, "mcs");
    if (mcs) { 
    mcs_local_nonprim = dbv0_0_37_job_mcs_parseFromJSON(mcs); //nonprimitive
    }

    // dbv0_0_37_job->nodes
    cJSON *nodes = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_jobJSON, "nodes");
    if (nodes) { 
    if(!cJSON_IsString(nodes) && !cJSON_IsNull(nodes))
    {
    goto end; //String
    }
    }

    // dbv0_0_37_job->partition
    cJSON *partition = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_jobJSON, "partition");
    if (partition) { 
    if(!cJSON_IsString(partition) && !cJSON_IsNull(partition))
    {
    goto end; //String
    }
    }

    // dbv0_0_37_job->priority
    cJSON *priority = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_jobJSON, "priority");
    if (priority) { 
    if(!cJSON_IsNumber(priority))
    {
    goto end; //Numeric
    }
    }

    // dbv0_0_37_job->qos
    cJSON *qos = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_jobJSON, "qos");
    if (qos) { 
    if(!cJSON_IsString(qos) && !cJSON_IsNull(qos))
    {
    goto end; //String
    }
    }

    // dbv0_0_37_job->required
    cJSON *required = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_jobJSON, "required");
    if (required) { 
    required_local_nonprim = dbv0_0_37_job_required_parseFromJSON(required); //nonprimitive
    }

    // dbv0_0_37_job->kill_request_user
    cJSON *kill_request_user = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_jobJSON, "kill_request_user");
    if (kill_request_user) { 
    if(!cJSON_IsString(kill_request_user) && !cJSON_IsNull(kill_request_user))
    {
    goto end; //String
    }
    }

    // dbv0_0_37_job->reservation
    cJSON *reservation = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_jobJSON, "reservation");
    if (reservation) { 
    reservation_local_nonprim = dbv0_0_37_job_reservation_parseFromJSON(reservation); //nonprimitive
    }

    // dbv0_0_37_job->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_jobJSON, "state");
    if (state) { 
    state_local_nonprim = dbv0_0_37_job_state_parseFromJSON(state); //nonprimitive
    }

    // dbv0_0_37_job->steps
    cJSON *steps = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_jobJSON, "steps");
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
        dbv0_0_37_job_step_t *stepsItem = dbv0_0_37_job_step_parseFromJSON(steps_local_nonprimitive);

        list_addElement(stepsList, stepsItem);
    }
    }

    // dbv0_0_37_job->tres
    cJSON *tres = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_jobJSON, "tres");
    if (tres) { 
    tres_local_nonprim = dbv0_0_37_job_tres_parseFromJSON(tres); //nonprimitive
    }

    // dbv0_0_37_job->user
    cJSON *user = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_jobJSON, "user");
    if (user) { 
    if(!cJSON_IsString(user) && !cJSON_IsNull(user))
    {
    goto end; //String
    }
    }

    // dbv0_0_37_job->wckey
    cJSON *wckey = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_jobJSON, "wckey");
    if (wckey) { 
    wckey_local_nonprim = dbv0_0_37_job_wckey_parseFromJSON(wckey); //nonprimitive
    }

    // dbv0_0_37_job->working_directory
    cJSON *working_directory = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_jobJSON, "working_directory");
    if (working_directory) { 
    if(!cJSON_IsString(working_directory) && !cJSON_IsNull(working_directory))
    {
    goto end; //String
    }
    }


    dbv0_0_37_job_local_var = dbv0_0_37_job_create (
        account && !cJSON_IsNull(account) ? strdup(account->valuestring) : NULL,
        comment ? comment_local_nonprim : NULL,
        allocation_nodes && !cJSON_IsNull(allocation_nodes) ? strdup(allocation_nodes->valuestring) : NULL,
        array ? array_local_nonprim : NULL,
        time ? time_local_nonprim : NULL,
        association ? association_local_nonprim : NULL,
        cluster && !cJSON_IsNull(cluster) ? strdup(cluster->valuestring) : NULL,
        constraints && !cJSON_IsNull(constraints) ? strdup(constraints->valuestring) : NULL,
        derived_exit_code ? derived_exit_code_local_nonprim : NULL,
        exit_code ? exit_code_local_nonprim : NULL,
        flags ? flagsList : NULL,
        group && !cJSON_IsNull(group) ? strdup(group->valuestring) : NULL,
        het ? het_local_nonprim : NULL,
        job_id ? job_id->valuedouble : 0,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        mcs ? mcs_local_nonprim : NULL,
        nodes && !cJSON_IsNull(nodes) ? strdup(nodes->valuestring) : NULL,
        partition && !cJSON_IsNull(partition) ? strdup(partition->valuestring) : NULL,
        priority ? priority->valuedouble : 0,
        qos && !cJSON_IsNull(qos) ? strdup(qos->valuestring) : NULL,
        required ? required_local_nonprim : NULL,
        kill_request_user && !cJSON_IsNull(kill_request_user) ? strdup(kill_request_user->valuestring) : NULL,
        reservation ? reservation_local_nonprim : NULL,
        state ? state_local_nonprim : NULL,
        steps ? stepsList : NULL,
        tres ? tres_local_nonprim : NULL,
        user && !cJSON_IsNull(user) ? strdup(user->valuestring) : NULL,
        wckey ? wckey_local_nonprim : NULL,
        working_directory && !cJSON_IsNull(working_directory) ? strdup(working_directory->valuestring) : NULL
        );

    return dbv0_0_37_job_local_var;
end:
    if (comment_local_nonprim) {
        dbv0_0_37_job_comment_free(comment_local_nonprim);
        comment_local_nonprim = NULL;
    }
    if (array_local_nonprim) {
        dbv0_0_37_job_array_free(array_local_nonprim);
        array_local_nonprim = NULL;
    }
    if (time_local_nonprim) {
        dbv0_0_37_job_time_free(time_local_nonprim);
        time_local_nonprim = NULL;
    }
    if (association_local_nonprim) {
        dbv0_0_37_association_short_info_free(association_local_nonprim);
        association_local_nonprim = NULL;
    }
    if (derived_exit_code_local_nonprim) {
        dbv0_0_37_job_exit_code_free(derived_exit_code_local_nonprim);
        derived_exit_code_local_nonprim = NULL;
    }
    if (exit_code_local_nonprim) {
        dbv0_0_37_job_exit_code_free(exit_code_local_nonprim);
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
        dbv0_0_37_job_het_free(het_local_nonprim);
        het_local_nonprim = NULL;
    }
    if (mcs_local_nonprim) {
        dbv0_0_37_job_mcs_free(mcs_local_nonprim);
        mcs_local_nonprim = NULL;
    }
    if (required_local_nonprim) {
        dbv0_0_37_job_required_free(required_local_nonprim);
        required_local_nonprim = NULL;
    }
    if (reservation_local_nonprim) {
        dbv0_0_37_job_reservation_free(reservation_local_nonprim);
        reservation_local_nonprim = NULL;
    }
    if (state_local_nonprim) {
        dbv0_0_37_job_state_free(state_local_nonprim);
        state_local_nonprim = NULL;
    }
    if (stepsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, stepsList) {
            dbv0_0_37_job_step_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(stepsList);
        stepsList = NULL;
    }
    if (tres_local_nonprim) {
        dbv0_0_37_job_tres_free(tres_local_nonprim);
        tres_local_nonprim = NULL;
    }
    if (wckey_local_nonprim) {
        dbv0_0_37_job_wckey_free(wckey_local_nonprim);
        wckey_local_nonprim = NULL;
    }
    return NULL;

}
