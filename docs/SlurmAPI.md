# SlurmAPI

All URIs are relative to *http://localhost*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SlurmAPI_slurmctldCancelJob**](SlurmAPI.md#SlurmAPI_slurmctldCancelJob) | **DELETE** /slurm/v0.0.37/job/{job_id} | cancel or signal job
[**SlurmAPI_slurmctldDiag**](SlurmAPI.md#SlurmAPI_slurmctldDiag) | **GET** /slurm/v0.0.37/diag | get diagnostics
[**SlurmAPI_slurmctldGetJob**](SlurmAPI.md#SlurmAPI_slurmctldGetJob) | **GET** /slurm/v0.0.37/job/{job_id} | get job info
[**SlurmAPI_slurmctldGetJobs**](SlurmAPI.md#SlurmAPI_slurmctldGetJobs) | **GET** /slurm/v0.0.37/jobs | get list of jobs
[**SlurmAPI_slurmctldGetNode**](SlurmAPI.md#SlurmAPI_slurmctldGetNode) | **GET** /slurm/v0.0.37/node/{node_name} | get node info
[**SlurmAPI_slurmctldGetNodes**](SlurmAPI.md#SlurmAPI_slurmctldGetNodes) | **GET** /slurm/v0.0.37/nodes | get all node info
[**SlurmAPI_slurmctldGetPartition**](SlurmAPI.md#SlurmAPI_slurmctldGetPartition) | **GET** /slurm/v0.0.37/partition/{partition_name} | get partition info
[**SlurmAPI_slurmctldGetPartitions**](SlurmAPI.md#SlurmAPI_slurmctldGetPartitions) | **GET** /slurm/v0.0.37/partitions | get all partition info
[**SlurmAPI_slurmctldGetReservation**](SlurmAPI.md#SlurmAPI_slurmctldGetReservation) | **GET** /slurm/v0.0.37/reservation/{reservation_name} | get reservation info
[**SlurmAPI_slurmctldGetReservations**](SlurmAPI.md#SlurmAPI_slurmctldGetReservations) | **GET** /slurm/v0.0.37/reservations | get all reservation info
[**SlurmAPI_slurmctldPing**](SlurmAPI.md#SlurmAPI_slurmctldPing) | **GET** /slurm/v0.0.37/ping | ping test
[**SlurmAPI_slurmctldSubmitJob**](SlurmAPI.md#SlurmAPI_slurmctldSubmitJob) | **POST** /slurm/v0.0.37/job/submit | submit new job
[**SlurmAPI_slurmctldUpdateJob**](SlurmAPI.md#SlurmAPI_slurmctldUpdateJob) | **POST** /slurm/v0.0.37/job/{job_id} | update job
[**SlurmAPI_slurmdbdAddClusters**](SlurmAPI.md#SlurmAPI_slurmdbdAddClusters) | **POST** /slurmdb/v0.0.37/clusters | Add clusters
[**SlurmAPI_slurmdbdAddWckeys**](SlurmAPI.md#SlurmAPI_slurmdbdAddWckeys) | **POST** /slurmdb/v0.0.37/wckeys | Add wckeys
[**SlurmAPI_slurmdbdDeleteAccount**](SlurmAPI.md#SlurmAPI_slurmdbdDeleteAccount) | **DELETE** /slurmdb/v0.0.37/account/{account_name} | Delete account
[**SlurmAPI_slurmdbdDeleteAssociation**](SlurmAPI.md#SlurmAPI_slurmdbdDeleteAssociation) | **DELETE** /slurmdb/v0.0.37/association | Delete association
[**SlurmAPI_slurmdbdDeleteCluster**](SlurmAPI.md#SlurmAPI_slurmdbdDeleteCluster) | **DELETE** /slurmdb/v0.0.37/cluster/{cluster_name} | Delete cluster
[**SlurmAPI_slurmdbdDeleteQos**](SlurmAPI.md#SlurmAPI_slurmdbdDeleteQos) | **DELETE** /slurmdb/v0.0.37/qos/{qos_name} | Delete QOS
[**SlurmAPI_slurmdbdDeleteUser**](SlurmAPI.md#SlurmAPI_slurmdbdDeleteUser) | **DELETE** /slurmdb/v0.0.37/user/{user_name} | Delete user
[**SlurmAPI_slurmdbdDeleteWckey**](SlurmAPI.md#SlurmAPI_slurmdbdDeleteWckey) | **DELETE** /slurmdb/v0.0.37/wckey/{wckey} | Delete wckey
[**SlurmAPI_slurmdbdDiag**](SlurmAPI.md#SlurmAPI_slurmdbdDiag) | **GET** /slurmdb/v0.0.37/diag | Get slurmdb diagnostics
[**SlurmAPI_slurmdbdGetAccount**](SlurmAPI.md#SlurmAPI_slurmdbdGetAccount) | **GET** /slurmdb/v0.0.37/account/{account_name} | Get account info
[**SlurmAPI_slurmdbdGetAccounts**](SlurmAPI.md#SlurmAPI_slurmdbdGetAccounts) | **GET** /slurmdb/v0.0.37/accounts | Get account list
[**SlurmAPI_slurmdbdGetAssociation**](SlurmAPI.md#SlurmAPI_slurmdbdGetAssociation) | **GET** /slurmdb/v0.0.37/association | Get association info
[**SlurmAPI_slurmdbdGetAssociations**](SlurmAPI.md#SlurmAPI_slurmdbdGetAssociations) | **GET** /slurmdb/v0.0.37/associations | Get association list
[**SlurmAPI_slurmdbdGetCluster**](SlurmAPI.md#SlurmAPI_slurmdbdGetCluster) | **GET** /slurmdb/v0.0.37/cluster/{cluster_name} | Get cluster info
[**SlurmAPI_slurmdbdGetClusters**](SlurmAPI.md#SlurmAPI_slurmdbdGetClusters) | **GET** /slurmdb/v0.0.37/clusters | Get cluster list
[**SlurmAPI_slurmdbdGetDbConfig**](SlurmAPI.md#SlurmAPI_slurmdbdGetDbConfig) | **GET** /slurmdb/v0.0.37/config | Dump all configuration information
[**SlurmAPI_slurmdbdGetJob**](SlurmAPI.md#SlurmAPI_slurmdbdGetJob) | **GET** /slurmdb/v0.0.37/job/{job_id} | Get job info
[**SlurmAPI_slurmdbdGetJobs**](SlurmAPI.md#SlurmAPI_slurmdbdGetJobs) | **GET** /slurmdb/v0.0.37/jobs | Get job list
[**SlurmAPI_slurmdbdGetQos**](SlurmAPI.md#SlurmAPI_slurmdbdGetQos) | **GET** /slurmdb/v0.0.37/qos | Get QOS list
[**SlurmAPI_slurmdbdGetSingleQos**](SlurmAPI.md#SlurmAPI_slurmdbdGetSingleQos) | **GET** /slurmdb/v0.0.37/qos/{qos_name} | Get QOS info
[**SlurmAPI_slurmdbdGetTres**](SlurmAPI.md#SlurmAPI_slurmdbdGetTres) | **GET** /slurmdb/v0.0.37/tres | Get TRES info
[**SlurmAPI_slurmdbdGetUser**](SlurmAPI.md#SlurmAPI_slurmdbdGetUser) | **GET** /slurmdb/v0.0.37/user/{user_name} | Get user info
[**SlurmAPI_slurmdbdGetUsers**](SlurmAPI.md#SlurmAPI_slurmdbdGetUsers) | **GET** /slurmdb/v0.0.37/users | Get user list
[**SlurmAPI_slurmdbdGetWckey**](SlurmAPI.md#SlurmAPI_slurmdbdGetWckey) | **GET** /slurmdb/v0.0.37/wckey/{wckey} | Get wckey info
[**SlurmAPI_slurmdbdGetWckeys**](SlurmAPI.md#SlurmAPI_slurmdbdGetWckeys) | **GET** /slurmdb/v0.0.37/wckeys | Get wckey list
[**SlurmAPI_slurmdbdSetDbConfig**](SlurmAPI.md#SlurmAPI_slurmdbdSetDbConfig) | **POST** /slurmdb/v0.0.37/config | Load all configuration information
[**SlurmAPI_slurmdbdUpdateAccount**](SlurmAPI.md#SlurmAPI_slurmdbdUpdateAccount) | **POST** /slurmdb/v0.0.37/accounts | Update accounts
[**SlurmAPI_slurmdbdUpdateAssociations**](SlurmAPI.md#SlurmAPI_slurmdbdUpdateAssociations) | **POST** /slurmdb/v0.0.37/associations | Set associations info
[**SlurmAPI_slurmdbdUpdateTres**](SlurmAPI.md#SlurmAPI_slurmdbdUpdateTres) | **POST** /slurmdb/v0.0.37/tres | Set TRES info
[**SlurmAPI_slurmdbdUpdateUsers**](SlurmAPI.md#SlurmAPI_slurmdbdUpdateUsers) | **POST** /slurmdb/v0.0.37/users | Update user


# **SlurmAPI_slurmctldCancelJob**
```c
// cancel or signal job
//
void SlurmAPI_slurmctldCancelJob(apiClient_t *apiClient, char * job_id, v0_0_37_signal_e signal);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**job_id** | **char \*** | Slurm Job ID | 
**signal** | **v0_0_37_signal_e** | signal to send to job | [optional] 

### Return type

void

### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmctldDiag**
```c
// get diagnostics
//
v0_0_37_diag_t* SlurmAPI_slurmctldDiag(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[v0_0_37_diag_t](v0_0_37_diag.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmctldGetJob**
```c
// get job info
//
v0_0_37_jobs_response_t* SlurmAPI_slurmctldGetJob(apiClient_t *apiClient, char * job_id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**job_id** | **char \*** | Slurm JobID | 

### Return type

[v0_0_37_jobs_response_t](v0_0_37_jobs_response.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmctldGetJobs**
```c
// get list of jobs
//
v0_0_37_jobs_response_t* SlurmAPI_slurmctldGetJobs(apiClient_t *apiClient, long update_time);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**update_time** | **long** | Filter if changed since update_time. Use of this parameter can result in faster replies. | [optional] 

### Return type

[v0_0_37_jobs_response_t](v0_0_37_jobs_response.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmctldGetNode**
```c
// get node info
//
v0_0_37_nodes_response_t* SlurmAPI_slurmctldGetNode(apiClient_t *apiClient, char * node_name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**node_name** | **char \*** | Slurm Node Name | 

### Return type

[v0_0_37_nodes_response_t](v0_0_37_nodes_response.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmctldGetNodes**
```c
// get all node info
//
v0_0_37_nodes_response_t* SlurmAPI_slurmctldGetNodes(apiClient_t *apiClient, long update_time);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**update_time** | **long** | Filter if changed since update_time. Use of this parameter can result in faster replies. | [optional] 

### Return type

[v0_0_37_nodes_response_t](v0_0_37_nodes_response.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmctldGetPartition**
```c
// get partition info
//
v0_0_37_partitions_response_t* SlurmAPI_slurmctldGetPartition(apiClient_t *apiClient, char * partition_name, long update_time);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**partition_name** | **char \*** | Slurm Partition Name | 
**update_time** | **long** | Filter if there were no partition changes (not limited to partition in URL endpoint) since update_time. | [optional] 

### Return type

[v0_0_37_partitions_response_t](v0_0_37_partitions_response.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmctldGetPartitions**
```c
// get all partition info
//
v0_0_37_partitions_response_t* SlurmAPI_slurmctldGetPartitions(apiClient_t *apiClient, long update_time);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**update_time** | **long** | Filter if changed since update_time. Use of this parameter can result in faster replies. | [optional] 

### Return type

[v0_0_37_partitions_response_t](v0_0_37_partitions_response.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmctldGetReservation**
```c
// get reservation info
//
v0_0_37_reservations_response_t* SlurmAPI_slurmctldGetReservation(apiClient_t *apiClient, char * reservation_name, long update_time);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**reservation_name** | **char \*** | Slurm Reservation Name | 
**update_time** | **long** | Filter if no reservation (not limited to reservation in URL) changed since update_time. | [optional] 

### Return type

[v0_0_37_reservations_response_t](v0_0_37_reservations_response.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmctldGetReservations**
```c
// get all reservation info
//
v0_0_37_reservations_response_t* SlurmAPI_slurmctldGetReservations(apiClient_t *apiClient, long update_time);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**update_time** | **long** | Filter if changed since update_time. Use of this parameter can result in faster replies. | [optional] 

### Return type

[v0_0_37_reservations_response_t](v0_0_37_reservations_response.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmctldPing**
```c
// ping test
//
v0_0_37_pings_t* SlurmAPI_slurmctldPing(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[v0_0_37_pings_t](v0_0_37_pings.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmctldSubmitJob**
```c
// submit new job
//
v0_0_37_job_submission_response_t* SlurmAPI_slurmctldSubmitJob(apiClient_t *apiClient, v0_0_37_job_submission_t * v0_0_37_job_submission);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**v0_0_37_job_submission** | **[v0_0_37_job_submission_t](v0_0_37_job_submission.md) \*** | submit new job | 

### Return type

[v0_0_37_job_submission_response_t](v0_0_37_job_submission_response.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/json, application/x-yaml
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmctldUpdateJob**
```c
// update job
//
void SlurmAPI_slurmctldUpdateJob(apiClient_t *apiClient, char * job_id, v0_0_37_job_properties_t * v0_0_37_job_properties);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**job_id** | **char \*** | Slurm Job ID | 
**v0_0_37_job_properties** | **[v0_0_37_job_properties_t](v0_0_37_job_properties.md) \*** | update job | 

### Return type

void

### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: application/json, application/x-yaml
 - **Accept**: Not defined

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbdAddClusters**
```c
// Add clusters
//
dbv0_0_37_response_cluster_add_t* SlurmAPI_slurmdbdAddClusters(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[dbv0_0_37_response_cluster_add_t](dbv0_0_37_response_cluster_add.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbdAddWckeys**
```c
// Add wckeys
//
dbv0_0_37_response_wckey_add_t* SlurmAPI_slurmdbdAddWckeys(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[dbv0_0_37_response_wckey_add_t](dbv0_0_37_response_wckey_add.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbdDeleteAccount**
```c
// Delete account
//
dbv0_0_37_response_account_delete_t* SlurmAPI_slurmdbdDeleteAccount(apiClient_t *apiClient, char * account_name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**account_name** | **char \*** | Slurm Account Name | 

### Return type

[dbv0_0_37_response_account_delete_t](dbv0_0_37_response_account_delete.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbdDeleteAssociation**
```c
// Delete association
//
dbv0_0_37_response_association_delete_t* SlurmAPI_slurmdbdDeleteAssociation(apiClient_t *apiClient, char * account, char * user, char * cluster, char * partition);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**account** | **char \*** | Account name | 
**user** | **char \*** | User name | 
**cluster** | **char \*** | Cluster name | [optional] 
**partition** | **char \*** | Partition Name | [optional] 

### Return type

[dbv0_0_37_response_association_delete_t](dbv0_0_37_response_association_delete.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbdDeleteCluster**
```c
// Delete cluster
//
dbv0_0_37_response_cluster_delete_t* SlurmAPI_slurmdbdDeleteCluster(apiClient_t *apiClient, char * cluster_name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cluster_name** | **char \*** | Slurm cluster name | 

### Return type

[dbv0_0_37_response_cluster_delete_t](dbv0_0_37_response_cluster_delete.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbdDeleteQos**
```c
// Delete QOS
//
dbv0_0_37_response_qos_delete_t* SlurmAPI_slurmdbdDeleteQos(apiClient_t *apiClient, char * qos_name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**qos_name** | **char \*** | Slurm QOS Name | 

### Return type

[dbv0_0_37_response_qos_delete_t](dbv0_0_37_response_qos_delete.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbdDeleteUser**
```c
// Delete user
//
dbv0_0_37_response_user_delete_t* SlurmAPI_slurmdbdDeleteUser(apiClient_t *apiClient, char * user_name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**user_name** | **char \*** | Slurm User Name | 

### Return type

[dbv0_0_37_response_user_delete_t](dbv0_0_37_response_user_delete.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbdDeleteWckey**
```c
// Delete wckey
//
dbv0_0_37_response_wckey_delete_t* SlurmAPI_slurmdbdDeleteWckey(apiClient_t *apiClient, char * wckey);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**wckey** | **char \*** | Slurm wckey name | 

### Return type

[dbv0_0_37_response_wckey_delete_t](dbv0_0_37_response_wckey_delete.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbdDiag**
```c
// Get slurmdb diagnostics
//
dbv0_0_37_diag_t* SlurmAPI_slurmdbdDiag(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[dbv0_0_37_diag_t](dbv0_0_37_diag.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbdGetAccount**
```c
// Get account info
//
dbv0_0_37_account_info_t* SlurmAPI_slurmdbdGetAccount(apiClient_t *apiClient, char * account_name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**account_name** | **char \*** | Slurm Account Name | 

### Return type

[dbv0_0_37_account_info_t](dbv0_0_37_account_info.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbdGetAccounts**
```c
// Get account list
//
dbv0_0_37_account_info_t* SlurmAPI_slurmdbdGetAccounts(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[dbv0_0_37_account_info_t](dbv0_0_37_account_info.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbdGetAssociation**
```c
// Get association info
//
dbv0_0_37_associations_info_t* SlurmAPI_slurmdbdGetAssociation(apiClient_t *apiClient, char * cluster, char * account, char * user, char * partition);
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

[dbv0_0_37_associations_info_t](dbv0_0_37_associations_info.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbdGetAssociations**
```c
// Get association list
//
dbv0_0_37_associations_info_t* SlurmAPI_slurmdbdGetAssociations(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[dbv0_0_37_associations_info_t](dbv0_0_37_associations_info.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbdGetCluster**
```c
// Get cluster info
//
dbv0_0_37_cluster_info_t* SlurmAPI_slurmdbdGetCluster(apiClient_t *apiClient, char * cluster_name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**cluster_name** | **char \*** | Slurm cluster name | 

### Return type

[dbv0_0_37_cluster_info_t](dbv0_0_37_cluster_info.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbdGetClusters**
```c
// Get cluster list
//
dbv0_0_37_cluster_info_t* SlurmAPI_slurmdbdGetClusters(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[dbv0_0_37_cluster_info_t](dbv0_0_37_cluster_info.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbdGetDbConfig**
```c
// Dump all configuration information
//
dbv0_0_37_config_info_t* SlurmAPI_slurmdbdGetDbConfig(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[dbv0_0_37_config_info_t](dbv0_0_37_config_info.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbdGetJob**
```c
// Get job info
//
// This endpoint may return multiple job entries since job_id is not a unique key - only the tuple (cluster, job_id, start_time) is unique. If the requested job_id is a component of a heterogeneous job all components are returned.
//
dbv0_0_37_job_info_t* SlurmAPI_slurmdbdGetJob(apiClient_t *apiClient, long job_id);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**job_id** | **long** | Slurm Job ID | 

### Return type

[dbv0_0_37_job_info_t](dbv0_0_37_job_info.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbdGetJobs**
```c
// Get job list
//
dbv0_0_37_job_info_t* SlurmAPI_slurmdbdGetJobs(apiClient_t *apiClient, char * submit_time, char * start_time, char * end_time, char * account, char * association, char * cluster, char * constraints, char * cpus_max, char * cpus_min, int skip_steps, int disable_wait_for_result, char * exit_code, char * format, char * group, char * job_name, char * nodes_max, char * nodes_min, char * partition, char * qos, char * reason, char * reservation, char * state, char * step, char * node, char * wckey);
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

[dbv0_0_37_job_info_t](dbv0_0_37_job_info.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbdGetQos**
```c
// Get QOS list
//
dbv0_0_37_qos_info_t* SlurmAPI_slurmdbdGetQos(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[dbv0_0_37_qos_info_t](dbv0_0_37_qos_info.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbdGetSingleQos**
```c
// Get QOS info
//
dbv0_0_37_qos_info_t* SlurmAPI_slurmdbdGetSingleQos(apiClient_t *apiClient, char * qos_name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**qos_name** | **char \*** | Slurm QOS Name | 

### Return type

[dbv0_0_37_qos_info_t](dbv0_0_37_qos_info.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbdGetTres**
```c
// Get TRES info
//
dbv0_0_37_tres_info_t* SlurmAPI_slurmdbdGetTres(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[dbv0_0_37_tres_info_t](dbv0_0_37_tres_info.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbdGetUser**
```c
// Get user info
//
dbv0_0_37_user_info_t* SlurmAPI_slurmdbdGetUser(apiClient_t *apiClient, char * user_name);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**user_name** | **char \*** | Slurm User Name | 

### Return type

[dbv0_0_37_user_info_t](dbv0_0_37_user_info.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbdGetUsers**
```c
// Get user list
//
dbv0_0_37_user_info_t* SlurmAPI_slurmdbdGetUsers(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[dbv0_0_37_user_info_t](dbv0_0_37_user_info.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbdGetWckey**
```c
// Get wckey info
//
dbv0_0_37_wckey_info_t* SlurmAPI_slurmdbdGetWckey(apiClient_t *apiClient, char * wckey);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**wckey** | **char \*** | Slurm wckey name | 

### Return type

[dbv0_0_37_wckey_info_t](dbv0_0_37_wckey_info.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbdGetWckeys**
```c
// Get wckey list
//
dbv0_0_37_wckey_info_t* SlurmAPI_slurmdbdGetWckeys(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[dbv0_0_37_wckey_info_t](dbv0_0_37_wckey_info.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbdSetDbConfig**
```c
// Load all configuration information
//
dbv0_0_37_config_response_t* SlurmAPI_slurmdbdSetDbConfig(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[dbv0_0_37_config_response_t](dbv0_0_37_config_response.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbdUpdateAccount**
```c
// Update accounts
//
dbv0_0_37_account_response_t* SlurmAPI_slurmdbdUpdateAccount(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[dbv0_0_37_account_response_t](dbv0_0_37_account_response.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbdUpdateAssociations**
```c
// Set associations info
//
dbv0_0_37_response_associations_t* SlurmAPI_slurmdbdUpdateAssociations(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[dbv0_0_37_response_associations_t](dbv0_0_37_response_associations.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbdUpdateTres**
```c
// Set TRES info
//
dbv0_0_37_response_tres_t* SlurmAPI_slurmdbdUpdateTres(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[dbv0_0_37_response_tres_t](dbv0_0_37_response_tres.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SlurmAPI_slurmdbdUpdateUsers**
```c
// Update user
//
dbv0_0_37_response_user_update_t* SlurmAPI_slurmdbdUpdateUsers(apiClient_t *apiClient);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |

### Return type

[dbv0_0_37_response_user_update_t](dbv0_0_37_response_user_update.md) *


### Authorization

[user](../README.md#user), [token](../README.md#token)

### HTTP request headers

 - **Content-Type**: Not defined
 - **Accept**: application/json, application/x-yaml

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

