#ifndef v0_0_39_job_exit_code_TEST
#define v0_0_39_job_exit_code_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_job_exit_code_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_job_exit_code.h"
v0_0_39_job_exit_code_t* instantiate_v0_0_39_job_exit_code(int include_optional);

#include "test_v0_0_39_job_exit_code_signal.c"


v0_0_39_job_exit_code_t* instantiate_v0_0_39_job_exit_code(int include_optional) {
  v0_0_39_job_exit_code_t* v0_0_39_job_exit_code = NULL;
  if (include_optional) {
    v0_0_39_job_exit_code = v0_0_39_job_exit_code_create(
      "0",
      56,
       // false, not to have infinite recursion
      instantiate_v0_0_39_job_exit_code_signal(0)
    );
  } else {
    v0_0_39_job_exit_code = v0_0_39_job_exit_code_create(
      "0",
      56,
      NULL
    );
  }

  return v0_0_39_job_exit_code;
}


#ifdef v0_0_39_job_exit_code_MAIN

void test_v0_0_39_job_exit_code(int include_optional) {
    v0_0_39_job_exit_code_t* v0_0_39_job_exit_code_1 = instantiate_v0_0_39_job_exit_code(include_optional);

	cJSON* jsonv0_0_39_job_exit_code_1 = v0_0_39_job_exit_code_convertToJSON(v0_0_39_job_exit_code_1);
	printf("v0_0_39_job_exit_code :\n%s\n", cJSON_Print(jsonv0_0_39_job_exit_code_1));
	v0_0_39_job_exit_code_t* v0_0_39_job_exit_code_2 = v0_0_39_job_exit_code_parseFromJSON(jsonv0_0_39_job_exit_code_1);
	cJSON* jsonv0_0_39_job_exit_code_2 = v0_0_39_job_exit_code_convertToJSON(v0_0_39_job_exit_code_2);
	printf("repeating v0_0_39_job_exit_code:\n%s\n", cJSON_Print(jsonv0_0_39_job_exit_code_2));
}

int main() {
  test_v0_0_39_job_exit_code(1);
  test_v0_0_39_job_exit_code(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_job_exit_code_MAIN
#endif // v0_0_39_job_exit_code_TEST
