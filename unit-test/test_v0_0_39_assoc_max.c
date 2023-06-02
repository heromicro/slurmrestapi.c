#ifndef v0_0_39_assoc_max_TEST
#define v0_0_39_assoc_max_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_assoc_max_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_assoc_max.h"
v0_0_39_assoc_max_t* instantiate_v0_0_39_assoc_max(int include_optional);

#include "test_v0_0_39_assoc_max_jobs.c"


v0_0_39_assoc_max_t* instantiate_v0_0_39_assoc_max(int include_optional) {
  v0_0_39_assoc_max_t* v0_0_39_assoc_max = NULL;
  if (include_optional) {
    v0_0_39_assoc_max = v0_0_39_assoc_max_create(
       // false, not to have infinite recursion
      instantiate_v0_0_39_assoc_max_jobs(0)
    );
  } else {
    v0_0_39_assoc_max = v0_0_39_assoc_max_create(
      NULL
    );
  }

  return v0_0_39_assoc_max;
}


#ifdef v0_0_39_assoc_max_MAIN

void test_v0_0_39_assoc_max(int include_optional) {
    v0_0_39_assoc_max_t* v0_0_39_assoc_max_1 = instantiate_v0_0_39_assoc_max(include_optional);

	cJSON* jsonv0_0_39_assoc_max_1 = v0_0_39_assoc_max_convertToJSON(v0_0_39_assoc_max_1);
	printf("v0_0_39_assoc_max :\n%s\n", cJSON_Print(jsonv0_0_39_assoc_max_1));
	v0_0_39_assoc_max_t* v0_0_39_assoc_max_2 = v0_0_39_assoc_max_parseFromJSON(jsonv0_0_39_assoc_max_1);
	cJSON* jsonv0_0_39_assoc_max_2 = v0_0_39_assoc_max_convertToJSON(v0_0_39_assoc_max_2);
	printf("repeating v0_0_39_assoc_max:\n%s\n", cJSON_Print(jsonv0_0_39_assoc_max_2));
}

int main() {
  test_v0_0_39_assoc_max(1);
  test_v0_0_39_assoc_max(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_assoc_max_MAIN
#endif // v0_0_39_assoc_max_TEST
