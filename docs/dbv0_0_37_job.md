# dbv0_0_37_job_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**account** | **char \*** | Account charged by job | [optional] 
**comment** | [**dbv0_0_37_job_comment_t**](dbv0_0_37_job_comment.md) \* |  | [optional] 
**allocation_nodes** | **char \*** | Nodes allocated to job | [optional] 
**array** | [**dbv0_0_37_job_array_t**](dbv0_0_37_job_array.md) \* |  | [optional] 
**time** | [**dbv0_0_37_job_time_t**](dbv0_0_37_job_time.md) \* |  | [optional] 
**association** | [**dbv0_0_37_association_short_info_t**](dbv0_0_37_association_short_info.md) \* |  | [optional] 
**cluster** | **char \*** | Assigned cluster | [optional] 
**constraints** | **char \*** | Constraints on job | [optional] 
**derived_exit_code** | [**dbv0_0_37_job_exit_code_t**](dbv0_0_37_job_exit_code.md) \* |  | [optional] 
**exit_code** | [**dbv0_0_37_job_exit_code_t**](dbv0_0_37_job_exit_code.md) \* |  | [optional] 
**flags** | **list_t \*** | List of properties of job | [optional] 
**group** | **char \*** | User&#39;s group to run job | [optional] 
**het** | [**dbv0_0_37_job_het_t**](dbv0_0_37_job_het.md) \* |  | [optional] 
**job_id** | **int** | Job id | [optional] 
**name** | **char \*** | Assigned job name | [optional] 
**mcs** | [**dbv0_0_37_job_mcs_t**](dbv0_0_37_job_mcs.md) \* |  | [optional] 
**nodes** | **char \*** | List of nodes allocated for job | [optional] 
**partition** | **char \*** | Assigned job&#39;s partition | [optional] 
**priority** | **int** | Priority | [optional] 
**qos** | **char \*** | Assigned qos name | [optional] 
**required** | [**dbv0_0_37_job_required_t**](dbv0_0_37_job_required.md) \* |  | [optional] 
**kill_request_user** | **char \*** | User who requested job killed | [optional] 
**reservation** | [**dbv0_0_37_job_reservation_t**](dbv0_0_37_job_reservation.md) \* |  | [optional] 
**state** | [**dbv0_0_37_job_state_t**](dbv0_0_37_job_state.md) \* |  | [optional] 
**steps** | [**list_t**](dbv0_0_37_job_step.md) \* | Job step description | [optional] 
**tres** | [**dbv0_0_37_job_tres_t**](dbv0_0_37_job_tres.md) \* |  | [optional] 
**user** | **char \*** | Job user | [optional] 
**wckey** | [**dbv0_0_37_job_wckey_t**](dbv0_0_37_job_wckey.md) \* |  | [optional] 
**working_directory** | **char \*** | Directory where job was initially started | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


