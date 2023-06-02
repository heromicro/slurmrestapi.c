#ifndef dbv0_0_37_job_step_cpu_TEST
#define dbv0_0_37_job_step_cpu_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_37_job_step_cpu_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_37_job_step_cpu.h"
dbv0_0_37_job_step_cpu_t* instantiate_dbv0_0_37_job_step_cpu(int include_optional);

#include "test_dbv0_0_37_job_step_cpu_requested_frequency.c"


dbv0_0_37_job_step_cpu_t* instantiate_dbv0_0_37_job_step_cpu(int include_optional) {
  dbv0_0_37_job_step_cpu_t* dbv0_0_37_job_step_cpu = NULL;
  if (include_optional) {
    dbv0_0_37_job_step_cpu = dbv0_0_37_job_step_cpu_create(
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_job_step_cpu_requested_frequency(0),
      list_createList()
    );
  } else {
    dbv0_0_37_job_step_cpu = dbv0_0_37_job_step_cpu_create(
      NULL,
      list_createList()
    );
  }

  return dbv0_0_37_job_step_cpu;
}


#ifdef dbv0_0_37_job_step_cpu_MAIN

void test_dbv0_0_37_job_step_cpu(int include_optional) {
    dbv0_0_37_job_step_cpu_t* dbv0_0_37_job_step_cpu_1 = instantiate_dbv0_0_37_job_step_cpu(include_optional);

	cJSON* jsondbv0_0_37_job_step_cpu_1 = dbv0_0_37_job_step_cpu_convertToJSON(dbv0_0_37_job_step_cpu_1);
	printf("dbv0_0_37_job_step_cpu :\n%s\n", cJSON_Print(jsondbv0_0_37_job_step_cpu_1));
	dbv0_0_37_job_step_cpu_t* dbv0_0_37_job_step_cpu_2 = dbv0_0_37_job_step_cpu_parseFromJSON(jsondbv0_0_37_job_step_cpu_1);
	cJSON* jsondbv0_0_37_job_step_cpu_2 = dbv0_0_37_job_step_cpu_convertToJSON(dbv0_0_37_job_step_cpu_2);
	printf("repeating dbv0_0_37_job_step_cpu:\n%s\n", cJSON_Print(jsondbv0_0_37_job_step_cpu_2));
}

int main() {
  test_dbv0_0_37_job_step_cpu(1);
  test_dbv0_0_37_job_step_cpu(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_37_job_step_cpu_MAIN
#endif // dbv0_0_37_job_step_cpu_TEST
