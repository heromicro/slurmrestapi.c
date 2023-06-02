#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_step.h"



v0_0_39_step_t *v0_0_39_step_create(
    v0_0_39_step_time_t *time,
    v0_0_39_job_exit_code_t *exit_code,
    v0_0_39_step_nodes_t *nodes,
    v0_0_39_step_tasks_t *tasks,
    char *pid,
    v0_0_39_step_cpu_t *cpu,
    char *kill_request_user,
    char *state,
    v0_0_39_step_statistics_t *statistics,
    v0_0_39_job_reservation_t *step,
    v0_0_39_step_task_t *task,
    v0_0_39_step_tres_t *tres
    ) {
    v0_0_39_step_t *v0_0_39_step_local_var = malloc(sizeof(v0_0_39_step_t));
    if (!v0_0_39_step_local_var) {
        return NULL;
    }
    v0_0_39_step_local_var->time = time;
    v0_0_39_step_local_var->exit_code = exit_code;
    v0_0_39_step_local_var->nodes = nodes;
    v0_0_39_step_local_var->tasks = tasks;
    v0_0_39_step_local_var->pid = pid;
    v0_0_39_step_local_var->cpu = cpu;
    v0_0_39_step_local_var->kill_request_user = kill_request_user;
    v0_0_39_step_local_var->state = state;
    v0_0_39_step_local_var->statistics = statistics;
    v0_0_39_step_local_var->step = step;
    v0_0_39_step_local_var->task = task;
    v0_0_39_step_local_var->tres = tres;

    return v0_0_39_step_local_var;
}


void v0_0_39_step_free(v0_0_39_step_t *v0_0_39_step) {
    if(NULL == v0_0_39_step){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_step->time) {
        v0_0_39_step_time_free(v0_0_39_step->time);
        v0_0_39_step->time = NULL;
    }
    if (v0_0_39_step->exit_code) {
        v0_0_39_job_exit_code_free(v0_0_39_step->exit_code);
        v0_0_39_step->exit_code = NULL;
    }
    if (v0_0_39_step->nodes) {
        v0_0_39_step_nodes_free(v0_0_39_step->nodes);
        v0_0_39_step->nodes = NULL;
    }
    if (v0_0_39_step->tasks) {
        v0_0_39_step_tasks_free(v0_0_39_step->tasks);
        v0_0_39_step->tasks = NULL;
    }
    if (v0_0_39_step->pid) {
        free(v0_0_39_step->pid);
        v0_0_39_step->pid = NULL;
    }
    if (v0_0_39_step->cpu) {
        v0_0_39_step_cpu_free(v0_0_39_step->cpu);
        v0_0_39_step->cpu = NULL;
    }
    if (v0_0_39_step->kill_request_user) {
        free(v0_0_39_step->kill_request_user);
        v0_0_39_step->kill_request_user = NULL;
    }
    if (v0_0_39_step->state) {
        free(v0_0_39_step->state);
        v0_0_39_step->state = NULL;
    }
    if (v0_0_39_step->statistics) {
        v0_0_39_step_statistics_free(v0_0_39_step->statistics);
        v0_0_39_step->statistics = NULL;
    }
    if (v0_0_39_step->step) {
        v0_0_39_job_reservation_free(v0_0_39_step->step);
        v0_0_39_step->step = NULL;
    }
    if (v0_0_39_step->task) {
        v0_0_39_step_task_free(v0_0_39_step->task);
        v0_0_39_step->task = NULL;
    }
    if (v0_0_39_step->tres) {
        v0_0_39_step_tres_free(v0_0_39_step->tres);
        v0_0_39_step->tres = NULL;
    }
    free(v0_0_39_step);
}

cJSON *v0_0_39_step_convertToJSON(v0_0_39_step_t *v0_0_39_step) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_step->time
    if(v0_0_39_step->time) {
    cJSON *time_local_JSON = v0_0_39_step_time_convertToJSON(v0_0_39_step->time);
    if(time_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "time", time_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_step->exit_code
    if(v0_0_39_step->exit_code) {
    cJSON *exit_code_local_JSON = v0_0_39_job_exit_code_convertToJSON(v0_0_39_step->exit_code);
    if(exit_code_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "exit_code", exit_code_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_step->nodes
    if(v0_0_39_step->nodes) {
    cJSON *nodes_local_JSON = v0_0_39_step_nodes_convertToJSON(v0_0_39_step->nodes);
    if(nodes_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "nodes", nodes_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_step->tasks
    if(v0_0_39_step->tasks) {
    cJSON *tasks_local_JSON = v0_0_39_step_tasks_convertToJSON(v0_0_39_step->tasks);
    if(tasks_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "tasks", tasks_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_step->pid
    if(v0_0_39_step->pid) {
    if(cJSON_AddStringToObject(item, "pid", v0_0_39_step->pid) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_step->cpu
    if(v0_0_39_step->cpu) {
    cJSON *cpu_local_JSON = v0_0_39_step_cpu_convertToJSON(v0_0_39_step->cpu);
    if(cpu_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "CPU", cpu_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_step->kill_request_user
    if(v0_0_39_step->kill_request_user) {
    if(cJSON_AddStringToObject(item, "kill_request_user", v0_0_39_step->kill_request_user) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_step->state
    if(v0_0_39_step->state) {
    if(cJSON_AddStringToObject(item, "state", v0_0_39_step->state) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_step->statistics
    if(v0_0_39_step->statistics) {
    cJSON *statistics_local_JSON = v0_0_39_step_statistics_convertToJSON(v0_0_39_step->statistics);
    if(statistics_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "statistics", statistics_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_step->step
    if(v0_0_39_step->step) {
    cJSON *step_local_JSON = v0_0_39_job_reservation_convertToJSON(v0_0_39_step->step);
    if(step_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "step", step_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_step->task
    if(v0_0_39_step->task) {
    cJSON *task_local_JSON = v0_0_39_step_task_convertToJSON(v0_0_39_step->task);
    if(task_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "task", task_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_step->tres
    if(v0_0_39_step->tres) {
    cJSON *tres_local_JSON = v0_0_39_step_tres_convertToJSON(v0_0_39_step->tres);
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

v0_0_39_step_t *v0_0_39_step_parseFromJSON(cJSON *v0_0_39_stepJSON){

    v0_0_39_step_t *v0_0_39_step_local_var = NULL;

    // define the local variable for v0_0_39_step->time
    v0_0_39_step_time_t *time_local_nonprim = NULL;

    // define the local variable for v0_0_39_step->exit_code
    v0_0_39_job_exit_code_t *exit_code_local_nonprim = NULL;

    // define the local variable for v0_0_39_step->nodes
    v0_0_39_step_nodes_t *nodes_local_nonprim = NULL;

    // define the local variable for v0_0_39_step->tasks
    v0_0_39_step_tasks_t *tasks_local_nonprim = NULL;

    // define the local variable for v0_0_39_step->cpu
    v0_0_39_step_cpu_t *cpu_local_nonprim = NULL;

    // define the local variable for v0_0_39_step->statistics
    v0_0_39_step_statistics_t *statistics_local_nonprim = NULL;

    // define the local variable for v0_0_39_step->step
    v0_0_39_job_reservation_t *step_local_nonprim = NULL;

    // define the local variable for v0_0_39_step->task
    v0_0_39_step_task_t *task_local_nonprim = NULL;

    // define the local variable for v0_0_39_step->tres
    v0_0_39_step_tres_t *tres_local_nonprim = NULL;

    // v0_0_39_step->time
    cJSON *time = cJSON_GetObjectItemCaseSensitive(v0_0_39_stepJSON, "time");
    if (time) { 
    time_local_nonprim = v0_0_39_step_time_parseFromJSON(time); //nonprimitive
    }

    // v0_0_39_step->exit_code
    cJSON *exit_code = cJSON_GetObjectItemCaseSensitive(v0_0_39_stepJSON, "exit_code");
    if (exit_code) { 
    exit_code_local_nonprim = v0_0_39_job_exit_code_parseFromJSON(exit_code); //nonprimitive
    }

    // v0_0_39_step->nodes
    cJSON *nodes = cJSON_GetObjectItemCaseSensitive(v0_0_39_stepJSON, "nodes");
    if (nodes) { 
    nodes_local_nonprim = v0_0_39_step_nodes_parseFromJSON(nodes); //nonprimitive
    }

    // v0_0_39_step->tasks
    cJSON *tasks = cJSON_GetObjectItemCaseSensitive(v0_0_39_stepJSON, "tasks");
    if (tasks) { 
    tasks_local_nonprim = v0_0_39_step_tasks_parseFromJSON(tasks); //nonprimitive
    }

    // v0_0_39_step->pid
    cJSON *pid = cJSON_GetObjectItemCaseSensitive(v0_0_39_stepJSON, "pid");
    if (pid) { 
    if(!cJSON_IsString(pid) && !cJSON_IsNull(pid))
    {
    goto end; //String
    }
    }

    // v0_0_39_step->cpu
    cJSON *cpu = cJSON_GetObjectItemCaseSensitive(v0_0_39_stepJSON, "CPU");
    if (cpu) { 
    cpu_local_nonprim = v0_0_39_step_cpu_parseFromJSON(cpu); //nonprimitive
    }

    // v0_0_39_step->kill_request_user
    cJSON *kill_request_user = cJSON_GetObjectItemCaseSensitive(v0_0_39_stepJSON, "kill_request_user");
    if (kill_request_user) { 
    if(!cJSON_IsString(kill_request_user) && !cJSON_IsNull(kill_request_user))
    {
    goto end; //String
    }
    }

    // v0_0_39_step->state
    cJSON *state = cJSON_GetObjectItemCaseSensitive(v0_0_39_stepJSON, "state");
    if (state) { 
    if(!cJSON_IsString(state) && !cJSON_IsNull(state))
    {
    goto end; //String
    }
    }

    // v0_0_39_step->statistics
    cJSON *statistics = cJSON_GetObjectItemCaseSensitive(v0_0_39_stepJSON, "statistics");
    if (statistics) { 
    statistics_local_nonprim = v0_0_39_step_statistics_parseFromJSON(statistics); //nonprimitive
    }

    // v0_0_39_step->step
    cJSON *step = cJSON_GetObjectItemCaseSensitive(v0_0_39_stepJSON, "step");
    if (step) { 
    step_local_nonprim = v0_0_39_job_reservation_parseFromJSON(step); //nonprimitive
    }

    // v0_0_39_step->task
    cJSON *task = cJSON_GetObjectItemCaseSensitive(v0_0_39_stepJSON, "task");
    if (task) { 
    task_local_nonprim = v0_0_39_step_task_parseFromJSON(task); //nonprimitive
    }

    // v0_0_39_step->tres
    cJSON *tres = cJSON_GetObjectItemCaseSensitive(v0_0_39_stepJSON, "tres");
    if (tres) { 
    tres_local_nonprim = v0_0_39_step_tres_parseFromJSON(tres); //nonprimitive
    }


    v0_0_39_step_local_var = v0_0_39_step_create (
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
        task ? task_local_nonprim : NULL,
        tres ? tres_local_nonprim : NULL
        );

    return v0_0_39_step_local_var;
end:
    if (time_local_nonprim) {
        v0_0_39_step_time_free(time_local_nonprim);
        time_local_nonprim = NULL;
    }
    if (exit_code_local_nonprim) {
        v0_0_39_job_exit_code_free(exit_code_local_nonprim);
        exit_code_local_nonprim = NULL;
    }
    if (nodes_local_nonprim) {
        v0_0_39_step_nodes_free(nodes_local_nonprim);
        nodes_local_nonprim = NULL;
    }
    if (tasks_local_nonprim) {
        v0_0_39_step_tasks_free(tasks_local_nonprim);
        tasks_local_nonprim = NULL;
    }
    if (cpu_local_nonprim) {
        v0_0_39_step_cpu_free(cpu_local_nonprim);
        cpu_local_nonprim = NULL;
    }
    if (statistics_local_nonprim) {
        v0_0_39_step_statistics_free(statistics_local_nonprim);
        statistics_local_nonprim = NULL;
    }
    if (step_local_nonprim) {
        v0_0_39_job_reservation_free(step_local_nonprim);
        step_local_nonprim = NULL;
    }
    if (task_local_nonprim) {
        v0_0_39_step_task_free(task_local_nonprim);
        task_local_nonprim = NULL;
    }
    if (tres_local_nonprim) {
        v0_0_39_step_tres_free(tres_local_nonprim);
        tres_local_nonprim = NULL;
    }
    return NULL;

}
