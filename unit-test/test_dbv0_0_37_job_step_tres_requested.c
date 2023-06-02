#ifndef dbv0_0_37_job_step_tres_requested_TEST
#define dbv0_0_37_job_step_tres_requested_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_37_job_step_tres_requested_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_37_job_step_tres_requested.h"
dbv0_0_37_job_step_tres_requested_t* instantiate_dbv0_0_37_job_step_tres_requested(int include_optional);



dbv0_0_37_job_step_tres_requested_t* instantiate_dbv0_0_37_job_step_tres_requested(int include_optional) {
  dbv0_0_37_job_step_tres_requested_t* dbv0_0_37_job_step_tres_requested = NULL;
  if (include_optional) {
    dbv0_0_37_job_step_tres_requested = dbv0_0_37_job_step_tres_requested_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    dbv0_0_37_job_step_tres_requested = dbv0_0_37_job_step_tres_requested_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return dbv0_0_37_job_step_tres_requested;
}


#ifdef dbv0_0_37_job_step_tres_requested_MAIN

void test_dbv0_0_37_job_step_tres_requested(int include_optional) {
    dbv0_0_37_job_step_tres_requested_t* dbv0_0_37_job_step_tres_requested_1 = instantiate_dbv0_0_37_job_step_tres_requested(include_optional);

	cJSON* jsondbv0_0_37_job_step_tres_requested_1 = dbv0_0_37_job_step_tres_requested_convertToJSON(dbv0_0_37_job_step_tres_requested_1);
	printf("dbv0_0_37_job_step_tres_requested :\n%s\n", cJSON_Print(jsondbv0_0_37_job_step_tres_requested_1));
	dbv0_0_37_job_step_tres_requested_t* dbv0_0_37_job_step_tres_requested_2 = dbv0_0_37_job_step_tres_requested_parseFromJSON(jsondbv0_0_37_job_step_tres_requested_1);
	cJSON* jsondbv0_0_37_job_step_tres_requested_2 = dbv0_0_37_job_step_tres_requested_convertToJSON(dbv0_0_37_job_step_tres_requested_2);
	printf("repeating dbv0_0_37_job_step_tres_requested:\n%s\n", cJSON_Print(jsondbv0_0_37_job_step_tres_requested_2));
}

int main() {
  test_dbv0_0_37_job_step_tres_requested(1);
  test_dbv0_0_37_job_step_tres_requested(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_37_job_step_tres_requested_MAIN
#endif // dbv0_0_37_job_step_tres_requested_TEST
