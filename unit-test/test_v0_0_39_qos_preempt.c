#ifndef v0_0_39_qos_preempt_TEST
#define v0_0_39_qos_preempt_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_qos_preempt_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_qos_preempt.h"
v0_0_39_qos_preempt_t* instantiate_v0_0_39_qos_preempt(int include_optional);

#include "test_v0_0_39_uint32_no_val.c"


v0_0_39_qos_preempt_t* instantiate_v0_0_39_qos_preempt(int include_optional) {
  v0_0_39_qos_preempt_t* v0_0_39_qos_preempt = NULL;
  if (include_optional) {
    v0_0_39_qos_preempt = v0_0_39_qos_preempt_create(
       // false, not to have infinite recursion
      instantiate_v0_0_39_uint32_no_val(0)
    );
  } else {
    v0_0_39_qos_preempt = v0_0_39_qos_preempt_create(
      NULL
    );
  }

  return v0_0_39_qos_preempt;
}


#ifdef v0_0_39_qos_preempt_MAIN

void test_v0_0_39_qos_preempt(int include_optional) {
    v0_0_39_qos_preempt_t* v0_0_39_qos_preempt_1 = instantiate_v0_0_39_qos_preempt(include_optional);

	cJSON* jsonv0_0_39_qos_preempt_1 = v0_0_39_qos_preempt_convertToJSON(v0_0_39_qos_preempt_1);
	printf("v0_0_39_qos_preempt :\n%s\n", cJSON_Print(jsonv0_0_39_qos_preempt_1));
	v0_0_39_qos_preempt_t* v0_0_39_qos_preempt_2 = v0_0_39_qos_preempt_parseFromJSON(jsonv0_0_39_qos_preempt_1);
	cJSON* jsonv0_0_39_qos_preempt_2 = v0_0_39_qos_preempt_convertToJSON(v0_0_39_qos_preempt_2);
	printf("repeating v0_0_39_qos_preempt:\n%s\n", cJSON_Print(jsonv0_0_39_qos_preempt_2));
}

int main() {
  test_v0_0_39_qos_preempt(1);
  test_v0_0_39_qos_preempt(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_qos_preempt_MAIN
#endif // v0_0_39_qos_preempt_TEST
