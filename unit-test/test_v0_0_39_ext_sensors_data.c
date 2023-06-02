#ifndef v0_0_39_ext_sensors_data_TEST
#define v0_0_39_ext_sensors_data_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_ext_sensors_data_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_ext_sensors_data.h"
v0_0_39_ext_sensors_data_t* instantiate_v0_0_39_ext_sensors_data(int include_optional);

#include "test_v0_0_39_uint64_no_val.c"
#include "test_v0_0_39_uint32_no_val.c"


v0_0_39_ext_sensors_data_t* instantiate_v0_0_39_ext_sensors_data(int include_optional) {
  v0_0_39_ext_sensors_data_t* v0_0_39_ext_sensors_data = NULL;
  if (include_optional) {
    v0_0_39_ext_sensors_data = v0_0_39_ext_sensors_data_create(
       // false, not to have infinite recursion
      instantiate_v0_0_39_uint64_no_val(0),
       // false, not to have infinite recursion
      instantiate_v0_0_39_uint32_no_val(0),
      56,
      56
    );
  } else {
    v0_0_39_ext_sensors_data = v0_0_39_ext_sensors_data_create(
      NULL,
      NULL,
      56,
      56
    );
  }

  return v0_0_39_ext_sensors_data;
}


#ifdef v0_0_39_ext_sensors_data_MAIN

void test_v0_0_39_ext_sensors_data(int include_optional) {
    v0_0_39_ext_sensors_data_t* v0_0_39_ext_sensors_data_1 = instantiate_v0_0_39_ext_sensors_data(include_optional);

	cJSON* jsonv0_0_39_ext_sensors_data_1 = v0_0_39_ext_sensors_data_convertToJSON(v0_0_39_ext_sensors_data_1);
	printf("v0_0_39_ext_sensors_data :\n%s\n", cJSON_Print(jsonv0_0_39_ext_sensors_data_1));
	v0_0_39_ext_sensors_data_t* v0_0_39_ext_sensors_data_2 = v0_0_39_ext_sensors_data_parseFromJSON(jsonv0_0_39_ext_sensors_data_1);
	cJSON* jsonv0_0_39_ext_sensors_data_2 = v0_0_39_ext_sensors_data_convertToJSON(v0_0_39_ext_sensors_data_2);
	printf("repeating v0_0_39_ext_sensors_data:\n%s\n", cJSON_Print(jsonv0_0_39_ext_sensors_data_2));
}

int main() {
  test_v0_0_39_ext_sensors_data(1);
  test_v0_0_39_ext_sensors_data(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_ext_sensors_data_MAIN
#endif // v0_0_39_ext_sensors_data_TEST
