#ifndef v0_0_39_reservation_core_spec_TEST
#define v0_0_39_reservation_core_spec_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_reservation_core_spec_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_reservation_core_spec.h"
v0_0_39_reservation_core_spec_t* instantiate_v0_0_39_reservation_core_spec(int include_optional);



v0_0_39_reservation_core_spec_t* instantiate_v0_0_39_reservation_core_spec(int include_optional) {
  v0_0_39_reservation_core_spec_t* v0_0_39_reservation_core_spec = NULL;
  if (include_optional) {
    v0_0_39_reservation_core_spec = v0_0_39_reservation_core_spec_create(
      "0",
      "0"
    );
  } else {
    v0_0_39_reservation_core_spec = v0_0_39_reservation_core_spec_create(
      "0",
      "0"
    );
  }

  return v0_0_39_reservation_core_spec;
}


#ifdef v0_0_39_reservation_core_spec_MAIN

void test_v0_0_39_reservation_core_spec(int include_optional) {
    v0_0_39_reservation_core_spec_t* v0_0_39_reservation_core_spec_1 = instantiate_v0_0_39_reservation_core_spec(include_optional);

	cJSON* jsonv0_0_39_reservation_core_spec_1 = v0_0_39_reservation_core_spec_convertToJSON(v0_0_39_reservation_core_spec_1);
	printf("v0_0_39_reservation_core_spec :\n%s\n", cJSON_Print(jsonv0_0_39_reservation_core_spec_1));
	v0_0_39_reservation_core_spec_t* v0_0_39_reservation_core_spec_2 = v0_0_39_reservation_core_spec_parseFromJSON(jsonv0_0_39_reservation_core_spec_1);
	cJSON* jsonv0_0_39_reservation_core_spec_2 = v0_0_39_reservation_core_spec_convertToJSON(v0_0_39_reservation_core_spec_2);
	printf("repeating v0_0_39_reservation_core_spec:\n%s\n", cJSON_Print(jsonv0_0_39_reservation_core_spec_2));
}

int main() {
  test_v0_0_39_reservation_core_spec(1);
  test_v0_0_39_reservation_core_spec(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_reservation_core_spec_MAIN
#endif // v0_0_39_reservation_core_spec_TEST
