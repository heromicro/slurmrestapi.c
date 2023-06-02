#ifndef v0_0_39_partition_info_priority_TEST
#define v0_0_39_partition_info_priority_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_partition_info_priority_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_partition_info_priority.h"
v0_0_39_partition_info_priority_t* instantiate_v0_0_39_partition_info_priority(int include_optional);



v0_0_39_partition_info_priority_t* instantiate_v0_0_39_partition_info_priority(int include_optional) {
  v0_0_39_partition_info_priority_t* v0_0_39_partition_info_priority = NULL;
  if (include_optional) {
    v0_0_39_partition_info_priority = v0_0_39_partition_info_priority_create(
      56
    );
  } else {
    v0_0_39_partition_info_priority = v0_0_39_partition_info_priority_create(
      56
    );
  }

  return v0_0_39_partition_info_priority;
}


#ifdef v0_0_39_partition_info_priority_MAIN

void test_v0_0_39_partition_info_priority(int include_optional) {
    v0_0_39_partition_info_priority_t* v0_0_39_partition_info_priority_1 = instantiate_v0_0_39_partition_info_priority(include_optional);

	cJSON* jsonv0_0_39_partition_info_priority_1 = v0_0_39_partition_info_priority_convertToJSON(v0_0_39_partition_info_priority_1);
	printf("v0_0_39_partition_info_priority :\n%s\n", cJSON_Print(jsonv0_0_39_partition_info_priority_1));
	v0_0_39_partition_info_priority_t* v0_0_39_partition_info_priority_2 = v0_0_39_partition_info_priority_parseFromJSON(jsonv0_0_39_partition_info_priority_1);
	cJSON* jsonv0_0_39_partition_info_priority_2 = v0_0_39_partition_info_priority_convertToJSON(v0_0_39_partition_info_priority_2);
	printf("repeating v0_0_39_partition_info_priority:\n%s\n", cJSON_Print(jsonv0_0_39_partition_info_priority_2));
}

int main() {
  test_v0_0_39_partition_info_priority(1);
  test_v0_0_39_partition_info_priority(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_partition_info_priority_MAIN
#endif // v0_0_39_partition_info_priority_TEST
