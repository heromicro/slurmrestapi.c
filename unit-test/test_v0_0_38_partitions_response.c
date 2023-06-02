#ifndef v0_0_38_partitions_response_TEST
#define v0_0_38_partitions_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_38_partitions_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_38_partitions_response.h"
v0_0_38_partitions_response_t* instantiate_v0_0_38_partitions_response(int include_optional);

#include "test_v0_0_38_meta.c"


v0_0_38_partitions_response_t* instantiate_v0_0_38_partitions_response(int include_optional) {
  v0_0_38_partitions_response_t* v0_0_38_partitions_response = NULL;
  if (include_optional) {
    v0_0_38_partitions_response = v0_0_38_partitions_response_create(
       // false, not to have infinite recursion
      instantiate_v0_0_38_meta(0),
      list_createList(),
      list_createList()
    );
  } else {
    v0_0_38_partitions_response = v0_0_38_partitions_response_create(
      NULL,
      list_createList(),
      list_createList()
    );
  }

  return v0_0_38_partitions_response;
}


#ifdef v0_0_38_partitions_response_MAIN

void test_v0_0_38_partitions_response(int include_optional) {
    v0_0_38_partitions_response_t* v0_0_38_partitions_response_1 = instantiate_v0_0_38_partitions_response(include_optional);

	cJSON* jsonv0_0_38_partitions_response_1 = v0_0_38_partitions_response_convertToJSON(v0_0_38_partitions_response_1);
	printf("v0_0_38_partitions_response :\n%s\n", cJSON_Print(jsonv0_0_38_partitions_response_1));
	v0_0_38_partitions_response_t* v0_0_38_partitions_response_2 = v0_0_38_partitions_response_parseFromJSON(jsonv0_0_38_partitions_response_1);
	cJSON* jsonv0_0_38_partitions_response_2 = v0_0_38_partitions_response_convertToJSON(v0_0_38_partitions_response_2);
	printf("repeating v0_0_38_partitions_response:\n%s\n", cJSON_Print(jsonv0_0_38_partitions_response_2));
}

int main() {
  test_v0_0_38_partitions_response(1);
  test_v0_0_38_partitions_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_38_partitions_response_MAIN
#endif // v0_0_38_partitions_response_TEST
