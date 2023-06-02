#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_job_array_response_msg_inner.h"



v0_0_39_job_array_response_msg_inner_t *v0_0_39_job_array_response_msg_inner_create(
    int job_id,
    int error_code,
    char *error,
    char *why
    ) {
    v0_0_39_job_array_response_msg_inner_t *v0_0_39_job_array_response_msg_inner_local_var = malloc(sizeof(v0_0_39_job_array_response_msg_inner_t));
    if (!v0_0_39_job_array_response_msg_inner_local_var) {
        return NULL;
    }
    v0_0_39_job_array_response_msg_inner_local_var->job_id = job_id;
    v0_0_39_job_array_response_msg_inner_local_var->error_code = error_code;
    v0_0_39_job_array_response_msg_inner_local_var->error = error;
    v0_0_39_job_array_response_msg_inner_local_var->why = why;

    return v0_0_39_job_array_response_msg_inner_local_var;
}


void v0_0_39_job_array_response_msg_inner_free(v0_0_39_job_array_response_msg_inner_t *v0_0_39_job_array_response_msg_inner) {
    if(NULL == v0_0_39_job_array_response_msg_inner){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_job_array_response_msg_inner->error) {
        free(v0_0_39_job_array_response_msg_inner->error);
        v0_0_39_job_array_response_msg_inner->error = NULL;
    }
    if (v0_0_39_job_array_response_msg_inner->why) {
        free(v0_0_39_job_array_response_msg_inner->why);
        v0_0_39_job_array_response_msg_inner->why = NULL;
    }
    free(v0_0_39_job_array_response_msg_inner);
}

cJSON *v0_0_39_job_array_response_msg_inner_convertToJSON(v0_0_39_job_array_response_msg_inner_t *v0_0_39_job_array_response_msg_inner) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_job_array_response_msg_inner->job_id
    if(v0_0_39_job_array_response_msg_inner->job_id) {
    if(cJSON_AddNumberToObject(item, "job_id", v0_0_39_job_array_response_msg_inner->job_id) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_array_response_msg_inner->error_code
    if(v0_0_39_job_array_response_msg_inner->error_code) {
    if(cJSON_AddNumberToObject(item, "error_code", v0_0_39_job_array_response_msg_inner->error_code) == NULL) {
    goto fail; //Numeric
    }
    }


    // v0_0_39_job_array_response_msg_inner->error
    if(v0_0_39_job_array_response_msg_inner->error) {
    if(cJSON_AddStringToObject(item, "error", v0_0_39_job_array_response_msg_inner->error) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_job_array_response_msg_inner->why
    if(v0_0_39_job_array_response_msg_inner->why) {
    if(cJSON_AddStringToObject(item, "why", v0_0_39_job_array_response_msg_inner->why) == NULL) {
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

v0_0_39_job_array_response_msg_inner_t *v0_0_39_job_array_response_msg_inner_parseFromJSON(cJSON *v0_0_39_job_array_response_msg_innerJSON){

    v0_0_39_job_array_response_msg_inner_t *v0_0_39_job_array_response_msg_inner_local_var = NULL;

    // v0_0_39_job_array_response_msg_inner->job_id
    cJSON *job_id = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_array_response_msg_innerJSON, "job_id");
    if (job_id) { 
    if(!cJSON_IsNumber(job_id))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_array_response_msg_inner->error_code
    cJSON *error_code = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_array_response_msg_innerJSON, "error_code");
    if (error_code) { 
    if(!cJSON_IsNumber(error_code))
    {
    goto end; //Numeric
    }
    }

    // v0_0_39_job_array_response_msg_inner->error
    cJSON *error = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_array_response_msg_innerJSON, "error");
    if (error) { 
    if(!cJSON_IsString(error) && !cJSON_IsNull(error))
    {
    goto end; //String
    }
    }

    // v0_0_39_job_array_response_msg_inner->why
    cJSON *why = cJSON_GetObjectItemCaseSensitive(v0_0_39_job_array_response_msg_innerJSON, "why");
    if (why) { 
    if(!cJSON_IsString(why) && !cJSON_IsNull(why))
    {
    goto end; //String
    }
    }


    v0_0_39_job_array_response_msg_inner_local_var = v0_0_39_job_array_response_msg_inner_create (
        job_id ? job_id->valuedouble : 0,
        error_code ? error_code->valuedouble : 0,
        error && !cJSON_IsNull(error) ? strdup(error->valuestring) : NULL,
        why && !cJSON_IsNull(why) ? strdup(why->valuestring) : NULL
        );

    return v0_0_39_job_array_response_msg_inner_local_var;
end:
    return NULL;

}
