# v0_0_38_reservation_t

## Properties
Name | Type | Description | Notes
------------ | ------------- | ------------- | -------------
**accounts** | **char \*** | Allowed accounts | [optional] 
**burst_buffer** | **char \*** | Reserved burst buffer | [optional] 
**core_count** | **int** | Number of reserved cores | [optional] 
**core_spec_cnt** | **int** | Number of reserved specialized cores | [optional] 
**end_time** | **int** | End time of the reservation | [optional] 
**features** | **char \*** | List of features | [optional] 
**flags** | **list_t \*** | Reservation options | [optional] 
**groups** | **char \*** | List of groups permitted to use the reserved nodes | [optional] 
**licenses** | **char \*** | List of licenses | [optional] 
**max_start_delay** | **int** | Maximum delay in which jobs outside of the reservation will be permitted to overlap once any jobs are queued for the reservation | [optional] 
**name** | **char \*** | Reservationn name | [optional] 
**node_count** | **int** | Count of nodes reserved | [optional] 
**node_list** | **char \*** | List of reserved nodes | [optional] 
**partition** | **char \*** | Partition | [optional] 
**purge_completed** | [**v0_0_38_reservation_purge_completed_t**](v0_0_38_reservation_purge_completed.md) \* |  | [optional] 
**start_time** | **int** | Start time of reservation | [optional] 
**watts** | **int** | amount of power to reserve in watts | [optional] 
**tres** | **char \*** | List of TRES | [optional] 
**users** | **char \*** | List of users | [optional] 

[[Back to Model list]](../README.md#documentation-for-models) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to README]](../README.md)


