#ifndef v0_0_39_step_TEST
#define v0_0_39_step_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_step_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_step.h"
v0_0_39_step_t* instantiate_v0_0_39_step(int include_optional);

#include "test_v0_0_39_step_time.c"
#include "test_v0_0_39_job_exit_code.c"
#include "test_v0_0_39_step_nodes.c"
#include "test_v0_0_39_step_tasks.c"
#include "test_v0_0_39_step_cpu.c"
#include "test_v0_0_39_step_statistics.c"
#include "test_v0_0_39_job_reservation.c"
#include "test_v0_0_39_step_task.c"
#include "test_v0_0_39_step_tres.c"


v0_0_39_step_t* instantiate_v0_0_39_step(int include_optional) {
  v0_0_39_step_t* v0_0_39_step = NULL;
  if (include_optional) {
    v0_0_39_step = v0_0_39_step_create(
       // false, not to have infinite recursion
      instantiate_v0_0_39_step_time(0),
       // false, not to have infinite recursion
      instantiate_v0_0_39_job_exit_code(0),
       // false, not to have infinite recursion
      instantiate_v0_0_39_step_nodes(0),
       // false, not to have infinite recursion
      instantiate_v0_0_39_step_tasks(0),
      "0",
       // false, not to have infinite recursion
      instantiate_v0_0_39_step_cpu(0),
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_v0_0_39_step_statistics(0),
       // false, not to have infinite recursion
      instantiate_v0_0_39_job_reservation(0),
       // false, not to have infinite recursion
      instantiate_v0_0_39_step_task(0),
       // false, not to have infinite recursion
      instantiate_v0_0_39_step_tres(0)
    );
  } else {
    v0_0_39_step = v0_0_39_step_create(
      NULL,
      NULL,
      NULL,
      NULL,
      "0",
      NULL,
      "0",
      "0",
      NULL,
      NULL,
      NULL,
      NULL
    );
  }

  return v0_0_39_step;
}


#ifdef v0_0_39_step_MAIN

void test_v0_0_39_step(int include_optional) {
    v0_0_39_step_t* v0_0_39_step_1 = instantiate_v0_0_39_step(include_optional);

	cJSON* jsonv0_0_39_step_1 = v0_0_39_step_convertToJSON(v0_0_39_step_1);
	printf("v0_0_39_step :\n%s\n", cJSON_Print(jsonv0_0_39_step_1));
	v0_0_39_step_t* v0_0_39_step_2 = v0_0_39_step_parseFromJSON(jsonv0_0_39_step_1);
	cJSON* jsonv0_0_39_step_2 = v0_0_39_step_convertToJSON(v0_0_39_step_2);
	printf("repeating v0_0_39_step:\n%s\n", cJSON_Print(jsonv0_0_39_step_2));
}

int main() {
  test_v0_0_39_step(1);
  test_v0_0_39_step(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_step_MAIN
#endif // v0_0_39_step_TEST
