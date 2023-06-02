#ifndef v0_0_39_assoc_max_jobs_TEST
#define v0_0_39_assoc_max_jobs_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_assoc_max_jobs_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_assoc_max_jobs.h"
v0_0_39_assoc_max_jobs_t* instantiate_v0_0_39_assoc_max_jobs(int include_optional);

#include "test_v0_0_39_assoc_max_jobs_per.c"


v0_0_39_assoc_max_jobs_t* instantiate_v0_0_39_assoc_max_jobs(int include_optional) {
  v0_0_39_assoc_max_jobs_t* v0_0_39_assoc_max_jobs = NULL;
  if (include_optional) {
    v0_0_39_assoc_max_jobs = v0_0_39_assoc_max_jobs_create(
       // false, not to have infinite recursion
      instantiate_v0_0_39_assoc_max_jobs_per(0)
    );
  } else {
    v0_0_39_assoc_max_jobs = v0_0_39_assoc_max_jobs_create(
      NULL
    );
  }

  return v0_0_39_assoc_max_jobs;
}


#ifdef v0_0_39_assoc_max_jobs_MAIN

void test_v0_0_39_assoc_max_jobs(int include_optional) {
    v0_0_39_assoc_max_jobs_t* v0_0_39_assoc_max_jobs_1 = instantiate_v0_0_39_assoc_max_jobs(include_optional);

	cJSON* jsonv0_0_39_assoc_max_jobs_1 = v0_0_39_assoc_max_jobs_convertToJSON(v0_0_39_assoc_max_jobs_1);
	printf("v0_0_39_assoc_max_jobs :\n%s\n", cJSON_Print(jsonv0_0_39_assoc_max_jobs_1));
	v0_0_39_assoc_max_jobs_t* v0_0_39_assoc_max_jobs_2 = v0_0_39_assoc_max_jobs_parseFromJSON(jsonv0_0_39_assoc_max_jobs_1);
	cJSON* jsonv0_0_39_assoc_max_jobs_2 = v0_0_39_assoc_max_jobs_convertToJSON(v0_0_39_assoc_max_jobs_2);
	printf("repeating v0_0_39_assoc_max_jobs:\n%s\n", cJSON_Print(jsonv0_0_39_assoc_max_jobs_2));
}

int main() {
  test_v0_0_39_assoc_max_jobs(1);
  test_v0_0_39_assoc_max_jobs(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_assoc_max_jobs_MAIN
#endif // v0_0_39_assoc_max_jobs_TEST
