#ifndef v0_0_39_step_tasks_TEST
#define v0_0_39_step_tasks_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_step_tasks_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_step_tasks.h"
v0_0_39_step_tasks_t* instantiate_v0_0_39_step_tasks(int include_optional);



v0_0_39_step_tasks_t* instantiate_v0_0_39_step_tasks(int include_optional) {
  v0_0_39_step_tasks_t* v0_0_39_step_tasks = NULL;
  if (include_optional) {
    v0_0_39_step_tasks = v0_0_39_step_tasks_create(
      56
    );
  } else {
    v0_0_39_step_tasks = v0_0_39_step_tasks_create(
      56
    );
  }

  return v0_0_39_step_tasks;
}


#ifdef v0_0_39_step_tasks_MAIN

void test_v0_0_39_step_tasks(int include_optional) {
    v0_0_39_step_tasks_t* v0_0_39_step_tasks_1 = instantiate_v0_0_39_step_tasks(include_optional);

	cJSON* jsonv0_0_39_step_tasks_1 = v0_0_39_step_tasks_convertToJSON(v0_0_39_step_tasks_1);
	printf("v0_0_39_step_tasks :\n%s\n", cJSON_Print(jsonv0_0_39_step_tasks_1));
	v0_0_39_step_tasks_t* v0_0_39_step_tasks_2 = v0_0_39_step_tasks_parseFromJSON(jsonv0_0_39_step_tasks_1);
	cJSON* jsonv0_0_39_step_tasks_2 = v0_0_39_step_tasks_convertToJSON(v0_0_39_step_tasks_2);
	printf("repeating v0_0_39_step_tasks:\n%s\n", cJSON_Print(jsonv0_0_39_step_tasks_2));
}

int main() {
  test_v0_0_39_step_tasks(1);
  test_v0_0_39_step_tasks(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_step_tasks_MAIN
#endif // v0_0_39_step_tasks_TEST
