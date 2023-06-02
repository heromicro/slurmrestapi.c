#ifndef dbv0_0_37_job_array_limits_max_running_TEST
#define dbv0_0_37_job_array_limits_max_running_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_37_job_array_limits_max_running_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_37_job_array_limits_max_running.h"
dbv0_0_37_job_array_limits_max_running_t* instantiate_dbv0_0_37_job_array_limits_max_running(int include_optional);



dbv0_0_37_job_array_limits_max_running_t* instantiate_dbv0_0_37_job_array_limits_max_running(int include_optional) {
  dbv0_0_37_job_array_limits_max_running_t* dbv0_0_37_job_array_limits_max_running = NULL;
  if (include_optional) {
    dbv0_0_37_job_array_limits_max_running = dbv0_0_37_job_array_limits_max_running_create(
      56
    );
  } else {
    dbv0_0_37_job_array_limits_max_running = dbv0_0_37_job_array_limits_max_running_create(
      56
    );
  }

  return dbv0_0_37_job_array_limits_max_running;
}


#ifdef dbv0_0_37_job_array_limits_max_running_MAIN

void test_dbv0_0_37_job_array_limits_max_running(int include_optional) {
    dbv0_0_37_job_array_limits_max_running_t* dbv0_0_37_job_array_limits_max_running_1 = instantiate_dbv0_0_37_job_array_limits_max_running(include_optional);

	cJSON* jsondbv0_0_37_job_array_limits_max_running_1 = dbv0_0_37_job_array_limits_max_running_convertToJSON(dbv0_0_37_job_array_limits_max_running_1);
	printf("dbv0_0_37_job_array_limits_max_running :\n%s\n", cJSON_Print(jsondbv0_0_37_job_array_limits_max_running_1));
	dbv0_0_37_job_array_limits_max_running_t* dbv0_0_37_job_array_limits_max_running_2 = dbv0_0_37_job_array_limits_max_running_parseFromJSON(jsondbv0_0_37_job_array_limits_max_running_1);
	cJSON* jsondbv0_0_37_job_array_limits_max_running_2 = dbv0_0_37_job_array_limits_max_running_convertToJSON(dbv0_0_37_job_array_limits_max_running_2);
	printf("repeating dbv0_0_37_job_array_limits_max_running:\n%s\n", cJSON_Print(jsondbv0_0_37_job_array_limits_max_running_2));
}

int main() {
  test_dbv0_0_37_job_array_limits_max_running(1);
  test_dbv0_0_37_job_array_limits_max_running(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_37_job_array_limits_max_running_MAIN
#endif // dbv0_0_37_job_array_limits_max_running_TEST
