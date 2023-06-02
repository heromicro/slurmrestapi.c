#ifndef dbv0_0_37_qos_limits_max_jobs_TEST
#define dbv0_0_37_qos_limits_max_jobs_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_37_qos_limits_max_jobs_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_37_qos_limits_max_jobs.h"
dbv0_0_37_qos_limits_max_jobs_t* instantiate_dbv0_0_37_qos_limits_max_jobs(int include_optional);

#include "test_dbv0_0_37_qos_limits_max_jobs_active_jobs.c"


dbv0_0_37_qos_limits_max_jobs_t* instantiate_dbv0_0_37_qos_limits_max_jobs(int include_optional) {
  dbv0_0_37_qos_limits_max_jobs_t* dbv0_0_37_qos_limits_max_jobs = NULL;
  if (include_optional) {
    dbv0_0_37_qos_limits_max_jobs = dbv0_0_37_qos_limits_max_jobs_create(
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_qos_limits_max_jobs_active_jobs(0)
    );
  } else {
    dbv0_0_37_qos_limits_max_jobs = dbv0_0_37_qos_limits_max_jobs_create(
      NULL
    );
  }

  return dbv0_0_37_qos_limits_max_jobs;
}


#ifdef dbv0_0_37_qos_limits_max_jobs_MAIN

void test_dbv0_0_37_qos_limits_max_jobs(int include_optional) {
    dbv0_0_37_qos_limits_max_jobs_t* dbv0_0_37_qos_limits_max_jobs_1 = instantiate_dbv0_0_37_qos_limits_max_jobs(include_optional);

	cJSON* jsondbv0_0_37_qos_limits_max_jobs_1 = dbv0_0_37_qos_limits_max_jobs_convertToJSON(dbv0_0_37_qos_limits_max_jobs_1);
	printf("dbv0_0_37_qos_limits_max_jobs :\n%s\n", cJSON_Print(jsondbv0_0_37_qos_limits_max_jobs_1));
	dbv0_0_37_qos_limits_max_jobs_t* dbv0_0_37_qos_limits_max_jobs_2 = dbv0_0_37_qos_limits_max_jobs_parseFromJSON(jsondbv0_0_37_qos_limits_max_jobs_1);
	cJSON* jsondbv0_0_37_qos_limits_max_jobs_2 = dbv0_0_37_qos_limits_max_jobs_convertToJSON(dbv0_0_37_qos_limits_max_jobs_2);
	printf("repeating dbv0_0_37_qos_limits_max_jobs:\n%s\n", cJSON_Print(jsondbv0_0_37_qos_limits_max_jobs_2));
}

int main() {
  test_dbv0_0_37_qos_limits_max_jobs(1);
  test_dbv0_0_37_qos_limits_max_jobs(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_37_qos_limits_max_jobs_MAIN
#endif // dbv0_0_37_qos_limits_max_jobs_TEST
