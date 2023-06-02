#ifndef v0_0_39_partition_info_maximums_TEST
#define v0_0_39_partition_info_maximums_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_partition_info_maximums_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_partition_info_maximums.h"
v0_0_39_partition_info_maximums_t* instantiate_v0_0_39_partition_info_maximums(int include_optional);

#include "test_v0_0_39_uint16_no_val.c"


v0_0_39_partition_info_maximums_t* instantiate_v0_0_39_partition_info_maximums(int include_optional) {
  v0_0_39_partition_info_maximums_t* v0_0_39_partition_info_maximums = NULL;
  if (include_optional) {
    v0_0_39_partition_info_maximums = v0_0_39_partition_info_maximums_create(
       // false, not to have infinite recursion
      instantiate_v0_0_39_uint16_no_val(0)
    );
  } else {
    v0_0_39_partition_info_maximums = v0_0_39_partition_info_maximums_create(
      NULL
    );
  }

  return v0_0_39_partition_info_maximums;
}


#ifdef v0_0_39_partition_info_maximums_MAIN

void test_v0_0_39_partition_info_maximums(int include_optional) {
    v0_0_39_partition_info_maximums_t* v0_0_39_partition_info_maximums_1 = instantiate_v0_0_39_partition_info_maximums(include_optional);

	cJSON* jsonv0_0_39_partition_info_maximums_1 = v0_0_39_partition_info_maximums_convertToJSON(v0_0_39_partition_info_maximums_1);
	printf("v0_0_39_partition_info_maximums :\n%s\n", cJSON_Print(jsonv0_0_39_partition_info_maximums_1));
	v0_0_39_partition_info_maximums_t* v0_0_39_partition_info_maximums_2 = v0_0_39_partition_info_maximums_parseFromJSON(jsonv0_0_39_partition_info_maximums_1);
	cJSON* jsonv0_0_39_partition_info_maximums_2 = v0_0_39_partition_info_maximums_convertToJSON(v0_0_39_partition_info_maximums_2);
	printf("repeating v0_0_39_partition_info_maximums:\n%s\n", cJSON_Print(jsonv0_0_39_partition_info_maximums_2));
}

int main() {
  test_v0_0_39_partition_info_maximums(1);
  test_v0_0_39_partition_info_maximums(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_partition_info_maximums_MAIN
#endif // v0_0_39_partition_info_maximums_TEST
