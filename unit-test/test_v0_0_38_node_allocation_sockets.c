#ifndef v0_0_38_node_allocation_sockets_TEST
#define v0_0_38_node_allocation_sockets_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_38_node_allocation_sockets_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_38_node_allocation_sockets.h"
v0_0_38_node_allocation_sockets_t* instantiate_v0_0_38_node_allocation_sockets(int include_optional);



v0_0_38_node_allocation_sockets_t* instantiate_v0_0_38_node_allocation_sockets(int include_optional) {
  v0_0_38_node_allocation_sockets_t* v0_0_38_node_allocation_sockets = NULL;
  if (include_optional) {
    v0_0_38_node_allocation_sockets = v0_0_38_node_allocation_sockets_create(
      0
    );
  } else {
    v0_0_38_node_allocation_sockets = v0_0_38_node_allocation_sockets_create(
      0
    );
  }

  return v0_0_38_node_allocation_sockets;
}


#ifdef v0_0_38_node_allocation_sockets_MAIN

void test_v0_0_38_node_allocation_sockets(int include_optional) {
    v0_0_38_node_allocation_sockets_t* v0_0_38_node_allocation_sockets_1 = instantiate_v0_0_38_node_allocation_sockets(include_optional);

	cJSON* jsonv0_0_38_node_allocation_sockets_1 = v0_0_38_node_allocation_sockets_convertToJSON(v0_0_38_node_allocation_sockets_1);
	printf("v0_0_38_node_allocation_sockets :\n%s\n", cJSON_Print(jsonv0_0_38_node_allocation_sockets_1));
	v0_0_38_node_allocation_sockets_t* v0_0_38_node_allocation_sockets_2 = v0_0_38_node_allocation_sockets_parseFromJSON(jsonv0_0_38_node_allocation_sockets_1);
	cJSON* jsonv0_0_38_node_allocation_sockets_2 = v0_0_38_node_allocation_sockets_convertToJSON(v0_0_38_node_allocation_sockets_2);
	printf("repeating v0_0_38_node_allocation_sockets:\n%s\n", cJSON_Print(jsonv0_0_38_node_allocation_sockets_2));
}

int main() {
  test_v0_0_38_node_allocation_sockets(1);
  test_v0_0_38_node_allocation_sockets(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_38_node_allocation_sockets_MAIN
#endif // v0_0_38_node_allocation_sockets_TEST
