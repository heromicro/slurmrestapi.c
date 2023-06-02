#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/dbv0_0_38_account_info.h"
#include "../model/dbv0_0_38_account_response.h"
#include "../model/dbv0_0_38_associations_info.h"
#include "../model/dbv0_0_38_cluster_info.h"
#include "../model/dbv0_0_38_clusters_properties.h"
#include "../model/dbv0_0_38_config_info.h"
#include "../model/dbv0_0_38_config_response.h"
#include "../model/dbv0_0_38_diag.h"
#include "../model/dbv0_0_38_error.h"
#include "../model/dbv0_0_38_job_info.h"
#include "../model/dbv0_0_38_qos_info.h"
#include "../model/dbv0_0_38_response_account_delete.h"
#include "../model/dbv0_0_38_response_associations.h"
#include "../model/dbv0_0_38_response_associations_delete.h"
#include "../model/dbv0_0_38_response_cluster_add.h"
#include "../model/dbv0_0_38_response_cluster_delete.h"
#include "../model/dbv0_0_38_response_qos.h"
#include "../model/dbv0_0_38_response_qos_delete.h"
#include "../model/dbv0_0_38_response_tres.h"
#include "../model/dbv0_0_38_response_user_delete.h"
#include "../model/dbv0_0_38_response_user_update.h"
#include "../model/dbv0_0_38_response_wckey_add.h"
#include "../model/dbv0_0_38_response_wckey_delete.h"
#include "../model/dbv0_0_38_set_config.h"
#include "../model/dbv0_0_38_tres_info.h"
#include "../model/dbv0_0_38_tres_update.h"
#include "../model/dbv0_0_38_update_account.h"
#include "../model/dbv0_0_38_update_qos.h"
#include "../model/dbv0_0_38_update_users.h"
#include "../model/dbv0_0_38_user_info.h"
#include "../model/dbv0_0_38_wckey_info.h"
#include "../model/v0_0_38_diag.h"
#include "../model/v0_0_38_error.h"
#include "../model/v0_0_38_job_properties.h"
#include "../model/v0_0_38_job_submission.h"
#include "../model/v0_0_38_job_submission_response.h"
#include "../model/v0_0_38_jobs_response.h"
#include "../model/v0_0_38_licenses.h"
#include "../model/v0_0_38_nodes_response.h"
#include "../model/v0_0_38_partitions_response.h"
#include "../model/v0_0_38_pings.h"
#include "../model/v0_0_38_reservations_response.h"
#include "../model/v0_0_38_signal.h"

// Enum  for SlurmAPI_slurmV0038CancelJob
typedef enum  { slurm_rest_api_slurmV0038CancelJob__NULL = 0, slurm_rest_api_slurmV0038CancelJob__HUP, slurm_rest_api_slurmV0038CancelJob___INT, slurm_rest_api_slurmV0038CancelJob__QUIT, slurm_rest_api_slurmV0038CancelJob__ABRT, slurm_rest_api_slurmV0038CancelJob__KILL, slurm_rest_api_slurmV0038CancelJob__ALRM, slurm_rest_api_slurmV0038CancelJob__TERM, slurm_rest_api_slurmV0038CancelJob__USR1, slurm_rest_api_slurmV0038CancelJob__USR2, slurm_rest_api_slurmV0038CancelJob__URG, slurm_rest_api_slurmV0038CancelJob__CONT, slurm_rest_api_slurmV0038CancelJob__STOP, slurm_rest_api_slurmV0038CancelJob__TSTP, slurm_rest_api_slurmV0038CancelJob__TTIN, slurm_rest_api_slurmV0038CancelJob__TTOU } slurm_rest_api_slurmV0038CancelJob_signal_e;


// cancel or signal job
//
void
SlurmAPI_slurmV0038CancelJob(apiClient_t *apiClient, char * job_id , v0_0_38_signal_e signal );


// get diagnostics
//
v0_0_38_diag_t*
SlurmAPI_slurmV0038Diag(apiClient_t *apiClient);


// get job info
//
v0_0_38_jobs_response_t*
SlurmAPI_slurmV0038GetJob(apiClient_t *apiClient, char * job_id );


// get list of jobs
//
v0_0_38_jobs_response_t*
SlurmAPI_slurmV0038GetJobs(apiClient_t *apiClient, long update_time );


// get node info
//
v0_0_38_nodes_response_t*
SlurmAPI_slurmV0038GetNode(apiClient_t *apiClient, char * node_name );


// get all node info
//
v0_0_38_nodes_response_t*
SlurmAPI_slurmV0038GetNodes(apiClient_t *apiClient, long update_time );


// get partition info
//
v0_0_38_partitions_response_t*
SlurmAPI_slurmV0038GetPartition(apiClient_t *apiClient, char * partition_name , long update_time );


// get all partition info
//
v0_0_38_partitions_response_t*
SlurmAPI_slurmV0038GetPartitions(apiClient_t *apiClient, long update_time );


// get reservation info
//
v0_0_38_reservations_response_t*
SlurmAPI_slurmV0038GetReservation(apiClient_t *apiClient, char * reservation_name , long update_time );


// get all reservation info
//
v0_0_38_reservations_response_t*
SlurmAPI_slurmV0038GetReservations(apiClient_t *apiClient, long update_time );


// ping test
//
v0_0_38_pings_t*
SlurmAPI_slurmV0038Ping(apiClient_t *apiClient);


// get all Slurm tracked license info
//
v0_0_38_licenses_t*
SlurmAPI_slurmV0038SlurmctldGetLicenses(apiClient_t *apiClient);


// submit new job
//
v0_0_38_job_submission_response_t*
SlurmAPI_slurmV0038SubmitJob(apiClient_t *apiClient, v0_0_38_job_submission_t * v0_0_38_job_submission );


// update job
//
void
SlurmAPI_slurmV0038UpdateJob(apiClient_t *apiClient, char * job_id , v0_0_38_job_properties_t * v0_0_38_job_properties );


// Add clusters
//
dbv0_0_38_response_cluster_add_t*
SlurmAPI_slurmdbV0038AddClusters(apiClient_t *apiClient, dbv0_0_38_clusters_properties_t * dbv0_0_38_clusters_properties );


// Add wckeys
//
dbv0_0_38_response_wckey_add_t*
SlurmAPI_slurmdbV0038AddWckeys(apiClient_t *apiClient, dbv0_0_38_wckey_info_t * dbv0_0_38_wckey_info );


// Delete account
//
dbv0_0_38_response_account_delete_t*
SlurmAPI_slurmdbV0038DeleteAccount(apiClient_t *apiClient, char * account_name );


// Delete association
//
dbv0_0_38_response_associations_delete_t*
SlurmAPI_slurmdbV0038DeleteAssociation(apiClient_t *apiClient, char * cluster , char * account , char * user , char * partition );


// Delete associations
//
dbv0_0_38_response_associations_delete_t*
SlurmAPI_slurmdbV0038DeleteAssociations(apiClient_t *apiClient, char * cluster , char * account , char * user , char * partition );


// Delete cluster
//
dbv0_0_38_response_cluster_delete_t*
SlurmAPI_slurmdbV0038DeleteCluster(apiClient_t *apiClient, char * cluster_name );


// Delete QOS
//
dbv0_0_38_response_qos_delete_t*
SlurmAPI_slurmdbV0038DeleteQos(apiClient_t *apiClient, char * qos_name );


// Delete user
//
dbv0_0_38_response_user_delete_t*
SlurmAPI_slurmdbV0038DeleteUser(apiClient_t *apiClient, char * user_name );


// Delete wckey
//
dbv0_0_38_response_wckey_delete_t*
SlurmAPI_slurmdbV0038DeleteWckey(apiClient_t *apiClient, char * wckey );


// Get slurmdb diagnostics
//
dbv0_0_38_diag_t*
SlurmAPI_slurmdbV0038Diag(apiClient_t *apiClient);


// Get account info
//
dbv0_0_38_account_info_t*
SlurmAPI_slurmdbV0038GetAccount(apiClient_t *apiClient, char * account_name , int with_deleted );


// Get account list
//
dbv0_0_38_account_info_t*
SlurmAPI_slurmdbV0038GetAccounts(apiClient_t *apiClient, int with_deleted );


// Get association info
//
dbv0_0_38_associations_info_t*
SlurmAPI_slurmdbV0038GetAssociation(apiClient_t *apiClient, char * cluster , char * account , char * user , char * partition );


// Get association list
//
dbv0_0_38_associations_info_t*
SlurmAPI_slurmdbV0038GetAssociations(apiClient_t *apiClient, char * cluster , char * account , char * user , char * partition );


// Get cluster info
//
dbv0_0_38_cluster_info_t*
SlurmAPI_slurmdbV0038GetCluster(apiClient_t *apiClient, char * cluster_name );


// Get cluster list
//
dbv0_0_38_cluster_info_t*
SlurmAPI_slurmdbV0038GetClusters(apiClient_t *apiClient);


// Dump all configuration information
//
dbv0_0_38_config_info_t*
SlurmAPI_slurmdbV0038GetConfig(apiClient_t *apiClient);


// Get job info
//
// This endpoint may return multiple job entries since job_id is not a unique key - only the tuple (cluster, job_id, start_time) is unique. If the requested job_id is a component of a heterogeneous job all components are returned.
//
dbv0_0_38_job_info_t*
SlurmAPI_slurmdbV0038GetJob(apiClient_t *apiClient, char * job_id );


// Get job list
//
dbv0_0_38_job_info_t*
SlurmAPI_slurmdbV0038GetJobs(apiClient_t *apiClient, char * submit_time , char * start_time , char * end_time , char * account , char * association , char * cluster , char * constraints , char * cpus_max , char * cpus_min , int skip_steps , int disable_wait_for_result , char * exit_code , char * format , char * group , char * job_name , char * nodes_max , char * nodes_min , char * partition , char * qos , char * reason , char * reservation , char * state , char * step , char * node , char * wckey );


// Get QOS list
//
dbv0_0_38_qos_info_t*
SlurmAPI_slurmdbV0038GetQos(apiClient_t *apiClient, int with_deleted );


// Get QOS info
//
dbv0_0_38_qos_info_t*
SlurmAPI_slurmdbV0038GetSingleQos(apiClient_t *apiClient, char * qos_name , int with_deleted );


// Get TRES info
//
dbv0_0_38_tres_info_t*
SlurmAPI_slurmdbV0038GetTres(apiClient_t *apiClient);


// Get user info
//
dbv0_0_38_user_info_t*
SlurmAPI_slurmdbV0038GetUser(apiClient_t *apiClient, char * user_name , int with_deleted );


// Get user list
//
dbv0_0_38_user_info_t*
SlurmAPI_slurmdbV0038GetUsers(apiClient_t *apiClient, int with_deleted );


// Get wckey info
//
dbv0_0_38_wckey_info_t*
SlurmAPI_slurmdbV0038GetWckey(apiClient_t *apiClient, char * wckey );


// Get wckey list
//
dbv0_0_38_wckey_info_t*
SlurmAPI_slurmdbV0038GetWckeys(apiClient_t *apiClient);


// Load all configuration information
//
dbv0_0_38_config_response_t*
SlurmAPI_slurmdbV0038SetConfig(apiClient_t *apiClient, dbv0_0_38_set_config_t * dbv0_0_38_set_config );


// Update accounts
//
dbv0_0_38_account_response_t*
SlurmAPI_slurmdbV0038UpdateAccount(apiClient_t *apiClient, dbv0_0_38_update_account_t * dbv0_0_38_update_account );


// Set associations info
//
dbv0_0_38_response_associations_t*
SlurmAPI_slurmdbV0038UpdateAssociations(apiClient_t *apiClient, dbv0_0_38_associations_info_t * dbv0_0_38_associations_info );


// Set QOS info
//
dbv0_0_38_response_qos_t*
SlurmAPI_slurmdbV0038UpdateQos(apiClient_t *apiClient, dbv0_0_38_update_qos_t * dbv0_0_38_update_qos );


// Set TRES info
//
dbv0_0_38_response_tres_t*
SlurmAPI_slurmdbV0038UpdateTres(apiClient_t *apiClient, dbv0_0_38_tres_update_t * dbv0_0_38_tres_update );


// Update user
//
dbv0_0_38_response_user_update_t*
SlurmAPI_slurmdbV0038UpdateUsers(apiClient_t *apiClient, dbv0_0_38_update_users_t * dbv0_0_38_update_users );


