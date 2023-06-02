cmake_minimum_required (VERSION 2.6...3.10.2)
project (CGenerator)

cmake_policy(SET CMP0063 NEW)

set(CMAKE_C_VISIBILITY_PRESET default)
set(CMAKE_CXX_VISIBILITY_PRESET default)
set(CMAKE_VISIBILITY_INLINES_HIDDEN OFF)
set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)

option(BUILD_SHARED_LIBS "Build using shared libraries" ON)

find_package(OpenSSL)

if (OPENSSL_FOUND)
    message (STATUS "OPENSSL found")

    set(CMAKE_C_FLAGS "-DOPENSSL")
    if(CMAKE_VERSION VERSION_LESS 3.4)
        include_directories(${OPENSSL_INCLUDE_DIR})
        include_directories(${OPENSSL_INCLUDE_DIRS})
        link_directories(${OPENSSL_LIBRARIES})
    endif()

    message(STATUS "Using OpenSSL ${OPENSSL_VERSION}")
else()
    message (STATUS "OpenSSL Not found.")
endif()

set(pkgName "slurm_rest_api")

# this default version can be overridden in PreTarget.cmake
set(PROJECT_VERSION_MAJOR 0)
set(PROJECT_VERSION_MINOR 0)
set(PROJECT_VERSION_PATCH 1)

if( (DEFINED CURL_INCLUDE_DIR) AND (DEFINED CURL_LIBRARIES))
    include_directories(${CURL_INCLUDE_DIR})
    set(PLATFORM_LIBRARIES ${PLATFORM_LIBRARIES} ${CURL_LIBRARIES} )
else()
    find_package(CURL 7.58.0 REQUIRED)
    if(CURL_FOUND)
        include_directories(${CURL_INCLUDE_DIR})
        set(PLATFORM_LIBRARIES ${PLATFORM_LIBRARIES} ${CURL_LIBRARIES} )
    else(CURL_FOUND)
        message(FATAL_ERROR "Could not find the CURL library and development files.")
    endif()
endif()

set(SRCS
    src/list.c
    src/apiKey.c
    src/apiClient.c
    src/binary.c
    external/cJSON.c
    model/object.c
    model/dbv0_0_39_account_info.c
    model/dbv0_0_39_associations_info.c
    model/dbv0_0_39_clusters_info.c
    model/dbv0_0_39_config_info.c
    model/dbv0_0_39_diag.c
    model/dbv0_0_39_error.c
    model/dbv0_0_39_job_info.c
    model/dbv0_0_39_meta.c
    model/dbv0_0_39_qos_info.c
    model/dbv0_0_39_response_associations_delete.c
    model/dbv0_0_39_set_config.c
    model/dbv0_0_39_tres_info.c
    model/dbv0_0_39_tres_update.c
    model/dbv0_0_39_update_qos.c
    model/dbv0_0_39_update_users.c
    model/dbv0_0_39_user_info.c
    model/dbv0_0_39_warning.c
    model/dbv0_0_39_wckey_info.c
    model/status.c
    model/v0_0_39_account.c
    model/v0_0_39_accounting.c
    model/v0_0_39_accounting_allocated.c
    model/v0_0_39_acct_gather_energy.c
    model/v0_0_39_assoc.c
    model/v0_0_39_assoc_default.c
    model/v0_0_39_assoc_max.c
    model/v0_0_39_assoc_max_jobs.c
    model/v0_0_39_assoc_max_jobs_per.c
    model/v0_0_39_assoc_min.c
    model/v0_0_39_assoc_short.c
    model/v0_0_39_assoc_usage.c
    model/v0_0_39_cluster_rec.c
    model/v0_0_39_cluster_rec_associations.c
    model/v0_0_39_cluster_rec_controller.c
    model/v0_0_39_controller_ping.c
    model/v0_0_39_coord.c
    model/v0_0_39_cron_entry.c
    model/v0_0_39_cron_entry_line.c
    model/v0_0_39_diag.c
    model/v0_0_39_error.c
    model/v0_0_39_ext_sensors_data.c
    model/v0_0_39_float64_no_val.c
    model/v0_0_39_job.c
    model/v0_0_39_job_array.c
    model/v0_0_39_job_array_response_msg_inner.c
    model/v0_0_39_job_comment.c
    model/v0_0_39_job_desc_msg.c
    model/v0_0_39_job_exit_code.c
    model/v0_0_39_job_exit_code_signal.c
    model/v0_0_39_job_het.c
    model/v0_0_39_job_info.c
    model/v0_0_39_job_info_power.c
    model/v0_0_39_job_mcs.c
    model/v0_0_39_job_required.c
    model/v0_0_39_job_res.c
    model/v0_0_39_job_reservation.c
    model/v0_0_39_job_state.c
    model/v0_0_39_job_submission.c
    model/v0_0_39_job_submission_response.c
    model/v0_0_39_job_time.c
    model/v0_0_39_job_time_user.c
    model/v0_0_39_job_tres.c
    model/v0_0_39_job_update_response.c
    model/v0_0_39_jobs_response.c
    model/v0_0_39_license.c
    model/v0_0_39_licenses_info.c
    model/v0_0_39_meta.c
    model/v0_0_39_meta_plugin.c
    model/v0_0_39_meta_slurm.c
    model/v0_0_39_meta_slurm_version.c
    model/v0_0_39_node.c
    model/v0_0_39_nodes_response.c
    model/v0_0_39_partition_info.c
    model/v0_0_39_partition_info_accounts.c
    model/v0_0_39_partition_info_defaults.c
    model/v0_0_39_partition_info_groups.c
    model/v0_0_39_partition_info_maximums.c
    model/v0_0_39_partition_info_minimums.c
    model/v0_0_39_partition_info_nodes.c
    model/v0_0_39_partition_info_priority.c
    model/v0_0_39_partition_info_qos.c
    model/v0_0_39_partition_info_timeouts.c
    model/v0_0_39_partition_info_tres.c
    model/v0_0_39_partitions_response.c
    model/v0_0_39_pings.c
    model/v0_0_39_power_mgmt_data.c
    model/v0_0_39_qos.c
    model/v0_0_39_qos_limits.c
    model/v0_0_39_qos_limits_min.c
    model/v0_0_39_qos_limits_min_tres.c
    model/v0_0_39_qos_limits_min_tres_per.c
    model/v0_0_39_qos_preempt.c
    model/v0_0_39_reservation_core_spec.c
    model/v0_0_39_reservation_info.c
    model/v0_0_39_reservation_info_purge_completed.c
    model/v0_0_39_reservations_response.c
    model/v0_0_39_rollup_stats_inner.c
    model/v0_0_39_slurm_step_id.c
    model/v0_0_39_stats_msg.c
    model/v0_0_39_stats_msg_rpcs_by_type_inner.c
    model/v0_0_39_stats_msg_rpcs_by_user_inner.c
    model/v0_0_39_stats_rec.c
    model/v0_0_39_stats_rpc.c
    model/v0_0_39_stats_rpc_time.c
    model/v0_0_39_stats_user.c
    model/v0_0_39_step.c
    model/v0_0_39_step_cpu.c
    model/v0_0_39_step_nodes.c
    model/v0_0_39_step_statistics.c
    model/v0_0_39_step_statistics_energy.c
    model/v0_0_39_step_task.c
    model/v0_0_39_step_tasks.c
    model/v0_0_39_step_time.c
    model/v0_0_39_step_time_user.c
    model/v0_0_39_step_tres.c
    model/v0_0_39_tres.c
    model/v0_0_39_uint16_no_val.c
    model/v0_0_39_uint32_no_val.c
    model/v0_0_39_uint64_no_val.c
    model/v0_0_39_update_node_msg.c
    model/v0_0_39_user.c
    model/v0_0_39_user_default.c
    model/v0_0_39_warning.c
    model/v0_0_39_wckey.c
    model/v0_0_39_wckey_tag.c
    api/OpenapiAPI.c
    api/SlurmAPI.c

)

set(HDRS
    include/apiClient.h
    include/list.h
    include/binary.h
    include/keyValuePair.h
    external/cJSON.h
    model/object.h
    model/dbv0_0_39_account_info.h
    model/dbv0_0_39_associations_info.h
    model/dbv0_0_39_clusters_info.h
    model/dbv0_0_39_config_info.h
    model/dbv0_0_39_diag.h
    model/dbv0_0_39_error.h
    model/dbv0_0_39_job_info.h
    model/dbv0_0_39_meta.h
    model/dbv0_0_39_qos_info.h
    model/dbv0_0_39_response_associations_delete.h
    model/dbv0_0_39_set_config.h
    model/dbv0_0_39_tres_info.h
    model/dbv0_0_39_tres_update.h
    model/dbv0_0_39_update_qos.h
    model/dbv0_0_39_update_users.h
    model/dbv0_0_39_user_info.h
    model/dbv0_0_39_warning.h
    model/dbv0_0_39_wckey_info.h
    model/status.h
    model/v0_0_39_account.h
    model/v0_0_39_accounting.h
    model/v0_0_39_accounting_allocated.h
    model/v0_0_39_acct_gather_energy.h
    model/v0_0_39_assoc.h
    model/v0_0_39_assoc_default.h
    model/v0_0_39_assoc_max.h
    model/v0_0_39_assoc_max_jobs.h
    model/v0_0_39_assoc_max_jobs_per.h
    model/v0_0_39_assoc_min.h
    model/v0_0_39_assoc_short.h
    model/v0_0_39_assoc_usage.h
    model/v0_0_39_cluster_rec.h
    model/v0_0_39_cluster_rec_associations.h
    model/v0_0_39_cluster_rec_controller.h
    model/v0_0_39_controller_ping.h
    model/v0_0_39_coord.h
    model/v0_0_39_cron_entry.h
    model/v0_0_39_cron_entry_line.h
    model/v0_0_39_diag.h
    model/v0_0_39_error.h
    model/v0_0_39_ext_sensors_data.h
    model/v0_0_39_float64_no_val.h
    model/v0_0_39_job.h
    model/v0_0_39_job_array.h
    model/v0_0_39_job_array_response_msg_inner.h
    model/v0_0_39_job_comment.h
    model/v0_0_39_job_desc_msg.h
    model/v0_0_39_job_exit_code.h
    model/v0_0_39_job_exit_code_signal.h
    model/v0_0_39_job_het.h
    model/v0_0_39_job_info.h
    model/v0_0_39_job_info_power.h
    model/v0_0_39_job_mcs.h
    model/v0_0_39_job_required.h
    model/v0_0_39_job_res.h
    model/v0_0_39_job_reservation.h
    model/v0_0_39_job_state.h
    model/v0_0_39_job_submission.h
    model/v0_0_39_job_submission_response.h
    model/v0_0_39_job_time.h
    model/v0_0_39_job_time_user.h
    model/v0_0_39_job_tres.h
    model/v0_0_39_job_update_response.h
    model/v0_0_39_jobs_response.h
    model/v0_0_39_license.h
    model/v0_0_39_licenses_info.h
    model/v0_0_39_meta.h
    model/v0_0_39_meta_plugin.h
    model/v0_0_39_meta_slurm.h
    model/v0_0_39_meta_slurm_version.h
    model/v0_0_39_node.h
    model/v0_0_39_nodes_response.h
    model/v0_0_39_partition_info.h
    model/v0_0_39_partition_info_accounts.h
    model/v0_0_39_partition_info_defaults.h
    model/v0_0_39_partition_info_groups.h
    model/v0_0_39_partition_info_maximums.h
    model/v0_0_39_partition_info_minimums.h
    model/v0_0_39_partition_info_nodes.h
    model/v0_0_39_partition_info_priority.h
    model/v0_0_39_partition_info_qos.h
    model/v0_0_39_partition_info_timeouts.h
    model/v0_0_39_partition_info_tres.h
    model/v0_0_39_partitions_response.h
    model/v0_0_39_pings.h
    model/v0_0_39_power_mgmt_data.h
    model/v0_0_39_qos.h
    model/v0_0_39_qos_limits.h
    model/v0_0_39_qos_limits_min.h
    model/v0_0_39_qos_limits_min_tres.h
    model/v0_0_39_qos_limits_min_tres_per.h
    model/v0_0_39_qos_preempt.h
    model/v0_0_39_reservation_core_spec.h
    model/v0_0_39_reservation_info.h
    model/v0_0_39_reservation_info_purge_completed.h
    model/v0_0_39_reservations_response.h
    model/v0_0_39_rollup_stats_inner.h
    model/v0_0_39_slurm_step_id.h
    model/v0_0_39_stats_msg.h
    model/v0_0_39_stats_msg_rpcs_by_type_inner.h
    model/v0_0_39_stats_msg_rpcs_by_user_inner.h
    model/v0_0_39_stats_rec.h
    model/v0_0_39_stats_rpc.h
    model/v0_0_39_stats_rpc_time.h
    model/v0_0_39_stats_user.h
    model/v0_0_39_step.h
    model/v0_0_39_step_cpu.h
    model/v0_0_39_step_nodes.h
    model/v0_0_39_step_statistics.h
    model/v0_0_39_step_statistics_energy.h
    model/v0_0_39_step_task.h
    model/v0_0_39_step_tasks.h
    model/v0_0_39_step_time.h
    model/v0_0_39_step_time_user.h
    model/v0_0_39_step_tres.h
    model/v0_0_39_tres.h
    model/v0_0_39_uint16_no_val.h
    model/v0_0_39_uint32_no_val.h
    model/v0_0_39_uint64_no_val.h
    model/v0_0_39_update_node_msg.h
    model/v0_0_39_user.h
    model/v0_0_39_user_default.h
    model/v0_0_39_warning.h
    model/v0_0_39_wckey.h
    model/v0_0_39_wckey_tag.h
    api/OpenapiAPI.h
    api/SlurmAPI.h

)

include(PreTarget.cmake OPTIONAL)

set(PROJECT_VERSION_STRING "${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH}")

# Add library with project file with project name as library name
add_library(${pkgName} ${SRCS} ${HDRS})
# Link dependent libraries
if(NOT CMAKE_VERSION VERSION_LESS 3.4)
    target_link_libraries(${pkgName} PRIVATE OpenSSL::SSL OpenSSL::Crypto)
endif()
target_link_libraries(${pkgName} PUBLIC ${CURL_LIBRARIES} )
target_include_directories(
    ${pkgName} PUBLIC $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}>
    $<INSTALL_INTERFACE:include>
)

include(PostTarget.cmake OPTIONAL)

# installation of libraries, headers, and config files
if (NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in)
    install(TARGETS ${pkgName} DESTINATION lib)
else()
    include(GNUInstallDirs)
    install(TARGETS ${pkgName} DESTINATION lib EXPORT ${pkgName}Targets)

    foreach(HDR_FILE ${HDRS})
        get_filename_component(HDR_DIRECTORY ${HDR_FILE} DIRECTORY)
        get_filename_component(ABSOLUTE_HDR_DIRECTORY ${HDR_DIRECTORY} ABSOLUTE)
        file(RELATIVE_PATH RELATIVE_HDR_PATH ${CMAKE_CURRENT_SOURCE_DIR} ${ABSOLUTE_HDR_DIRECTORY})
        install(FILES ${HDR_FILE} DESTINATION include/${pkgName}/${RELATIVE_HDR_PATH})
    endforeach()

    include(CMakePackageConfigHelpers)
    write_basic_package_version_file(
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}ConfigVersion.cmake"
            VERSION "${PROJECT_VERSION_STRING}"
            COMPATIBILITY AnyNewerVersion
    )

    export(EXPORT ${pkgName}Targets
            FILE "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Targets.cmake"
            NAMESPACE ${pkgName}::
            )

    configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Config.cmake.in
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Config.cmake"
            @ONLY
            )

    set(ConfigPackageLocation lib/cmake/${pkgName})
    install(EXPORT ${pkgName}Targets
            FILE
            ${pkgName}Targets.cmake
            NAMESPACE
            ${pkgName}::
            DESTINATION
            ${ConfigPackageLocation}
            )
    install(
            FILES
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}Config.cmake"
            "${CMAKE_CURRENT_BINARY_DIR}/${pkgName}/${pkgName}ConfigVersion.cmake"
            DESTINATION
            ${ConfigPackageLocation}
    )
endif()

# make installation packages
include(Packing.cmake OPTIONAL)

# Setting file variables to null
set(SRCS "")
set(HDRS "")


## This section shows how to use the above compiled library to compile the source files
## set source files
#set(SRCS
#    unit-tests/manual-OpenapiAPI.c
#    unit-tests/manual-SlurmAPI.c
#)

##set header files
#set(HDRS
#)

## loop over all files in SRCS variable
#foreach(SOURCE_FILE ${SRCS})
#    # Get only the file name from the file as add_executable does not support executable with slash("/")
#    get_filename_component(FILE_NAME_ONLY ${SOURCE_FILE} NAME_WE)
#    # Remove .c from the file name and set it as executable name
#    string( REPLACE ".c" "" EXECUTABLE_FILE ${FILE_NAME_ONLY})
#    # Add executable for every source file in  SRCS
#    add_executable(unit-${EXECUTABLE_FILE} ${SOURCE_FILE})
#    # Link above created library to executable and dependent library curl
#    target_link_libraries(unit-${EXECUTABLE_FILE} ${CURL_LIBRARIES} ${pkgName} )
#endforeach(SOURCE_FILE ${SRCS})
