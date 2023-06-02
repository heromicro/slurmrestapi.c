#ifndef v0_0_39_partition_info_timeouts_TEST
#define v0_0_39_partition_info_timeouts_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_partition_info_timeouts_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_partition_info_timeouts.h"
v0_0_39_partition_info_timeouts_t* instantiate_v0_0_39_partition_info_timeouts(int include_optional);

#include "test_v0_0_39_uint16_no_val.c"


v0_0_39_partition_info_timeouts_t* instantiate_v0_0_39_partition_info_timeouts(int include_optional) {
  v0_0_39_partition_info_timeouts_t* v0_0_39_partition_info_timeouts = NULL;
  if (include_optional) {
    v0_0_39_partition_info_timeouts = v0_0_39_partition_info_timeouts_create(
       // false, not to have infinite recursion
      instantiate_v0_0_39_uint16_no_val(0)
    );
  } else {
    v0_0_39_partition_info_timeouts = v0_0_39_partition_info_timeouts_create(
      NULL
    );
  }

  return v0_0_39_partition_info_timeouts;
}


#ifdef v0_0_39_partition_info_timeouts_MAIN

void test_v0_0_39_partition_info_timeouts(int include_optional) {
    v0_0_39_partition_info_timeouts_t* v0_0_39_partition_info_timeouts_1 = instantiate_v0_0_39_partition_info_timeouts(include_optional);

	cJSON* jsonv0_0_39_partition_info_timeouts_1 = v0_0_39_partition_info_timeouts_convertToJSON(v0_0_39_partition_info_timeouts_1);
	printf("v0_0_39_partition_info_timeouts :\n%s\n", cJSON_Print(jsonv0_0_39_partition_info_timeouts_1));
	v0_0_39_partition_info_timeouts_t* v0_0_39_partition_info_timeouts_2 = v0_0_39_partition_info_timeouts_parseFromJSON(jsonv0_0_39_partition_info_timeouts_1);
	cJSON* jsonv0_0_39_partition_info_timeouts_2 = v0_0_39_partition_info_timeouts_convertToJSON(v0_0_39_partition_info_timeouts_2);
	printf("repeating v0_0_39_partition_info_timeouts:\n%s\n", cJSON_Print(jsonv0_0_39_partition_info_timeouts_2));
}

int main() {
  test_v0_0_39_partition_info_timeouts(1);
  test_v0_0_39_partition_info_timeouts(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_partition_info_timeouts_MAIN
#endif // v0_0_39_partition_info_timeouts_TEST
