#ifndef v0_0_39_partition_info_minimums_TEST
#define v0_0_39_partition_info_minimums_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_partition_info_minimums_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_partition_info_minimums.h"
v0_0_39_partition_info_minimums_t* instantiate_v0_0_39_partition_info_minimums(int include_optional);



v0_0_39_partition_info_minimums_t* instantiate_v0_0_39_partition_info_minimums(int include_optional) {
  v0_0_39_partition_info_minimums_t* v0_0_39_partition_info_minimums = NULL;
  if (include_optional) {
    v0_0_39_partition_info_minimums = v0_0_39_partition_info_minimums_create(
      56
    );
  } else {
    v0_0_39_partition_info_minimums = v0_0_39_partition_info_minimums_create(
      56
    );
  }

  return v0_0_39_partition_info_minimums;
}


#ifdef v0_0_39_partition_info_minimums_MAIN

void test_v0_0_39_partition_info_minimums(int include_optional) {
    v0_0_39_partition_info_minimums_t* v0_0_39_partition_info_minimums_1 = instantiate_v0_0_39_partition_info_minimums(include_optional);

	cJSON* jsonv0_0_39_partition_info_minimums_1 = v0_0_39_partition_info_minimums_convertToJSON(v0_0_39_partition_info_minimums_1);
	printf("v0_0_39_partition_info_minimums :\n%s\n", cJSON_Print(jsonv0_0_39_partition_info_minimums_1));
	v0_0_39_partition_info_minimums_t* v0_0_39_partition_info_minimums_2 = v0_0_39_partition_info_minimums_parseFromJSON(jsonv0_0_39_partition_info_minimums_1);
	cJSON* jsonv0_0_39_partition_info_minimums_2 = v0_0_39_partition_info_minimums_convertToJSON(v0_0_39_partition_info_minimums_2);
	printf("repeating v0_0_39_partition_info_minimums:\n%s\n", cJSON_Print(jsonv0_0_39_partition_info_minimums_2));
}

int main() {
  test_v0_0_39_partition_info_minimums(1);
  test_v0_0_39_partition_info_minimums(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_partition_info_minimums_MAIN
#endif // v0_0_39_partition_info_minimums_TEST
