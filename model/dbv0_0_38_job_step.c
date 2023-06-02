#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_job_step.h"



dbv0_0_38_job_step_t *dbv0_0_38_job_step_create(
    dbv0_0_38_job_step_time_t *time,
    dbv0_0_38_job_exit_code_t *exit_code,
    dbv0_0_38_job_step_nodes_t *nodes,
    dbv0_0_38_job_step_tasks_t *tasks,
    char *pid,
    dbv0_0_38_job_step_cpu_t *cpu,
    char *kill_request_user,
    char *state,
    dbv0_0_38_job_step_statistics_t *statistics,
    dbv0_0_38_job_step_step_t *step,
    char *task,
    dbv0_0_38_job_step_tres_t *tres
    ) {
    dbv0_0_38_job_step_t *dbv0_0_38_job_step_local_var = malloc(sizeof(dbv0_0_38_job_step_t));
    if (!dbv0_0_38_job_step_local_var) {
        return NULL;
    }
    dbv0_0_38_job_step_local_var->time = time;
    dbv0_0_38_job_step_local_var->exit_code = exit_code;
    dbv0_0_38_job_step_local_var->nodes = nodes;
    dbv0_0_38_job_step_local_var->tasks = tasks;
    dbv0_0_38_job_step_local_var->pid = pid;
    dbv0_0_38_job_step_local_var->cpu = cpu;
    dbv0_0_38_job_step_local_var->kill_request_user = kill_request_user;
    dbv0_0_38_job_step_local_var->state = state;
    dbv0_0_38_job_step_local_var->statistics = statistics;
    dbv0_0_38_job_step_local_var->step = step;
    dbv0_0_38_job_step_local_var->task = task;
    dbv0_0_38_job_step_local_var->tres = tres;

    return dbv0_0_38_job_step_local_var;
}


void dbv0_0_38_job_step_free(dbv0_0_38_job_step_t *dbv0_0_38_job_step) {
    if(NULL == dbv0_0_38_job_step){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_38_job_step->time) {
        dbv0_0_38_job_step_time_free(dbv0_0_38_job_step->time);
        dbv0_0_38_job_step->time = NULL;
    }
    if (dbv0_0_38_job_step->exit_code) {
        dbv0_0_38_job_exit_code_free(dbv0_0_38_job_step->exit_code);
        dbv0_0_38_job_step->exit_code = NULL;
    }
    if (dbv0_0_38_job_step->nodes) {
        dbv0_0_38_job_step_nodes_free(dbv0_0_38_job_step->nodes);
        dbv0_0_38_job_step->nodes = NULL;
    }
    if (dbv0_0_38_job_step->tasks) {
        dbv0_0_38_job_step_tasks_free(dbv0_0_38_job_step->tasks);
        dbv0_0_38_job_step->tasks = NULL;
    }
    if (dbv0_0_38_job_step->pid) {
        free(dbv0_0_38_job_step->pid);
        dbv0_0_38_job_step->pid = NULL;
    }
    if (dbv0_0_38_job_step->cpu) {
        dbv0_0_38_job_step_cpu_free(dbv0_0_38_job_step->cpu);
        dbv0_0_38_job_step->cpu = NULL;
    }
    if (dbv0_0_38_job_step->kill_request_user) {
        free(dbv0_0_38_job_step->kill_request_user);
        dbv0_0_38_job_step->kill_request_user = NULL;
    }
    if (dbv0_0_38_job_step->state) {
        free(dbv0_0_38_job_step->state);
        dbv0_0_38_job_step->state = NULL;
    }
    if (dbv0_0_38_job_step->statistics) {
        dbv0_0_38_job_step_statistics_free(dbv0_0_38_job_step->statistics);
        dbv0_0_38_job_step->statistics = NULL;
    }
    if (dbv0_0_38_job_step->step) {
        dbv0_0_38_job_step_step_free(dbv0_0_38_job_step->step);
        dbv0_0_38_job_step->step = NULL;
    }
    if (dbv0_0_38_job_step->task) {
        free(dbv0_0_38_job_step->task);
        dbv0_0_38_job_step->task = NULL;
    }
    if (dbv0_0_38_job_step->tres) {
        dbv0_0_38_job_step_tres_free(dbv0_0_38_job_step->tres);
        dbv0_0_38_job_step->tres = NULL;
    }
    free(dbv0_0_38_job_step);
}

cJSON *dbv0_0_38_job_step_convertToJSON(dbv0_0_38_job_step_t *dbv0_0_38_job_step) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_job_step->time
    if(dbv0_0_38_job_step->time) {
    cJSON *time_local_JSON = dbv0_0_38_job_step_time_convertToJSON(dbv0_0_38_job_step->time);
    if(time_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "time", time_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_38_job_step->exit_code
    if(dbv0_0_38_job_step->exit_code) {
    cJSON *exit_code_local_JSON = dbv0_0_38_job_exit_code_convertToJSON(dbv0_0_38_job_step->exit_code);
    if(exit_code_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "exit_code", exit_code_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_38_job_step->nodes
    if(dbv0_0_38_job_step->nodes) {
    cJSON *nodes_local_JSON = dbv0_0_38_job_step_nodes_convertToJSON(dbv0_0_38_job_step->nodes);
    if(nodes_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "nodes", nodes_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_38_job_step->tasks
    if(dbv0_0_38_job_step->tasks) {
    cJSON *tasks_local_JSON = dbv0_0_38_job_step_tasks_convertToJSON(dbv0_0_38_job_step->tasks);
    if(tasks_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "tasks", tasks_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_38_job_step->pid
    if(dbv0_0_38_job_step->pid) {
    if(cJSON_AddStringToObject(item, "pid", dbv0_0_38_job_step->pid) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_38_job_step->cpu
    if(dbv0_0_38_job_step->cpu) {
    cJSON *cpu_local_JSON = dbv0_0_38_job_step_cpu_convertToJSON(dbv0_0_38_job_step->cpu);
    if(cpu_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "CPU", cpu_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_38_job_step->kill_request_user
    if(dbv0_0_38_job_step->kill_request_user) {
    if(cJSON_AddStringToObject(item, "kill_request_user", dbv0_0_38_job_step->kill_request_user) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_38_job_step->state
    if(dbv0_0_38_job_step->state) {
    if(cJSON_AddStringToObject(item, "state", dbv0_0_38_job_step->state) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_38_job_step->statistics
    if(dbv0_0_38_job_step->statistics) {
    cJSON *statistics_local_JSON = dbv0_0_38_job_step_statistics_convertToJSON(dbv0_0_38_job_step->statistics);
    if(statistics_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "statistics", statistics_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_38_job_step->step
    if(dbv0_0_38_job_step->step) {
    cJSON *step_local_JSON = dbv0_0_38_job_step_step_convertToJSON(dbv0_0_38_job_step->step);
    if(step_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "step", step_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_38_job_step->task
    if(dbv0_0_38_job_step->task) {
    if(cJSON_AddStringToObject(item, "task", dbv0_0_38_job_step->task) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_38_job_step->tres
    if(dbv0_0_38_job_step->tres) {
    cJSON *tres_local_JSON = dbv0_0_38_job_step_tres_convertToJSON(dbv0_0_38_job_step->tres);
    if(tres_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "tres", tres_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

dbv0_0_38_job_step_t *dbv0_0_38_job_step_parseFromJSON(cJSON *dbv0_0_38_job_stepJSON){

    dbv0_0_38_job_step_t *dbv0_0_38_job_step_local_var = NULL;

    // define the local variable for dbv0_0_38_job_step->time
    dbv0_0_38_job_step_time_t *time_local_nonprim = NULL;

    // define the local variable for dbv0_0_38_job_step->exit_code
    dbv0_0_38_job_exit_code_t *exit_code_local_nonprim = NULL;

    // define the local variable for dbv0_0_38_job_step->nodes
    dbv0_0_38_job_step_nodes_t *nodes_local_nonprim = NULL;

    // define the local variable for dbv0_0_38_job_step->tasks
    dbv0_0_38_job_step_tasks_t *tasks_local_nonprim = NULL;

    // define the local variable for dbv0_0_38_job_step->cpu
    dbv0_0_38_job_step_cpu_t *cpu_local_nonprim = NULL;

    // define the local variable for dbv0_0_38_job_step->statistics
    dbv0_0_38_job_step_statistics_t *statistics_local_nonprim = NULL;

    // define the local variable for dbv0_0_38_job_step->step
    dbv0_0_38_job_step_step_t *step_local_nonprim = NULL;

    // define the local variable for dbv0_0_38_job_step->tres
    dbv0_0_38_job_step_tres_t *tres_local_nonprim = NULL;

    // dbv0_0_38_job_step->time
    cJSON *time = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_stepJSON, "time");
    if (time) { 
    time_local_nonprim = dbv0_0_38_job_step_time_parseFromJSON(time); //nonprimitive
    }

    // dbv0_0_38_job_step->exit_code
    cJSON *exit_code = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_stepJSON, "exit_code");
    if (exit_code) { 
    exit_code_local_nonprim = dbv0_0_38_job_exit_code_parseFromJSON(exit_code); //nonprimitive
    }

    // dbv0_0_38_job_step->nodes
    cJSON *nodes = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_stepJSON, "nodes");
    if (nodes) { 
    nodes_local_nonprim = dbv0_0_38_job_step_nodes_parseFromJSON(nodes); //nonprimitive
    }

    // dbv0_0_38_job_step->tasks
    cJSON *tasks = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_stepJSON, "tasks");
    if (tasks) { 
    tasks_local_nonprim = dbv0_0_38_job_step_tasks_parseFromJSON(tasks); //nonprimitive
    }

    // dbv0_0_38_job_step->pid
    cJSON *pid = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_stepJSON, "pid");
    if (pid) { 
    if(!cJSON_IsString(pid) && !cJSON_IsNull(pid))
    {
    goto end; //String
    }
    }

    // dbv0_0_38_job_step->cpu
    cJSON *cpu = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_stepJSON, "CPU");
    if (cpu) { 
    cpu_local_nonprim = dbv0_0_38_job_step_cpu_parseFromJSON(cpu); //nonprimitive
    }

    // dbv0_0_38_job_step->kill_request_user
    cJSON *kill_request_user = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_stepJSON, "kill_request_user");
    if (kill_request_user) { 
    if(!cJSON_IsString(kill_request_user) && !cJSON_IsNull(kill_request_user))
    {
    goto end; //String
    }
    }

    // dbv0_0_38_job_step->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_stepJSON, "state");
    if (state) { 
    if(!cJSON_IsString(state) && !cJSON_IsNull(state))
    {
    goto end; //String
    }
    }

    // dbv0_0_38_job_step->statistics
    cJSON *statistics = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_stepJSON, "statistics");
    if (statistics) { 
    statistics_local_nonprim = dbv0_0_38_job_step_statistics_parseFromJSON(statistics); //nonprimitive
    }

    // dbv0_0_38_job_step->step
    cJSON *step = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_stepJSON, "step");
    if (step) { 
    step_local_nonprim = dbv0_0_38_job_step_step_parseFromJSON(step); //nonprimitive
    }

    // dbv0_0_38_job_step->task
    cJSON *task = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_stepJSON, "task");
    if (task) { 
    if(!cJSON_IsString(task) && !cJSON_IsNull(task))
    {
    goto end; //String
    }
    }

    // dbv0_0_38_job_step->tres
    cJSON *tres = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_job_stepJSON, "tres");
    if (tres) { 
    tres_local_nonprim = dbv0_0_38_job_step_tres_parseFromJSON(tres); //nonprimitive
    }


    dbv0_0_38_job_step_local_var = dbv0_0_38_job_step_create (
        time ? time_local_nonprim : NULL,
        exit_code ? exit_code_local_nonprim : NULL,
        nodes ? nodes_local_nonprim : NULL,
        tasks ? tasks_local_nonprim : NULL,
        pid && !cJSON_IsNull(pid) ? strdup(pid->valuestring) : NULL,
        cpu ? cpu_local_nonprim : NULL,
        kill_request_user && !cJSON_IsNull(kill_request_user) ? strdup(kill_request_user->valuestring) : NULL,
        state && !cJSON_IsNull(state) ? strdup(state->valuestring) : NULL,
        statistics ? statistics_local_nonprim : NULL,
        step ? step_local_nonprim : NULL,
        task && !cJSON_IsNull(task) ? strdup(task->valuestring) : NULL,
        tres ? tres_local_nonprim : NULL
        );

    return dbv0_0_38_job_step_local_var;
end:
    if (time_local_nonprim) {
        dbv0_0_38_job_step_time_free(time_local_nonprim);
        time_local_nonprim = NULL;
    }
    if (exit_code_local_nonprim) {
        dbv0_0_38_job_exit_code_free(exit_code_local_nonprim);
        exit_code_local_nonprim = NULL;
    }
    if (nodes_local_nonprim) {
        dbv0_0_38_job_step_nodes_free(nodes_local_nonprim);
        nodes_local_nonprim = NULL;
    }
    if (tasks_local_nonprim) {
        dbv0_0_38_job_step_tasks_free(tasks_local_nonprim);
        tasks_local_nonprim = NULL;
    }
    if (cpu_local_nonprim) {
        dbv0_0_38_job_step_cpu_free(cpu_local_nonprim);
        cpu_local_nonprim = NULL;
    }
    if (statistics_local_nonprim) {
        dbv0_0_38_job_step_statistics_free(statistics_local_nonprim);
        statistics_local_nonprim = NULL;
    }
    if (step_local_nonprim) {
        dbv0_0_38_job_step_step_free(step_local_nonprim);
        step_local_nonprim = NULL;
    }
    if (tres_local_nonprim) {
        dbv0_0_38_job_step_tres_free(tres_local_nonprim);
        tres_local_nonprim = NULL;
    }
    return NULL;

}
