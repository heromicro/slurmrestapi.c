#ifndef dbv0_0_38_job_step_step_TEST
#define dbv0_0_38_job_step_step_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_38_job_step_step_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_38_job_step_step.h"
dbv0_0_38_job_step_step_t* instantiate_dbv0_0_38_job_step_step(int include_optional);

#include "test_dbv0_0_38_job_step_step_het.c"


dbv0_0_38_job_step_step_t* instantiate_dbv0_0_38_job_step_step(int include_optional) {
  dbv0_0_38_job_step_step_t* dbv0_0_38_job_step_step = NULL;
  if (include_optional) {
    dbv0_0_38_job_step_step = dbv0_0_38_job_step_step_create(
      56,
       // false, not to have infinite recursion
      instantiate_dbv0_0_38_job_step_step_het(0),
      "0",
      "0"
    );
  } else {
    dbv0_0_38_job_step_step = dbv0_0_38_job_step_step_create(
      56,
      NULL,
      "0",
      "0"
    );
  }

  return dbv0_0_38_job_step_step;
}


#ifdef dbv0_0_38_job_step_step_MAIN

void test_dbv0_0_38_job_step_step(int include_optional) {
    dbv0_0_38_job_step_step_t* dbv0_0_38_job_step_step_1 = instantiate_dbv0_0_38_job_step_step(include_optional);

	cJSON* jsondbv0_0_38_job_step_step_1 = dbv0_0_38_job_step_step_convertToJSON(dbv0_0_38_job_step_step_1);
	printf("dbv0_0_38_job_step_step :\n%s\n", cJSON_Print(jsondbv0_0_38_job_step_step_1));
	dbv0_0_38_job_step_step_t* dbv0_0_38_job_step_step_2 = dbv0_0_38_job_step_step_parseFromJSON(jsondbv0_0_38_job_step_step_1);
	cJSON* jsondbv0_0_38_job_step_step_2 = dbv0_0_38_job_step_step_convertToJSON(dbv0_0_38_job_step_step_2);
	printf("repeating dbv0_0_38_job_step_step:\n%s\n", cJSON_Print(jsondbv0_0_38_job_step_step_2));
}

int main() {
  test_dbv0_0_38_job_step_step(1);
  test_dbv0_0_38_job_step_step(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_38_job_step_step_MAIN
#endif // dbv0_0_38_job_step_step_TEST
