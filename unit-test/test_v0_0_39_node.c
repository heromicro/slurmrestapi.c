#ifndef v0_0_39_node_TEST
#define v0_0_39_node_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_node_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_node.h"
v0_0_39_node_t* instantiate_v0_0_39_node(int include_optional);

#include "test_v0_0_39_uint32_no_val.c"
#include "test_v0_0_39_uint64_no_val.c"
#include "test_v0_0_39_acct_gather_energy.c"
#include "test_v0_0_39_ext_sensors_data.c"
#include "test_v0_0_39_power_mgmt_data.c"
#include "test_v0_0_39_uint64_no_val.c"


v0_0_39_node_t* instantiate_v0_0_39_node(int include_optional) {
  v0_0_39_node_t* v0_0_39_node = NULL;
  if (include_optional) {
    v0_0_39_node = v0_0_39_node_create(
      "0",
      "0",
      56,
      56,
      "0",
      56,
      56,
      56,
       // false, not to have infinite recursion
      instantiate_v0_0_39_uint32_no_val(0),
       // false, not to have infinite recursion
      instantiate_v0_0_39_uint64_no_val(0),
      56,
      56,
      "0",
       // false, not to have infinite recursion
      instantiate_v0_0_39_acct_gather_energy(0),
       // false, not to have infinite recursion
      instantiate_v0_0_39_ext_sensors_data(0),
      "0",
       // false, not to have infinite recursion
      instantiate_v0_0_39_power_mgmt_data(0),
      list_createList(),
      list_createList(),
      "0",
      "0",
      "0",
      56,
      "0",
      56,
      "0",
      list_createList(),
      "0",
      "0",
      list_createList(),
      "0",
      "0",
      list_createList(),
      56,
      56,
      "0",
      "0",
      56,
      "0",
       // false, not to have infinite recursion
      instantiate_v0_0_39_uint64_no_val(0),
      "0",
      56,
      56,
      56,
      "0",
      1.337,
      56,
      56,
      56,
      56,
      56,
      "0",
      "0"
    );
  } else {
    v0_0_39_node = v0_0_39_node_create(
      "0",
      "0",
      56,
      56,
      "0",
      56,
      56,
      56,
      NULL,
      NULL,
      56,
      56,
      "0",
      NULL,
      NULL,
      "0",
      NULL,
      list_createList(),
      list_createList(),
      "0",
      "0",
      "0",
      56,
      "0",
      56,
      "0",
      list_createList(),
      "0",
      "0",
      list_createList(),
      "0",
      "0",
      list_createList(),
      56,
      56,
      "0",
      "0",
      56,
      "0",
      NULL,
      "0",
      56,
      56,
      56,
      "0",
      1.337,
      56,
      56,
      56,
      56,
      56,
      "0",
      "0"
    );
  }

  return v0_0_39_node;
}


#ifdef v0_0_39_node_MAIN

void test_v0_0_39_node(int include_optional) {
    v0_0_39_node_t* v0_0_39_node_1 = instantiate_v0_0_39_node(include_optional);

	cJSON* jsonv0_0_39_node_1 = v0_0_39_node_convertToJSON(v0_0_39_node_1);
	printf("v0_0_39_node :\n%s\n", cJSON_Print(jsonv0_0_39_node_1));
	v0_0_39_node_t* v0_0_39_node_2 = v0_0_39_node_parseFromJSON(jsonv0_0_39_node_1);
	cJSON* jsonv0_0_39_node_2 = v0_0_39_node_convertToJSON(v0_0_39_node_2);
	printf("repeating v0_0_39_node:\n%s\n", cJSON_Print(jsonv0_0_39_node_2));
}

int main() {
  test_v0_0_39_node(1);
  test_v0_0_39_node(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_node_MAIN
#endif // v0_0_39_node_TEST
