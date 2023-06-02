# SlurmAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SlurmAPI_slurmV0039CancelJob**](SlurmAPI.md#SlurmAPI_slurmV0039CancelJob) | **DELETE** /slurm/v0.0.39/job/{job_id} | cancel or signal job
[**SlurmAPI_slurmV0039DeleteNode**](SlurmAPI.md#SlurmAPI_slurmV0039DeleteNode) | **DELETE** /slurm/v0.0.39/node/{node_name} | delete node
[**SlurmAPI_slurmV0039Diag**](SlurmAPI.md#SlurmAPI_slurmV0039Diag) | **GET** /slurm/v0.0.39/diag | get diagnostics
[**SlurmAPI_slurmV0039GetJob**](SlurmAPI.md#SlurmAPI_slurmV0039GetJob) | **GET** /slurm/v0.0.39/job/{job_id} | get job info
[**SlurmAPI_slurmV0039GetJobs**](SlurmAPI.md#SlurmAPI_slurmV0039GetJobs) | **GET** /slurm/v0.0.39/jobs | get list of jobs
[**SlurmAPI_slurmV0039GetNode**](SlurmAPI.md#SlurmAPI_slurmV0039GetNode) | **GET** /slurm/v0.0.39/node/{node_name} | get node info
[**SlurmAPI_slurmV0039GetNodes**](SlurmAPI.md#SlurmAPI_slurmV0039GetNodes) | **GET** /slurm/v0.0.39/nodes | get all node info
[**SlurmAPI_slurmV0039GetPartition**](SlurmAPI.md#SlurmAPI_slurmV0039GetPartition) | **GET** /slurm/v0.0.39/partition/{partition_name} | get partition info
[**SlurmAPI_slurmV0039GetPartitions**](SlurmAPI.md#SlurmAPI_slurmV0039GetPartitions) | **GET** /slurm/v0.0.39/partitions | get all partition info
[**SlurmAPI_slurmV0039GetReservation**](SlurmAPI.md#SlurmAPI_slurmV0039GetReservation) | **GET** /slurm/v0.0.39/reservation/{reservation_name} | get reservation info
[**SlurmAPI_slurmV0039GetReservations**](SlurmAPI.md#SlurmAPI_slurmV0039GetReservations) | **GET** /slurm/v0.0.39/reservations | get all reservation info
[**SlurmAPI_slurmV0039Ping**](SlurmAPI.md#SlurmAPI_slurmV0039Ping) | **GET** /slurm/v0.0.39/ping | ping test
[**SlurmAPI_slurmV0039SlurmctldGetLicenses**](SlurmAPI.md#SlurmAPI_slurmV0039SlurmctldGetLicenses) | **GET** /slurm/v0.0.39/licenses | get all Slurm tracked license info
[**SlurmAPI_slurmV0039SubmitJob**](SlurmAPI.md#SlurmAPI_slurmV0039SubmitJob) | **POST** /slurm/v0.0.39/job/submit | submit new job
[**SlurmAPI_slurmV0039UpdateJob**](SlurmAPI.md#SlurmAPI_slurmV0039UpdateJob) | **POST** /slurm/v0.0.39/job/{job_id} | update job
[**SlurmAPI_slurmV0039UpdateNode**](SlurmAPI.md#SlurmAPI_slurmV0039UpdateNode) | **POST** /slurm/v0.0.39/node/{node_name} | update node properties
[**SlurmAPI_slurmdbV0039AddClusters**](SlurmAPI.md#SlurmAPI_slurmdbV0039AddClusters) | **POST** /slurmdb/v0.0.39/clusters | Add clusters
[**SlurmAPI_slurmdbV0039AddWckeys**](SlurmAPI.md#SlurmAPI_slurmdbV0039AddWckeys) | **POST** /slurmdb/v0.0.39/wckeys | Add wckeys
[**SlurmAPI_slurmdbV0039DeleteAccount**](SlurmAPI.md#SlurmAPI_slurmdbV0039DeleteAccount) | **DELETE** /slurmdb/v0.0.39/account/{account_name} | Delete account
[**SlurmAPI_slurmdbV0039DeleteAssociation**](SlurmAPI.md#SlurmAPI_slurmdbV0039DeleteAssociation) | **DELETE** /slurmdb/v0.0.39/association | Delete association
[**SlurmAPI_slurmdbV0039DeleteAssociations**](SlurmAPI.md#SlurmAPI_slurmdbV0039DeleteAssociations) | **DELETE** /slurmdb/v0.0.39/associations | Delete associations
[**SlurmAPI_slurmdbV0039DeleteCluster**](SlurmAPI.md#SlurmAPI_slurmdbV0039DeleteCluster) | **DELETE** /slurmdb/v0.0.39/cluster/{cluster_name} | Delete cluster
[**SlurmAPI_slurmdbV0039DeleteQos**](SlurmAPI.md#SlurmAPI_slurmdbV0039DeleteQos) | **DELETE** /slurmdb/v0.0.39/qos/{qos_name} | Delete QOS
[**SlurmAPI_slurmdbV0039DeleteUser**](SlurmAPI.md#SlurmAPI_slurmdbV0039DeleteUser) | **DELETE** /slurmdb/v0.0.39/user/{user_name} | Delete user
[**SlurmAPI_slurmdbV0039DeleteWckey**](SlurmAPI.md#SlurmAPI_slurmdbV0039DeleteWckey) | **DELETE** /slurmdb/v0.0.39/wckey/{wckey} | Delete wckey
[**SlurmAPI_slurmdbV0039Diag**](SlurmAPI.md#SlurmAPI_slurmdbV0039Diag) | **GET** /slurmdb/v0.0.39/diag | Get slurmdb diagnostics
[**SlurmAPI_slurmdbV0039GetAccount**](SlurmAPI.md#SlurmAPI_slurmdbV0039GetAccount) | **GET** /slurmdb/v0.0.39/account/{account_name} | Get account info
[**SlurmAPI_slurmdbV0039GetAccounts**](SlurmAPI.md#SlurmAPI_slurmdbV0039GetAccounts) | **GET** /slurmdb/v0.0.39/accounts | Get account list
[**SlurmAPI_slurmdbV0039GetAssociation**](SlurmAPI.md#SlurmAPI_slurmdbV0039GetAssociation) | **GET** /slurmdb/v0.0.39/association | Get association info
[**SlurmAPI_slurmdbV0039GetAssociations**](SlurmAPI.md#SlurmAPI_slurmdbV0039GetAssociations) | **GET** /slurmdb/v0.0.39/associations | Get association list
[**SlurmAPI_slurmdbV0039GetCluster**](SlurmAPI.md#SlurmAPI_slurmdbV0039GetCluster) | **GET** /slurmdb/v0.0.39/cluster/{cluster_name} | Get cluster info
[**SlurmAPI_slurmdbV0039GetClusters**](SlurmAPI.md#SlurmAPI_slurmdbV0039GetClusters) | **GET** /slurmdb/v0.0.39/clusters | Get cluster list
[**SlurmAPI_slurmdbV0039GetConfig**](SlurmAPI.md#SlurmAPI_slurmdbV0039GetConfig) | **GET** /slurmdb/v0.0.39/config | Dump all configuration information
[**SlurmAPI_slurmdbV0039GetJob**](SlurmAPI.md#SlurmAPI_slurmdbV0039GetJob) | **GET** /slurmdb/v0.0.39/job/{job_id} | Get job info
[**SlurmAPI_slurmdbV0039GetJobs**](SlurmAPI.md#SlurmAPI_slurmdbV0039GetJobs) | **GET** /slurmdb/v0.0.39/jobs | Get job list
[**SlurmAPI_slurmdbV0039GetQos**](SlurmAPI.md#SlurmAPI_slurmdbV0039GetQos) | **GET** /slurmdb/v0.0.39/qos | Get QOS list
[**SlurmAPI_slurmdbV0039GetSingleQos**](SlurmAPI.md#SlurmAPI_slurmdbV0039GetSingleQos) | **GET** /slurmdb/v0.0.39/qos/{qos_name} | Get QOS info
[**SlurmAPI_slurmdbV0039GetTres**](SlurmAPI.md#SlurmAPI_slurmdbV0039GetTres) | **GET** /slurmdb/v0.0.39/tres | Get TRES info
[**SlurmAPI_slurmdbV0039GetUser**](SlurmAPI.md#SlurmAPI_slurmdbV0039GetUser) | **GET** /slurmdb/v0.0.39/user/{user_name} | Get user info
[**SlurmAPI_slurmdbV0039GetUsers**](SlurmAPI.md#SlurmAPI_slurmdbV0039GetUsers) | **GET** /slurmdb/v0.0.39/users | Get user list
[**SlurmAPI_slurmdbV0039GetWckey**](SlurmAPI.md#SlurmAPI_slurmdbV0039GetWckey) | **GET** /slurmdb/v0.0.39/wckey/{wckey} | Get wckey info
[**SlurmAPI_slurmdbV0039GetWckeys**](SlurmAPI.md#SlurmAPI_slurmdbV0039GetWckeys) | **GET** /slurmdb/v0.0.39/wckeys | Get wckey list
[**SlurmAPI_slurmdbV0039SetConfig**](SlurmAPI.md#SlurmAPI_slurmdbV0039SetConfig) | **POST** /slurmdb/v0.0.39/config | Load all configuration information
[**SlurmAPI_slurmdbV0039UpdateAccounts**](SlurmAPI.md#SlurmAPI_slurmdbV0039UpdateAccounts) | **POST** /slurmdb/v0.0.39/accounts | Update accounts
[**SlurmAPI_slurmdbV0039UpdateAssociations**](SlurmAPI.md#SlurmAPI_slurmdbV0039UpdateAssociations) | **POST** /slurmdb/v0.0.39/associations | Set associations info
[**SlurmAPI_slurmdbV0039UpdateQos**](SlurmAPI.md#SlurmAPI_slurmdbV0039UpdateQos) | **POST** /slurmdb/v0.0.39/qos | Set QOS info
[**SlurmAPI_slurmdbV0039UpdateTres**](SlurmAPI.md#SlurmAPI_slurmdbV0039UpdateTres) | **POST** /slurmdb/v0.0.39/tres | Set TRES info
[**SlurmAPI_slurmdbV0039UpdateUsers**](SlurmAPI.md#SlurmAPI_slurmdbV0039UpdateUsers) | **POST** /slurmdb/v0.0.39/users | Update user


# **SlurmAPI_slurmV0039CancelJob**
```c
// cancel or signal job
//
status_t* SlurmAPI_slurmV0039CancelJob(apiClient_t *apiClient, char * job_id, slurm_rest_api_slurmV0039CancelJob_signal_e signal);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**job_id** | **char \*** | Slurm Job ID | 
**signal** | **slurm_rest_api_slurmV0039CancelJob_signal_e** | signal to send to job | [optional] 

### Return type

[status_t](status.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmV0039DeleteNode**
```c
// delete node
//
status_t* SlurmAPI_slurmV0039DeleteNode(apiClient_t *apiClient, char * node_name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**node_name** | **char \*** | Slurm Node Name | 

### Return type

[status_t](status.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmV0039Diag**
```c
// get diagnostics
//
v0_0_39_diag_t* SlurmAPI_slurmV0039Diag(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[v0_0_39_diag_t](v0_0_39_diag.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmV0039GetJob**
```c
// get job info
//
v0_0_39_jobs_response_t* SlurmAPI_slurmV0039GetJob(apiClient_t *apiClient, char * job_id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**job_id** | **char \*** | Slurm JobID | 

### Return type

[v0_0_39_jobs_response_t](v0_0_39_jobs_response.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmV0039GetJobs**
```c
// get list of jobs
//
v0_0_39_jobs_response_t* SlurmAPI_slurmV0039GetJobs(apiClient_t *apiClient, long update_time);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**update_time** | **long** | Filter if changed since update_time. Use of this parameter can result in faster replies. | [optional] 

### Return type

[v0_0_39_jobs_response_t](v0_0_39_jobs_response.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmV0039GetNode**
```c
// get node info
//
v0_0_39_nodes_response_t* SlurmAPI_slurmV0039GetNode(apiClient_t *apiClient, char * node_name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**node_name** | **char \*** | Slurm Node Name | 

### Return type

[v0_0_39_nodes_response_t](v0_0_39_nodes_response.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmV0039GetNodes**
```c
// get all node info
//
v0_0_39_nodes_response_t* SlurmAPI_slurmV0039GetNodes(apiClient_t *apiClient, long update_time);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**update_time** | **long** | Filter if changed since update_time. Use of this parameter can result in faster replies. | [optional] 

### Return type

[v0_0_39_nodes_response_t](v0_0_39_nodes_response.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmV0039GetPartition**
```c
// get partition info
//
v0_0_39_partitions_response_t* SlurmAPI_slurmV0039GetPartition(apiClient_t *apiClient, char * partition_name, long update_time);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**partition_name** | **char \*** | Slurm Partition Name | 
**update_time** | **long** | Filter if there were no partition changes (not limited to partition in URL endpoint) since update_time. | [optional] 

### Return type

[v0_0_39_partitions_response_t](v0_0_39_partitions_response.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmV0039GetPartitions**
```c
// get all partition info
//
v0_0_39_partitions_response_t* SlurmAPI_slurmV0039GetPartitions(apiClient_t *apiClient, long update_time);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**update_time** | **long** | Filter if changed since update_time. Use of this parameter can result in faster replies. | [optional] 

### Return type

[v0_0_39_partitions_response_t](v0_0_39_partitions_response.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmV0039GetReservation**
```c
// get reservation info
//
v0_0_39_reservations_response_t* SlurmAPI_slurmV0039GetReservation(apiClient_t *apiClient, char * reservation_name, long update_time);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**reservation_name** | **char \*** | Slurm Reservation Name | 
**update_time** | **long** | Filter if no reservation (not limited to reservation in URL) changed since update_time. | [optional] 

### Return type

[v0_0_39_reservations_response_t](v0_0_39_reservations_response.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmV0039GetReservations**
```c
// get all reservation info
//
v0_0_39_reservations_response_t* SlurmAPI_slurmV0039GetReservations(apiClient_t *apiClient, long update_time);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**update_time** | **long** | Filter if changed since update_time. Use of this parameter can result in faster replies. | [optional] 

### Return type

[v0_0_39_reservations_response_t](v0_0_39_reservations_response.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmV0039Ping**
```c
// ping test
//
v0_0_39_pings_t* SlurmAPI_slurmV0039Ping(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[v0_0_39_pings_t](v0_0_39_pings.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmV0039SlurmctldGetLicenses**
```c
// get all Slurm tracked license info
//
v0_0_39_licenses_info_t* SlurmAPI_slurmV0039SlurmctldGetLicenses(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[v0_0_39_licenses_info_t](v0_0_39_licenses_info.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmV0039SubmitJob**
```c
// submit new job
//
v0_0_39_job_submission_response_t* SlurmAPI_slurmV0039SubmitJob(apiClient_t *apiClient, v0_0_39_job_submission_t * v0_0_39_job_submission);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**v0_0_39_job_submission** | **[v0_0_39_job_submission_t](v0_0_39_job_submission.md) \*** | submit new job | 

### Return type

[v0_0_39_job_submission_response_t](v0_0_39_job_submission_response.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/json, application/x-yaml
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmV0039UpdateJob**
```c
// update job
//
v0_0_39_job_update_response_t* SlurmAPI_slurmV0039UpdateJob(apiClient_t *apiClient, char * job_id, v0_0_39_job_desc_msg_t * v0_0_39_job_desc_msg);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**job_id** | **char \*** | Slurm Job ID | 
**v0_0_39_job_desc_msg** | **[v0_0_39_job_desc_msg_t](v0_0_39_job_desc_msg.md) \*** | update job | 

### Return type

[v0_0_39_job_update_response_t](v0_0_39_job_update_response.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/json, application/x-yaml
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmV0039UpdateNode**
```c
// update node properties
//
status_t* SlurmAPI_slurmV0039UpdateNode(apiClient_t *apiClient, char * node_name, v0_0_39_update_node_msg_t * v0_0_39_update_node_msg);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**node_name** | **char \*** | Slurm Node Name | 
**v0_0_39_update_node_msg** | **[v0_0_39_update_node_msg_t](v0_0_39_update_node_msg.md) \*** | update node | 

### Return type

[status_t](status.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/json, application/x-yaml
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0039AddClusters**
```c
// Add clusters
//
status_t* SlurmAPI_slurmdbV0039AddClusters(apiClient_t *apiClient, dbv0_0_39_clusters_info_t * dbv0_0_39_clusters_info);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**dbv0_0_39_clusters_info** | **[dbv0_0_39_clusters_info_t](dbv0_0_39_clusters_info.md) \*** | Add or update clusters | 

### Return type

[status_t](status.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/json, application/x-yaml
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0039AddWckeys**
```c
// Add wckeys
//
status_t* SlurmAPI_slurmdbV0039AddWckeys(apiClient_t *apiClient, dbv0_0_39_wckey_info_t * dbv0_0_39_wckey_info);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**dbv0_0_39_wckey_info** | **[dbv0_0_39_wckey_info_t](dbv0_0_39_wckey_info.md) \*** | add wckeys | [optional] 

### Return type

[status_t](status.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/json, application/x-yaml
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0039DeleteAccount**
```c
// Delete account
//
status_t* SlurmAPI_slurmdbV0039DeleteAccount(apiClient_t *apiClient, char * account_name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**account_name** | **char \*** | Slurm Account Name | 

### Return type

[status_t](status.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0039DeleteAssociation**
```c
// Delete association
//
dbv0_0_39_response_associations_delete_t* SlurmAPI_slurmdbV0039DeleteAssociation(apiClient_t *apiClient, char * cluster, char * account, char * user, char * partition);
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

[dbv0_0_39_response_associations_delete_t](dbv0_0_39_response_associations_delete.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0039DeleteAssociations**
```c
// Delete associations
//
dbv0_0_39_response_associations_delete_t* SlurmAPI_slurmdbV0039DeleteAssociations(apiClient_t *apiClient, char * cluster, char * account, char * user, char * partition);
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

[dbv0_0_39_response_associations_delete_t](dbv0_0_39_response_associations_delete.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0039DeleteCluster**
```c
// Delete cluster
//
status_t* SlurmAPI_slurmdbV0039DeleteCluster(apiClient_t *apiClient, char * cluster_name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cluster_name** | **char \*** | Slurm cluster name | 

### Return type

[status_t](status.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0039DeleteQos**
```c
// Delete QOS
//
status_t* SlurmAPI_slurmdbV0039DeleteQos(apiClient_t *apiClient, char * qos_name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**qos_name** | **char \*** | Slurm QOS Name | 

### Return type

[status_t](status.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0039DeleteUser**
```c
// Delete user
//
status_t* SlurmAPI_slurmdbV0039DeleteUser(apiClient_t *apiClient, char * user_name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**user_name** | **char \*** | Slurm User Name | 

### Return type

[status_t](status.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0039DeleteWckey**
```c
// Delete wckey
//
status_t* SlurmAPI_slurmdbV0039DeleteWckey(apiClient_t *apiClient, char * wckey);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**wckey** | **char \*** | Slurm wckey name | 

### Return type

[status_t](status.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0039Diag**
```c
// Get slurmdb diagnostics
//
dbv0_0_39_diag_t* SlurmAPI_slurmdbV0039Diag(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[dbv0_0_39_diag_t](dbv0_0_39_diag.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0039GetAccount**
```c
// Get account info
//
dbv0_0_39_account_info_t* SlurmAPI_slurmdbV0039GetAccount(apiClient_t *apiClient, char * account_name, slurm_rest_api_slurmdbV0039GetAccount_with_deleted_e with_deleted);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**account_name** | **char \*** | Slurm Account Name | 
**with_deleted** | **slurm_rest_api_slurmdbV0039GetAccount_with_deleted_e** | Include deleted accounts. False by default. | [optional] [default to &#39;false&#39;]

### Return type

[dbv0_0_39_account_info_t](dbv0_0_39_account_info.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0039GetAccounts**
```c
// Get account list
//
dbv0_0_39_account_info_t* SlurmAPI_slurmdbV0039GetAccounts(apiClient_t *apiClient, slurm_rest_api_slurmdbV0039GetAccounts_with_deleted_e with_deleted);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**with_deleted** | **slurm_rest_api_slurmdbV0039GetAccounts_with_deleted_e** | Include deleted accounts. False by default. | [optional] [default to &#39;false&#39;]

### Return type

[dbv0_0_39_account_info_t](dbv0_0_39_account_info.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0039GetAssociation**
```c
// Get association info
//
dbv0_0_39_associations_info_t* SlurmAPI_slurmdbV0039GetAssociation(apiClient_t *apiClient, char * cluster, char * account, char * user, char * partition);
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

[dbv0_0_39_associations_info_t](dbv0_0_39_associations_info.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0039GetAssociations**
```c
// Get association list
//
dbv0_0_39_associations_info_t* SlurmAPI_slurmdbV0039GetAssociations(apiClient_t *apiClient, char * cluster, char * account, char * user, char * partition);
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

[dbv0_0_39_associations_info_t](dbv0_0_39_associations_info.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0039GetCluster**
```c
// Get cluster info
//
dbv0_0_39_clusters_info_t* SlurmAPI_slurmdbV0039GetCluster(apiClient_t *apiClient, char * cluster_name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cluster_name** | **char \*** | Slurm cluster name | 

### Return type

[dbv0_0_39_clusters_info_t](dbv0_0_39_clusters_info.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0039GetClusters**
```c
// Get cluster list
//
dbv0_0_39_clusters_info_t* SlurmAPI_slurmdbV0039GetClusters(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[dbv0_0_39_clusters_info_t](dbv0_0_39_clusters_info.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0039GetConfig**
```c
// Dump all configuration information
//
dbv0_0_39_config_info_t* SlurmAPI_slurmdbV0039GetConfig(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[dbv0_0_39_config_info_t](dbv0_0_39_config_info.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0039GetJob**
```c
// Get job info
//
// This endpoint may return multiple job entries since job_id is not a unique key - only the tuple (cluster, job_id, start_time) is unique. If the requested job_id is a component of a heterogeneous job all components are returned.
//
dbv0_0_39_job_info_t* SlurmAPI_slurmdbV0039GetJob(apiClient_t *apiClient, char * job_id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**job_id** | **char \*** | Slurm JobID | 

### Return type

[dbv0_0_39_job_info_t](dbv0_0_39_job_info.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0039GetJobs**
```c
// Get job list
//
dbv0_0_39_job_info_t* SlurmAPI_slurmdbV0039GetJobs(apiClient_t *apiClient, char * users, char * submit_time, char * start_time, char * end_time, char * account, char * association, char * cluster, char * constraints, char * cpus_max, char * cpus_min, slurm_rest_api_slurmdbV0039GetJobs_skip_steps_e skip_steps, slurm_rest_api_slurmdbV0039GetJobs_disable_wait_for_result_e disable_wait_for_result, char * exit_code, char * format, char * group, char * job_name, char * nodes_max, char * nodes_min, char * partition, char * qos, char * reason, char * reservation, char * state, char * step, char * node, char * wckey);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**users** | **char \*** | Filter by comma delimited list of user names | [optional] 
**submit_time** | **char \*** | Filter by submission time  Accepted formats:  HH:MM[:SS] [AM|PM]  MMDD[YY] or MM/DD[/YY] or MM.DD[.YY]  MM/DD[/YY]-HH:MM[:SS]  YYYY-MM-DD[THH:MM[:SS]] | [optional] 
**start_time** | **char \*** | Filter by start time  Accepted formats:  HH:MM[:SS] [AM|PM]  MMDD[YY] or MM/DD[/YY] or MM.DD[.YY]  MM/DD[/YY]-HH:MM[:SS]  YYYY-MM-DD[THH:MM[:SS]] | [optional] 
**end_time** | **char \*** | Filter by end time  Accepted formats:  HH:MM[:SS] [AM|PM]  MMDD[YY] or MM/DD[/YY] or MM.DD[.YY]  MM/DD[/YY]-HH:MM[:SS]  YYYY-MM-DD[THH:MM[:SS]] | [optional] 
**account** | **char \*** | Comma delimited list of accounts to match | [optional] 
**association** | **char \*** | Comma delimited list of associations to match | [optional] 
**cluster** | **char \*** | Comma delimited list of cluster to match | [optional] 
**constraints** | **char \*** | Comma delimited list of constraints to match | [optional] 
**cpus_max** | **char \*** | Number of CPUs high range | [optional] 
**cpus_min** | **char \*** | Number of CPUs low range | [optional] 
**skip_steps** | **slurm_rest_api_slurmdbV0039GetJobs_skip_steps_e** | Report job step information | [optional] [default to &#39;false&#39;]
**disable_wait_for_result** | **slurm_rest_api_slurmdbV0039GetJobs_disable_wait_for_result_e** | Disable waiting for result from slurmdbd | [optional] [default to &#39;false&#39;]
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

[dbv0_0_39_job_info_t](dbv0_0_39_job_info.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0039GetQos**
```c
// Get QOS list
//
dbv0_0_39_qos_info_t* SlurmAPI_slurmdbV0039GetQos(apiClient_t *apiClient, slurm_rest_api_slurmdbV0039GetQos_with_deleted_e with_deleted);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**with_deleted** | **slurm_rest_api_slurmdbV0039GetQos_with_deleted_e** | Include deleted QOSs. False by default. | [optional] [default to &#39;false&#39;]

### Return type

[dbv0_0_39_qos_info_t](dbv0_0_39_qos_info.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0039GetSingleQos**
```c
// Get QOS info
//
dbv0_0_39_qos_info_t* SlurmAPI_slurmdbV0039GetSingleQos(apiClient_t *apiClient, char * qos_name, slurm_rest_api_slurmdbV0039GetSingleQos_with_deleted_e with_deleted);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**qos_name** | **char \*** | Slurm QOS Name | 
**with_deleted** | **slurm_rest_api_slurmdbV0039GetSingleQos_with_deleted_e** | Include deleted QOSs. False by default. | [optional] [default to &#39;false&#39;]

### Return type

[dbv0_0_39_qos_info_t](dbv0_0_39_qos_info.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0039GetTres**
```c
// Get TRES info
//
dbv0_0_39_tres_info_t* SlurmAPI_slurmdbV0039GetTres(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[dbv0_0_39_tres_info_t](dbv0_0_39_tres_info.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0039GetUser**
```c
// Get user info
//
dbv0_0_39_user_info_t* SlurmAPI_slurmdbV0039GetUser(apiClient_t *apiClient, char * user_name, slurm_rest_api_slurmdbV0039GetUser_with_deleted_e with_deleted);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**user_name** | **char \*** | Slurm User Name | 
**with_deleted** | **slurm_rest_api_slurmdbV0039GetUser_with_deleted_e** | Include deleted users. False by default. | [optional] [default to &#39;false&#39;]

### Return type

[dbv0_0_39_user_info_t](dbv0_0_39_user_info.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0039GetUsers**
```c
// Get user list
//
dbv0_0_39_user_info_t* SlurmAPI_slurmdbV0039GetUsers(apiClient_t *apiClient, slurm_rest_api_slurmdbV0039GetUsers_with_deleted_e with_deleted);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**with_deleted** | **slurm_rest_api_slurmdbV0039GetUsers_with_deleted_e** | Include deleted users. False by default. | [optional] [default to &#39;false&#39;]

### Return type

[dbv0_0_39_user_info_t](dbv0_0_39_user_info.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0039GetWckey**
```c
// Get wckey info
//
dbv0_0_39_wckey_info_t* SlurmAPI_slurmdbV0039GetWckey(apiClient_t *apiClient, char * wckey);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**wckey** | **char \*** | Slurm wckey name | 

### Return type

[dbv0_0_39_wckey_info_t](dbv0_0_39_wckey_info.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0039GetWckeys**
```c
// Get wckey list
//
dbv0_0_39_wckey_info_t* SlurmAPI_slurmdbV0039GetWckeys(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[dbv0_0_39_wckey_info_t](dbv0_0_39_wckey_info.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0039SetConfig**
```c
// Load all configuration information
//
status_t* SlurmAPI_slurmdbV0039SetConfig(apiClient_t *apiClient, dbv0_0_39_set_config_t * dbv0_0_39_set_config);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**dbv0_0_39_set_config** | **[dbv0_0_39_set_config_t](dbv0_0_39_set_config.md) \*** | Add or update config | [optional] 

### Return type

[status_t](status.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/json, application/x-yaml
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0039UpdateAccounts**
```c
// Update accounts
//
status_t* SlurmAPI_slurmdbV0039UpdateAccounts(apiClient_t *apiClient, dbv0_0_39_account_info_t * dbv0_0_39_account_info);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**dbv0_0_39_account_info** | **[dbv0_0_39_account_info_t](dbv0_0_39_account_info.md) \*** | update/create accounts | 

### Return type

[status_t](status.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/json, application/x-yaml
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0039UpdateAssociations**
```c
// Set associations info
//
status_t* SlurmAPI_slurmdbV0039UpdateAssociations(apiClient_t *apiClient, dbv0_0_39_associations_info_t * dbv0_0_39_associations_info);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**dbv0_0_39_associations_info** | **[dbv0_0_39_associations_info_t](dbv0_0_39_associations_info.md) \*** | Add or update associations | 

### Return type

[status_t](status.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/json, application/x-yaml
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0039UpdateQos**
```c
// Set QOS info
//
status_t* SlurmAPI_slurmdbV0039UpdateQos(apiClient_t *apiClient, dbv0_0_39_update_qos_t * dbv0_0_39_update_qos);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**dbv0_0_39_update_qos** | **[dbv0_0_39_update_qos_t](dbv0_0_39_update_qos.md) \*** | Add or update QOSs | 

### Return type

[status_t](status.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/json, application/x-yaml
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0039UpdateTres**
```c
// Set TRES info
//
status_t* SlurmAPI_slurmdbV0039UpdateTres(apiClient_t *apiClient, dbv0_0_39_tres_update_t * dbv0_0_39_tres_update);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**dbv0_0_39_tres_update** | **[dbv0_0_39_tres_update_t](dbv0_0_39_tres_update.md) \*** | Add or Update TRES | 

### Return type

[status_t](status.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/json, application/x-yaml
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbV0039UpdateUsers**
```c
// Update user
//
status_t* SlurmAPI_slurmdbV0039UpdateUsers(apiClient_t *apiClient, dbv0_0_39_update_users_t * dbv0_0_39_update_users);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**dbv0_0_39_update_users** | **[dbv0_0_39_update_users_t](dbv0_0_39_update_users.md) \*** | add or update user | 

### Return type

[status_t](status.md) *


### Authorization

[user](../README.md#user), [bearerAuth](../README.md#bearerAuth), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/json, application/x-yaml
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

