# SlurmAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SlurmAPI_slurmV0038CancelJob**](SlurmAPI.md#SlurmAPI_slurmV0038CancelJob) | **DELETE** /slurm/v0.0.38/job/{job_id} | cancel or signal job
[**SlurmAPI_slurmV0038Diag**](SlurmAPI.md#SlurmAPI_slurmV0038Diag) | **GET** /slurm/v0.0.38/diag | get diagnostics
[**SlurmAPI_slurmV0038GetJob**](SlurmAPI.md#SlurmAPI_slurmV0038GetJob) | **GET** /slurm/v0.0.38/job/{job_id} | get job info
[**SlurmAPI_slurmV0038GetJobs**](SlurmAPI.md#SlurmAPI_slurmV0038GetJobs) | **GET** /slurm/v0.0.38/jobs | get list of jobs
[**SlurmAPI_slurmV0038GetNode**](SlurmAPI.md#SlurmAPI_slurmV0038GetNode) | **GET** /slurm/v0.0.38/node/{node_name} | get node info
[**SlurmAPI_slurmV0038GetNodes**](SlurmAPI.md#SlurmAPI_slurmV0038GetNodes) | **GET** /slurm/v0.0.38/nodes | get all node info
[**SlurmAPI_slurmV0038GetPartition**](SlurmAPI.md#SlurmAPI_slurmV0038GetPartition) | **GET** /slurm/v0.0.38/partition/{partition_name} | get partition info
[**SlurmAPI_slurmV0038GetPartitions**](SlurmAPI.md#SlurmAPI_slurmV0038GetPartitions) | **GET** /slurm/v0.0.38/partitions | get all partition info
[**SlurmAPI_slurmV0038GetReservation**](SlurmAPI.md#SlurmAPI_slurmV0038GetReservation) | **GET** /slurm/v0.0.38/reservation/{reservation_name} | get reservation info
[**SlurmAPI_slurmV0038GetReservations**](SlurmAPI.md#SlurmAPI_slurmV0038GetReservations) | **GET** /slurm/v0.0.38/reservations | get all reservation info
[**SlurmAPI_slurmV0038Ping**](SlurmAPI.md#SlurmAPI_slurmV0038Ping) | **GET** /slurm/v0.0.38/ping | ping test
[**SlurmAPI_slurmV0038SlurmctldGetLicenses**](SlurmAPI.md#SlurmAPI_slurmV0038SlurmctldGetLicenses) | **GET** /slurm/v0.0.38/licenses | get all Slurm tracked license info
[**SlurmAPI_slurmV0038SubmitJob**](SlurmAPI.md#SlurmAPI_slurmV0038SubmitJob) | **POST** /slurm/v0.0.38/job/submit | submit new job
[**SlurmAPI_slurmV0038UpdateJob**](SlurmAPI.md#SlurmAPI_slurmV0038UpdateJob) | **POST** /slurm/v0.0.38/job/{job_id} | update job
[**SlurmAPI_slurmdbV0038AddClusters**](SlurmAPI.md#SlurmAPI_slurmdbV0038AddClusters) | **POST** /slurmdb/v0.0.38/clusters | Add clusters
[**SlurmAPI_slurmdbV0038AddWckeys**](SlurmAPI.md#SlurmAPI_slurmdbV0038AddWckeys) | **POST** /slurmdb/v0.0.38/wckeys | Add wckeys
[**SlurmAPI_slurmdbV0038DeleteAccount**](SlurmAPI.md#SlurmAPI_slurmdbV0038DeleteAccount) | **DELETE** /slurmdb/v0.0.38/account/{account_name} | Delete account
[**SlurmAPI_slurmdbV0038DeleteAssociation**](SlurmAPI.md#SlurmAPI_slurmdbV0038DeleteAssociation) | **DELETE** /slurmdb/v0.0.38/association | Delete association
[**SlurmAPI_slurmdbV0038DeleteAssociations**](SlurmAPI.md#SlurmAPI_slurmdbV0038DeleteAssociations) | **DELETE** /slurmdb/v0.0.38/associations | Delete associations
[**SlurmAPI_slurmdbV0038DeleteCluster**](SlurmAPI.md#SlurmAPI_slurmdbV0038DeleteCluster) | **DELETE** /slurmdb/v0.0.38/cluster/{cluster_name} | Delete cluster
[**SlurmAPI_slurmdbV0038DeleteQos**](SlurmAPI.md#SlurmAPI_slurmdbV0038DeleteQos) | **DELETE** /slurmdb/v0.0.38/qos/{qos_name} | Delete QOS
[**SlurmAPI_slurmdbV0038DeleteUser**](SlurmAPI.md#SlurmAPI_slurmdbV0038DeleteUser) | **DELETE** /slurmdb/v0.0.38/user/{user_name} | Delete user
[**SlurmAPI_slurmdbV0038DeleteWckey**](SlurmAPI.md#SlurmAPI_slurmdbV0038DeleteWckey) | **DELETE** /slurmdb/v0.0.38/wckey/{wckey} | Delete wckey
[**SlurmAPI_slurmdbV0038Diag**](SlurmAPI.md#SlurmAPI_slurmdbV0038Diag) | **GET** /slurmdb/v0.0.38/diag | Get slurmdb diagnostics
[**SlurmAPI_slurmdbV0038GetAccount**](SlurmAPI.md#SlurmAPI_slurmdbV0038GetAccount) | **GET** /slurmdb/v0.0.38/account/{account_name} | Get account info
[**SlurmAPI_slurmdbV0038GetAccounts**](SlurmAPI.md#SlurmAPI_slurmdbV0038GetAccounts) | **GET** /slurmdb/v0.0.38/accounts | Get account list
[**SlurmAPI_slurmdbV0038GetAssociation**](SlurmAPI.md#SlurmAPI_slurmdbV0038GetAssociation) | **GET** /slurmdb/v0.0.38/association | Get association info
[**SlurmAPI_slurmdbV0038GetAssociations**](SlurmAPI.md#SlurmAPI_slurmdbV0038GetAssociations) | **GET** /slurmdb/v0.0.38/associations | Get association list
[**SlurmAPI_slurmdbV0038GetCluster**](SlurmAPI.md#SlurmAPI_slurmdbV0038GetCluster) | **GET** /slurmdb/v0.0.38/cluster/{cluster_name} | Get cluster info
[**SlurmAPI_slurmdbV0038GetClusters**](SlurmAPI.md#SlurmAPI_slurmdbV0038GetClusters) | **GET** /slurmdb/v0.0.38/clusters | Get cluster list
[**SlurmAPI_slurmdbV0038GetConfig**](SlurmAPI.md#SlurmAPI_slurmdbV0038GetConfig) | **GET** /slurmdb/v0.0.38/config | Dump all configuration information
[**SlurmAPI_slurmdbV0038GetJob**](SlurmAPI.md#SlurmAPI_slurmdbV0038GetJob) | **GET** /slurmdb/v0.0.38/job/{job_id} | Get job info
[**SlurmAPI_slurmdbV0038GetJobs**](SlurmAPI.md#SlurmAPI_slurmdbV0038GetJobs) | **GET** /slurmdb/v0.0.38/jobs | Get job list
[**SlurmAPI_slurmdbV0038GetQos**](SlurmAPI.md#SlurmAPI_slurmdbV0038GetQos) | **GET** /slurmdb/v0.0.38/qos | Get QOS list
[**SlurmAPI_slurmdbV0038GetSingleQos**](SlurmAPI.md#SlurmAPI_slurmdbV0038GetSingleQos) | **GET** /slurmdb/v0.0.38/qos/{qos_name} | Get QOS info
[**SlurmAPI_slurmdbV0038GetTres**](SlurmAPI.md#SlurmAPI_slurmdbV0038GetTres) | **GET** /slurmdb/v0.0.38/tres | Get TRES info
[**SlurmAPI_slurmdbV0038GetUser**](SlurmAPI.md#SlurmAPI_slurmdbV0038GetUser) | **GET** /slurmdb/v0.0.38/user/{user_name} | Get user info
[**SlurmAPI_slurmdbV0038GetUsers**](SlurmAPI.md#SlurmAPI_slurmdbV0038GetUsers) | **GET** /slurmdb/v0.0.38/users | Get user list
[**SlurmAPI_slurmdbV0038GetWckey**](SlurmAPI.md#SlurmAPI_slurmdbV0038GetWckey) | **GET** /slurmdb/v0.0.38/wckey/{wckey} | Get wckey info
[**SlurmAPI_slurmdbV0038GetWckeys**](SlurmAPI.md#SlurmAPI_slurmdbV0038GetWckeys) | **GET** /slurmdb/v0.0.38/wckeys | Get wckey list
[**SlurmAPI_slurmdbV0038SetConfig**](SlurmAPI.md#SlurmAPI_slurmdbV0038SetConfig) | **POST** /slurmdb/v0.0.38/config | Load all configuration information
[**SlurmAPI_slurmdbV0038UpdateAccount**](SlurmAPI.md#SlurmAPI_slurmdbV0038UpdateAccount) | **POST** /slurmdb/v0.0.38/accounts | Update accounts
[**SlurmAPI_slurmdbV0038UpdateAssociations**](SlurmAPI.md#SlurmAPI_slurmdbV0038UpdateAssociations) | **POST** /slurmdb/v0.0.38/associations | Set associations info
[**SlurmAPI_slurmdbV0038UpdateQos**](SlurmAPI.md#SlurmAPI_slurmdbV0038UpdateQos) | **POST** /slurmdb/v0.0.38/qos | Set QOS info
[**SlurmAPI_slurmdbV0038UpdateTres**](SlurmAPI.md#SlurmAPI_slurmdbV0038UpdateTres) | **POST** /slurmdb/v0.0.38/tres | Set TRES info
[**SlurmAPI_slurmdbV0038UpdateUsers**](SlurmAPI.md#SlurmAPI_slurmdbV0038UpdateUsers) | **POST** /slurmdb/v0.0.38/users | Update user


# **SlurmAPI_slurmV0038CancelJob**
```c
// cancel or signal job
//
void SlurmAPI_slurmV0038CancelJob(apiClient_t *apiClient, char * job_id, v0_0_38_signal_e signal);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**job_id** | **char \*** | Slurm Job ID | 
**signal** | **v0_0_38_signal_e** | signal to send to job | [optional] 

### Return type

void

### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmV0038Diag**
```c
// get diagnostics
//
v0_0_38_diag_t* SlurmAPI_slurmV0038Diag(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[v0_0_38_diag_t](v0_0_38_diag.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmV0038GetJob**
```c
// get job info
//
v0_0_38_jobs_response_t* SlurmAPI_slurmV0038GetJob(apiClient_t *apiClient, char * job_id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**job_id** | **char \*** | Slurm JobID | 

### Return type

[v0_0_38_jobs_response_t](v0_0_38_jobs_response.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmV0038GetJobs**
```c
// get list of jobs
//
v0_0_38_jobs_response_t* SlurmAPI_slurmV0038GetJobs(apiClient_t *apiClient, long update_time);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**update_time** | **long** | Filter if changed since update_time. Use of this parameter can result in faster replies. | [optional] 

### Return type

[v0_0_38_jobs_response_t](v0_0_38_jobs_response.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmV0038GetNode**
```c
// get node info
//
v0_0_38_nodes_response_t* SlurmAPI_slurmV0038GetNode(apiClient_t *apiClient, char * node_name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**node_name** | **char \*** | Slurm Node Name | 

### Return type

[v0_0_38_nodes_response_t](v0_0_38_nodes_response.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmV0038GetNodes**
```c
// get all node info
//
v0_0_38_nodes_response_t* SlurmAPI_slurmV0038GetNodes(apiClient_t *apiClient, long update_time);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**update_time** | **long** | Filter if changed since update_time. Use of this parameter can result in faster replies. | [optional] 

### Return type

[v0_0_38_nodes_response_t](v0_0_38_nodes_response.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmV0038GetPartition**
```c
// get partition info
//
v0_0_38_partitions_response_t* SlurmAPI_slurmV0038GetPartition(apiClient_t *apiClient, char * partition_name, long update_time);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**partition_name** | **char \*** | Slurm Partition Name | 
**update_time** | **long** | Filter if there were no partition changes (not limited to partition in URL endpoint) since update_time. | [optional] 

### Return type

[v0_0_38_partitions_response_t](v0_0_38_partitions_response.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmV0038GetPartitions**
```c
// get all partition info
//
v0_0_38_partitions_response_t* SlurmAPI_slurmV0038GetPartitions(apiClient_t *apiClient, long update_time);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**update_time** | **long** | Filter if changed since update_time. Use of this parameter can result in faster replies. | [optional] 

### Return type

[v0_0_38_partitions_response_t](v0_0_38_partitions_response.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmV0038GetReservation**
```c
// get reservation info
//
v0_0_38_reservations_response_t* SlurmAPI_slurmV0038GetReservation(apiClient_t *apiClient, char * reservation_name, long update_time);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**reservation_name** | **char \*** | Slurm Reservation Name | 
**update_time** | **long** | Filter if no reservation (not limited to reservation in URL) changed since update_time. | [optional] 

### Return type

[v0_0_38_reservations_response_t](v0_0_38_reservations_response.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmV0038GetReservations**
```c
// get all reservation info
//
v0_0_38_reservations_response_t* SlurmAPI_slurmV0038GetReservations(apiClient_t *apiClient, long update_time);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**update_time** | **long** | Filter if changed since update_time. Use of this parameter can result in faster replies. | [optional] 

### Return type

[v0_0_38_reservations_response_t](v0_0_38_reservations_response.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmV0038Ping**
```c
// ping test
//
v0_0_38_pings_t* SlurmAPI_slurmV0038Ping(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[v0_0_38_pings_t](v0_0_38_pings.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmV0038SlurmctldGetLicenses**
```c
// get all Slurm tracked license info
//
v0_0_38_licenses_t* SlurmAPI_slurmV0038SlurmctldGetLicenses(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[v0_0_38_licenses_t](v0_0_38_licenses.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmV0038SubmitJob**
```c
// submit new job
//
v0_0_38_job_submission_response_t* SlurmAPI_slurmV0038SubmitJob(apiClient_t *apiClient, v0_0_38_job_submission_t * v0_0_38_job_submission);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**v0_0_38_job_submission** | **[v0_0_38_job_submission_t](v0_0_38_job_submission.md) \*** | submit new job | 

### Return type

[v0_0_38_job_submission_response_t](v0_0_38_job_submission_response.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/json, application/x-yaml
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmV0038UpdateJob**
```c
// update job
//
void SlurmAPI_slurmV0038UpdateJob(apiClient_t *apiClient, char * job_id, v0_0_38_job_properties_t * v0_0_38_job_properties);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**job_id** | **char \*** | Slurm Job ID | 
**v0_0_38_job_properties** | **[v0_0_38_job_properties_t](v0_0_38_job_properties.md) \*** | update job | 

### Return type

void

### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/json, application/x-yaml
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0038AddClusters**
```c
// Add clusters
//
dbv0_0_38_response_cluster_add_t* SlurmAPI_slurmdbV0038AddClusters(apiClient_t *apiClient, dbv0_0_38_clusters_properties_t * dbv0_0_38_clusters_properties);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**dbv0_0_38_clusters_properties** | **[dbv0_0_38_clusters_properties_t](dbv0_0_38_clusters_properties.md) \*** | Add or update clusters | 

### Return type

[dbv0_0_38_response_cluster_add_t](dbv0_0_38_response_cluster_add.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/json, application/x-yaml
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0038AddWckeys**
```c
// Add wckeys
//
dbv0_0_38_response_wckey_add_t* SlurmAPI_slurmdbV0038AddWckeys(apiClient_t *apiClient, dbv0_0_38_wckey_info_t * dbv0_0_38_wckey_info);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**dbv0_0_38_wckey_info** | **[dbv0_0_38_wckey_info_t](dbv0_0_38_wckey_info.md) \*** | add wckeys | [optional] 

### Return type

[dbv0_0_38_response_wckey_add_t](dbv0_0_38_response_wckey_add.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/json, application/x-yaml
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0038DeleteAccount**
```c
// Delete account
//
dbv0_0_38_response_account_delete_t* SlurmAPI_slurmdbV0038DeleteAccount(apiClient_t *apiClient, char * account_name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**account_name** | **char \*** | Slurm Account Name | 

### Return type

[dbv0_0_38_response_account_delete_t](dbv0_0_38_response_account_delete.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0038DeleteAssociation**
```c
// Delete association
//
dbv0_0_38_response_associations_delete_t* SlurmAPI_slurmdbV0038DeleteAssociation(apiClient_t *apiClient, char * cluster, char * account, char * user, char * partition);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cluster** | **char \*** | Cluster name | [optional] 
**account** | **char \*** | Account name | [optional] 
**user** | **char \*** | User name | [optional] 
**partition** | **char \*** | Partition Name | [optional] 

### Return type

[dbv0_0_38_response_associations_delete_t](dbv0_0_38_response_associations_delete.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0038DeleteAssociations**
```c
// Delete associations
//
dbv0_0_38_response_associations_delete_t* SlurmAPI_slurmdbV0038DeleteAssociations(apiClient_t *apiClient, char * cluster, char * account, char * user, char * partition);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cluster** | **char \*** | Cluster name | [optional] 
**account** | **char \*** | Account name | [optional] 
**user** | **char \*** | User name | [optional] 
**partition** | **char \*** | Partition Name | [optional] 

### Return type

[dbv0_0_38_response_associations_delete_t](dbv0_0_38_response_associations_delete.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0038DeleteCluster**
```c
// Delete cluster
//
dbv0_0_38_response_cluster_delete_t* SlurmAPI_slurmdbV0038DeleteCluster(apiClient_t *apiClient, char * cluster_name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cluster_name** | **char \*** | Slurm cluster name | 

### Return type

[dbv0_0_38_response_cluster_delete_t](dbv0_0_38_response_cluster_delete.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0038DeleteQos**
```c
// Delete QOS
//
dbv0_0_38_response_qos_delete_t* SlurmAPI_slurmdbV0038DeleteQos(apiClient_t *apiClient, char * qos_name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**qos_name** | **char \*** | Slurm QOS Name | 

### Return type

[dbv0_0_38_response_qos_delete_t](dbv0_0_38_response_qos_delete.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0038DeleteUser**
```c
// Delete user
//
dbv0_0_38_response_user_delete_t* SlurmAPI_slurmdbV0038DeleteUser(apiClient_t *apiClient, char * user_name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**user_name** | **char \*** | Slurm User Name | 

### Return type

[dbv0_0_38_response_user_delete_t](dbv0_0_38_response_user_delete.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0038DeleteWckey**
```c
// Delete wckey
//
dbv0_0_38_response_wckey_delete_t* SlurmAPI_slurmdbV0038DeleteWckey(apiClient_t *apiClient, char * wckey);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**wckey** | **char \*** | Slurm wckey name | 

### Return type

[dbv0_0_38_response_wckey_delete_t](dbv0_0_38_response_wckey_delete.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0038Diag**
```c
// Get slurmdb diagnostics
//
dbv0_0_38_diag_t* SlurmAPI_slurmdbV0038Diag(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[dbv0_0_38_diag_t](dbv0_0_38_diag.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0038GetAccount**
```c
// Get account info
//
dbv0_0_38_account_info_t* SlurmAPI_slurmdbV0038GetAccount(apiClient_t *apiClient, char * account_name, int with_deleted);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**account_name** | **char \*** | Slurm Account Name | 
**with_deleted** | **int** | Include deleted accounts. False by default. | [optional] 

### Return type

[dbv0_0_38_account_info_t](dbv0_0_38_account_info.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0038GetAccounts**
```c
// Get account list
//
dbv0_0_38_account_info_t* SlurmAPI_slurmdbV0038GetAccounts(apiClient_t *apiClient, int with_deleted);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**with_deleted** | **int** | Include deleted accounts. False by default. | [optional] 

### Return type

[dbv0_0_38_account_info_t](dbv0_0_38_account_info.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0038GetAssociation**
```c
// Get association info
//
dbv0_0_38_associations_info_t* SlurmAPI_slurmdbV0038GetAssociation(apiClient_t *apiClient, char * cluster, char * account, char * user, char * partition);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cluster** | **char \*** | Cluster name | [optional] 
**account** | **char \*** | Account name | [optional] 
**user** | **char \*** | User name | [optional] 
**partition** | **char \*** | Partition Name | [optional] 

### Return type

[dbv0_0_38_associations_info_t](dbv0_0_38_associations_info.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0038GetAssociations**
```c
// Get association list
//
dbv0_0_38_associations_info_t* SlurmAPI_slurmdbV0038GetAssociations(apiClient_t *apiClient, char * cluster, char * account, char * user, char * partition);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cluster** | **char \*** | Cluster name | [optional] 
**account** | **char \*** | Account name | [optional] 
**user** | **char \*** | User name | [optional] 
**partition** | **char \*** | Partition Name | [optional] 

### Return type

[dbv0_0_38_associations_info_t](dbv0_0_38_associations_info.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0038GetCluster**
```c
// Get cluster info
//
dbv0_0_38_cluster_info_t* SlurmAPI_slurmdbV0038GetCluster(apiClient_t *apiClient, char * cluster_name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cluster_name** | **char \*** | Slurm cluster name | 

### Return type

[dbv0_0_38_cluster_info_t](dbv0_0_38_cluster_info.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0038GetClusters**
```c
// Get cluster list
//
dbv0_0_38_cluster_info_t* SlurmAPI_slurmdbV0038GetClusters(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[dbv0_0_38_cluster_info_t](dbv0_0_38_cluster_info.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0038GetConfig**
```c
// Dump all configuration information
//
dbv0_0_38_config_info_t* SlurmAPI_slurmdbV0038GetConfig(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[dbv0_0_38_config_info_t](dbv0_0_38_config_info.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0038GetJob**
```c
// Get job info
//
// This endpoint may return multiple job entries since job_id is not a unique key - only the tuple (cluster, job_id, start_time) is unique. If the requested job_id is a component of a heterogeneous job all components are returned.
//
dbv0_0_38_job_info_t* SlurmAPI_slurmdbV0038GetJob(apiClient_t *apiClient, char * job_id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**job_id** | **char \*** | Slurm JobID | 

### Return type

[dbv0_0_38_job_info_t](dbv0_0_38_job_info.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0038GetJobs**
```c
// Get job list
//
dbv0_0_38_job_info_t* SlurmAPI_slurmdbV0038GetJobs(apiClient_t *apiClient, char * submit_time, char * start_time, char * end_time, char * account, char * association, char * cluster, char * constraints, char * cpus_max, char * cpus_min, int skip_steps, int disable_wait_for_result, char * exit_code, char * format, char * group, char * job_name, char * nodes_max, char * nodes_min, char * partition, char * qos, char * reason, char * reservation, char * state, char * step, char * node, char * wckey);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**submit_time** | **char \*** | Filter by submission time  Accepted formats:  HH:MM[:SS] [AM|PM]  MMDD[YY] or MM/DD[/YY] or MM.DD[.YY]  MM/DD[/YY]-HH:MM[:SS]  YYYY-MM-DD[THH:MM[:SS]] | [optional] 
**start_time** | **char \*** | Filter by start time  Accepted formats:  HH:MM[:SS] [AM|PM]  MMDD[YY] or MM/DD[/YY] or MM.DD[.YY]  MM/DD[/YY]-HH:MM[:SS]  YYYY-MM-DD[THH:MM[:SS]] | [optional] 
**end_time** | **char \*** | Filter by end time  Accepted formats:  HH:MM[:SS] [AM|PM]  MMDD[YY] or MM/DD[/YY] or MM.DD[.YY]  MM/DD[/YY]-HH:MM[:SS]  YYYY-MM-DD[THH:MM[:SS]] | [optional] 
**account** | **char \*** | Comma delimited list of accounts to match | [optional] 
**association** | **char \*** | Comma delimited list of associations to match | [optional] 
**cluster** | **char \*** | Comma delimited list of cluster to match | [optional] 
**constraints** | **char \*** | Comma delimited list of constraints to match | [optional] 
**cpus_max** | **char \*** | Number of CPUs high range | [optional] 
**cpus_min** | **char \*** | Number of CPUs low range | [optional] 
**skip_steps** | **int** | Report job step information | [optional] 
**disable_wait_for_result** | **int** | Disable waiting for result from slurmdbd | [optional] 
**exit_code** | **char \*** | Exit code of job | [optional] 
**format** | **char \*** | Comma delimited list of formats to match | [optional] 
**group** | **char \*** | Comma delimited list of groups to match | [optional] 
**job_name** | **char \*** | Comma delimited list of job names to match | [optional] 
**nodes_max** | **char \*** | Number of nodes high range | [optional] 
**nodes_min** | **char \*** | Number of nodes low range | [optional] 
**partition** | **char \*** | Comma delimited list of partitions to match | [optional] 
**qos** | **char \*** | Comma delimited list of QOS to match | [optional] 
**reason** | **char \*** | Comma delimited list of job reasons to match | [optional] 
**reservation** | **char \*** | Comma delimited list of reservations to match | [optional] 
**state** | **char \*** | Comma delimited list of states to match | [optional] 
**step** | **char \*** | Comma delimited list of job steps to match | [optional] 
**node** | **char \*** | Comma delimited list of used nodes to match | [optional] 
**wckey** | **char \*** | Comma delimited list of wckeys to match | [optional] 

### Return type

[dbv0_0_38_job_info_t](dbv0_0_38_job_info.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0038GetQos**
```c
// Get QOS list
//
dbv0_0_38_qos_info_t* SlurmAPI_slurmdbV0038GetQos(apiClient_t *apiClient, int with_deleted);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**with_deleted** | **int** | Include deleted QOSs. False by default. | [optional] 

### Return type

[dbv0_0_38_qos_info_t](dbv0_0_38_qos_info.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0038GetSingleQos**
```c
// Get QOS info
//
dbv0_0_38_qos_info_t* SlurmAPI_slurmdbV0038GetSingleQos(apiClient_t *apiClient, char * qos_name, int with_deleted);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**qos_name** | **char \*** | Slurm QOS Name | 
**with_deleted** | **int** | Include deleted QOSs. False by default. | [optional] 

### Return type

[dbv0_0_38_qos_info_t](dbv0_0_38_qos_info.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0038GetTres**
```c
// Get TRES info
//
dbv0_0_38_tres_info_t* SlurmAPI_slurmdbV0038GetTres(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[dbv0_0_38_tres_info_t](dbv0_0_38_tres_info.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0038GetUser**
```c
// Get user info
//
dbv0_0_38_user_info_t* SlurmAPI_slurmdbV0038GetUser(apiClient_t *apiClient, char * user_name, int with_deleted);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**user_name** | **char \*** | Slurm User Name | 
**with_deleted** | **int** | Include deleted users. False by default. | [optional] 

### Return type

[dbv0_0_38_user_info_t](dbv0_0_38_user_info.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0038GetUsers**
```c
// Get user list
//
dbv0_0_38_user_info_t* SlurmAPI_slurmdbV0038GetUsers(apiClient_t *apiClient, int with_deleted);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**with_deleted** | **int** | Include deleted users. False by default. | [optional] 

### Return type

[dbv0_0_38_user_info_t](dbv0_0_38_user_info.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0038GetWckey**
```c
// Get wckey info
//
dbv0_0_38_wckey_info_t* SlurmAPI_slurmdbV0038GetWckey(apiClient_t *apiClient, char * wckey);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**wckey** | **char \*** | Slurm wckey name | 

### Return type

[dbv0_0_38_wckey_info_t](dbv0_0_38_wckey_info.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0038GetWckeys**
```c
// Get wckey list
//
dbv0_0_38_wckey_info_t* SlurmAPI_slurmdbV0038GetWckeys(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[dbv0_0_38_wckey_info_t](dbv0_0_38_wckey_info.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0038SetConfig**
```c
// Load all configuration information
//
dbv0_0_38_config_response_t* SlurmAPI_slurmdbV0038SetConfig(apiClient_t *apiClient, dbv0_0_38_set_config_t * dbv0_0_38_set_config);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**dbv0_0_38_set_config** | **[dbv0_0_38_set_config_t](dbv0_0_38_set_config.md) \*** | Add or update config | [optional] 

### Return type

[dbv0_0_38_config_response_t](dbv0_0_38_config_response.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/json, application/x-yaml
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0038UpdateAccount**
```c
// Update accounts
//
dbv0_0_38_account_response_t* SlurmAPI_slurmdbV0038UpdateAccount(apiClient_t *apiClient, dbv0_0_38_update_account_t * dbv0_0_38_update_account);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**dbv0_0_38_update_account** | **[dbv0_0_38_update_account_t](dbv0_0_38_update_account.md) \*** | update/create accounts | 

### Return type

[dbv0_0_38_account_response_t](dbv0_0_38_account_response.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/json, application/x-yaml
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0038UpdateAssociations**
```c
// Set associations info
//
dbv0_0_38_response_associations_t* SlurmAPI_slurmdbV0038UpdateAssociations(apiClient_t *apiClient, dbv0_0_38_associations_info_t * dbv0_0_38_associations_info);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**dbv0_0_38_associations_info** | **[dbv0_0_38_associations_info_t](dbv0_0_38_associations_info.md) \*** | Add or update associations | 

### Return type

[dbv0_0_38_response_associations_t](dbv0_0_38_response_associations.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/json, application/x-yaml
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0038UpdateQos**
```c
// Set QOS info
//
dbv0_0_38_response_qos_t* SlurmAPI_slurmdbV0038UpdateQos(apiClient_t *apiClient, dbv0_0_38_update_qos_t * dbv0_0_38_update_qos);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**dbv0_0_38_update_qos** | **[dbv0_0_38_update_qos_t](dbv0_0_38_update_qos.md) \*** | Add or update QOSs | 

### Return type

[dbv0_0_38_response_qos_t](dbv0_0_38_response_qos.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/json, application/x-yaml
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0038UpdateTres**
```c
// Set TRES info
//
dbv0_0_38_response_tres_t* SlurmAPI_slurmdbV0038UpdateTres(apiClient_t *apiClient, dbv0_0_38_tres_update_t * dbv0_0_38_tres_update);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**dbv0_0_38_tres_update** | **[dbv0_0_38_tres_update_t](dbv0_0_38_tres_update.md) \*** | Add or Update TRES | 

### Return type

[dbv0_0_38_response_tres_t](dbv0_0_38_response_tres.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/json, application/x-yaml
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0038UpdateUsers**
```c
// Update user
//
dbv0_0_38_response_user_update_t* SlurmAPI_slurmdbV0038UpdateUsers(apiClient_t *apiClient, dbv0_0_38_update_users_t * dbv0_0_38_update_users);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**dbv0_0_38_update_users** | **[dbv0_0_38_update_users_t](dbv0_0_38_update_users.md) \*** | add or update user | 

### Return type

[dbv0_0_38_response_user_update_t](dbv0_0_38_response_user_update.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/json, application/x-yaml
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

