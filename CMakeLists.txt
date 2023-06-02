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
    model/dbv0_0_38_account.c
    model/dbv0_0_38_account_info.c
    model/dbv0_0_38_account_response.c
    model/dbv0_0_38_accounting.c
    model/dbv0_0_38_association.c
    model/dbv0_0_38_association_default.c
    model/dbv0_0_38_association_max.c
    model/dbv0_0_38_association_max_jobs.c
    model/dbv0_0_38_association_max_jobs_per.c
    model/dbv0_0_38_association_max_per.c
    model/dbv0_0_38_association_max_per_account.c
    model/dbv0_0_38_association_max_tres.c
    model/dbv0_0_38_association_max_tres_minutes.c
    model/dbv0_0_38_association_max_tres_minutes_per.c
    model/dbv0_0_38_association_max_tres_per.c
    model/dbv0_0_38_association_min.c
    model/dbv0_0_38_association_short_info.c
    model/dbv0_0_38_association_usage.c
    model/dbv0_0_38_associations_info.c
    model/dbv0_0_38_cluster_info.c
    model/dbv0_0_38_cluster_info_associations.c
    model/dbv0_0_38_cluster_info_controller.c
    model/dbv0_0_38_clusters_properties.c
    model/dbv0_0_38_config_info.c
    model/dbv0_0_38_config_response.c
    model/dbv0_0_38_coordinator_info.c
    model/dbv0_0_38_diag.c
    model/dbv0_0_38_diag_statistics.c
    model/dbv0_0_38_diag_statistics_rollups_inner.c
    model/dbv0_0_38_diag_statistics_rpcs_inner.c
    model/dbv0_0_38_diag_statistics_rpcs_inner_time.c
    model/dbv0_0_38_diag_statistics_users_inner.c
    model/dbv0_0_38_diag_statistics_users_inner_time.c
    model/dbv0_0_38_error.c
    model/dbv0_0_38_job.c
    model/dbv0_0_38_job_array.c
    model/dbv0_0_38_job_array_limits.c
    model/dbv0_0_38_job_array_limits_max.c
    model/dbv0_0_38_job_array_limits_max_running.c
    model/dbv0_0_38_job_comment.c
    model/dbv0_0_38_job_exit_code.c
    model/dbv0_0_38_job_exit_code_signal.c
    model/dbv0_0_38_job_het.c
    model/dbv0_0_38_job_info.c
    model/dbv0_0_38_job_mcs.c
    model/dbv0_0_38_job_required.c
    model/dbv0_0_38_job_reservation.c
    model/dbv0_0_38_job_state.c
    model/dbv0_0_38_job_step.c
    model/dbv0_0_38_job_step_cpu.c
    model/dbv0_0_38_job_step_cpu_requested_frequency.c
    model/dbv0_0_38_job_step_nodes.c
    model/dbv0_0_38_job_step_statistics.c
    model/dbv0_0_38_job_step_statistics_cpu.c
    model/dbv0_0_38_job_step_statistics_energy.c
    model/dbv0_0_38_job_step_step.c
    model/dbv0_0_38_job_step_step_het.c
    model/dbv0_0_38_job_step_tasks.c
    model/dbv0_0_38_job_step_time.c
    model/dbv0_0_38_job_step_tres.c
    model/dbv0_0_38_job_step_tres_requested.c
    model/dbv0_0_38_job_time.c
    model/dbv0_0_38_job_time_system.c
    model/dbv0_0_38_job_time_total.c
    model/dbv0_0_38_job_time_user.c
    model/dbv0_0_38_job_tres.c
    model/dbv0_0_38_job_wckey.c
    model/dbv0_0_38_meta.c
    model/dbv0_0_38_qos.c
    model/dbv0_0_38_qos_info.c
    model/dbv0_0_38_qos_limits.c
    model/dbv0_0_38_qos_limits_max.c
    model/dbv0_0_38_qos_limits_max_accruing.c
    model/dbv0_0_38_qos_limits_max_accruing_per.c
    model/dbv0_0_38_qos_limits_max_jobs.c
    model/dbv0_0_38_qos_limits_max_jobs_active_jobs.c
    model/dbv0_0_38_qos_limits_max_jobs_active_jobs_per.c
    model/dbv0_0_38_qos_limits_max_tres.c
    model/dbv0_0_38_qos_limits_max_tres_minutes.c
    model/dbv0_0_38_qos_limits_max_tres_minutes_per.c
    model/dbv0_0_38_qos_limits_max_tres_per.c
    model/dbv0_0_38_qos_limits_max_wall_clock.c
    model/dbv0_0_38_qos_limits_max_wall_clock_per.c
    model/dbv0_0_38_qos_limits_min.c
    model/dbv0_0_38_qos_limits_min_tres.c
    model/dbv0_0_38_qos_limits_min_tres_per.c
    model/dbv0_0_38_qos_preempt.c
    model/dbv0_0_38_response_account_delete.c
    model/dbv0_0_38_response_associations.c
    model/dbv0_0_38_response_associations_delete.c
    model/dbv0_0_38_response_cluster_add.c
    model/dbv0_0_38_response_cluster_delete.c
    model/dbv0_0_38_response_qos.c
    model/dbv0_0_38_response_qos_delete.c
    model/dbv0_0_38_response_tres.c
    model/dbv0_0_38_response_user_delete.c
    model/dbv0_0_38_response_user_update.c
    model/dbv0_0_38_response_wckey_add.c
    model/dbv0_0_38_response_wckey_delete.c
    model/dbv0_0_38_set_config.c
    model/dbv0_0_38_tres_info.c
    model/dbv0_0_38_tres_list_inner.c
    model/dbv0_0_38_tres_update.c
    model/dbv0_0_38_update_account.c
    model/dbv0_0_38_update_qos.c
    model/dbv0_0_38_update_users.c
    model/dbv0_0_38_user.c
    model/dbv0_0_38_user_default.c
    model/dbv0_0_38_user_info.c
    model/dbv0_0_38_wckey.c
    model/dbv0_0_38_wckey_info.c
    model/v0_0_38_diag.c
    model/v0_0_38_diag_rpcm.c
    model/v0_0_38_diag_rpcu.c
    model/v0_0_38_diag_statistics.c
    model/v0_0_38_error.c
    model/v0_0_38_job_properties.c
    model/v0_0_38_job_resources.c
    model/v0_0_38_job_response_properties.c
    model/v0_0_38_job_submission.c
    model/v0_0_38_job_submission_response.c
    model/v0_0_38_jobs_response.c
    model/v0_0_38_license.c
    model/v0_0_38_licenses.c
    model/v0_0_38_meta.c
    model/v0_0_38_meta_plugin.c
    model/v0_0_38_meta_slurm.c
    model/v0_0_38_meta_slurm_version.c
    model/v0_0_38_node.c
    model/v0_0_38_node_allocation.c
    model/v0_0_38_node_allocation_sockets.c
    model/v0_0_38_nodes_response.c
    model/v0_0_38_partition.c
    model/v0_0_38_partitions_response.c
    model/v0_0_38_ping.c
    model/v0_0_38_pings.c
    model/v0_0_38_reservation.c
    model/v0_0_38_reservation_purge_completed.c
    model/v0_0_38_reservations_response.c
    model/v0_0_38_signal.c
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
    model/dbv0_0_38_account.h
    model/dbv0_0_38_account_info.h
    model/dbv0_0_38_account_response.h
    model/dbv0_0_38_accounting.h
    model/dbv0_0_38_association.h
    model/dbv0_0_38_association_default.h
    model/dbv0_0_38_association_max.h
    model/dbv0_0_38_association_max_jobs.h
    model/dbv0_0_38_association_max_jobs_per.h
    model/dbv0_0_38_association_max_per.h
    model/dbv0_0_38_association_max_per_account.h
    model/dbv0_0_38_association_max_tres.h
    model/dbv0_0_38_association_max_tres_minutes.h
    model/dbv0_0_38_association_max_tres_minutes_per.h
    model/dbv0_0_38_association_max_tres_per.h
    model/dbv0_0_38_association_min.h
    model/dbv0_0_38_association_short_info.h
    model/dbv0_0_38_association_usage.h
    model/dbv0_0_38_associations_info.h
    model/dbv0_0_38_cluster_info.h
    model/dbv0_0_38_cluster_info_associations.h
    model/dbv0_0_38_cluster_info_controller.h
    model/dbv0_0_38_clusters_properties.h
    model/dbv0_0_38_config_info.h
    model/dbv0_0_38_config_response.h
    model/dbv0_0_38_coordinator_info.h
    model/dbv0_0_38_diag.h
    model/dbv0_0_38_diag_statistics.h
    model/dbv0_0_38_diag_statistics_rollups_inner.h
    model/dbv0_0_38_diag_statistics_rpcs_inner.h
    model/dbv0_0_38_diag_statistics_rpcs_inner_time.h
    model/dbv0_0_38_diag_statistics_users_inner.h
    model/dbv0_0_38_diag_statistics_users_inner_time.h
    model/dbv0_0_38_error.h
    model/dbv0_0_38_job.h
    model/dbv0_0_38_job_array.h
    model/dbv0_0_38_job_array_limits.h
    model/dbv0_0_38_job_array_limits_max.h
    model/dbv0_0_38_job_array_limits_max_running.h
    model/dbv0_0_38_job_comment.h
    model/dbv0_0_38_job_exit_code.h
    model/dbv0_0_38_job_exit_code_signal.h
    model/dbv0_0_38_job_het.h
    model/dbv0_0_38_job_info.h
    model/dbv0_0_38_job_mcs.h
    model/dbv0_0_38_job_required.h
    model/dbv0_0_38_job_reservation.h
    model/dbv0_0_38_job_state.h
    model/dbv0_0_38_job_step.h
    model/dbv0_0_38_job_step_cpu.h
    model/dbv0_0_38_job_step_cpu_requested_frequency.h
    model/dbv0_0_38_job_step_nodes.h
    model/dbv0_0_38_job_step_statistics.h
    model/dbv0_0_38_job_step_statistics_cpu.h
    model/dbv0_0_38_job_step_statistics_energy.h
    model/dbv0_0_38_job_step_step.h
    model/dbv0_0_38_job_step_step_het.h
    model/dbv0_0_38_job_step_tasks.h
    model/dbv0_0_38_job_step_time.h
    model/dbv0_0_38_job_step_tres.h
    model/dbv0_0_38_job_step_tres_requested.h
    model/dbv0_0_38_job_time.h
    model/dbv0_0_38_job_time_system.h
    model/dbv0_0_38_job_time_total.h
    model/dbv0_0_38_job_time_user.h
    model/dbv0_0_38_job_tres.h
    model/dbv0_0_38_job_wckey.h
    model/dbv0_0_38_meta.h
    model/dbv0_0_38_qos.h
    model/dbv0_0_38_qos_info.h
    model/dbv0_0_38_qos_limits.h
    model/dbv0_0_38_qos_limits_max.h
    model/dbv0_0_38_qos_limits_max_accruing.h
    model/dbv0_0_38_qos_limits_max_accruing_per.h
    model/dbv0_0_38_qos_limits_max_jobs.h
    model/dbv0_0_38_qos_limits_max_jobs_active_jobs.h
    model/dbv0_0_38_qos_limits_max_jobs_active_jobs_per.h
    model/dbv0_0_38_qos_limits_max_tres.h
    model/dbv0_0_38_qos_limits_max_tres_minutes.h
    model/dbv0_0_38_qos_limits_max_tres_minutes_per.h
    model/dbv0_0_38_qos_limits_max_tres_per.h
    model/dbv0_0_38_qos_limits_max_wall_clock.h
    model/dbv0_0_38_qos_limits_max_wall_clock_per.h
    model/dbv0_0_38_qos_limits_min.h
    model/dbv0_0_38_qos_limits_min_tres.h
    model/dbv0_0_38_qos_limits_min_tres_per.h
    model/dbv0_0_38_qos_preempt.h
    model/dbv0_0_38_response_account_delete.h
    model/dbv0_0_38_response_associations.h
    model/dbv0_0_38_response_associations_delete.h
    model/dbv0_0_38_response_cluster_add.h
    model/dbv0_0_38_response_cluster_delete.h
    model/dbv0_0_38_response_qos.h
    model/dbv0_0_38_response_qos_delete.h
    model/dbv0_0_38_response_tres.h
    model/dbv0_0_38_response_user_delete.h
    model/dbv0_0_38_response_user_update.h
    model/dbv0_0_38_response_wckey_add.h
    model/dbv0_0_38_response_wckey_delete.h
    model/dbv0_0_38_set_config.h
    model/dbv0_0_38_tres_info.h
    model/dbv0_0_38_tres_list_inner.h
    model/dbv0_0_38_tres_update.h
    model/dbv0_0_38_update_account.h
    model/dbv0_0_38_update_qos.h
    model/dbv0_0_38_update_users.h
    model/dbv0_0_38_user.h
    model/dbv0_0_38_user_default.h
    model/dbv0_0_38_user_info.h
    model/dbv0_0_38_wckey.h
    model/dbv0_0_38_wckey_info.h
    model/v0_0_38_diag.h
    model/v0_0_38_diag_rpcm.h
    model/v0_0_38_diag_rpcu.h
    model/v0_0_38_diag_statistics.h
    model/v0_0_38_error.h
    model/v0_0_38_job_properties.h
    model/v0_0_38_job_resources.h
    model/v0_0_38_job_response_properties.h
    model/v0_0_38_job_submission.h
    model/v0_0_38_job_submission_response.h
    model/v0_0_38_jobs_response.h
    model/v0_0_38_license.h
    model/v0_0_38_licenses.h
    model/v0_0_38_meta.h
    model/v0_0_38_meta_plugin.h
    model/v0_0_38_meta_slurm.h
    model/v0_0_38_meta_slurm_version.h
    model/v0_0_38_node.h
    model/v0_0_38_node_allocation.h
    model/v0_0_38_node_allocation_sockets.h
    model/v0_0_38_nodes_response.h
    model/v0_0_38_partition.h
    model/v0_0_38_partitions_response.h
    model/v0_0_38_ping.h
    model/v0_0_38_pings.h
    model/v0_0_38_reservation.h
    model/v0_0_38_reservation_purge_completed.h
    model/v0_0_38_reservations_response.h
    model/v0_0_38_signal.h
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
