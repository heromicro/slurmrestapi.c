#ifndef v0_0_39_qos_limits_min_tres_per_TEST
#define v0_0_39_qos_limits_min_tres_per_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_qos_limits_min_tres_per_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_qos_limits_min_tres_per.h"
v0_0_39_qos_limits_min_tres_per_t* instantiate_v0_0_39_qos_limits_min_tres_per(int include_optional);



v0_0_39_qos_limits_min_tres_per_t* instantiate_v0_0_39_qos_limits_min_tres_per(int include_optional) {
  v0_0_39_qos_limits_min_tres_per_t* v0_0_39_qos_limits_min_tres_per = NULL;
  if (include_optional) {
    v0_0_39_qos_limits_min_tres_per = v0_0_39_qos_limits_min_tres_per_create(
      list_createList()
    );
  } else {
    v0_0_39_qos_limits_min_tres_per = v0_0_39_qos_limits_min_tres_per_create(
      list_createList()
    );
  }

  return v0_0_39_qos_limits_min_tres_per;
}


#ifdef v0_0_39_qos_limits_min_tres_per_MAIN

void test_v0_0_39_qos_limits_min_tres_per(int include_optional) {
    v0_0_39_qos_limits_min_tres_per_t* v0_0_39_qos_limits_min_tres_per_1 = instantiate_v0_0_39_qos_limits_min_tres_per(include_optional);

	cJSON* jsonv0_0_39_qos_limits_min_tres_per_1 = v0_0_39_qos_limits_min_tres_per_convertToJSON(v0_0_39_qos_limits_min_tres_per_1);
	printf("v0_0_39_qos_limits_min_tres_per :\n%s\n", cJSON_Print(jsonv0_0_39_qos_limits_min_tres_per_1));
	v0_0_39_qos_limits_min_tres_per_t* v0_0_39_qos_limits_min_tres_per_2 = v0_0_39_qos_limits_min_tres_per_parseFromJSON(jsonv0_0_39_qos_limits_min_tres_per_1);
	cJSON* jsonv0_0_39_qos_limits_min_tres_per_2 = v0_0_39_qos_limits_min_tres_per_convertToJSON(v0_0_39_qos_limits_min_tres_per_2);
	printf("repeating v0_0_39_qos_limits_min_tres_per:\n%s\n", cJSON_Print(jsonv0_0_39_qos_limits_min_tres_per_2));
}

int main() {
  test_v0_0_39_qos_limits_min_tres_per(1);
  test_v0_0_39_qos_limits_min_tres_per(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_qos_limits_min_tres_per_MAIN
#endif // v0_0_39_qos_limits_min_tres_per_TEST
