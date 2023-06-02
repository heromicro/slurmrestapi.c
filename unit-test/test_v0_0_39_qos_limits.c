#ifndef v0_0_39_qos_limits_TEST
#define v0_0_39_qos_limits_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_qos_limits_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_qos_limits.h"
v0_0_39_qos_limits_t* instantiate_v0_0_39_qos_limits(int include_optional);

#include "test_v0_0_39_qos_limits_min.c"


v0_0_39_qos_limits_t* instantiate_v0_0_39_qos_limits(int include_optional) {
  v0_0_39_qos_limits_t* v0_0_39_qos_limits = NULL;
  if (include_optional) {
    v0_0_39_qos_limits = v0_0_39_qos_limits_create(
       // false, not to have infinite recursion
      instantiate_v0_0_39_qos_limits_min(0)
    );
  } else {
    v0_0_39_qos_limits = v0_0_39_qos_limits_create(
      NULL
    );
  }

  return v0_0_39_qos_limits;
}


#ifdef v0_0_39_qos_limits_MAIN

void test_v0_0_39_qos_limits(int include_optional) {
    v0_0_39_qos_limits_t* v0_0_39_qos_limits_1 = instantiate_v0_0_39_qos_limits(include_optional);

	cJSON* jsonv0_0_39_qos_limits_1 = v0_0_39_qos_limits_convertToJSON(v0_0_39_qos_limits_1);
	printf("v0_0_39_qos_limits :\n%s\n", cJSON_Print(jsonv0_0_39_qos_limits_1));
	v0_0_39_qos_limits_t* v0_0_39_qos_limits_2 = v0_0_39_qos_limits_parseFromJSON(jsonv0_0_39_qos_limits_1);
	cJSON* jsonv0_0_39_qos_limits_2 = v0_0_39_qos_limits_convertToJSON(v0_0_39_qos_limits_2);
	printf("repeating v0_0_39_qos_limits:\n%s\n", cJSON_Print(jsonv0_0_39_qos_limits_2));
}

int main() {
  test_v0_0_39_qos_limits(1);
  test_v0_0_39_qos_limits(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_qos_limits_MAIN
#endif // v0_0_39_qos_limits_TEST
