#ifndef v0_0_39_partition_info_nodes_TEST
#define v0_0_39_partition_info_nodes_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_partition_info_nodes_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_partition_info_nodes.h"
v0_0_39_partition_info_nodes_t* instantiate_v0_0_39_partition_info_nodes(int include_optional);



v0_0_39_partition_info_nodes_t* instantiate_v0_0_39_partition_info_nodes(int include_optional) {
  v0_0_39_partition_info_nodes_t* v0_0_39_partition_info_nodes = NULL;
  if (include_optional) {
    v0_0_39_partition_info_nodes = v0_0_39_partition_info_nodes_create(
      56
    );
  } else {
    v0_0_39_partition_info_nodes = v0_0_39_partition_info_nodes_create(
      56
    );
  }

  return v0_0_39_partition_info_nodes;
}


#ifdef v0_0_39_partition_info_nodes_MAIN

void test_v0_0_39_partition_info_nodes(int include_optional) {
    v0_0_39_partition_info_nodes_t* v0_0_39_partition_info_nodes_1 = instantiate_v0_0_39_partition_info_nodes(include_optional);

	cJSON* jsonv0_0_39_partition_info_nodes_1 = v0_0_39_partition_info_nodes_convertToJSON(v0_0_39_partition_info_nodes_1);
	printf("v0_0_39_partition_info_nodes :\n%s\n", cJSON_Print(jsonv0_0_39_partition_info_nodes_1));
	v0_0_39_partition_info_nodes_t* v0_0_39_partition_info_nodes_2 = v0_0_39_partition_info_nodes_parseFromJSON(jsonv0_0_39_partition_info_nodes_1);
	cJSON* jsonv0_0_39_partition_info_nodes_2 = v0_0_39_partition_info_nodes_convertToJSON(v0_0_39_partition_info_nodes_2);
	printf("repeating v0_0_39_partition_info_nodes:\n%s\n", cJSON_Print(jsonv0_0_39_partition_info_nodes_2));
}

int main() {
  test_v0_0_39_partition_info_nodes(1);
  test_v0_0_39_partition_info_nodes(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_partition_info_nodes_MAIN
#endif // v0_0_39_partition_info_nodes_TEST
