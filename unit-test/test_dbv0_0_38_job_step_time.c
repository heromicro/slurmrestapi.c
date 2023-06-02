#ifndef dbv0_0_38_job_step_time_TEST
#define dbv0_0_38_job_step_time_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_38_job_step_time_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_38_job_step_time.h"
dbv0_0_38_job_step_time_t* instantiate_dbv0_0_38_job_step_time(int include_optional);

#include "test_dbv0_0_38_job_time_system.c"
#include "test_dbv0_0_38_job_time_total.c"
#include "test_dbv0_0_38_job_time_user.c"


dbv0_0_38_job_step_time_t* instantiate_dbv0_0_38_job_step_time(int include_optional) {
  dbv0_0_38_job_step_time_t* dbv0_0_38_job_step_time = NULL;
  if (include_optional) {
    dbv0_0_38_job_step_time = dbv0_0_38_job_step_time_create(
      56,
      56,
      56,
      56,
       // false, not to have infinite recursion
      instantiate_dbv0_0_38_job_time_system(0),
       // false, not to have infinite recursion
      instantiate_dbv0_0_38_job_time_total(0),
       // false, not to have infinite recursion
      instantiate_dbv0_0_38_job_time_user(0)
    );
  } else {
    dbv0_0_38_job_step_time = dbv0_0_38_job_step_time_create(
      56,
      56,
      56,
      56,
      NULL,
      NULL,
      NULL
    );
  }

  return dbv0_0_38_job_step_time;
}


#ifdef dbv0_0_38_job_step_time_MAIN

void test_dbv0_0_38_job_step_time(int include_optional) {
    dbv0_0_38_job_step_time_t* dbv0_0_38_job_step_time_1 = instantiate_dbv0_0_38_job_step_time(include_optional);

	cJSON* jsondbv0_0_38_job_step_time_1 = dbv0_0_38_job_step_time_convertToJSON(dbv0_0_38_job_step_time_1);
	printf("dbv0_0_38_job_step_time :\n%s\n", cJSON_Print(jsondbv0_0_38_job_step_time_1));
	dbv0_0_38_job_step_time_t* dbv0_0_38_job_step_time_2 = dbv0_0_38_job_step_time_parseFromJSON(jsondbv0_0_38_job_step_time_1);
	cJSON* jsondbv0_0_38_job_step_time_2 = dbv0_0_38_job_step_time_convertToJSON(dbv0_0_38_job_step_time_2);
	printf("repeating dbv0_0_38_job_step_time:\n%s\n", cJSON_Print(jsondbv0_0_38_job_step_time_2));
}

int main() {
  test_dbv0_0_38_job_step_time(1);
  test_dbv0_0_38_job_step_time(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_38_job_step_time_MAIN
#endif // dbv0_0_38_job_step_time_TEST
