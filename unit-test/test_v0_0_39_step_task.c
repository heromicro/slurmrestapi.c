#ifndef v0_0_39_step_task_TEST
#define v0_0_39_step_task_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_step_task_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_step_task.h"
v0_0_39_step_task_t* instantiate_v0_0_39_step_task(int include_optional);



v0_0_39_step_task_t* instantiate_v0_0_39_step_task(int include_optional) {
  v0_0_39_step_task_t* v0_0_39_step_task = NULL;
  if (include_optional) {
    v0_0_39_step_task = v0_0_39_step_task_create(
      "0"
    );
  } else {
    v0_0_39_step_task = v0_0_39_step_task_create(
      "0"
    );
  }

  return v0_0_39_step_task;
}


#ifdef v0_0_39_step_task_MAIN

void test_v0_0_39_step_task(int include_optional) {
    v0_0_39_step_task_t* v0_0_39_step_task_1 = instantiate_v0_0_39_step_task(include_optional);

	cJSON* jsonv0_0_39_step_task_1 = v0_0_39_step_task_convertToJSON(v0_0_39_step_task_1);
	printf("v0_0_39_step_task :\n%s\n", cJSON_Print(jsonv0_0_39_step_task_1));
	v0_0_39_step_task_t* v0_0_39_step_task_2 = v0_0_39_step_task_parseFromJSON(jsonv0_0_39_step_task_1);
	cJSON* jsonv0_0_39_step_task_2 = v0_0_39_step_task_convertToJSON(v0_0_39_step_task_2);
	printf("repeating v0_0_39_step_task:\n%s\n", cJSON_Print(jsonv0_0_39_step_task_2));
}

int main() {
  test_v0_0_39_step_task(1);
  test_v0_0_39_step_task(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_step_task_MAIN
#endif // v0_0_39_step_task_TEST
