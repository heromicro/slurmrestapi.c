#ifndef v0_0_39_job_state_TEST
#define v0_0_39_job_state_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_job_state_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_job_state.h"
v0_0_39_job_state_t* instantiate_v0_0_39_job_state(int include_optional);



v0_0_39_job_state_t* instantiate_v0_0_39_job_state(int include_optional) {
  v0_0_39_job_state_t* v0_0_39_job_state = NULL;
  if (include_optional) {
    v0_0_39_job_state = v0_0_39_job_state_create(
      "0"
    );
  } else {
    v0_0_39_job_state = v0_0_39_job_state_create(
      "0"
    );
  }

  return v0_0_39_job_state;
}


#ifdef v0_0_39_job_state_MAIN

void test_v0_0_39_job_state(int include_optional) {
    v0_0_39_job_state_t* v0_0_39_job_state_1 = instantiate_v0_0_39_job_state(include_optional);

	cJSON* jsonv0_0_39_job_state_1 = v0_0_39_job_state_convertToJSON(v0_0_39_job_state_1);
	printf("v0_0_39_job_state :\n%s\n", cJSON_Print(jsonv0_0_39_job_state_1));
	v0_0_39_job_state_t* v0_0_39_job_state_2 = v0_0_39_job_state_parseFromJSON(jsonv0_0_39_job_state_1);
	cJSON* jsonv0_0_39_job_state_2 = v0_0_39_job_state_convertToJSON(v0_0_39_job_state_2);
	printf("repeating v0_0_39_job_state:\n%s\n", cJSON_Print(jsonv0_0_39_job_state_2));
}

int main() {
  test_v0_0_39_job_state(1);
  test_v0_0_39_job_state(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_job_state_MAIN
#endif // v0_0_39_job_state_TEST
