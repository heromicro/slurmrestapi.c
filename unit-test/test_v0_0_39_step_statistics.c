#ifndef v0_0_39_step_statistics_TEST
#define v0_0_39_step_statistics_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_step_statistics_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_step_statistics.h"
v0_0_39_step_statistics_t* instantiate_v0_0_39_step_statistics(int include_optional);

#include "test_v0_0_39_step_statistics_energy.c"


v0_0_39_step_statistics_t* instantiate_v0_0_39_step_statistics(int include_optional) {
  v0_0_39_step_statistics_t* v0_0_39_step_statistics = NULL;
  if (include_optional) {
    v0_0_39_step_statistics = v0_0_39_step_statistics_create(
       // false, not to have infinite recursion
      instantiate_v0_0_39_step_statistics_energy(0)
    );
  } else {
    v0_0_39_step_statistics = v0_0_39_step_statistics_create(
      NULL
    );
  }

  return v0_0_39_step_statistics;
}


#ifdef v0_0_39_step_statistics_MAIN

void test_v0_0_39_step_statistics(int include_optional) {
    v0_0_39_step_statistics_t* v0_0_39_step_statistics_1 = instantiate_v0_0_39_step_statistics(include_optional);

	cJSON* jsonv0_0_39_step_statistics_1 = v0_0_39_step_statistics_convertToJSON(v0_0_39_step_statistics_1);
	printf("v0_0_39_step_statistics :\n%s\n", cJSON_Print(jsonv0_0_39_step_statistics_1));
	v0_0_39_step_statistics_t* v0_0_39_step_statistics_2 = v0_0_39_step_statistics_parseFromJSON(jsonv0_0_39_step_statistics_1);
	cJSON* jsonv0_0_39_step_statistics_2 = v0_0_39_step_statistics_convertToJSON(v0_0_39_step_statistics_2);
	printf("repeating v0_0_39_step_statistics:\n%s\n", cJSON_Print(jsonv0_0_39_step_statistics_2));
}

int main() {
  test_v0_0_39_step_statistics(1);
  test_v0_0_39_step_statistics(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_step_statistics_MAIN
#endif // v0_0_39_step_statistics_TEST
