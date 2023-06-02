#ifndef dbv0_0_37_job_state_TEST
#define dbv0_0_37_job_state_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_37_job_state_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_37_job_state.h"
dbv0_0_37_job_state_t* instantiate_dbv0_0_37_job_state(int include_optional);



dbv0_0_37_job_state_t* instantiate_dbv0_0_37_job_state(int include_optional) {
  dbv0_0_37_job_state_t* dbv0_0_37_job_state = NULL;
  if (include_optional) {
    dbv0_0_37_job_state = dbv0_0_37_job_state_create(
      "0",
      "0"
    );
  } else {
    dbv0_0_37_job_state = dbv0_0_37_job_state_create(
      "0",
      "0"
    );
  }

  return dbv0_0_37_job_state;
}


#ifdef dbv0_0_37_job_state_MAIN

void test_dbv0_0_37_job_state(int include_optional) {
    dbv0_0_37_job_state_t* dbv0_0_37_job_state_1 = instantiate_dbv0_0_37_job_state(include_optional);

	cJSON* jsondbv0_0_37_job_state_1 = dbv0_0_37_job_state_convertToJSON(dbv0_0_37_job_state_1);
	printf("dbv0_0_37_job_state :\n%s\n", cJSON_Print(jsondbv0_0_37_job_state_1));
	dbv0_0_37_job_state_t* dbv0_0_37_job_state_2 = dbv0_0_37_job_state_parseFromJSON(jsondbv0_0_37_job_state_1);
	cJSON* jsondbv0_0_37_job_state_2 = dbv0_0_37_job_state_convertToJSON(dbv0_0_37_job_state_2);
	printf("repeating dbv0_0_37_job_state:\n%s\n", cJSON_Print(jsondbv0_0_37_job_state_2));
}

int main() {
  test_dbv0_0_37_job_state(1);
  test_dbv0_0_37_job_state(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_37_job_state_MAIN
#endif // dbv0_0_37_job_state_TEST
