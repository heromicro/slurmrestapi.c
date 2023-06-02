#ifndef v0_0_39_step_cpu_TEST
#define v0_0_39_step_cpu_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_step_cpu_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_step_cpu.h"
v0_0_39_step_cpu_t* instantiate_v0_0_39_step_cpu(int include_optional);



v0_0_39_step_cpu_t* instantiate_v0_0_39_step_cpu(int include_optional) {
  v0_0_39_step_cpu_t* v0_0_39_step_cpu = NULL;
  if (include_optional) {
    v0_0_39_step_cpu = v0_0_39_step_cpu_create(
      "0"
    );
  } else {
    v0_0_39_step_cpu = v0_0_39_step_cpu_create(
      "0"
    );
  }

  return v0_0_39_step_cpu;
}


#ifdef v0_0_39_step_cpu_MAIN

void test_v0_0_39_step_cpu(int include_optional) {
    v0_0_39_step_cpu_t* v0_0_39_step_cpu_1 = instantiate_v0_0_39_step_cpu(include_optional);

	cJSON* jsonv0_0_39_step_cpu_1 = v0_0_39_step_cpu_convertToJSON(v0_0_39_step_cpu_1);
	printf("v0_0_39_step_cpu :\n%s\n", cJSON_Print(jsonv0_0_39_step_cpu_1));
	v0_0_39_step_cpu_t* v0_0_39_step_cpu_2 = v0_0_39_step_cpu_parseFromJSON(jsonv0_0_39_step_cpu_1);
	cJSON* jsonv0_0_39_step_cpu_2 = v0_0_39_step_cpu_convertToJSON(v0_0_39_step_cpu_2);
	printf("repeating v0_0_39_step_cpu:\n%s\n", cJSON_Print(jsonv0_0_39_step_cpu_2));
}

int main() {
  test_v0_0_39_step_cpu(1);
  test_v0_0_39_step_cpu(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_step_cpu_MAIN
#endif // v0_0_39_step_cpu_TEST
