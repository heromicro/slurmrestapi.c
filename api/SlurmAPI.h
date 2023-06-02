#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/dbv0_0_39_account_info.h"
#include "../model/dbv0_0_39_associations_info.h"
#include "../model/dbv0_0_39_clusters_info.h"
#include "../model/dbv0_0_39_config_info.h"
#include "../model/dbv0_0_39_diag.h"
#include "../model/dbv0_0_39_job_info.h"
#include "../model/dbv0_0_39_qos_info.h"
#include "../model/dbv0_0_39_response_associations_delete.h"
#include "../model/dbv0_0_39_set_config.h"
#include "../model/dbv0_0_39_tres_info.h"
#include "../model/dbv0_0_39_tres_update.h"
#include "../model/dbv0_0_39_update_qos.h"
#include "../model/dbv0_0_39_update_users.h"
#include "../model/dbv0_0_39_user_info.h"
#include "../model/dbv0_0_39_wckey_info.h"
#include "../model/status.h"
#include "../model/v0_0_39_diag.h"
#include "../model/v0_0_39_job_desc_msg.h"
#include "../model/v0_0_39_job_submission.h"
#include "../model/v0_0_39_job_submission_response.h"
#include "../model/v0_0_39_job_update_response.h"
#include "../model/v0_0_39_jobs_response.h"
#include "../model/v0_0_39_licenses_info.h"
#include "../model/v0_0_39_nodes_response.h"
#include "../model/v0_0_39_partitions_response.h"
#include "../model/v0_0_39_pings.h"
#include "../model/v0_0_39_reservations_response.h"
#include "../model/v0_0_39_update_node_msg.h"

// Enum SIGNAL for SlurmAPI_slurmV0039CancelJob
typedef enum  { slurm_rest_api_slurmV0039CancelJob_SIGNAL_NULL = 0, slurm_rest_api_slurmV0039CancelJob_SIGNAL_HUP, slurm_rest_api_slurmV0039CancelJob_SIGNAL__INT, slurm_rest_api_slurmV0039CancelJob_SIGNAL_QUIT, slurm_rest_api_slurmV0039CancelJob_SIGNAL_ABRT, slurm_rest_api_slurmV0039CancelJob_SIGNAL_KILL, slurm_rest_api_slurmV0039CancelJob_SIGNAL_ALRM, slurm_rest_api_slurmV0039CancelJob_SIGNAL_TERM, slurm_rest_api_slurmV0039CancelJob_SIGNAL_USR1, slurm_rest_api_slurmV0039CancelJob_SIGNAL_USR2, slurm_rest_api_slurmV0039CancelJob_SIGNAL_URG, slurm_rest_api_slurmV0039CancelJob_SIGNAL_CONT, slurm_rest_api_slurmV0039CancelJob_SIGNAL_STOP, slurm_rest_api_slurmV0039CancelJob_SIGNAL_TSTP, slurm_rest_api_slurmV0039CancelJob_SIGNAL_TTIN, slurm_rest_api_slurmV0039CancelJob_SIGNAL_TTOU } slurm_rest_api_slurmV0039CancelJob_signal_e;

// Enum WITHDELETED for SlurmAPI_slurmdbV0039GetAccount
typedef enum  { slurm_rest_api_slurmdbV0039GetAccount_WITHDELETED_NULL = 0, slurm_rest_api_slurmdbV0039GetAccount_WITHDELETED__true, slurm_rest_api_slurmdbV0039GetAccount_WITHDELETED__false } slurm_rest_api_slurmdbV0039GetAccount_with_deleted_e;

// Enum WITHDELETED for SlurmAPI_slurmdbV0039GetAccounts
typedef enum  { slurm_rest_api_slurmdbV0039GetAccounts_WITHDELETED_NULL = 0, slurm_rest_api_slurmdbV0039GetAccounts_WITHDELETED__true, slurm_rest_api_slurmdbV0039GetAccounts_WITHDELETED__false } slurm_rest_api_slurmdbV0039GetAccounts_with_deleted_e;

// Enum SKIPSTEPS for SlurmAPI_slurmdbV0039GetJobs
typedef enum  { slurm_rest_api_slurmdbV0039GetJobs_SKIPSTEPS_NULL = 0, slurm_rest_api_slurmdbV0039GetJobs_SKIPSTEPS__true, slurm_rest_api_slurmdbV0039GetJobs_SKIPSTEPS__false } slurm_rest_api_slurmdbV0039GetJobs_skip_steps_e;

// Enum DISABLEWAITFORRESULT for SlurmAPI_slurmdbV0039GetJobs
typedef enum  { slurm_rest_api_slurmdbV0039GetJobs_DISABLEWAITFORRESULT_NULL = 0, slurm_rest_api_slurmdbV0039GetJobs_DISABLEWAITFORRESULT__true, slurm_rest_api_slurmdbV0039GetJobs_DISABLEWAITFORRESULT__false } slurm_rest_api_slurmdbV0039GetJobs_disable_wait_for_result_e;

// Enum WITHDELETED for SlurmAPI_slurmdbV0039GetQos
typedef enum  { slurm_rest_api_slurmdbV0039GetQos_WITHDELETED_NULL = 0, slurm_rest_api_slurmdbV0039GetQos_WITHDELETED__true, slurm_rest_api_slurmdbV0039GetQos_WITHDELETED__false } slurm_rest_api_slurmdbV0039GetQos_with_deleted_e;

// Enum WITHDELETED for SlurmAPI_slurmdbV0039GetSingleQos
typedef enum  { slurm_rest_api_slurmdbV0039GetSingleQos_WITHDELETED_NULL = 0, slurm_rest_api_slurmdbV0039GetSingleQos_WITHDELETED__true, slurm_rest_api_slurmdbV0039GetSingleQos_WITHDELETED__false } slurm_rest_api_slurmdbV0039GetSingleQos_with_deleted_e;

// Enum WITHDELETED for SlurmAPI_slurmdbV0039GetUser
typedef enum  { slurm_rest_api_slurmdbV0039GetUser_WITHDELETED_NULL = 0, slurm_rest_api_slurmdbV0039GetUser_WITHDELETED__true, slurm_rest_api_slurmdbV0039GetUser_WITHDELETED__false } slurm_rest_api_slurmdbV0039GetUser_with_deleted_e;

// Enum WITHDELETED for SlurmAPI_slurmdbV0039GetUsers
typedef enum  { slurm_rest_api_slurmdbV0039GetUsers_WITHDELETED_NULL = 0, slurm_rest_api_slurmdbV0039GetUsers_WITHDELETED__true, slurm_rest_api_slurmdbV0039GetUsers_WITHDELETED__false } slurm_rest_api_slurmdbV0039GetUsers_with_deleted_e;


// cancel or signal job
//
status_t*
SlurmAPI_slurmV0039CancelJob(apiClient_t *apiClient, char * job_id , slurm_rest_api_slurmV0039CancelJob_signal_e signal );


// delete node
//
status_t*
SlurmAPI_slurmV0039DeleteNode(apiClient_t *apiClient, char * node_name );


// get diagnostics
//
v0_0_39_diag_t*
SlurmAPI_slurmV0039Diag(apiClient_t *apiClient);


// get job info
//
v0_0_39_jobs_response_t*
SlurmAPI_slurmV0039GetJob(apiClient_t *apiClient, char * job_id );


// get list of jobs
//
v0_0_39_jobs_response_t*
SlurmAPI_slurmV0039GetJobs(apiClient_t *apiClient, long update_time );


// get node info
//
v0_0_39_nodes_response_t*
SlurmAPI_slurmV0039GetNode(apiClient_t *apiClient, char * node_name );


// get all node info
//
v0_0_39_nodes_response_t*
SlurmAPI_slurmV0039GetNodes(apiClient_t *apiClient, long update_time );


// get partition info
//
v0_0_39_partitions_response_t*
SlurmAPI_slurmV0039GetPartition(apiClient_t *apiClient, char * partition_name , long update_time );


// get all partition info
//
v0_0_39_partitions_response_t*
SlurmAPI_slurmV0039GetPartitions(apiClient_t *apiClient, long update_time );


// get reservation info
//
v0_0_39_reservations_response_t*
SlurmAPI_slurmV0039GetReservation(apiClient_t *apiClient, char * reservation_name , long update_time );


// get all reservation info
//
v0_0_39_reservations_response_t*
SlurmAPI_slurmV0039GetReservations(apiClient_t *apiClient, long update_time );


// ping test
//
v0_0_39_pings_t*
SlurmAPI_slurmV0039Ping(apiClient_t *apiClient);


// get all Slurm tracked license info
//
v0_0_39_licenses_info_t*
SlurmAPI_slurmV0039SlurmctldGetLicenses(apiClient_t *apiClient);


// submit new job
//
v0_0_39_job_submission_response_t*
SlurmAPI_slurmV0039SubmitJob(apiClient_t *apiClient, v0_0_39_job_submission_t * v0_0_39_job_submission );


// update job
//
v0_0_39_job_update_response_t*
SlurmAPI_slurmV0039UpdateJob(apiClient_t *apiClient, char * job_id , v0_0_39_job_desc_msg_t * v0_0_39_job_desc_msg );


// update node properties
//
status_t*
SlurmAPI_slurmV0039UpdateNode(apiClient_t *apiClient, char * node_name , v0_0_39_update_node_msg_t * v0_0_39_update_node_msg );


// Add clusters
//
status_t*
SlurmAPI_slurmdbV0039AddClusters(apiClient_t *apiClient, dbv0_0_39_clusters_info_t * dbv0_0_39_clusters_info );


// Add wckeys
//
status_t*
SlurmAPI_slurmdbV0039AddWckeys(apiClient_t *apiClient, dbv0_0_39_wckey_info_t * dbv0_0_39_wckey_info );


// Delete account
//
status_t*
SlurmAPI_slurmdbV0039DeleteAccount(apiClient_t *apiClient, char * account_name );


// Delete association
//
dbv0_0_39_response_associations_delete_t*
SlurmAPI_slurmdbV0039DeleteAssociation(apiClient_t *apiClient, char * cluster , char * account , char * user , char * partition );


// Delete associations
//
dbv0_0_39_response_associations_delete_t*
SlurmAPI_slurmdbV0039DeleteAssociations(apiClient_t *apiClient, char * cluster , char * account , char * user , char * partition );


// Delete cluster
//
status_t*
SlurmAPI_slurmdbV0039DeleteCluster(apiClient_t *apiClient, char * cluster_name );


// Delete QOS
//
status_t*
SlurmAPI_slurmdbV0039DeleteQos(apiClient_t *apiClient, char * qos_name );


// Delete user
//
status_t*
SlurmAPI_slurmdbV0039DeleteUser(apiClient_t *apiClient, char * user_name );


// Delete wckey
//
status_t*
SlurmAPI_slurmdbV0039DeleteWckey(apiClient_t *apiClient, char * wckey );


// Get slurmdb diagnostics
//
dbv0_0_39_diag_t*
SlurmAPI_slurmdbV0039Diag(apiClient_t *apiClient);


// Get account info
//
dbv0_0_39_account_info_t*
SlurmAPI_slurmdbV0039GetAccount(apiClient_t *apiClient, char * account_name , slurm_rest_api_slurmdbV0039GetAccount_with_deleted_e with_deleted );


// Get account list
//
dbv0_0_39_account_info_t*
SlurmAPI_slurmdbV0039GetAccounts(apiClient_t *apiClient, slurm_rest_api_slurmdbV0039GetAccounts_with_deleted_e with_deleted );


// Get association info
//
dbv0_0_39_associations_info_t*
SlurmAPI_slurmdbV0039GetAssociation(apiClient_t *apiClient, char * cluster , char * account , char * user , char * partition );


// Get association list
//
dbv0_0_39_associations_info_t*
SlurmAPI_slurmdbV0039GetAssociations(apiClient_t *apiClient, char * cluster , char * account , char * user , char * partition );


// Get cluster info
//
dbv0_0_39_clusters_info_t*
SlurmAPI_slurmdbV0039GetCluster(apiClient_t *apiClient, char * cluster_name );


// Get cluster list
//
dbv0_0_39_clusters_info_t*
SlurmAPI_slurmdbV0039GetClusters(apiClient_t *apiClient);


// Dump all configuration information
//
dbv0_0_39_config_info_t*
SlurmAPI_slurmdbV0039GetConfig(apiClient_t *apiClient);


// Get job info
//
// This endpoint may return multiple job entries since job_id is not a unique key - only the tuple (cluster, job_id, start_time) is unique. If the requested job_id is a component of a heterogeneous job all components are returned.
//
dbv0_0_39_job_info_t*
SlurmAPI_slurmdbV0039GetJob(apiClient_t *apiClient, char * job_id );


// Get job list
//
dbv0_0_39_job_info_t*
SlurmAPI_slurmdbV0039GetJobs(apiClient_t *apiClient, char * users , char * submit_time , char * start_time , char * end_time , char * account , char * association , char * cluster , char * constraints , char * cpus_max , char * cpus_min , slurm_rest_api_slurmdbV0039GetJobs_skip_steps_e skip_steps , slurm_rest_api_slurmdbV0039GetJobs_disable_wait_for_result_e disable_wait_for_result , char * exit_code , char * format , char * group , char * job_name , char * nodes_max , char * nodes_min , char * partition , char * qos , char * reason , char * reservation , char * state , char * step , char * node , char * wckey );


// Get QOS list
//
dbv0_0_39_qos_info_t*
SlurmAPI_slurmdbV0039GetQos(apiClient_t *apiClient, slurm_rest_api_slurmdbV0039GetQos_with_deleted_e with_deleted );


// Get QOS info
//
dbv0_0_39_qos_info_t*
SlurmAPI_slurmdbV0039GetSingleQos(apiClient_t *apiClient, char * qos_name , slurm_rest_api_slurmdbV0039GetSingleQos_with_deleted_e with_deleted );


// Get TRES info
//
dbv0_0_39_tres_info_t*
SlurmAPI_slurmdbV0039GetTres(apiClient_t *apiClient);


// Get user info
//
dbv0_0_39_user_info_t*
SlurmAPI_slurmdbV0039GetUser(apiClient_t *apiClient, char * user_name , slurm_rest_api_slurmdbV0039GetUser_with_deleted_e with_deleted );


// Get user list
//
dbv0_0_39_user_info_t*
SlurmAPI_slurmdbV0039GetUsers(apiClient_t *apiClient, slurm_rest_api_slurmdbV0039GetUsers_with_deleted_e with_deleted );


// Get wckey info
//
dbv0_0_39_wckey_info_t*
SlurmAPI_slurmdbV0039GetWckey(apiClient_t *apiClient, char * wckey );


// Get wckey list
//
dbv0_0_39_wckey_info_t*
SlurmAPI_slurmdbV0039GetWckeys(apiClient_t *apiClient);


// Load all configuration information
//
status_t*
SlurmAPI_slurmdbV0039SetConfig(apiClient_t *apiClient, dbv0_0_39_set_config_t * dbv0_0_39_set_config );


// Update accounts
//
status_t*
SlurmAPI_slurmdbV0039UpdateAccounts(apiClient_t *apiClient, dbv0_0_39_account_info_t * dbv0_0_39_account_info );


// Set associations info
//
status_t*
SlurmAPI_slurmdbV0039UpdateAssociations(apiClient_t *apiClient, dbv0_0_39_associations_info_t * dbv0_0_39_associations_info );


// Set QOS info
//
status_t*
SlurmAPI_slurmdbV0039UpdateQos(apiClient_t *apiClient, dbv0_0_39_update_qos_t * dbv0_0_39_update_qos );


// Set TRES info
//
status_t*
SlurmAPI_slurmdbV0039UpdateTres(apiClient_t *apiClient, dbv0_0_39_tres_update_t * dbv0_0_39_tres_update );


// Update user
//
status_t*
SlurmAPI_slurmdbV0039UpdateUsers(apiClient_t *apiClient, dbv0_0_39_update_users_t * dbv0_0_39_update_users );


