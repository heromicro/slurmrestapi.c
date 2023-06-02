#ifndef v0_0_39_step_time_TEST
#define v0_0_39_step_time_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_step_time_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_step_time.h"
v0_0_39_step_time_t* instantiate_v0_0_39_step_time(int include_optional);

#include "test_v0_0_39_step_time_user.c"


v0_0_39_step_time_t* instantiate_v0_0_39_step_time(int include_optional) {
  v0_0_39_step_time_t* v0_0_39_step_time = NULL;
  if (include_optional) {
    v0_0_39_step_time = v0_0_39_step_time_create(
       // false, not to have infinite recursion
      instantiate_v0_0_39_step_time_user(0)
    );
  } else {
    v0_0_39_step_time = v0_0_39_step_time_create(
      NULL
    );
  }

  return v0_0_39_step_time;
}


#ifdef v0_0_39_step_time_MAIN

void test_v0_0_39_step_time(int include_optional) {
    v0_0_39_step_time_t* v0_0_39_step_time_1 = instantiate_v0_0_39_step_time(include_optional);

	cJSON* jsonv0_0_39_step_time_1 = v0_0_39_step_time_convertToJSON(v0_0_39_step_time_1);
	printf("v0_0_39_step_time :\n%s\n", cJSON_Print(jsonv0_0_39_step_time_1));
	v0_0_39_step_time_t* v0_0_39_step_time_2 = v0_0_39_step_time_parseFromJSON(jsonv0_0_39_step_time_1);
	cJSON* jsonv0_0_39_step_time_2 = v0_0_39_step_time_convertToJSON(v0_0_39_step_time_2);
	printf("repeating v0_0_39_step_time:\n%s\n", cJSON_Print(jsonv0_0_39_step_time_2));
}

int main() {
  test_v0_0_39_step_time(1);
  test_v0_0_39_step_time(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_step_time_MAIN
#endif // v0_0_39_step_time_TEST
