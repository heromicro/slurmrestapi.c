# v0_0_37_partition_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**flags** | **list_t \*** | partition options | [optional] 
**preemption_mode** | **list_t \*** | preemption type | [optional] 
**allowed_allocation_nodes** | **char \*** | list names of allowed allocating nodes | [optional] 
**allowed_accounts** | **char \*** | comma delimited list of accounts | [optional] 
**allowed_groups** | **char \*** | comma delimited list of groups | [optional] 
**allowed_qos** | **char \*** | comma delimited list of qos | [optional] 
**alternative** | **char \*** | name of alternate partition | [optional] 
**billing_weights** | **char \*** | TRES billing weights | [optional] 
**default_memory_per_cpu** | **long** | default MB memory per allocated CPU | [optional] 
**default_time_limit** | **long** | default time limit (minutes) | [optional] 
**denied_accounts** | **char \*** | comma delimited list of denied accounts | [optional] 
**denied_qos** | **char \*** | comma delimited list of denied qos | [optional] 
**preemption_grace_time** | **long** | preemption grace time (seconds) | [optional] 
**maximum_cpus_per_node** | **int** | maximum allocated CPUs per node | [optional] 
**maximum_memory_per_node** | **long** | maximum memory per allocated CPU (MiB) | [optional] 
**maximum_nodes_per_job** | **int** | Max nodes per job | [optional] 
**max_time_limit** | **long** | Max time limit per job | [optional] 
**min_nodes_per_job** | **int** | Min number of nodes per job | [optional] 
**name** | **char \*** | Partition name | [optional] 
**nodes** | **char \*** | list names of nodes in partition | [optional] 
**over_time_limit** | **int** | job&#39;s time limit can be exceeded by this number of minutes before cancellation | [optional] 
**priority_job_factor** | **int** | job priority weight factor | [optional] 
**priority_tier** | **int** | tier for scheduling and preemption | [optional] 
**qos** | **char \*** | partition QOS name | [optional] 
**state** | **char \*** | Partition state | [optional] 
**total_cpus** | **int** | Total cpus in partition | [optional] 
**total_nodes** | **int** | Total number of nodes in partition | [optional] 
**tres** | **char \*** | configured TRES in partition | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


