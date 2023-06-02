#ifndef dbv0_0_37_job_exit_code_TEST
#define dbv0_0_37_job_exit_code_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_37_job_exit_code_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_37_job_exit_code.h"
dbv0_0_37_job_exit_code_t* instantiate_dbv0_0_37_job_exit_code(int include_optional);

#include "test_dbv0_0_37_job_exit_code_signal.c"


dbv0_0_37_job_exit_code_t* instantiate_dbv0_0_37_job_exit_code(int include_optional) {
  dbv0_0_37_job_exit_code_t* dbv0_0_37_job_exit_code = NULL;
  if (include_optional) {
    dbv0_0_37_job_exit_code = dbv0_0_37_job_exit_code_create(
      "0",
      56,
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_job_exit_code_signal(0)
    );
  } else {
    dbv0_0_37_job_exit_code = dbv0_0_37_job_exit_code_create(
      "0",
      56,
      NULL
    );
  }

  return dbv0_0_37_job_exit_code;
}


#ifdef dbv0_0_37_job_exit_code_MAIN

void test_dbv0_0_37_job_exit_code(int include_optional) {
    dbv0_0_37_job_exit_code_t* dbv0_0_37_job_exit_code_1 = instantiate_dbv0_0_37_job_exit_code(include_optional);

	cJSON* jsondbv0_0_37_job_exit_code_1 = dbv0_0_37_job_exit_code_convertToJSON(dbv0_0_37_job_exit_code_1);
	printf("dbv0_0_37_job_exit_code :\n%s\n", cJSON_Print(jsondbv0_0_37_job_exit_code_1));
	dbv0_0_37_job_exit_code_t* dbv0_0_37_job_exit_code_2 = dbv0_0_37_job_exit_code_parseFromJSON(jsondbv0_0_37_job_exit_code_1);
	cJSON* jsondbv0_0_37_job_exit_code_2 = dbv0_0_37_job_exit_code_convertToJSON(dbv0_0_37_job_exit_code_2);
	printf("repeating dbv0_0_37_job_exit_code:\n%s\n", cJSON_Print(jsondbv0_0_37_job_exit_code_2));
}

int main() {
  test_dbv0_0_37_job_exit_code(1);
  test_dbv0_0_37_job_exit_code(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_37_job_exit_code_MAIN
#endif // dbv0_0_37_job_exit_code_TEST
