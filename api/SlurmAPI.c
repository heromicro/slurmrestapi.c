#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "SlurmAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)

// Functions for enum  for SlurmAPI_slurmV0038CancelJob

static char* slurmV0038CancelJob__ToString(slurm_rest_api_slurmV0038CancelJob_signal_e ){
    char *Array[] =  { "NULL", "HUP", "INT", "QUIT", "ABRT", "KILL", "ALRM", "TERM", "USR1", "USR2", "URG", "CONT", "STOP", "TSTP", "TTIN", "TTOU" };
    return Array[];
}

static slurm_rest_api_slurmV0038CancelJob_signal_e slurmV0038CancelJob__FromString(char* ){
    int stringToReturn = 0;
    char *Array[] =  { "NULL", "HUP", "INT", "QUIT", "ABRT", "KILL", "ALRM", "TERM", "USR1", "USR2", "URG", "CONT", "STOP", "TSTP", "TTIN", "TTOU" };
    size_t sizeofArray = sizeof(Array) / sizeof(Array[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(, Array[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

/*
// Function slurmV0038CancelJob__convertToJSON is not currently used,
// since conversion to JSON passes through the conversion of the model, and ToString. The function is kept for future reference.
//
static cJSON *slurmV0038CancelJob__convertToJSON(slurm_rest_api_slurmV0038CancelJob_signal_e ) {
    cJSON *item = cJSON_CreateObject();
    return item;
    fail:
    cJSON_Delete(item);
    return NULL;
}

// Function slurmV0038CancelJob__parseFromJSON is not currently used,
// since conversion from JSON passes through the conversion of the model, and FromString. The function is kept for future reference.
//
static slurm_rest_api_slurmV0038CancelJob_signal_e slurmV0038CancelJob__parseFromJSON(cJSON* JSON) {
    slurm_rest_api_slurmV0038CancelJob_signal_e Variable = 0;
    return Variable;
end:
    return 0;
}
*/


// cancel or signal job
//
void
SlurmAPI_slurmV0038CancelJob(apiClient_t *apiClient, char * job_id , v0_0_38_signal_e signal )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurm/v0.0.38/job/{job_id}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurm/v0.0.38/job/{job_id}");


    // Path Params
    long sizeOfPathParams_job_id = strlen(job_id)+3 + strlen("{ job_id }");
    if(job_id == NULL) {
        goto end;
    }
    char* localVarToReplace_job_id = malloc(sizeOfPathParams_job_id);
    sprintf(localVarToReplace_job_id, "{%s}", "job_id");

    localVarPath = strReplace(localVarPath, localVarToReplace_job_id, job_id);



    // query parameters
    char *keyQuery_signal = NULL;
    v0_0_38_signal_e valueQuery_signal ;
    keyValuePair_t *keyPairQuery_signal = 0;
    if (signal)
    {
        keyQuery_signal = strdup("signal");
        valueQuery_signal = (signal);
        keyPairQuery_signal = keyValuePair_create(keyQuery_signal, (void *)strdup(slurmV0038CancelJob__ToString(
		&valueQuery_signal)));
        list_addElement(localVarQueryParameters,keyPairQuery_signal);
    }
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","job cancelled or sent signal");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 500) {
    //    printf("%s\n","job not found");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    
    
    free(localVarPath);
    free(localVarToReplace_job_id);

}

// get diagnostics
//
v0_0_38_diag_t*
SlurmAPI_slurmV0038Diag(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurm/v0.0.38/diag")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurm/v0.0.38/diag");



    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","diagnostic results");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","unable to request ping test");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    v0_0_38_diag_t *elementToReturn = v0_0_38_diag_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// get job info
//
v0_0_38_jobs_response_t*
SlurmAPI_slurmV0038GetJob(apiClient_t *apiClient, char * job_id )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurm/v0.0.38/job/{job_id}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurm/v0.0.38/job/{job_id}");


    // Path Params
    long sizeOfPathParams_job_id = strlen(job_id)+3 + strlen("{ job_id }");
    if(job_id == NULL) {
        goto end;
    }
    char* localVarToReplace_job_id = malloc(sizeOfPathParams_job_id);
    sprintf(localVarToReplace_job_id, "{%s}", "job_id");

    localVarPath = strReplace(localVarPath, localVarToReplace_job_id, job_id);


    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","job(s) information");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","job matching JobId not found");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    v0_0_38_jobs_response_t *elementToReturn = v0_0_38_jobs_response_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_job_id);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// get list of jobs
//
v0_0_38_jobs_response_t*
SlurmAPI_slurmV0038GetJobs(apiClient_t *apiClient, long update_time )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurm/v0.0.38/jobs")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurm/v0.0.38/jobs");




    // query parameters
    char *keyQuery_update_time = NULL;
    long valueQuery_update_time ;
    keyValuePair_t *keyPairQuery_update_time = 0;
    if (update_time)
    {
        keyQuery_update_time = strdup("update_time");
        valueQuery_update_time = (update_time);
        keyPairQuery_update_time = keyValuePair_create(keyQuery_update_time, &valueQuery_update_time);
        list_addElement(localVarQueryParameters,keyPairQuery_update_time);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","job(s) information");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","job not found");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    v0_0_38_jobs_response_t *elementToReturn = v0_0_38_jobs_response_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    if(keyQuery_update_time){
        free(keyQuery_update_time);
        keyQuery_update_time = NULL;
    }
    if(keyPairQuery_update_time){
        keyValuePair_free(keyPairQuery_update_time);
        keyPairQuery_update_time = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// get node info
//
v0_0_38_nodes_response_t*
SlurmAPI_slurmV0038GetNode(apiClient_t *apiClient, char * node_name )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurm/v0.0.38/node/{node_name}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurm/v0.0.38/node/{node_name}");


    // Path Params
    long sizeOfPathParams_node_name = strlen(node_name)+3 + strlen("{ node_name }");
    if(node_name == NULL) {
        goto end;
    }
    char* localVarToReplace_node_name = malloc(sizeOfPathParams_node_name);
    sprintf(localVarToReplace_node_name, "{%s}", "node_name");

    localVarPath = strReplace(localVarPath, localVarToReplace_node_name, node_name);


    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","node information");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","node not found");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    v0_0_38_nodes_response_t *elementToReturn = v0_0_38_nodes_response_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_node_name);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// get all node info
//
v0_0_38_nodes_response_t*
SlurmAPI_slurmV0038GetNodes(apiClient_t *apiClient, long update_time )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurm/v0.0.38/nodes")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurm/v0.0.38/nodes");




    // query parameters
    char *keyQuery_update_time = NULL;
    long valueQuery_update_time ;
    keyValuePair_t *keyPairQuery_update_time = 0;
    if (update_time)
    {
        keyQuery_update_time = strdup("update_time");
        valueQuery_update_time = (update_time);
        keyPairQuery_update_time = keyValuePair_create(keyQuery_update_time, &valueQuery_update_time);
        list_addElement(localVarQueryParameters,keyPairQuery_update_time);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","node information");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","no nodes in cluster");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    v0_0_38_nodes_response_t *elementToReturn = v0_0_38_nodes_response_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    if(keyQuery_update_time){
        free(keyQuery_update_time);
        keyQuery_update_time = NULL;
    }
    if(keyPairQuery_update_time){
        keyValuePair_free(keyPairQuery_update_time);
        keyPairQuery_update_time = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// get partition info
//
v0_0_38_partitions_response_t*
SlurmAPI_slurmV0038GetPartition(apiClient_t *apiClient, char * partition_name , long update_time )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurm/v0.0.38/partition/{partition_name}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurm/v0.0.38/partition/{partition_name}");


    // Path Params
    long sizeOfPathParams_partition_name = strlen(partition_name)+3 + strlen("{ partition_name }");
    if(partition_name == NULL) {
        goto end;
    }
    char* localVarToReplace_partition_name = malloc(sizeOfPathParams_partition_name);
    sprintf(localVarToReplace_partition_name, "{%s}", "partition_name");

    localVarPath = strReplace(localVarPath, localVarToReplace_partition_name, partition_name);



    // query parameters
    char *keyQuery_update_time = NULL;
    long valueQuery_update_time ;
    keyValuePair_t *keyPairQuery_update_time = 0;
    if (update_time)
    {
        keyQuery_update_time = strdup("update_time");
        valueQuery_update_time = (update_time);
        keyPairQuery_update_time = keyValuePair_create(keyQuery_update_time, &valueQuery_update_time);
        list_addElement(localVarQueryParameters,keyPairQuery_update_time);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","partition information");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","no partitions found");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    v0_0_38_partitions_response_t *elementToReturn = v0_0_38_partitions_response_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_partition_name);
    if(keyQuery_update_time){
        free(keyQuery_update_time);
        keyQuery_update_time = NULL;
    }
    if(keyPairQuery_update_time){
        keyValuePair_free(keyPairQuery_update_time);
        keyPairQuery_update_time = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// get all partition info
//
v0_0_38_partitions_response_t*
SlurmAPI_slurmV0038GetPartitions(apiClient_t *apiClient, long update_time )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurm/v0.0.38/partitions")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurm/v0.0.38/partitions");




    // query parameters
    char *keyQuery_update_time = NULL;
    long valueQuery_update_time ;
    keyValuePair_t *keyPairQuery_update_time = 0;
    if (update_time)
    {
        keyQuery_update_time = strdup("update_time");
        valueQuery_update_time = (update_time);
        keyPairQuery_update_time = keyValuePair_create(keyQuery_update_time, &valueQuery_update_time);
        list_addElement(localVarQueryParameters,keyPairQuery_update_time);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","partition information");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","no partitions found");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    v0_0_38_partitions_response_t *elementToReturn = v0_0_38_partitions_response_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    if(keyQuery_update_time){
        free(keyQuery_update_time);
        keyQuery_update_time = NULL;
    }
    if(keyPairQuery_update_time){
        keyValuePair_free(keyPairQuery_update_time);
        keyPairQuery_update_time = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// get reservation info
//
v0_0_38_reservations_response_t*
SlurmAPI_slurmV0038GetReservation(apiClient_t *apiClient, char * reservation_name , long update_time )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurm/v0.0.38/reservation/{reservation_name}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurm/v0.0.38/reservation/{reservation_name}");


    // Path Params
    long sizeOfPathParams_reservation_name = strlen(reservation_name)+3 + strlen("{ reservation_name }");
    if(reservation_name == NULL) {
        goto end;
    }
    char* localVarToReplace_reservation_name = malloc(sizeOfPathParams_reservation_name);
    sprintf(localVarToReplace_reservation_name, "{%s}", "reservation_name");

    localVarPath = strReplace(localVarPath, localVarToReplace_reservation_name, reservation_name);



    // query parameters
    char *keyQuery_update_time = NULL;
    long valueQuery_update_time ;
    keyValuePair_t *keyPairQuery_update_time = 0;
    if (update_time)
    {
        keyQuery_update_time = strdup("update_time");
        valueQuery_update_time = (update_time);
        keyPairQuery_update_time = keyValuePair_create(keyQuery_update_time, &valueQuery_update_time);
        list_addElement(localVarQueryParameters,keyPairQuery_update_time);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","reservation information");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","no reservations found");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    v0_0_38_reservations_response_t *elementToReturn = v0_0_38_reservations_response_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_reservation_name);
    if(keyQuery_update_time){
        free(keyQuery_update_time);
        keyQuery_update_time = NULL;
    }
    if(keyPairQuery_update_time){
        keyValuePair_free(keyPairQuery_update_time);
        keyPairQuery_update_time = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// get all reservation info
//
v0_0_38_reservations_response_t*
SlurmAPI_slurmV0038GetReservations(apiClient_t *apiClient, long update_time )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurm/v0.0.38/reservations")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurm/v0.0.38/reservations");




    // query parameters
    char *keyQuery_update_time = NULL;
    long valueQuery_update_time ;
    keyValuePair_t *keyPairQuery_update_time = 0;
    if (update_time)
    {
        keyQuery_update_time = strdup("update_time");
        valueQuery_update_time = (update_time);
        keyPairQuery_update_time = keyValuePair_create(keyQuery_update_time, &valueQuery_update_time);
        list_addElement(localVarQueryParameters,keyPairQuery_update_time);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","reservation information");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","no reservations found");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    v0_0_38_reservations_response_t *elementToReturn = v0_0_38_reservations_response_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    if(keyQuery_update_time){
        free(keyQuery_update_time);
        keyQuery_update_time = NULL;
    }
    if(keyPairQuery_update_time){
        keyValuePair_free(keyPairQuery_update_time);
        keyPairQuery_update_time = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// ping test
//
v0_0_38_pings_t*
SlurmAPI_slurmV0038Ping(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurm/v0.0.38/ping")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurm/v0.0.38/ping");



    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","results of ping test");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","unable to request ping test");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    v0_0_38_pings_t *elementToReturn = v0_0_38_pings_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// get all Slurm tracked license info
//
v0_0_38_licenses_t*
SlurmAPI_slurmV0038SlurmctldGetLicenses(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurm/v0.0.38/licenses")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurm/v0.0.38/licenses");



    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","results of get all licenses");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","unable to request licenses");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    v0_0_38_licenses_t *elementToReturn = v0_0_38_licenses_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// submit new job
//
v0_0_38_job_submission_response_t*
SlurmAPI_slurmV0038SubmitJob(apiClient_t *apiClient, v0_0_38_job_submission_t * v0_0_38_job_submission )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurm/v0.0.38/job/submit")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurm/v0.0.38/job/submit");




    // Body Param
    cJSON *localVarSingleItemJSON_v0_0_38_job_submission = NULL;
    if (v0_0_38_job_submission != NULL)
    {
        //string
        localVarSingleItemJSON_v0_0_38_job_submission = v0_0_38_job_submission_convertToJSON(v0_0_38_job_submission);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_v0_0_38_job_submission);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    list_addElement(localVarContentType,"application/x-yaml"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","job submitted");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","job rejected");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    v0_0_38_job_submission_response_t *elementToReturn = v0_0_38_job_submission_response_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_v0_0_38_job_submission) {
        cJSON_Delete(localVarSingleItemJSON_v0_0_38_job_submission);
        localVarSingleItemJSON_v0_0_38_job_submission = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// update job
//
void
SlurmAPI_slurmV0038UpdateJob(apiClient_t *apiClient, char * job_id , v0_0_38_job_properties_t * v0_0_38_job_properties )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = NULL;
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurm/v0.0.38/job/{job_id}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurm/v0.0.38/job/{job_id}");


    // Path Params
    long sizeOfPathParams_job_id = strlen(job_id)+3 + strlen("{ job_id }");
    if(job_id == NULL) {
        goto end;
    }
    char* localVarToReplace_job_id = malloc(sizeOfPathParams_job_id);
    sprintf(localVarToReplace_job_id, "{%s}", "job_id");

    localVarPath = strReplace(localVarPath, localVarToReplace_job_id, job_id);



    // Body Param
    cJSON *localVarSingleItemJSON_v0_0_38_job_properties = NULL;
    if (v0_0_38_job_properties != NULL)
    {
        //string
        localVarSingleItemJSON_v0_0_38_job_properties = v0_0_38_job_properties_convertToJSON(v0_0_38_job_properties);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_v0_0_38_job_properties);
    }
    list_addElement(localVarContentType,"application/json"); //consumes
    list_addElement(localVarContentType,"application/x-yaml"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","job information");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 500) {
    //    printf("%s\n","job not found");
    //}
    //No return type
end:
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_job_id);
    if (localVarSingleItemJSON_v0_0_38_job_properties) {
        cJSON_Delete(localVarSingleItemJSON_v0_0_38_job_properties);
        localVarSingleItemJSON_v0_0_38_job_properties = NULL;
    }
    free(localVarBodyParameters);

}

// Add clusters
//
dbv0_0_38_response_cluster_add_t*
SlurmAPI_slurmdbV0038AddClusters(apiClient_t *apiClient, dbv0_0_38_clusters_properties_t * dbv0_0_38_clusters_properties )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurmdb/v0.0.38/clusters")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurmdb/v0.0.38/clusters");




    // Body Param
    cJSON *localVarSingleItemJSON_dbv0_0_38_clusters_properties = NULL;
    if (dbv0_0_38_clusters_properties != NULL)
    {
        //string
        localVarSingleItemJSON_dbv0_0_38_clusters_properties = dbv0_0_38_clusters_properties_convertToJSON(dbv0_0_38_clusters_properties);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_dbv0_0_38_clusters_properties);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    list_addElement(localVarContentType,"application/x-yaml"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","List of clusters");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Unable to add cluster");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    dbv0_0_38_response_cluster_add_t *elementToReturn = dbv0_0_38_response_cluster_add_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_dbv0_0_38_clusters_properties) {
        cJSON_Delete(localVarSingleItemJSON_dbv0_0_38_clusters_properties);
        localVarSingleItemJSON_dbv0_0_38_clusters_properties = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Add wckeys
//
dbv0_0_38_response_wckey_add_t*
SlurmAPI_slurmdbV0038AddWckeys(apiClient_t *apiClient, dbv0_0_38_wckey_info_t * dbv0_0_38_wckey_info )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurmdb/v0.0.38/wckeys")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurmdb/v0.0.38/wckeys");




    // Body Param
    cJSON *localVarSingleItemJSON_dbv0_0_38_wckey_info = NULL;
    if (dbv0_0_38_wckey_info != NULL)
    {
        //string
        localVarSingleItemJSON_dbv0_0_38_wckey_info = dbv0_0_38_wckey_info_convertToJSON(dbv0_0_38_wckey_info);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_dbv0_0_38_wckey_info);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    list_addElement(localVarContentType,"application/x-yaml"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","List of wckeys");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Unable to add wckey");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    dbv0_0_38_response_wckey_add_t *elementToReturn = dbv0_0_38_response_wckey_add_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_dbv0_0_38_wckey_info) {
        cJSON_Delete(localVarSingleItemJSON_dbv0_0_38_wckey_info);
        localVarSingleItemJSON_dbv0_0_38_wckey_info = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete account
//
dbv0_0_38_response_account_delete_t*
SlurmAPI_slurmdbV0038DeleteAccount(apiClient_t *apiClient, char * account_name )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurmdb/v0.0.38/account/{account_name}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurmdb/v0.0.38/account/{account_name}");


    // Path Params
    long sizeOfPathParams_account_name = strlen(account_name)+3 + strlen("{ account_name }");
    if(account_name == NULL) {
        goto end;
    }
    char* localVarToReplace_account_name = malloc(sizeOfPathParams_account_name);
    sprintf(localVarToReplace_account_name, "{%s}", "account_name");

    localVarPath = strReplace(localVarPath, localVarToReplace_account_name, account_name);


    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Delete account");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Unable to delete account");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    dbv0_0_38_response_account_delete_t *elementToReturn = dbv0_0_38_response_account_delete_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_account_name);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete association
//
dbv0_0_38_response_associations_delete_t*
SlurmAPI_slurmdbV0038DeleteAssociation(apiClient_t *apiClient, char * cluster , char * account , char * user , char * partition )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurmdb/v0.0.38/association")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurmdb/v0.0.38/association");




    // query parameters
    char *keyQuery_cluster = NULL;
    char * valueQuery_cluster = NULL;
    keyValuePair_t *keyPairQuery_cluster = 0;
    if (cluster)
    {
        keyQuery_cluster = strdup("cluster");
        valueQuery_cluster = strdup((cluster));
        keyPairQuery_cluster = keyValuePair_create(keyQuery_cluster, valueQuery_cluster);
        list_addElement(localVarQueryParameters,keyPairQuery_cluster);
    }

    // query parameters
    char *keyQuery_account = NULL;
    char * valueQuery_account = NULL;
    keyValuePair_t *keyPairQuery_account = 0;
    if (account)
    {
        keyQuery_account = strdup("account");
        valueQuery_account = strdup((account));
        keyPairQuery_account = keyValuePair_create(keyQuery_account, valueQuery_account);
        list_addElement(localVarQueryParameters,keyPairQuery_account);
    }

    // query parameters
    char *keyQuery_user = NULL;
    char * valueQuery_user = NULL;
    keyValuePair_t *keyPairQuery_user = 0;
    if (user)
    {
        keyQuery_user = strdup("user");
        valueQuery_user = strdup((user));
        keyPairQuery_user = keyValuePair_create(keyQuery_user, valueQuery_user);
        list_addElement(localVarQueryParameters,keyPairQuery_user);
    }

    // query parameters
    char *keyQuery_partition = NULL;
    char * valueQuery_partition = NULL;
    keyValuePair_t *keyPairQuery_partition = 0;
    if (partition)
    {
        keyQuery_partition = strdup("partition");
        valueQuery_partition = strdup((partition));
        keyPairQuery_partition = keyValuePair_create(keyQuery_partition, valueQuery_partition);
        list_addElement(localVarQueryParameters,keyPairQuery_partition);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Delete associations");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Association not found or unable to delete association");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    dbv0_0_38_response_associations_delete_t *elementToReturn = dbv0_0_38_response_associations_delete_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    if(keyQuery_cluster){
        free(keyQuery_cluster);
        keyQuery_cluster = NULL;
    }
    if(valueQuery_cluster){
        free(valueQuery_cluster);
        valueQuery_cluster = NULL;
    }
    if(keyPairQuery_cluster){
        keyValuePair_free(keyPairQuery_cluster);
        keyPairQuery_cluster = NULL;
    }
    if(keyQuery_account){
        free(keyQuery_account);
        keyQuery_account = NULL;
    }
    if(valueQuery_account){
        free(valueQuery_account);
        valueQuery_account = NULL;
    }
    if(keyPairQuery_account){
        keyValuePair_free(keyPairQuery_account);
        keyPairQuery_account = NULL;
    }
    if(keyQuery_user){
        free(keyQuery_user);
        keyQuery_user = NULL;
    }
    if(valueQuery_user){
        free(valueQuery_user);
        valueQuery_user = NULL;
    }
    if(keyPairQuery_user){
        keyValuePair_free(keyPairQuery_user);
        keyPairQuery_user = NULL;
    }
    if(keyQuery_partition){
        free(keyQuery_partition);
        keyQuery_partition = NULL;
    }
    if(valueQuery_partition){
        free(valueQuery_partition);
        valueQuery_partition = NULL;
    }
    if(keyPairQuery_partition){
        keyValuePair_free(keyPairQuery_partition);
        keyPairQuery_partition = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete associations
//
dbv0_0_38_response_associations_delete_t*
SlurmAPI_slurmdbV0038DeleteAssociations(apiClient_t *apiClient, char * cluster , char * account , char * user , char * partition )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurmdb/v0.0.38/associations")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurmdb/v0.0.38/associations");




    // query parameters
    char *keyQuery_cluster = NULL;
    char * valueQuery_cluster = NULL;
    keyValuePair_t *keyPairQuery_cluster = 0;
    if (cluster)
    {
        keyQuery_cluster = strdup("cluster");
        valueQuery_cluster = strdup((cluster));
        keyPairQuery_cluster = keyValuePair_create(keyQuery_cluster, valueQuery_cluster);
        list_addElement(localVarQueryParameters,keyPairQuery_cluster);
    }

    // query parameters
    char *keyQuery_account = NULL;
    char * valueQuery_account = NULL;
    keyValuePair_t *keyPairQuery_account = 0;
    if (account)
    {
        keyQuery_account = strdup("account");
        valueQuery_account = strdup((account));
        keyPairQuery_account = keyValuePair_create(keyQuery_account, valueQuery_account);
        list_addElement(localVarQueryParameters,keyPairQuery_account);
    }

    // query parameters
    char *keyQuery_user = NULL;
    char * valueQuery_user = NULL;
    keyValuePair_t *keyPairQuery_user = 0;
    if (user)
    {
        keyQuery_user = strdup("user");
        valueQuery_user = strdup((user));
        keyPairQuery_user = keyValuePair_create(keyQuery_user, valueQuery_user);
        list_addElement(localVarQueryParameters,keyPairQuery_user);
    }

    // query parameters
    char *keyQuery_partition = NULL;
    char * valueQuery_partition = NULL;
    keyValuePair_t *keyPairQuery_partition = 0;
    if (partition)
    {
        keyQuery_partition = strdup("partition");
        valueQuery_partition = strdup((partition));
        keyPairQuery_partition = keyValuePair_create(keyQuery_partition, valueQuery_partition);
        list_addElement(localVarQueryParameters,keyPairQuery_partition);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Delete associations");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Associations not found or unable to delete association");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    dbv0_0_38_response_associations_delete_t *elementToReturn = dbv0_0_38_response_associations_delete_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    if(keyQuery_cluster){
        free(keyQuery_cluster);
        keyQuery_cluster = NULL;
    }
    if(valueQuery_cluster){
        free(valueQuery_cluster);
        valueQuery_cluster = NULL;
    }
    if(keyPairQuery_cluster){
        keyValuePair_free(keyPairQuery_cluster);
        keyPairQuery_cluster = NULL;
    }
    if(keyQuery_account){
        free(keyQuery_account);
        keyQuery_account = NULL;
    }
    if(valueQuery_account){
        free(valueQuery_account);
        valueQuery_account = NULL;
    }
    if(keyPairQuery_account){
        keyValuePair_free(keyPairQuery_account);
        keyPairQuery_account = NULL;
    }
    if(keyQuery_user){
        free(keyQuery_user);
        keyQuery_user = NULL;
    }
    if(valueQuery_user){
        free(valueQuery_user);
        valueQuery_user = NULL;
    }
    if(keyPairQuery_user){
        keyValuePair_free(keyPairQuery_user);
        keyPairQuery_user = NULL;
    }
    if(keyQuery_partition){
        free(keyQuery_partition);
        keyQuery_partition = NULL;
    }
    if(valueQuery_partition){
        free(valueQuery_partition);
        valueQuery_partition = NULL;
    }
    if(keyPairQuery_partition){
        keyValuePair_free(keyPairQuery_partition);
        keyPairQuery_partition = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete cluster
//
dbv0_0_38_response_cluster_delete_t*
SlurmAPI_slurmdbV0038DeleteCluster(apiClient_t *apiClient, char * cluster_name )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurmdb/v0.0.38/cluster/{cluster_name}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurmdb/v0.0.38/cluster/{cluster_name}");


    // Path Params
    long sizeOfPathParams_cluster_name = strlen(cluster_name)+3 + strlen("{ cluster_name }");
    if(cluster_name == NULL) {
        goto end;
    }
    char* localVarToReplace_cluster_name = malloc(sizeOfPathParams_cluster_name);
    sprintf(localVarToReplace_cluster_name, "{%s}", "cluster_name");

    localVarPath = strReplace(localVarPath, localVarToReplace_cluster_name, cluster_name);


    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Delete cluster");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Cluster not found or unable to delete cluster");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    dbv0_0_38_response_cluster_delete_t *elementToReturn = dbv0_0_38_response_cluster_delete_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_cluster_name);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete QOS
//
dbv0_0_38_response_qos_delete_t*
SlurmAPI_slurmdbV0038DeleteQos(apiClient_t *apiClient, char * qos_name )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurmdb/v0.0.38/qos/{qos_name}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurmdb/v0.0.38/qos/{qos_name}");


    // Path Params
    long sizeOfPathParams_qos_name = strlen(qos_name)+3 + strlen("{ qos_name }");
    if(qos_name == NULL) {
        goto end;
    }
    char* localVarToReplace_qos_name = malloc(sizeOfPathParams_qos_name);
    sprintf(localVarToReplace_qos_name, "{%s}", "qos_name");

    localVarPath = strReplace(localVarPath, localVarToReplace_qos_name, qos_name);


    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Delete qos");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Unable to delete QOS");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    dbv0_0_38_response_qos_delete_t *elementToReturn = dbv0_0_38_response_qos_delete_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_qos_name);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete user
//
dbv0_0_38_response_user_delete_t*
SlurmAPI_slurmdbV0038DeleteUser(apiClient_t *apiClient, char * user_name )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurmdb/v0.0.38/user/{user_name}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurmdb/v0.0.38/user/{user_name}");


    // Path Params
    long sizeOfPathParams_user_name = strlen(user_name)+3 + strlen("{ user_name }");
    if(user_name == NULL) {
        goto end;
    }
    char* localVarToReplace_user_name = malloc(sizeOfPathParams_user_name);
    sprintf(localVarToReplace_user_name, "{%s}", "user_name");

    localVarPath = strReplace(localVarPath, localVarToReplace_user_name, user_name);


    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Delete user");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","User not found or unable to delete user");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    dbv0_0_38_response_user_delete_t *elementToReturn = dbv0_0_38_response_user_delete_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_user_name);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Delete wckey
//
dbv0_0_38_response_wckey_delete_t*
SlurmAPI_slurmdbV0038DeleteWckey(apiClient_t *apiClient, char * wckey )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurmdb/v0.0.38/wckey/{wckey}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurmdb/v0.0.38/wckey/{wckey}");


    // Path Params
    long sizeOfPathParams_wckey = strlen(wckey)+3 + strlen("{ wckey }");
    if(wckey == NULL) {
        goto end;
    }
    char* localVarToReplace_wckey = malloc(sizeOfPathParams_wckey);
    sprintf(localVarToReplace_wckey, "{%s}", "wckey");

    localVarPath = strReplace(localVarPath, localVarToReplace_wckey, wckey);


    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "DELETE");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Delete wckey");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","wckey not found or unable to delete wckey");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    dbv0_0_38_response_wckey_delete_t *elementToReturn = dbv0_0_38_response_wckey_delete_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_wckey);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get slurmdb diagnostics
//
dbv0_0_38_diag_t*
SlurmAPI_slurmdbV0038Diag(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurmdb/v0.0.38/diag")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurmdb/v0.0.38/diag");



    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Dictionary of statistics");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Unable to query diagnostics");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    dbv0_0_38_diag_t *elementToReturn = dbv0_0_38_diag_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get account info
//
dbv0_0_38_account_info_t*
SlurmAPI_slurmdbV0038GetAccount(apiClient_t *apiClient, char * account_name , int with_deleted )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurmdb/v0.0.38/account/{account_name}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurmdb/v0.0.38/account/{account_name}");


    // Path Params
    long sizeOfPathParams_account_name = strlen(account_name)+3 + strlen("{ account_name }");
    if(account_name == NULL) {
        goto end;
    }
    char* localVarToReplace_account_name = malloc(sizeOfPathParams_account_name);
    sprintf(localVarToReplace_account_name, "{%s}", "account_name");

    localVarPath = strReplace(localVarPath, localVarToReplace_account_name, account_name);



    // query parameters
    char *keyQuery_with_deleted = NULL;
    char * valueQuery_with_deleted = NULL;
    keyValuePair_t *keyPairQuery_with_deleted = 0;
    if (1) // Always send boolean parameters to the API server
    {
        keyQuery_with_deleted = strdup("with_deleted");
        valueQuery_with_deleted = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_with_deleted, MAX_NUMBER_LENGTH, "%d", with_deleted);
        keyPairQuery_with_deleted = keyValuePair_create(keyQuery_with_deleted, valueQuery_with_deleted);
        list_addElement(localVarQueryParameters,keyPairQuery_with_deleted);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","List of accounts");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Account not found");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    dbv0_0_38_account_info_t *elementToReturn = dbv0_0_38_account_info_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_account_name);
    if(keyQuery_with_deleted){
        free(keyQuery_with_deleted);
        keyQuery_with_deleted = NULL;
    }
    if(valueQuery_with_deleted){
        free(valueQuery_with_deleted);
        valueQuery_with_deleted = NULL;
    }
    if(keyPairQuery_with_deleted){
        keyValuePair_free(keyPairQuery_with_deleted);
        keyPairQuery_with_deleted = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get account list
//
dbv0_0_38_account_info_t*
SlurmAPI_slurmdbV0038GetAccounts(apiClient_t *apiClient, int with_deleted )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurmdb/v0.0.38/accounts")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurmdb/v0.0.38/accounts");




    // query parameters
    char *keyQuery_with_deleted = NULL;
    char * valueQuery_with_deleted = NULL;
    keyValuePair_t *keyPairQuery_with_deleted = 0;
    if (1) // Always send boolean parameters to the API server
    {
        keyQuery_with_deleted = strdup("with_deleted");
        valueQuery_with_deleted = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_with_deleted, MAX_NUMBER_LENGTH, "%d", with_deleted);
        keyPairQuery_with_deleted = keyValuePair_create(keyQuery_with_deleted, valueQuery_with_deleted);
        list_addElement(localVarQueryParameters,keyPairQuery_with_deleted);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","List of accounts");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Account not found");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    dbv0_0_38_account_info_t *elementToReturn = dbv0_0_38_account_info_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    if(keyQuery_with_deleted){
        free(keyQuery_with_deleted);
        keyQuery_with_deleted = NULL;
    }
    if(valueQuery_with_deleted){
        free(valueQuery_with_deleted);
        valueQuery_with_deleted = NULL;
    }
    if(keyPairQuery_with_deleted){
        keyValuePair_free(keyPairQuery_with_deleted);
        keyPairQuery_with_deleted = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get association info
//
dbv0_0_38_associations_info_t*
SlurmAPI_slurmdbV0038GetAssociation(apiClient_t *apiClient, char * cluster , char * account , char * user , char * partition )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurmdb/v0.0.38/association")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurmdb/v0.0.38/association");




    // query parameters
    char *keyQuery_cluster = NULL;
    char * valueQuery_cluster = NULL;
    keyValuePair_t *keyPairQuery_cluster = 0;
    if (cluster)
    {
        keyQuery_cluster = strdup("cluster");
        valueQuery_cluster = strdup((cluster));
        keyPairQuery_cluster = keyValuePair_create(keyQuery_cluster, valueQuery_cluster);
        list_addElement(localVarQueryParameters,keyPairQuery_cluster);
    }

    // query parameters
    char *keyQuery_account = NULL;
    char * valueQuery_account = NULL;
    keyValuePair_t *keyPairQuery_account = 0;
    if (account)
    {
        keyQuery_account = strdup("account");
        valueQuery_account = strdup((account));
        keyPairQuery_account = keyValuePair_create(keyQuery_account, valueQuery_account);
        list_addElement(localVarQueryParameters,keyPairQuery_account);
    }

    // query parameters
    char *keyQuery_user = NULL;
    char * valueQuery_user = NULL;
    keyValuePair_t *keyPairQuery_user = 0;
    if (user)
    {
        keyQuery_user = strdup("user");
        valueQuery_user = strdup((user));
        keyPairQuery_user = keyValuePair_create(keyQuery_user, valueQuery_user);
        list_addElement(localVarQueryParameters,keyPairQuery_user);
    }

    // query parameters
    char *keyQuery_partition = NULL;
    char * valueQuery_partition = NULL;
    keyValuePair_t *keyPairQuery_partition = 0;
    if (partition)
    {
        keyQuery_partition = strdup("partition");
        valueQuery_partition = strdup((partition));
        keyPairQuery_partition = keyValuePair_create(keyQuery_partition, valueQuery_partition);
        list_addElement(localVarQueryParameters,keyPairQuery_partition);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","List of associations");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Association not found");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    dbv0_0_38_associations_info_t *elementToReturn = dbv0_0_38_associations_info_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    if(keyQuery_cluster){
        free(keyQuery_cluster);
        keyQuery_cluster = NULL;
    }
    if(valueQuery_cluster){
        free(valueQuery_cluster);
        valueQuery_cluster = NULL;
    }
    if(keyPairQuery_cluster){
        keyValuePair_free(keyPairQuery_cluster);
        keyPairQuery_cluster = NULL;
    }
    if(keyQuery_account){
        free(keyQuery_account);
        keyQuery_account = NULL;
    }
    if(valueQuery_account){
        free(valueQuery_account);
        valueQuery_account = NULL;
    }
    if(keyPairQuery_account){
        keyValuePair_free(keyPairQuery_account);
        keyPairQuery_account = NULL;
    }
    if(keyQuery_user){
        free(keyQuery_user);
        keyQuery_user = NULL;
    }
    if(valueQuery_user){
        free(valueQuery_user);
        valueQuery_user = NULL;
    }
    if(keyPairQuery_user){
        keyValuePair_free(keyPairQuery_user);
        keyPairQuery_user = NULL;
    }
    if(keyQuery_partition){
        free(keyQuery_partition);
        keyQuery_partition = NULL;
    }
    if(valueQuery_partition){
        free(valueQuery_partition);
        valueQuery_partition = NULL;
    }
    if(keyPairQuery_partition){
        keyValuePair_free(keyPairQuery_partition);
        keyPairQuery_partition = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get association list
//
dbv0_0_38_associations_info_t*
SlurmAPI_slurmdbV0038GetAssociations(apiClient_t *apiClient, char * cluster , char * account , char * user , char * partition )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurmdb/v0.0.38/associations")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurmdb/v0.0.38/associations");




    // query parameters
    char *keyQuery_cluster = NULL;
    char * valueQuery_cluster = NULL;
    keyValuePair_t *keyPairQuery_cluster = 0;
    if (cluster)
    {
        keyQuery_cluster = strdup("cluster");
        valueQuery_cluster = strdup((cluster));
        keyPairQuery_cluster = keyValuePair_create(keyQuery_cluster, valueQuery_cluster);
        list_addElement(localVarQueryParameters,keyPairQuery_cluster);
    }

    // query parameters
    char *keyQuery_account = NULL;
    char * valueQuery_account = NULL;
    keyValuePair_t *keyPairQuery_account = 0;
    if (account)
    {
        keyQuery_account = strdup("account");
        valueQuery_account = strdup((account));
        keyPairQuery_account = keyValuePair_create(keyQuery_account, valueQuery_account);
        list_addElement(localVarQueryParameters,keyPairQuery_account);
    }

    // query parameters
    char *keyQuery_user = NULL;
    char * valueQuery_user = NULL;
    keyValuePair_t *keyPairQuery_user = 0;
    if (user)
    {
        keyQuery_user = strdup("user");
        valueQuery_user = strdup((user));
        keyPairQuery_user = keyValuePair_create(keyQuery_user, valueQuery_user);
        list_addElement(localVarQueryParameters,keyPairQuery_user);
    }

    // query parameters
    char *keyQuery_partition = NULL;
    char * valueQuery_partition = NULL;
    keyValuePair_t *keyPairQuery_partition = 0;
    if (partition)
    {
        keyQuery_partition = strdup("partition");
        valueQuery_partition = strdup((partition));
        keyPairQuery_partition = keyValuePair_create(keyQuery_partition, valueQuery_partition);
        list_addElement(localVarQueryParameters,keyPairQuery_partition);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","List of associations");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Association not found");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    dbv0_0_38_associations_info_t *elementToReturn = dbv0_0_38_associations_info_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    if(keyQuery_cluster){
        free(keyQuery_cluster);
        keyQuery_cluster = NULL;
    }
    if(valueQuery_cluster){
        free(valueQuery_cluster);
        valueQuery_cluster = NULL;
    }
    if(keyPairQuery_cluster){
        keyValuePair_free(keyPairQuery_cluster);
        keyPairQuery_cluster = NULL;
    }
    if(keyQuery_account){
        free(keyQuery_account);
        keyQuery_account = NULL;
    }
    if(valueQuery_account){
        free(valueQuery_account);
        valueQuery_account = NULL;
    }
    if(keyPairQuery_account){
        keyValuePair_free(keyPairQuery_account);
        keyPairQuery_account = NULL;
    }
    if(keyQuery_user){
        free(keyQuery_user);
        keyQuery_user = NULL;
    }
    if(valueQuery_user){
        free(valueQuery_user);
        valueQuery_user = NULL;
    }
    if(keyPairQuery_user){
        keyValuePair_free(keyPairQuery_user);
        keyPairQuery_user = NULL;
    }
    if(keyQuery_partition){
        free(keyQuery_partition);
        keyQuery_partition = NULL;
    }
    if(valueQuery_partition){
        free(valueQuery_partition);
        valueQuery_partition = NULL;
    }
    if(keyPairQuery_partition){
        keyValuePair_free(keyPairQuery_partition);
        keyPairQuery_partition = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get cluster info
//
dbv0_0_38_cluster_info_t*
SlurmAPI_slurmdbV0038GetCluster(apiClient_t *apiClient, char * cluster_name )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurmdb/v0.0.38/cluster/{cluster_name}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurmdb/v0.0.38/cluster/{cluster_name}");


    // Path Params
    long sizeOfPathParams_cluster_name = strlen(cluster_name)+3 + strlen("{ cluster_name }");
    if(cluster_name == NULL) {
        goto end;
    }
    char* localVarToReplace_cluster_name = malloc(sizeOfPathParams_cluster_name);
    sprintf(localVarToReplace_cluster_name, "{%s}", "cluster_name");

    localVarPath = strReplace(localVarPath, localVarToReplace_cluster_name, cluster_name);


    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Cluster information");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Cluster not found");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    dbv0_0_38_cluster_info_t *elementToReturn = dbv0_0_38_cluster_info_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_cluster_name);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get cluster list
//
dbv0_0_38_cluster_info_t*
SlurmAPI_slurmdbV0038GetClusters(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurmdb/v0.0.38/clusters")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurmdb/v0.0.38/clusters");



    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","List of clusters");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Cluster not found");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    dbv0_0_38_cluster_info_t *elementToReturn = dbv0_0_38_cluster_info_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Dump all configuration information
//
dbv0_0_38_config_info_t*
SlurmAPI_slurmdbV0038GetConfig(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurmdb/v0.0.38/config")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurmdb/v0.0.38/config");



    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","slurmdbd configuration");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Unable to dump config");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    dbv0_0_38_config_info_t *elementToReturn = dbv0_0_38_config_info_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get job info
//
// This endpoint may return multiple job entries since job_id is not a unique key - only the tuple (cluster, job_id, start_time) is unique. If the requested job_id is a component of a heterogeneous job all components are returned.
//
dbv0_0_38_job_info_t*
SlurmAPI_slurmdbV0038GetJob(apiClient_t *apiClient, char * job_id )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurmdb/v0.0.38/job/{job_id}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurmdb/v0.0.38/job/{job_id}");


    // Path Params
    long sizeOfPathParams_job_id = strlen(job_id)+3 + strlen("{ job_id }");
    if(job_id == NULL) {
        goto end;
    }
    char* localVarToReplace_job_id = malloc(sizeOfPathParams_job_id);
    sprintf(localVarToReplace_job_id, "{%s}", "job_id");

    localVarPath = strReplace(localVarPath, localVarToReplace_job_id, job_id);


    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Job description");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Unable to find job");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    dbv0_0_38_job_info_t *elementToReturn = dbv0_0_38_job_info_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_job_id);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get job list
//
dbv0_0_38_job_info_t*
SlurmAPI_slurmdbV0038GetJobs(apiClient_t *apiClient, char * submit_time , char * start_time , char * end_time , char * account , char * association , char * cluster , char * constraints , char * cpus_max , char * cpus_min , int skip_steps , int disable_wait_for_result , char * exit_code , char * format , char * group , char * job_name , char * nodes_max , char * nodes_min , char * partition , char * qos , char * reason , char * reservation , char * state , char * step , char * node , char * wckey )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurmdb/v0.0.38/jobs")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurmdb/v0.0.38/jobs");




    // query parameters
    char *keyQuery_submit_time = NULL;
    char * valueQuery_submit_time = NULL;
    keyValuePair_t *keyPairQuery_submit_time = 0;
    if (submit_time)
    {
        keyQuery_submit_time = strdup("submit_time");
        valueQuery_submit_time = strdup((submit_time));
        keyPairQuery_submit_time = keyValuePair_create(keyQuery_submit_time, valueQuery_submit_time);
        list_addElement(localVarQueryParameters,keyPairQuery_submit_time);
    }

    // query parameters
    char *keyQuery_start_time = NULL;
    char * valueQuery_start_time = NULL;
    keyValuePair_t *keyPairQuery_start_time = 0;
    if (start_time)
    {
        keyQuery_start_time = strdup("start_time");
        valueQuery_start_time = strdup((start_time));
        keyPairQuery_start_time = keyValuePair_create(keyQuery_start_time, valueQuery_start_time);
        list_addElement(localVarQueryParameters,keyPairQuery_start_time);
    }

    // query parameters
    char *keyQuery_end_time = NULL;
    char * valueQuery_end_time = NULL;
    keyValuePair_t *keyPairQuery_end_time = 0;
    if (end_time)
    {
        keyQuery_end_time = strdup("end_time");
        valueQuery_end_time = strdup((end_time));
        keyPairQuery_end_time = keyValuePair_create(keyQuery_end_time, valueQuery_end_time);
        list_addElement(localVarQueryParameters,keyPairQuery_end_time);
    }

    // query parameters
    char *keyQuery_account = NULL;
    char * valueQuery_account = NULL;
    keyValuePair_t *keyPairQuery_account = 0;
    if (account)
    {
        keyQuery_account = strdup("account");
        valueQuery_account = strdup((account));
        keyPairQuery_account = keyValuePair_create(keyQuery_account, valueQuery_account);
        list_addElement(localVarQueryParameters,keyPairQuery_account);
    }

    // query parameters
    char *keyQuery_association = NULL;
    char * valueQuery_association = NULL;
    keyValuePair_t *keyPairQuery_association = 0;
    if (association)
    {
        keyQuery_association = strdup("association");
        valueQuery_association = strdup((association));
        keyPairQuery_association = keyValuePair_create(keyQuery_association, valueQuery_association);
        list_addElement(localVarQueryParameters,keyPairQuery_association);
    }

    // query parameters
    char *keyQuery_cluster = NULL;
    char * valueQuery_cluster = NULL;
    keyValuePair_t *keyPairQuery_cluster = 0;
    if (cluster)
    {
        keyQuery_cluster = strdup("cluster");
        valueQuery_cluster = strdup((cluster));
        keyPairQuery_cluster = keyValuePair_create(keyQuery_cluster, valueQuery_cluster);
        list_addElement(localVarQueryParameters,keyPairQuery_cluster);
    }

    // query parameters
    char *keyQuery_constraints = NULL;
    char * valueQuery_constraints = NULL;
    keyValuePair_t *keyPairQuery_constraints = 0;
    if (constraints)
    {
        keyQuery_constraints = strdup("constraints");
        valueQuery_constraints = strdup((constraints));
        keyPairQuery_constraints = keyValuePair_create(keyQuery_constraints, valueQuery_constraints);
        list_addElement(localVarQueryParameters,keyPairQuery_constraints);
    }

    // query parameters
    char *keyQuery_cpus_max = NULL;
    char * valueQuery_cpus_max = NULL;
    keyValuePair_t *keyPairQuery_cpus_max = 0;
    if (cpus_max)
    {
        keyQuery_cpus_max = strdup("cpus_max");
        valueQuery_cpus_max = strdup((cpus_max));
        keyPairQuery_cpus_max = keyValuePair_create(keyQuery_cpus_max, valueQuery_cpus_max);
        list_addElement(localVarQueryParameters,keyPairQuery_cpus_max);
    }

    // query parameters
    char *keyQuery_cpus_min = NULL;
    char * valueQuery_cpus_min = NULL;
    keyValuePair_t *keyPairQuery_cpus_min = 0;
    if (cpus_min)
    {
        keyQuery_cpus_min = strdup("cpus_min");
        valueQuery_cpus_min = strdup((cpus_min));
        keyPairQuery_cpus_min = keyValuePair_create(keyQuery_cpus_min, valueQuery_cpus_min);
        list_addElement(localVarQueryParameters,keyPairQuery_cpus_min);
    }

    // query parameters
    char *keyQuery_skip_steps = NULL;
    char * valueQuery_skip_steps = NULL;
    keyValuePair_t *keyPairQuery_skip_steps = 0;
    if (1) // Always send boolean parameters to the API server
    {
        keyQuery_skip_steps = strdup("skip_steps");
        valueQuery_skip_steps = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_skip_steps, MAX_NUMBER_LENGTH, "%d", skip_steps);
        keyPairQuery_skip_steps = keyValuePair_create(keyQuery_skip_steps, valueQuery_skip_steps);
        list_addElement(localVarQueryParameters,keyPairQuery_skip_steps);
    }

    // query parameters
    char *keyQuery_disable_wait_for_result = NULL;
    char * valueQuery_disable_wait_for_result = NULL;
    keyValuePair_t *keyPairQuery_disable_wait_for_result = 0;
    if (1) // Always send boolean parameters to the API server
    {
        keyQuery_disable_wait_for_result = strdup("disable_wait_for_result");
        valueQuery_disable_wait_for_result = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_disable_wait_for_result, MAX_NUMBER_LENGTH, "%d", disable_wait_for_result);
        keyPairQuery_disable_wait_for_result = keyValuePair_create(keyQuery_disable_wait_for_result, valueQuery_disable_wait_for_result);
        list_addElement(localVarQueryParameters,keyPairQuery_disable_wait_for_result);
    }

    // query parameters
    char *keyQuery_exit_code = NULL;
    char * valueQuery_exit_code = NULL;
    keyValuePair_t *keyPairQuery_exit_code = 0;
    if (exit_code)
    {
        keyQuery_exit_code = strdup("exit_code");
        valueQuery_exit_code = strdup((exit_code));
        keyPairQuery_exit_code = keyValuePair_create(keyQuery_exit_code, valueQuery_exit_code);
        list_addElement(localVarQueryParameters,keyPairQuery_exit_code);
    }

    // query parameters
    char *keyQuery_format = NULL;
    char * valueQuery_format = NULL;
    keyValuePair_t *keyPairQuery_format = 0;
    if (format)
    {
        keyQuery_format = strdup("format");
        valueQuery_format = strdup((format));
        keyPairQuery_format = keyValuePair_create(keyQuery_format, valueQuery_format);
        list_addElement(localVarQueryParameters,keyPairQuery_format);
    }

    // query parameters
    char *keyQuery_group = NULL;
    char * valueQuery_group = NULL;
    keyValuePair_t *keyPairQuery_group = 0;
    if (group)
    {
        keyQuery_group = strdup("group");
        valueQuery_group = strdup((group));
        keyPairQuery_group = keyValuePair_create(keyQuery_group, valueQuery_group);
        list_addElement(localVarQueryParameters,keyPairQuery_group);
    }

    // query parameters
    char *keyQuery_job_name = NULL;
    char * valueQuery_job_name = NULL;
    keyValuePair_t *keyPairQuery_job_name = 0;
    if (job_name)
    {
        keyQuery_job_name = strdup("job_name");
        valueQuery_job_name = strdup((job_name));
        keyPairQuery_job_name = keyValuePair_create(keyQuery_job_name, valueQuery_job_name);
        list_addElement(localVarQueryParameters,keyPairQuery_job_name);
    }

    // query parameters
    char *keyQuery_nodes_max = NULL;
    char * valueQuery_nodes_max = NULL;
    keyValuePair_t *keyPairQuery_nodes_max = 0;
    if (nodes_max)
    {
        keyQuery_nodes_max = strdup("nodes_max");
        valueQuery_nodes_max = strdup((nodes_max));
        keyPairQuery_nodes_max = keyValuePair_create(keyQuery_nodes_max, valueQuery_nodes_max);
        list_addElement(localVarQueryParameters,keyPairQuery_nodes_max);
    }

    // query parameters
    char *keyQuery_nodes_min = NULL;
    char * valueQuery_nodes_min = NULL;
    keyValuePair_t *keyPairQuery_nodes_min = 0;
    if (nodes_min)
    {
        keyQuery_nodes_min = strdup("nodes_min");
        valueQuery_nodes_min = strdup((nodes_min));
        keyPairQuery_nodes_min = keyValuePair_create(keyQuery_nodes_min, valueQuery_nodes_min);
        list_addElement(localVarQueryParameters,keyPairQuery_nodes_min);
    }

    // query parameters
    char *keyQuery_partition = NULL;
    char * valueQuery_partition = NULL;
    keyValuePair_t *keyPairQuery_partition = 0;
    if (partition)
    {
        keyQuery_partition = strdup("partition");
        valueQuery_partition = strdup((partition));
        keyPairQuery_partition = keyValuePair_create(keyQuery_partition, valueQuery_partition);
        list_addElement(localVarQueryParameters,keyPairQuery_partition);
    }

    // query parameters
    char *keyQuery_qos = NULL;
    char * valueQuery_qos = NULL;
    keyValuePair_t *keyPairQuery_qos = 0;
    if (qos)
    {
        keyQuery_qos = strdup("qos");
        valueQuery_qos = strdup((qos));
        keyPairQuery_qos = keyValuePair_create(keyQuery_qos, valueQuery_qos);
        list_addElement(localVarQueryParameters,keyPairQuery_qos);
    }

    // query parameters
    char *keyQuery_reason = NULL;
    char * valueQuery_reason = NULL;
    keyValuePair_t *keyPairQuery_reason = 0;
    if (reason)
    {
        keyQuery_reason = strdup("reason");
        valueQuery_reason = strdup((reason));
        keyPairQuery_reason = keyValuePair_create(keyQuery_reason, valueQuery_reason);
        list_addElement(localVarQueryParameters,keyPairQuery_reason);
    }

    // query parameters
    char *keyQuery_reservation = NULL;
    char * valueQuery_reservation = NULL;
    keyValuePair_t *keyPairQuery_reservation = 0;
    if (reservation)
    {
        keyQuery_reservation = strdup("reservation");
        valueQuery_reservation = strdup((reservation));
        keyPairQuery_reservation = keyValuePair_create(keyQuery_reservation, valueQuery_reservation);
        list_addElement(localVarQueryParameters,keyPairQuery_reservation);
    }

    // query parameters
    char *keyQuery_state = NULL;
    char * valueQuery_state = NULL;
    keyValuePair_t *keyPairQuery_state = 0;
    if (state)
    {
        keyQuery_state = strdup("state");
        valueQuery_state = strdup((state));
        keyPairQuery_state = keyValuePair_create(keyQuery_state, valueQuery_state);
        list_addElement(localVarQueryParameters,keyPairQuery_state);
    }

    // query parameters
    char *keyQuery_step = NULL;
    char * valueQuery_step = NULL;
    keyValuePair_t *keyPairQuery_step = 0;
    if (step)
    {
        keyQuery_step = strdup("step");
        valueQuery_step = strdup((step));
        keyPairQuery_step = keyValuePair_create(keyQuery_step, valueQuery_step);
        list_addElement(localVarQueryParameters,keyPairQuery_step);
    }

    // query parameters
    char *keyQuery_node = NULL;
    char * valueQuery_node = NULL;
    keyValuePair_t *keyPairQuery_node = 0;
    if (node)
    {
        keyQuery_node = strdup("node");
        valueQuery_node = strdup((node));
        keyPairQuery_node = keyValuePair_create(keyQuery_node, valueQuery_node);
        list_addElement(localVarQueryParameters,keyPairQuery_node);
    }

    // query parameters
    char *keyQuery_wckey = NULL;
    char * valueQuery_wckey = NULL;
    keyValuePair_t *keyPairQuery_wckey = 0;
    if (wckey)
    {
        keyQuery_wckey = strdup("wckey");
        valueQuery_wckey = strdup((wckey));
        keyPairQuery_wckey = keyValuePair_create(keyQuery_wckey, valueQuery_wckey);
        list_addElement(localVarQueryParameters,keyPairQuery_wckey);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","List of jobs");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Unable to query jobs");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    dbv0_0_38_job_info_t *elementToReturn = dbv0_0_38_job_info_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    if(keyQuery_submit_time){
        free(keyQuery_submit_time);
        keyQuery_submit_time = NULL;
    }
    if(valueQuery_submit_time){
        free(valueQuery_submit_time);
        valueQuery_submit_time = NULL;
    }
    if(keyPairQuery_submit_time){
        keyValuePair_free(keyPairQuery_submit_time);
        keyPairQuery_submit_time = NULL;
    }
    if(keyQuery_start_time){
        free(keyQuery_start_time);
        keyQuery_start_time = NULL;
    }
    if(valueQuery_start_time){
        free(valueQuery_start_time);
        valueQuery_start_time = NULL;
    }
    if(keyPairQuery_start_time){
        keyValuePair_free(keyPairQuery_start_time);
        keyPairQuery_start_time = NULL;
    }
    if(keyQuery_end_time){
        free(keyQuery_end_time);
        keyQuery_end_time = NULL;
    }
    if(valueQuery_end_time){
        free(valueQuery_end_time);
        valueQuery_end_time = NULL;
    }
    if(keyPairQuery_end_time){
        keyValuePair_free(keyPairQuery_end_time);
        keyPairQuery_end_time = NULL;
    }
    if(keyQuery_account){
        free(keyQuery_account);
        keyQuery_account = NULL;
    }
    if(valueQuery_account){
        free(valueQuery_account);
        valueQuery_account = NULL;
    }
    if(keyPairQuery_account){
        keyValuePair_free(keyPairQuery_account);
        keyPairQuery_account = NULL;
    }
    if(keyQuery_association){
        free(keyQuery_association);
        keyQuery_association = NULL;
    }
    if(valueQuery_association){
        free(valueQuery_association);
        valueQuery_association = NULL;
    }
    if(keyPairQuery_association){
        keyValuePair_free(keyPairQuery_association);
        keyPairQuery_association = NULL;
    }
    if(keyQuery_cluster){
        free(keyQuery_cluster);
        keyQuery_cluster = NULL;
    }
    if(valueQuery_cluster){
        free(valueQuery_cluster);
        valueQuery_cluster = NULL;
    }
    if(keyPairQuery_cluster){
        keyValuePair_free(keyPairQuery_cluster);
        keyPairQuery_cluster = NULL;
    }
    if(keyQuery_constraints){
        free(keyQuery_constraints);
        keyQuery_constraints = NULL;
    }
    if(valueQuery_constraints){
        free(valueQuery_constraints);
        valueQuery_constraints = NULL;
    }
    if(keyPairQuery_constraints){
        keyValuePair_free(keyPairQuery_constraints);
        keyPairQuery_constraints = NULL;
    }
    if(keyQuery_cpus_max){
        free(keyQuery_cpus_max);
        keyQuery_cpus_max = NULL;
    }
    if(valueQuery_cpus_max){
        free(valueQuery_cpus_max);
        valueQuery_cpus_max = NULL;
    }
    if(keyPairQuery_cpus_max){
        keyValuePair_free(keyPairQuery_cpus_max);
        keyPairQuery_cpus_max = NULL;
    }
    if(keyQuery_cpus_min){
        free(keyQuery_cpus_min);
        keyQuery_cpus_min = NULL;
    }
    if(valueQuery_cpus_min){
        free(valueQuery_cpus_min);
        valueQuery_cpus_min = NULL;
    }
    if(keyPairQuery_cpus_min){
        keyValuePair_free(keyPairQuery_cpus_min);
        keyPairQuery_cpus_min = NULL;
    }
    if(keyQuery_skip_steps){
        free(keyQuery_skip_steps);
        keyQuery_skip_steps = NULL;
    }
    if(valueQuery_skip_steps){
        free(valueQuery_skip_steps);
        valueQuery_skip_steps = NULL;
    }
    if(keyPairQuery_skip_steps){
        keyValuePair_free(keyPairQuery_skip_steps);
        keyPairQuery_skip_steps = NULL;
    }
    if(keyQuery_disable_wait_for_result){
        free(keyQuery_disable_wait_for_result);
        keyQuery_disable_wait_for_result = NULL;
    }
    if(valueQuery_disable_wait_for_result){
        free(valueQuery_disable_wait_for_result);
        valueQuery_disable_wait_for_result = NULL;
    }
    if(keyPairQuery_disable_wait_for_result){
        keyValuePair_free(keyPairQuery_disable_wait_for_result);
        keyPairQuery_disable_wait_for_result = NULL;
    }
    if(keyQuery_exit_code){
        free(keyQuery_exit_code);
        keyQuery_exit_code = NULL;
    }
    if(valueQuery_exit_code){
        free(valueQuery_exit_code);
        valueQuery_exit_code = NULL;
    }
    if(keyPairQuery_exit_code){
        keyValuePair_free(keyPairQuery_exit_code);
        keyPairQuery_exit_code = NULL;
    }
    if(keyQuery_format){
        free(keyQuery_format);
        keyQuery_format = NULL;
    }
    if(valueQuery_format){
        free(valueQuery_format);
        valueQuery_format = NULL;
    }
    if(keyPairQuery_format){
        keyValuePair_free(keyPairQuery_format);
        keyPairQuery_format = NULL;
    }
    if(keyQuery_group){
        free(keyQuery_group);
        keyQuery_group = NULL;
    }
    if(valueQuery_group){
        free(valueQuery_group);
        valueQuery_group = NULL;
    }
    if(keyPairQuery_group){
        keyValuePair_free(keyPairQuery_group);
        keyPairQuery_group = NULL;
    }
    if(keyQuery_job_name){
        free(keyQuery_job_name);
        keyQuery_job_name = NULL;
    }
    if(valueQuery_job_name){
        free(valueQuery_job_name);
        valueQuery_job_name = NULL;
    }
    if(keyPairQuery_job_name){
        keyValuePair_free(keyPairQuery_job_name);
        keyPairQuery_job_name = NULL;
    }
    if(keyQuery_nodes_max){
        free(keyQuery_nodes_max);
        keyQuery_nodes_max = NULL;
    }
    if(valueQuery_nodes_max){
        free(valueQuery_nodes_max);
        valueQuery_nodes_max = NULL;
    }
    if(keyPairQuery_nodes_max){
        keyValuePair_free(keyPairQuery_nodes_max);
        keyPairQuery_nodes_max = NULL;
    }
    if(keyQuery_nodes_min){
        free(keyQuery_nodes_min);
        keyQuery_nodes_min = NULL;
    }
    if(valueQuery_nodes_min){
        free(valueQuery_nodes_min);
        valueQuery_nodes_min = NULL;
    }
    if(keyPairQuery_nodes_min){
        keyValuePair_free(keyPairQuery_nodes_min);
        keyPairQuery_nodes_min = NULL;
    }
    if(keyQuery_partition){
        free(keyQuery_partition);
        keyQuery_partition = NULL;
    }
    if(valueQuery_partition){
        free(valueQuery_partition);
        valueQuery_partition = NULL;
    }
    if(keyPairQuery_partition){
        keyValuePair_free(keyPairQuery_partition);
        keyPairQuery_partition = NULL;
    }
    if(keyQuery_qos){
        free(keyQuery_qos);
        keyQuery_qos = NULL;
    }
    if(valueQuery_qos){
        free(valueQuery_qos);
        valueQuery_qos = NULL;
    }
    if(keyPairQuery_qos){
        keyValuePair_free(keyPairQuery_qos);
        keyPairQuery_qos = NULL;
    }
    if(keyQuery_reason){
        free(keyQuery_reason);
        keyQuery_reason = NULL;
    }
    if(valueQuery_reason){
        free(valueQuery_reason);
        valueQuery_reason = NULL;
    }
    if(keyPairQuery_reason){
        keyValuePair_free(keyPairQuery_reason);
        keyPairQuery_reason = NULL;
    }
    if(keyQuery_reservation){
        free(keyQuery_reservation);
        keyQuery_reservation = NULL;
    }
    if(valueQuery_reservation){
        free(valueQuery_reservation);
        valueQuery_reservation = NULL;
    }
    if(keyPairQuery_reservation){
        keyValuePair_free(keyPairQuery_reservation);
        keyPairQuery_reservation = NULL;
    }
    if(keyQuery_state){
        free(keyQuery_state);
        keyQuery_state = NULL;
    }
    if(valueQuery_state){
        free(valueQuery_state);
        valueQuery_state = NULL;
    }
    if(keyPairQuery_state){
        keyValuePair_free(keyPairQuery_state);
        keyPairQuery_state = NULL;
    }
    if(keyQuery_step){
        free(keyQuery_step);
        keyQuery_step = NULL;
    }
    if(valueQuery_step){
        free(valueQuery_step);
        valueQuery_step = NULL;
    }
    if(keyPairQuery_step){
        keyValuePair_free(keyPairQuery_step);
        keyPairQuery_step = NULL;
    }
    if(keyQuery_node){
        free(keyQuery_node);
        keyQuery_node = NULL;
    }
    if(valueQuery_node){
        free(valueQuery_node);
        valueQuery_node = NULL;
    }
    if(keyPairQuery_node){
        keyValuePair_free(keyPairQuery_node);
        keyPairQuery_node = NULL;
    }
    if(keyQuery_wckey){
        free(keyQuery_wckey);
        keyQuery_wckey = NULL;
    }
    if(valueQuery_wckey){
        free(valueQuery_wckey);
        valueQuery_wckey = NULL;
    }
    if(keyPairQuery_wckey){
        keyValuePair_free(keyPairQuery_wckey);
        keyPairQuery_wckey = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get QOS list
//
dbv0_0_38_qos_info_t*
SlurmAPI_slurmdbV0038GetQos(apiClient_t *apiClient, int with_deleted )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurmdb/v0.0.38/qos")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurmdb/v0.0.38/qos");




    // query parameters
    char *keyQuery_with_deleted = NULL;
    char * valueQuery_with_deleted = NULL;
    keyValuePair_t *keyPairQuery_with_deleted = 0;
    if (1) // Always send boolean parameters to the API server
    {
        keyQuery_with_deleted = strdup("with_deleted");
        valueQuery_with_deleted = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_with_deleted, MAX_NUMBER_LENGTH, "%d", with_deleted);
        keyPairQuery_with_deleted = keyValuePair_create(keyQuery_with_deleted, valueQuery_with_deleted);
        list_addElement(localVarQueryParameters,keyPairQuery_with_deleted);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","List of QOS&#39;");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","QOS not found");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    dbv0_0_38_qos_info_t *elementToReturn = dbv0_0_38_qos_info_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    if(keyQuery_with_deleted){
        free(keyQuery_with_deleted);
        keyQuery_with_deleted = NULL;
    }
    if(valueQuery_with_deleted){
        free(valueQuery_with_deleted);
        valueQuery_with_deleted = NULL;
    }
    if(keyPairQuery_with_deleted){
        keyValuePair_free(keyPairQuery_with_deleted);
        keyPairQuery_with_deleted = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get QOS info
//
dbv0_0_38_qos_info_t*
SlurmAPI_slurmdbV0038GetSingleQos(apiClient_t *apiClient, char * qos_name , int with_deleted )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurmdb/v0.0.38/qos/{qos_name}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurmdb/v0.0.38/qos/{qos_name}");


    // Path Params
    long sizeOfPathParams_qos_name = strlen(qos_name)+3 + strlen("{ qos_name }");
    if(qos_name == NULL) {
        goto end;
    }
    char* localVarToReplace_qos_name = malloc(sizeOfPathParams_qos_name);
    sprintf(localVarToReplace_qos_name, "{%s}", "qos_name");

    localVarPath = strReplace(localVarPath, localVarToReplace_qos_name, qos_name);



    // query parameters
    char *keyQuery_with_deleted = NULL;
    char * valueQuery_with_deleted = NULL;
    keyValuePair_t *keyPairQuery_with_deleted = 0;
    if (1) // Always send boolean parameters to the API server
    {
        keyQuery_with_deleted = strdup("with_deleted");
        valueQuery_with_deleted = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_with_deleted, MAX_NUMBER_LENGTH, "%d", with_deleted);
        keyPairQuery_with_deleted = keyValuePair_create(keyQuery_with_deleted, valueQuery_with_deleted);
        list_addElement(localVarQueryParameters,keyPairQuery_with_deleted);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","QOS information");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","QOS not found");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    dbv0_0_38_qos_info_t *elementToReturn = dbv0_0_38_qos_info_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_qos_name);
    if(keyQuery_with_deleted){
        free(keyQuery_with_deleted);
        keyQuery_with_deleted = NULL;
    }
    if(valueQuery_with_deleted){
        free(valueQuery_with_deleted);
        valueQuery_with_deleted = NULL;
    }
    if(keyPairQuery_with_deleted){
        keyValuePair_free(keyPairQuery_with_deleted);
        keyPairQuery_with_deleted = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get TRES info
//
dbv0_0_38_tres_info_t*
SlurmAPI_slurmdbV0038GetTres(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurmdb/v0.0.38/tres")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurmdb/v0.0.38/tres");



    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","List of TRES");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Unable to retrieve TRES");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    dbv0_0_38_tres_info_t *elementToReturn = dbv0_0_38_tres_info_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get user info
//
dbv0_0_38_user_info_t*
SlurmAPI_slurmdbV0038GetUser(apiClient_t *apiClient, char * user_name , int with_deleted )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurmdb/v0.0.38/user/{user_name}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurmdb/v0.0.38/user/{user_name}");


    // Path Params
    long sizeOfPathParams_user_name = strlen(user_name)+3 + strlen("{ user_name }");
    if(user_name == NULL) {
        goto end;
    }
    char* localVarToReplace_user_name = malloc(sizeOfPathParams_user_name);
    sprintf(localVarToReplace_user_name, "{%s}", "user_name");

    localVarPath = strReplace(localVarPath, localVarToReplace_user_name, user_name);



    // query parameters
    char *keyQuery_with_deleted = NULL;
    char * valueQuery_with_deleted = NULL;
    keyValuePair_t *keyPairQuery_with_deleted = 0;
    if (1) // Always send boolean parameters to the API server
    {
        keyQuery_with_deleted = strdup("with_deleted");
        valueQuery_with_deleted = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_with_deleted, MAX_NUMBER_LENGTH, "%d", with_deleted);
        keyPairQuery_with_deleted = keyValuePair_create(keyQuery_with_deleted, valueQuery_with_deleted);
        list_addElement(localVarQueryParameters,keyPairQuery_with_deleted);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","List of users");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","User not found");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    dbv0_0_38_user_info_t *elementToReturn = dbv0_0_38_user_info_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_user_name);
    if(keyQuery_with_deleted){
        free(keyQuery_with_deleted);
        keyQuery_with_deleted = NULL;
    }
    if(valueQuery_with_deleted){
        free(valueQuery_with_deleted);
        valueQuery_with_deleted = NULL;
    }
    if(keyPairQuery_with_deleted){
        keyValuePair_free(keyPairQuery_with_deleted);
        keyPairQuery_with_deleted = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get user list
//
dbv0_0_38_user_info_t*
SlurmAPI_slurmdbV0038GetUsers(apiClient_t *apiClient, int with_deleted )
{
    list_t    *localVarQueryParameters = list_createList();
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurmdb/v0.0.38/users")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurmdb/v0.0.38/users");




    // query parameters
    char *keyQuery_with_deleted = NULL;
    char * valueQuery_with_deleted = NULL;
    keyValuePair_t *keyPairQuery_with_deleted = 0;
    if (1) // Always send boolean parameters to the API server
    {
        keyQuery_with_deleted = strdup("with_deleted");
        valueQuery_with_deleted = calloc(1,MAX_NUMBER_LENGTH);
        snprintf(valueQuery_with_deleted, MAX_NUMBER_LENGTH, "%d", with_deleted);
        keyPairQuery_with_deleted = keyValuePair_create(keyQuery_with_deleted, valueQuery_with_deleted);
        list_addElement(localVarQueryParameters,keyPairQuery_with_deleted);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","List of users");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","User not found");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    dbv0_0_38_user_info_t *elementToReturn = dbv0_0_38_user_info_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    list_freeList(localVarQueryParameters);
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    if(keyQuery_with_deleted){
        free(keyQuery_with_deleted);
        keyQuery_with_deleted = NULL;
    }
    if(valueQuery_with_deleted){
        free(valueQuery_with_deleted);
        valueQuery_with_deleted = NULL;
    }
    if(keyPairQuery_with_deleted){
        keyValuePair_free(keyPairQuery_with_deleted);
        keyPairQuery_with_deleted = NULL;
    }
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get wckey info
//
dbv0_0_38_wckey_info_t*
SlurmAPI_slurmdbV0038GetWckey(apiClient_t *apiClient, char * wckey )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurmdb/v0.0.38/wckey/{wckey}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurmdb/v0.0.38/wckey/{wckey}");


    // Path Params
    long sizeOfPathParams_wckey = strlen(wckey)+3 + strlen("{ wckey }");
    if(wckey == NULL) {
        goto end;
    }
    char* localVarToReplace_wckey = malloc(sizeOfPathParams_wckey);
    sprintf(localVarToReplace_wckey, "{%s}", "wckey");

    localVarPath = strReplace(localVarPath, localVarToReplace_wckey, wckey);


    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","List of wckey");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","wckey not found");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    dbv0_0_38_wckey_info_t *elementToReturn = dbv0_0_38_wckey_info_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    free(localVarToReplace_wckey);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Get wckey list
//
dbv0_0_38_wckey_info_t*
SlurmAPI_slurmdbV0038GetWckeys(apiClient_t *apiClient)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = NULL;
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurmdb/v0.0.38/wckeys")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurmdb/v0.0.38/wckeys");



    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "GET");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","List of wckeys");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","wckey not found");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    dbv0_0_38_wckey_info_t *elementToReturn = dbv0_0_38_wckey_info_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    
    free(localVarPath);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Load all configuration information
//
dbv0_0_38_config_response_t*
SlurmAPI_slurmdbV0038SetConfig(apiClient_t *apiClient, dbv0_0_38_set_config_t * dbv0_0_38_set_config )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurmdb/v0.0.38/config")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurmdb/v0.0.38/config");




    // Body Param
    cJSON *localVarSingleItemJSON_dbv0_0_38_set_config = NULL;
    if (dbv0_0_38_set_config != NULL)
    {
        //string
        localVarSingleItemJSON_dbv0_0_38_set_config = dbv0_0_38_set_config_convertToJSON(dbv0_0_38_set_config);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_dbv0_0_38_set_config);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    list_addElement(localVarContentType,"application/x-yaml"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Load config");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Unable to set config");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    dbv0_0_38_config_response_t *elementToReturn = dbv0_0_38_config_response_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_dbv0_0_38_set_config) {
        cJSON_Delete(localVarSingleItemJSON_dbv0_0_38_set_config);
        localVarSingleItemJSON_dbv0_0_38_set_config = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Update accounts
//
dbv0_0_38_account_response_t*
SlurmAPI_slurmdbV0038UpdateAccount(apiClient_t *apiClient, dbv0_0_38_update_account_t * dbv0_0_38_update_account )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurmdb/v0.0.38/accounts")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurmdb/v0.0.38/accounts");




    // Body Param
    cJSON *localVarSingleItemJSON_dbv0_0_38_update_account = NULL;
    if (dbv0_0_38_update_account != NULL)
    {
        //string
        localVarSingleItemJSON_dbv0_0_38_update_account = dbv0_0_38_update_account_convertToJSON(dbv0_0_38_update_account);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_dbv0_0_38_update_account);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    list_addElement(localVarContentType,"application/x-yaml"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Add/update list of accounts");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Unable to add or update accounts");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    dbv0_0_38_account_response_t *elementToReturn = dbv0_0_38_account_response_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_dbv0_0_38_update_account) {
        cJSON_Delete(localVarSingleItemJSON_dbv0_0_38_update_account);
        localVarSingleItemJSON_dbv0_0_38_update_account = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Set associations info
//
dbv0_0_38_response_associations_t*
SlurmAPI_slurmdbV0038UpdateAssociations(apiClient_t *apiClient, dbv0_0_38_associations_info_t * dbv0_0_38_associations_info )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurmdb/v0.0.38/associations")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurmdb/v0.0.38/associations");




    // Body Param
    cJSON *localVarSingleItemJSON_dbv0_0_38_associations_info = NULL;
    if (dbv0_0_38_associations_info != NULL)
    {
        //string
        localVarSingleItemJSON_dbv0_0_38_associations_info = dbv0_0_38_associations_info_convertToJSON(dbv0_0_38_associations_info);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_dbv0_0_38_associations_info);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    list_addElement(localVarContentType,"application/x-yaml"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","status of associations update");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Unable to update associations");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    dbv0_0_38_response_associations_t *elementToReturn = dbv0_0_38_response_associations_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_dbv0_0_38_associations_info) {
        cJSON_Delete(localVarSingleItemJSON_dbv0_0_38_associations_info);
        localVarSingleItemJSON_dbv0_0_38_associations_info = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Set QOS info
//
dbv0_0_38_response_qos_t*
SlurmAPI_slurmdbV0038UpdateQos(apiClient_t *apiClient, dbv0_0_38_update_qos_t * dbv0_0_38_update_qos )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurmdb/v0.0.38/qos")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurmdb/v0.0.38/qos");




    // Body Param
    cJSON *localVarSingleItemJSON_dbv0_0_38_update_qos = NULL;
    if (dbv0_0_38_update_qos != NULL)
    {
        //string
        localVarSingleItemJSON_dbv0_0_38_update_qos = dbv0_0_38_update_qos_convertToJSON(dbv0_0_38_update_qos);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_dbv0_0_38_update_qos);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    list_addElement(localVarContentType,"application/x-yaml"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","QOS update response");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Unable to update QOSs");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    dbv0_0_38_response_qos_t *elementToReturn = dbv0_0_38_response_qos_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_dbv0_0_38_update_qos) {
        cJSON_Delete(localVarSingleItemJSON_dbv0_0_38_update_qos);
        localVarSingleItemJSON_dbv0_0_38_update_qos = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Set TRES info
//
dbv0_0_38_response_tres_t*
SlurmAPI_slurmdbV0038UpdateTres(apiClient_t *apiClient, dbv0_0_38_tres_update_t * dbv0_0_38_tres_update )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurmdb/v0.0.38/tres")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurmdb/v0.0.38/tres");




    // Body Param
    cJSON *localVarSingleItemJSON_dbv0_0_38_tres_update = NULL;
    if (dbv0_0_38_tres_update != NULL)
    {
        //string
        localVarSingleItemJSON_dbv0_0_38_tres_update = dbv0_0_38_tres_update_convertToJSON(dbv0_0_38_tres_update);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_dbv0_0_38_tres_update);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    list_addElement(localVarContentType,"application/x-yaml"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","List of TRES");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","Unable to update TRES");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    dbv0_0_38_response_tres_t *elementToReturn = dbv0_0_38_response_tres_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_dbv0_0_38_tres_update) {
        cJSON_Delete(localVarSingleItemJSON_dbv0_0_38_tres_update);
        localVarSingleItemJSON_dbv0_0_38_tres_update = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// Update user
//
dbv0_0_38_response_user_update_t*
SlurmAPI_slurmdbV0038UpdateUsers(apiClient_t *apiClient, dbv0_0_38_update_users_t * dbv0_0_38_update_users )
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/slurmdb/v0.0.38/users")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/slurmdb/v0.0.38/users");




    // Body Param
    cJSON *localVarSingleItemJSON_dbv0_0_38_update_users = NULL;
    if (dbv0_0_38_update_users != NULL)
    {
        //string
        localVarSingleItemJSON_dbv0_0_38_update_users = dbv0_0_38_update_users_convertToJSON(dbv0_0_38_update_users);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_dbv0_0_38_update_users);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarHeaderType,"application/x-yaml"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    list_addElement(localVarContentType,"application/x-yaml"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","Update users");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 0) {
    //    printf("%s\n","User not found or not able to update user");
    //}
    //nonprimitive not container
    cJSON *SlurmAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    dbv0_0_38_response_user_update_t *elementToReturn = dbv0_0_38_response_user_update_parseFromJSON(SlurmAPIlocalVarJSON);
    cJSON_Delete(SlurmAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    if (localVarSingleItemJSON_dbv0_0_38_update_users) {
        cJSON_Delete(localVarSingleItemJSON_dbv0_0_38_update_users);
        localVarSingleItemJSON_dbv0_0_38_update_users = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

