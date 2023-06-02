#ifndef dbv0_0_37_job_step_TEST
#define dbv0_0_37_job_step_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_37_job_step_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_37_job_step.h"
dbv0_0_37_job_step_t* instantiate_dbv0_0_37_job_step(int include_optional);

#include "test_dbv0_0_37_job_step_time.c"
#include "test_dbv0_0_37_job_exit_code.c"
#include "test_dbv0_0_37_job_step_nodes.c"
#include "test_dbv0_0_37_job_step_tasks.c"
#include "test_dbv0_0_37_job_step_cpu.c"
#include "test_dbv0_0_37_job_step_statistics.c"
#include "test_dbv0_0_37_job_step_step.c"
#include "test_dbv0_0_37_job_step_task.c"
#include "test_dbv0_0_37_job_step_tres.c"


dbv0_0_37_job_step_t* instantiate_dbv0_0_37_job_step(int include_optional) {
  dbv0_0_37_job_step_t* dbv0_0_37_job_step = NULL;
  if (include_optional) {
    dbv0_0_37_job_step = dbv0_0_37_job_step_create(
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_job_step_time(0),
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_job_exit_code(0),
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_job_step_nodes(0),
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_job_step_tasks(0),
      "0",
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_job_step_cpu(0),
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_job_step_statistics(0),
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_job_step_step(0),
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_job_step_task(0),
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_job_step_tres(0)
    );
  } else {
    dbv0_0_37_job_step = dbv0_0_37_job_step_create(
      NULL,
      NULL,
      NULL,
      NULL,
      "0",
      NULL,
      "0",
      "0",
      NULL,
      NULL,
      NULL,
      NULL
    );
  }

  return dbv0_0_37_job_step;
}


#ifdef dbv0_0_37_job_step_MAIN

void test_dbv0_0_37_job_step(int include_optional) {
    dbv0_0_37_job_step_t* dbv0_0_37_job_step_1 = instantiate_dbv0_0_37_job_step(include_optional);

	cJSON* jsondbv0_0_37_job_step_1 = dbv0_0_37_job_step_convertToJSON(dbv0_0_37_job_step_1);
	printf("dbv0_0_37_job_step :\n%s\n", cJSON_Print(jsondbv0_0_37_job_step_1));
	dbv0_0_37_job_step_t* dbv0_0_37_job_step_2 = dbv0_0_37_job_step_parseFromJSON(jsondbv0_0_37_job_step_1);
	cJSON* jsondbv0_0_37_job_step_2 = dbv0_0_37_job_step_convertToJSON(dbv0_0_37_job_step_2);
	printf("repeating dbv0_0_37_job_step:\n%s\n", cJSON_Print(jsondbv0_0_37_job_step_2));
}

int main() {
  test_dbv0_0_37_job_step(1);
  test_dbv0_0_37_job_step(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_37_job_step_MAIN
#endif // dbv0_0_37_job_step_TEST
