#ifndef dbv0_0_37_job_step_task_TEST
#define dbv0_0_37_job_step_task_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_37_job_step_task_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_37_job_step_task.h"
dbv0_0_37_job_step_task_t* instantiate_dbv0_0_37_job_step_task(int include_optional);



dbv0_0_37_job_step_task_t* instantiate_dbv0_0_37_job_step_task(int include_optional) {
  dbv0_0_37_job_step_task_t* dbv0_0_37_job_step_task = NULL;
  if (include_optional) {
    dbv0_0_37_job_step_task = dbv0_0_37_job_step_task_create(
      "0"
    );
  } else {
    dbv0_0_37_job_step_task = dbv0_0_37_job_step_task_create(
      "0"
    );
  }

  return dbv0_0_37_job_step_task;
}


#ifdef dbv0_0_37_job_step_task_MAIN

void test_dbv0_0_37_job_step_task(int include_optional) {
    dbv0_0_37_job_step_task_t* dbv0_0_37_job_step_task_1 = instantiate_dbv0_0_37_job_step_task(include_optional);

	cJSON* jsondbv0_0_37_job_step_task_1 = dbv0_0_37_job_step_task_convertToJSON(dbv0_0_37_job_step_task_1);
	printf("dbv0_0_37_job_step_task :\n%s\n", cJSON_Print(jsondbv0_0_37_job_step_task_1));
	dbv0_0_37_job_step_task_t* dbv0_0_37_job_step_task_2 = dbv0_0_37_job_step_task_parseFromJSON(jsondbv0_0_37_job_step_task_1);
	cJSON* jsondbv0_0_37_job_step_task_2 = dbv0_0_37_job_step_task_convertToJSON(dbv0_0_37_job_step_task_2);
	printf("repeating dbv0_0_37_job_step_task:\n%s\n", cJSON_Print(jsondbv0_0_37_job_step_task_2));
}

int main() {
  test_dbv0_0_37_job_step_task(1);
  test_dbv0_0_37_job_step_task(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_37_job_step_task_MAIN
#endif // dbv0_0_37_job_step_task_TEST
