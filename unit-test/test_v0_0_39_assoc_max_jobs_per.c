#ifndef v0_0_39_assoc_max_jobs_per_TEST
#define v0_0_39_assoc_max_jobs_per_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_assoc_max_jobs_per_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_assoc_max_jobs_per.h"
v0_0_39_assoc_max_jobs_per_t* instantiate_v0_0_39_assoc_max_jobs_per(int include_optional);

#include "test_v0_0_39_uint32_no_val.c"


v0_0_39_assoc_max_jobs_per_t* instantiate_v0_0_39_assoc_max_jobs_per(int include_optional) {
  v0_0_39_assoc_max_jobs_per_t* v0_0_39_assoc_max_jobs_per = NULL;
  if (include_optional) {
    v0_0_39_assoc_max_jobs_per = v0_0_39_assoc_max_jobs_per_create(
       // false, not to have infinite recursion
      instantiate_v0_0_39_uint32_no_val(0)
    );
  } else {
    v0_0_39_assoc_max_jobs_per = v0_0_39_assoc_max_jobs_per_create(
      NULL
    );
  }

  return v0_0_39_assoc_max_jobs_per;
}


#ifdef v0_0_39_assoc_max_jobs_per_MAIN

void test_v0_0_39_assoc_max_jobs_per(int include_optional) {
    v0_0_39_assoc_max_jobs_per_t* v0_0_39_assoc_max_jobs_per_1 = instantiate_v0_0_39_assoc_max_jobs_per(include_optional);

	cJSON* jsonv0_0_39_assoc_max_jobs_per_1 = v0_0_39_assoc_max_jobs_per_convertToJSON(v0_0_39_assoc_max_jobs_per_1);
	printf("v0_0_39_assoc_max_jobs_per :\n%s\n", cJSON_Print(jsonv0_0_39_assoc_max_jobs_per_1));
	v0_0_39_assoc_max_jobs_per_t* v0_0_39_assoc_max_jobs_per_2 = v0_0_39_assoc_max_jobs_per_parseFromJSON(jsonv0_0_39_assoc_max_jobs_per_1);
	cJSON* jsonv0_0_39_assoc_max_jobs_per_2 = v0_0_39_assoc_max_jobs_per_convertToJSON(v0_0_39_assoc_max_jobs_per_2);
	printf("repeating v0_0_39_assoc_max_jobs_per:\n%s\n", cJSON_Print(jsonv0_0_39_assoc_max_jobs_per_2));
}

int main() {
  test_v0_0_39_assoc_max_jobs_per(1);
  test_v0_0_39_assoc_max_jobs_per(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_assoc_max_jobs_per_MAIN
#endif // v0_0_39_assoc_max_jobs_per_TEST
