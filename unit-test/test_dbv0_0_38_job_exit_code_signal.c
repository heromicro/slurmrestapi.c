#ifndef dbv0_0_38_job_exit_code_signal_TEST
#define dbv0_0_38_job_exit_code_signal_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_38_job_exit_code_signal_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_38_job_exit_code_signal.h"
dbv0_0_38_job_exit_code_signal_t* instantiate_dbv0_0_38_job_exit_code_signal(int include_optional);



dbv0_0_38_job_exit_code_signal_t* instantiate_dbv0_0_38_job_exit_code_signal(int include_optional) {
  dbv0_0_38_job_exit_code_signal_t* dbv0_0_38_job_exit_code_signal = NULL;
  if (include_optional) {
    dbv0_0_38_job_exit_code_signal = dbv0_0_38_job_exit_code_signal_create(
      56,
      "0"
    );
  } else {
    dbv0_0_38_job_exit_code_signal = dbv0_0_38_job_exit_code_signal_create(
      56,
      "0"
    );
  }

  return dbv0_0_38_job_exit_code_signal;
}


#ifdef dbv0_0_38_job_exit_code_signal_MAIN

void test_dbv0_0_38_job_exit_code_signal(int include_optional) {
    dbv0_0_38_job_exit_code_signal_t* dbv0_0_38_job_exit_code_signal_1 = instantiate_dbv0_0_38_job_exit_code_signal(include_optional);

	cJSON* jsondbv0_0_38_job_exit_code_signal_1 = dbv0_0_38_job_exit_code_signal_convertToJSON(dbv0_0_38_job_exit_code_signal_1);
	printf("dbv0_0_38_job_exit_code_signal :\n%s\n", cJSON_Print(jsondbv0_0_38_job_exit_code_signal_1));
	dbv0_0_38_job_exit_code_signal_t* dbv0_0_38_job_exit_code_signal_2 = dbv0_0_38_job_exit_code_signal_parseFromJSON(jsondbv0_0_38_job_exit_code_signal_1);
	cJSON* jsondbv0_0_38_job_exit_code_signal_2 = dbv0_0_38_job_exit_code_signal_convertToJSON(dbv0_0_38_job_exit_code_signal_2);
	printf("repeating dbv0_0_38_job_exit_code_signal:\n%s\n", cJSON_Print(jsondbv0_0_38_job_exit_code_signal_2));
}

int main() {
  test_dbv0_0_38_job_exit_code_signal(1);
  test_dbv0_0_38_job_exit_code_signal(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_38_job_exit_code_signal_MAIN
#endif // dbv0_0_38_job_exit_code_signal_TEST
