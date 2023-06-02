#ifndef v0_0_39_qos_limits_min_tres_TEST
#define v0_0_39_qos_limits_min_tres_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_qos_limits_min_tres_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_qos_limits_min_tres.h"
v0_0_39_qos_limits_min_tres_t* instantiate_v0_0_39_qos_limits_min_tres(int include_optional);

#include "test_v0_0_39_qos_limits_min_tres_per.c"


v0_0_39_qos_limits_min_tres_t* instantiate_v0_0_39_qos_limits_min_tres(int include_optional) {
  v0_0_39_qos_limits_min_tres_t* v0_0_39_qos_limits_min_tres = NULL;
  if (include_optional) {
    v0_0_39_qos_limits_min_tres = v0_0_39_qos_limits_min_tres_create(
       // false, not to have infinite recursion
      instantiate_v0_0_39_qos_limits_min_tres_per(0)
    );
  } else {
    v0_0_39_qos_limits_min_tres = v0_0_39_qos_limits_min_tres_create(
      NULL
    );
  }

  return v0_0_39_qos_limits_min_tres;
}


#ifdef v0_0_39_qos_limits_min_tres_MAIN

void test_v0_0_39_qos_limits_min_tres(int include_optional) {
    v0_0_39_qos_limits_min_tres_t* v0_0_39_qos_limits_min_tres_1 = instantiate_v0_0_39_qos_limits_min_tres(include_optional);

	cJSON* jsonv0_0_39_qos_limits_min_tres_1 = v0_0_39_qos_limits_min_tres_convertToJSON(v0_0_39_qos_limits_min_tres_1);
	printf("v0_0_39_qos_limits_min_tres :\n%s\n", cJSON_Print(jsonv0_0_39_qos_limits_min_tres_1));
	v0_0_39_qos_limits_min_tres_t* v0_0_39_qos_limits_min_tres_2 = v0_0_39_qos_limits_min_tres_parseFromJSON(jsonv0_0_39_qos_limits_min_tres_1);
	cJSON* jsonv0_0_39_qos_limits_min_tres_2 = v0_0_39_qos_limits_min_tres_convertToJSON(v0_0_39_qos_limits_min_tres_2);
	printf("repeating v0_0_39_qos_limits_min_tres:\n%s\n", cJSON_Print(jsonv0_0_39_qos_limits_min_tres_2));
}

int main() {
  test_v0_0_39_qos_limits_min_tres(1);
  test_v0_0_39_qos_limits_min_tres(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_qos_limits_min_tres_MAIN
#endif // v0_0_39_qos_limits_min_tres_TEST
