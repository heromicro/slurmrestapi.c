#ifndef dbv0_0_37_job_time_system_TEST
#define dbv0_0_37_job_time_system_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_37_job_time_system_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_37_job_time_system.h"
dbv0_0_37_job_time_system_t* instantiate_dbv0_0_37_job_time_system(int include_optional);



dbv0_0_37_job_time_system_t* instantiate_dbv0_0_37_job_time_system(int include_optional) {
  dbv0_0_37_job_time_system_t* dbv0_0_37_job_time_system = NULL;
  if (include_optional) {
    dbv0_0_37_job_time_system = dbv0_0_37_job_time_system_create(
      56,
      56
    );
  } else {
    dbv0_0_37_job_time_system = dbv0_0_37_job_time_system_create(
      56,
      56
    );
  }

  return dbv0_0_37_job_time_system;
}


#ifdef dbv0_0_37_job_time_system_MAIN

void test_dbv0_0_37_job_time_system(int include_optional) {
    dbv0_0_37_job_time_system_t* dbv0_0_37_job_time_system_1 = instantiate_dbv0_0_37_job_time_system(include_optional);

	cJSON* jsondbv0_0_37_job_time_system_1 = dbv0_0_37_job_time_system_convertToJSON(dbv0_0_37_job_time_system_1);
	printf("dbv0_0_37_job_time_system :\n%s\n", cJSON_Print(jsondbv0_0_37_job_time_system_1));
	dbv0_0_37_job_time_system_t* dbv0_0_37_job_time_system_2 = dbv0_0_37_job_time_system_parseFromJSON(jsondbv0_0_37_job_time_system_1);
	cJSON* jsondbv0_0_37_job_time_system_2 = dbv0_0_37_job_time_system_convertToJSON(dbv0_0_37_job_time_system_2);
	printf("repeating dbv0_0_37_job_time_system:\n%s\n", cJSON_Print(jsondbv0_0_37_job_time_system_2));
}

int main() {
  test_dbv0_0_37_job_time_system(1);
  test_dbv0_0_37_job_time_system(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_37_job_time_system_MAIN
#endif // dbv0_0_37_job_time_system_TEST
