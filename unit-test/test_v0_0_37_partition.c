#ifndef v0_0_37_partition_TEST
#define v0_0_37_partition_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_37_partition_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_37_partition.h"
v0_0_37_partition_t* instantiate_v0_0_37_partition(int include_optional);



v0_0_37_partition_t* instantiate_v0_0_37_partition(int include_optional) {
  v0_0_37_partition_t* v0_0_37_partition = NULL;
  if (include_optional) {
    v0_0_37_partition = v0_0_37_partition_create(
      list_createList(),
      list_createList(),
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      56,
      "0",
      "0",
      56,
      56,
      56,
      56,
      56,
      56,
      "0",
      "0",
      56,
      56,
      56,
      "0",
      "0",
      56,
      56,
      "0"
    );
  } else {
    v0_0_37_partition = v0_0_37_partition_create(
      list_createList(),
      list_createList(),
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      56,
      "0",
      "0",
      56,
      56,
      56,
      56,
      56,
      56,
      "0",
      "0",
      56,
      56,
      56,
      "0",
      "0",
      56,
      56,
      "0"
    );
  }

  return v0_0_37_partition;
}


#ifdef v0_0_37_partition_MAIN

void test_v0_0_37_partition(int include_optional) {
    v0_0_37_partition_t* v0_0_37_partition_1 = instantiate_v0_0_37_partition(include_optional);

	cJSON* jsonv0_0_37_partition_1 = v0_0_37_partition_convertToJSON(v0_0_37_partition_1);
	printf("v0_0_37_partition :\n%s\n", cJSON_Print(jsonv0_0_37_partition_1));
	v0_0_37_partition_t* v0_0_37_partition_2 = v0_0_37_partition_parseFromJSON(jsonv0_0_37_partition_1);
	cJSON* jsonv0_0_37_partition_2 = v0_0_37_partition_convertToJSON(v0_0_37_partition_2);
	printf("repeating v0_0_37_partition:\n%s\n", cJSON_Print(jsonv0_0_37_partition_2));
}

int main() {
  test_v0_0_37_partition(1);
  test_v0_0_37_partition(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_37_partition_MAIN
#endif // v0_0_37_partition_TEST
