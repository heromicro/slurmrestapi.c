#ifndef dbv0_0_38_job_step_tasks_TEST
#define dbv0_0_38_job_step_tasks_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_38_job_step_tasks_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_38_job_step_tasks.h"
dbv0_0_38_job_step_tasks_t* instantiate_dbv0_0_38_job_step_tasks(int include_optional);



dbv0_0_38_job_step_tasks_t* instantiate_dbv0_0_38_job_step_tasks(int include_optional) {
  dbv0_0_38_job_step_tasks_t* dbv0_0_38_job_step_tasks = NULL;
  if (include_optional) {
    dbv0_0_38_job_step_tasks = dbv0_0_38_job_step_tasks_create(
      56
    );
  } else {
    dbv0_0_38_job_step_tasks = dbv0_0_38_job_step_tasks_create(
      56
    );
  }

  return dbv0_0_38_job_step_tasks;
}


#ifdef dbv0_0_38_job_step_tasks_MAIN

void test_dbv0_0_38_job_step_tasks(int include_optional) {
    dbv0_0_38_job_step_tasks_t* dbv0_0_38_job_step_tasks_1 = instantiate_dbv0_0_38_job_step_tasks(include_optional);

	cJSON* jsondbv0_0_38_job_step_tasks_1 = dbv0_0_38_job_step_tasks_convertToJSON(dbv0_0_38_job_step_tasks_1);
	printf("dbv0_0_38_job_step_tasks :\n%s\n", cJSON_Print(jsondbv0_0_38_job_step_tasks_1));
	dbv0_0_38_job_step_tasks_t* dbv0_0_38_job_step_tasks_2 = dbv0_0_38_job_step_tasks_parseFromJSON(jsondbv0_0_38_job_step_tasks_1);
	cJSON* jsondbv0_0_38_job_step_tasks_2 = dbv0_0_38_job_step_tasks_convertToJSON(dbv0_0_38_job_step_tasks_2);
	printf("repeating dbv0_0_38_job_step_tasks:\n%s\n", cJSON_Print(jsondbv0_0_38_job_step_tasks_2));
}

int main() {
  test_dbv0_0_38_job_step_tasks(1);
  test_dbv0_0_38_job_step_tasks(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_38_job_step_tasks_MAIN
#endif // dbv0_0_38_job_step_tasks_TEST
