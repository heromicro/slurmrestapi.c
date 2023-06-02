#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/dbv0_0_37_account_info.h"
#include "../model/dbv0_0_37_account_response.h"
#include "../model/dbv0_0_37_associations_info.h"
#include "../model/dbv0_0_37_cluster_info.h"
#include "../model/dbv0_0_37_config_info.h"
#include "../model/dbv0_0_37_config_response.h"
#include "../model/dbv0_0_37_diag.h"
#include "../model/dbv0_0_37_job_info.h"
#include "../model/dbv0_0_37_qos_info.h"
#include "../model/dbv0_0_37_response_account_delete.h"
#include "../model/dbv0_0_37_response_association_delete.h"
#include "../model/dbv0_0_37_response_associations.h"
#include "../model/dbv0_0_37_response_cluster_add.h"
#include "../model/dbv0_0_37_response_cluster_delete.h"
#include "../model/dbv0_0_37_response_qos_delete.h"
#include "../model/dbv0_0_37_response_tres.h"
#include "../model/dbv0_0_37_response_user_delete.h"
#include "../model/dbv0_0_37_response_user_update.h"
#include "../model/dbv0_0_37_response_wckey_add.h"
#include "../model/dbv0_0_37_response_wckey_delete.h"
#include "../model/dbv0_0_37_tres_info.h"
#include "../model/dbv0_0_37_user_info.h"
#include "../model/dbv0_0_37_wckey_info.h"
#include "../model/v0_0_37_diag.h"
#include "../model/v0_0_37_job_properties.h"
#include "../model/v0_0_37_job_submission.h"
#include "../model/v0_0_37_job_submission_response.h"
#include "../model/v0_0_37_jobs_response.h"
#include "../model/v0_0_37_nodes_response.h"
#include "../model/v0_0_37_partitions_response.h"
#include "../model/v0_0_37_pings.h"
#include "../model/v0_0_37_reservations_response.h"
#include "../model/v0_0_37_signal.h"

// Enum  for SlurmAPI_slurmctldCancelJob
typedef enum  { slurm_rest_api_slurmctldCancelJob__NULL = 0, slurm_rest_api_slurmctldCancelJob__HUP, slurm_rest_api_slurmctldCancelJob___INT, slurm_rest_api_slurmctldCancelJob__QUIT, slurm_rest_api_slurmctldCancelJob__ABRT, slurm_rest_api_slurmctldCancelJob__KILL, slurm_rest_api_slurmctldCancelJob__ALRM, slurm_rest_api_slurmctldCancelJob__TERM, slurm_rest_api_slurmctldCancelJob__USR1, slurm_rest_api_slurmctldCancelJob__USR2, slurm_rest_api_slurmctldCancelJob__URG, slurm_rest_api_slurmctldCancelJob__CONT, slurm_rest_api_slurmctldCancelJob__STOP, slurm_rest_api_slurmctldCancelJob__TSTP, slurm_rest_api_slurmctldCancelJob__TTIN, slurm_rest_api_slurmctldCancelJob__TTOU } slurm_rest_api_slurmctldCancelJob_signal_e;


// cancel or signal job
//
void
SlurmAPI_slurmctldCancelJob(apiClient_t *apiClient, char * job_id , v0_0_37_signal_e signal );


// get diagnostics
//
v0_0_37_diag_t*
SlurmAPI_slurmctldDiag(apiClient_t *apiClient);


// get job info
//
v0_0_37_jobs_response_t*
SlurmAPI_slurmctldGetJob(apiClient_t *apiClient, char * job_id );


// get list of jobs
//
v0_0_37_jobs_response_t*
SlurmAPI_slurmctldGetJobs(apiClient_t *apiClient, long update_time );


// get node info
//
v0_0_37_nodes_response_t*
SlurmAPI_slurmctldGetNode(apiClient_t *apiClient, char * node_name );


// get all node info
//
v0_0_37_nodes_response_t*
SlurmAPI_slurmctldGetNodes(apiClient_t *apiClient, long update_time );


// get partition info
//
v0_0_37_partitions_response_t*
SlurmAPI_slurmctldGetPartition(apiClient_t *apiClient, char * partition_name , long update_time );


// get all partition info
//
v0_0_37_partitions_response_t*
SlurmAPI_slurmctldGetPartitions(apiClient_t *apiClient, long update_time );


// get reservation info
//
v0_0_37_reservations_response_t*
SlurmAPI_slurmctldGetReservation(apiClient_t *apiClient, char * reservation_name , long update_time );


// get all reservation info
//
v0_0_37_reservations_response_t*
SlurmAPI_slurmctldGetReservations(apiClient_t *apiClient, long update_time );


// ping test
//
v0_0_37_pings_t*
SlurmAPI_slurmctldPing(apiClient_t *apiClient);


// submit new job
//
v0_0_37_job_submission_response_t*
SlurmAPI_slurmctldSubmitJob(apiClient_t *apiClient, v0_0_37_job_submission_t * v0_0_37_job_submission );


// update job
//
void
SlurmAPI_slurmctldUpdateJob(apiClient_t *apiClient, char * job_id , v0_0_37_job_properties_t * v0_0_37_job_properties );


// Add clusters
//
dbv0_0_37_response_cluster_add_t*
SlurmAPI_slurmdbdAddClusters(apiClient_t *apiClient);


// Add wckeys
//
dbv0_0_37_response_wckey_add_t*
SlurmAPI_slurmdbdAddWckeys(apiClient_t *apiClient);


// Delete account
//
dbv0_0_37_response_account_delete_t*
SlurmAPI_slurmdbdDeleteAccount(apiClient_t *apiClient, char * account_name );


// Delete association
//
dbv0_0_37_response_association_delete_t*
SlurmAPI_slurmdbdDeleteAssociation(apiClient_t *apiClient, char * account , char * user , char * cluster , char * partition );


// Delete cluster
//
dbv0_0_37_response_cluster_delete_t*
SlurmAPI_slurmdbdDeleteCluster(apiClient_t *apiClient, char * cluster_name );


// Delete QOS
//
dbv0_0_37_response_qos_delete_t*
SlurmAPI_slurmdbdDeleteQos(apiClient_t *apiClient, char * qos_name );


// Delete user
//
dbv0_0_37_response_user_delete_t*
SlurmAPI_slurmdbdDeleteUser(apiClient_t *apiClient, char * user_name );


// Delete wckey
//
dbv0_0_37_response_wckey_delete_t*
SlurmAPI_slurmdbdDeleteWckey(apiClient_t *apiClient, char * wckey );


// Get slurmdb diagnostics
//
dbv0_0_37_diag_t*
SlurmAPI_slurmdbdDiag(apiClient_t *apiClient);


// Get account info
//
dbv0_0_37_account_info_t*
SlurmAPI_slurmdbdGetAccount(apiClient_t *apiClient, char * account_name );


// Get account list
//
dbv0_0_37_account_info_t*
SlurmAPI_slurmdbdGetAccounts(apiClient_t *apiClient);


// Get association info
//
dbv0_0_37_associations_info_t*
SlurmAPI_slurmdbdGetAssociation(apiClient_t *apiClient, char * cluster , char * account , char * user , char * partition );


// Get association list
//
dbv0_0_37_associations_info_t*
SlurmAPI_slurmdbdGetAssociations(apiClient_t *apiClient);


// Get cluster info
//
dbv0_0_37_cluster_info_t*
SlurmAPI_slurmdbdGetCluster(apiClient_t *apiClient, char * cluster_name );


// Get cluster list
//
dbv0_0_37_cluster_info_t*
SlurmAPI_slurmdbdGetClusters(apiClient_t *apiClient);


// Dump all configuration information
//
dbv0_0_37_config_info_t*
SlurmAPI_slurmdbdGetDbConfig(apiClient_t *apiClient);


// Get job info
//
// This endpoint may return multiple job entries since job_id is not a unique key - only the tuple (cluster, job_id, start_time) is unique. If the requested job_id is a component of a heterogeneous job all components are returned.
//
dbv0_0_37_job_info_t*
SlurmAPI_slurmdbdGetJob(apiClient_t *apiClient, long job_id );


// Get job list
//
dbv0_0_37_job_info_t*
SlurmAPI_slurmdbdGetJobs(apiClient_t *apiClient, char * submit_time , char * start_time , char * end_time , char * account , char * association , char * cluster , char * constraints , char * cpus_max , char * cpus_min , int skip_steps , int disable_wait_for_result , char * exit_code , char * format , char * group , char * job_name , char * nodes_max , char * nodes_min , char * partition , char * qos , char * reason , char * reservation , char * state , char * step , char * node , char * wckey );


// Get QOS list
//
dbv0_0_37_qos_info_t*
SlurmAPI_slurmdbdGetQos(apiClient_t *apiClient);


// Get QOS info
//
dbv0_0_37_qos_info_t*
SlurmAPI_slurmdbdGetSingleQos(apiClient_t *apiClient, char * qos_name );


// Get TRES info
//
dbv0_0_37_tres_info_t*
SlurmAPI_slurmdbdGetTres(apiClient_t *apiClient);


// Get user info
//
dbv0_0_37_user_info_t*
SlurmAPI_slurmdbdGetUser(apiClient_t *apiClient, char * user_name );


// Get user list
//
dbv0_0_37_user_info_t*
SlurmAPI_slurmdbdGetUsers(apiClient_t *apiClient);


// Get wckey info
//
dbv0_0_37_wckey_info_t*
SlurmAPI_slurmdbdGetWckey(apiClient_t *apiClient, char * wckey );


// Get wckey list
//
dbv0_0_37_wckey_info_t*
SlurmAPI_slurmdbdGetWckeys(apiClient_t *apiClient);


// Load all configuration information
//
dbv0_0_37_config_response_t*
SlurmAPI_slurmdbdSetDbConfig(apiClient_t *apiClient);


// Update accounts
//
dbv0_0_37_account_response_t*
SlurmAPI_slurmdbdUpdateAccount(apiClient_t *apiClient);


// Set associations info
//
dbv0_0_37_response_associations_t*
SlurmAPI_slurmdbdUpdateAssociations(apiClient_t *apiClient);


// Set TRES info
//
dbv0_0_37_response_tres_t*
SlurmAPI_slurmdbdUpdateTres(apiClient_t *apiClient);


// Update user
//
dbv0_0_37_response_user_update_t*
SlurmAPI_slurmdbdUpdateUsers(apiClient_t *apiClient);


