#ifndef v0_0_39_partition_info_TEST
#define v0_0_39_partition_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_partition_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_partition_info.h"
v0_0_39_partition_info_t* instantiate_v0_0_39_partition_info(int include_optional);

#include "test_v0_0_39_partition_info_nodes.c"
#include "test_v0_0_39_partition_info_accounts.c"
#include "test_v0_0_39_partition_info_groups.c"
#include "test_v0_0_39_partition_info_qos.c"
#include "test_v0_0_39_partition_info_tres.c"
#include "test_v0_0_39_partition_info_nodes.c"
#include "test_v0_0_39_partition_info_defaults.c"
#include "test_v0_0_39_partition_info_maximums.c"
#include "test_v0_0_39_partition_info_minimums.c"
#include "test_v0_0_39_partition_info_priority.c"
#include "test_v0_0_39_partition_info_timeouts.c"
#include "test_v0_0_39_uint32_no_val.c"


v0_0_39_partition_info_t* instantiate_v0_0_39_partition_info(int include_optional) {
  v0_0_39_partition_info_t* v0_0_39_partition_info = NULL;
  if (include_optional) {
    v0_0_39_partition_info = v0_0_39_partition_info_create(
       // false, not to have infinite recursion
      instantiate_v0_0_39_partition_info_nodes(0),
       // false, not to have infinite recursion
      instantiate_v0_0_39_partition_info_accounts(0),
       // false, not to have infinite recursion
      instantiate_v0_0_39_partition_info_groups(0),
       // false, not to have infinite recursion
      instantiate_v0_0_39_partition_info_qos(0),
      "0",
       // false, not to have infinite recursion
      instantiate_v0_0_39_partition_info_tres(0),
      "0",
       // false, not to have infinite recursion
      instantiate_v0_0_39_partition_info_nodes(0),
       // false, not to have infinite recursion
      instantiate_v0_0_39_partition_info_defaults(0),
      56,
       // false, not to have infinite recursion
      instantiate_v0_0_39_partition_info_maximums(0),
       // false, not to have infinite recursion
      instantiate_v0_0_39_partition_info_minimums(0),
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_v0_0_39_partition_info_priority(0),
       // false, not to have infinite recursion
      instantiate_v0_0_39_partition_info_timeouts(0),
       // false, not to have infinite recursion
      instantiate_v0_0_39_uint32_no_val(0)
    );
  } else {
    v0_0_39_partition_info = v0_0_39_partition_info_create(
      NULL,
      NULL,
      NULL,
      NULL,
      "0",
      NULL,
      "0",
      NULL,
      NULL,
      56,
      NULL,
      NULL,
      "0",
      "0",
      NULL,
      NULL,
      NULL
    );
  }

  return v0_0_39_partition_info;
}


#ifdef v0_0_39_partition_info_MAIN

void test_v0_0_39_partition_info(int include_optional) {
    v0_0_39_partition_info_t* v0_0_39_partition_info_1 = instantiate_v0_0_39_partition_info(include_optional);

	cJSON* jsonv0_0_39_partition_info_1 = v0_0_39_partition_info_convertToJSON(v0_0_39_partition_info_1);
	printf("v0_0_39_partition_info :\n%s\n", cJSON_Print(jsonv0_0_39_partition_info_1));
	v0_0_39_partition_info_t* v0_0_39_partition_info_2 = v0_0_39_partition_info_parseFromJSON(jsonv0_0_39_partition_info_1);
	cJSON* jsonv0_0_39_partition_info_2 = v0_0_39_partition_info_convertToJSON(v0_0_39_partition_info_2);
	printf("repeating v0_0_39_partition_info:\n%s\n", cJSON_Print(jsonv0_0_39_partition_info_2));
}

int main() {
  test_v0_0_39_partition_info(1);
  test_v0_0_39_partition_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_partition_info_MAIN
#endif // v0_0_39_partition_info_TEST
