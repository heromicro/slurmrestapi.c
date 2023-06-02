#ifndef v0_0_37_node_allocation_TEST
#define v0_0_37_node_allocation_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_37_node_allocation_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_37_node_allocation.h"
v0_0_37_node_allocation_t* instantiate_v0_0_37_node_allocation(int include_optional);



v0_0_37_node_allocation_t* instantiate_v0_0_37_node_allocation(int include_optional) {
  v0_0_37_node_allocation_t* v0_0_37_node_allocation = NULL;
  if (include_optional) {
    v0_0_37_node_allocation = v0_0_37_node_allocation_create(
      56,
      0,
      0,
      0
    );
  } else {
    v0_0_37_node_allocation = v0_0_37_node_allocation_create(
      56,
      0,
      0,
      0
    );
  }

  return v0_0_37_node_allocation;
}


#ifdef v0_0_37_node_allocation_MAIN

void test_v0_0_37_node_allocation(int include_optional) {
    v0_0_37_node_allocation_t* v0_0_37_node_allocation_1 = instantiate_v0_0_37_node_allocation(include_optional);

	cJSON* jsonv0_0_37_node_allocation_1 = v0_0_37_node_allocation_convertToJSON(v0_0_37_node_allocation_1);
	printf("v0_0_37_node_allocation :\n%s\n", cJSON_Print(jsonv0_0_37_node_allocation_1));
	v0_0_37_node_allocation_t* v0_0_37_node_allocation_2 = v0_0_37_node_allocation_parseFromJSON(jsonv0_0_37_node_allocation_1);
	cJSON* jsonv0_0_37_node_allocation_2 = v0_0_37_node_allocation_convertToJSON(v0_0_37_node_allocation_2);
	printf("repeating v0_0_37_node_allocation:\n%s\n", cJSON_Print(jsonv0_0_37_node_allocation_2));
}

int main() {
  test_v0_0_37_node_allocation(1);
  test_v0_0_37_node_allocation(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_37_node_allocation_MAIN
#endif // v0_0_37_node_allocation_TEST
