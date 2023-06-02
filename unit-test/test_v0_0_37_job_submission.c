#ifndef v0_0_37_job_submission_TEST
#define v0_0_37_job_submission_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_37_job_submission_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_37_job_submission.h"
v0_0_37_job_submission_t* instantiate_v0_0_37_job_submission(int include_optional);

#include "test_v0_0_37_job_properties.c"


v0_0_37_job_submission_t* instantiate_v0_0_37_job_submission(int include_optional) {
  v0_0_37_job_submission_t* v0_0_37_job_submission = NULL;
  if (include_optional) {
    v0_0_37_job_submission = v0_0_37_job_submission_create(
      "0",
       // false, not to have infinite recursion
      instantiate_v0_0_37_job_properties(0),
      list_createList()
    );
  } else {
    v0_0_37_job_submission = v0_0_37_job_submission_create(
      "0",
      NULL,
      list_createList()
    );
  }

  return v0_0_37_job_submission;
}


#ifdef v0_0_37_job_submission_MAIN

void test_v0_0_37_job_submission(int include_optional) {
    v0_0_37_job_submission_t* v0_0_37_job_submission_1 = instantiate_v0_0_37_job_submission(include_optional);

	cJSON* jsonv0_0_37_job_submission_1 = v0_0_37_job_submission_convertToJSON(v0_0_37_job_submission_1);
	printf("v0_0_37_job_submission :\n%s\n", cJSON_Print(jsonv0_0_37_job_submission_1));
	v0_0_37_job_submission_t* v0_0_37_job_submission_2 = v0_0_37_job_submission_parseFromJSON(jsonv0_0_37_job_submission_1);
	cJSON* jsonv0_0_37_job_submission_2 = v0_0_37_job_submission_convertToJSON(v0_0_37_job_submission_2);
	printf("repeating v0_0_37_job_submission:\n%s\n", cJSON_Print(jsonv0_0_37_job_submission_2));
}

int main() {
  test_v0_0_37_job_submission(1);
  test_v0_0_37_job_submission(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_37_job_submission_MAIN
#endif // v0_0_37_job_submission_TEST
