#ifndef v0_0_38_node_TEST
#define v0_0_38_node_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_38_node_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_38_node.h"
v0_0_38_node_t* instantiate_v0_0_38_node(int include_optional);



v0_0_38_node_t* instantiate_v0_0_38_node(int include_optional) {
  v0_0_38_node_t* v0_0_38_node = NULL;
  if (include_optional) {
    v0_0_38_node = v0_0_38_node_create(
      "0",
      "0",
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      "0",
      "0",
      "0",
      list_createList(),
      "0",
      "0",
      list_createList(),
      56,
      56,
      "0",
      56,
      "0",
      56,
      56,
      56,
      56,
      56,
      "0",
      "0",
      1.337,
      "0",
      56,
      56,
      56
    );
  } else {
    v0_0_38_node = v0_0_38_node_create(
      "0",
      "0",
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      "0",
      "0",
      "0",
      list_createList(),
      "0",
      "0",
      list_createList(),
      56,
      56,
      "0",
      56,
      "0",
      56,
      56,
      56,
      56,
      56,
      "0",
      "0",
      1.337,
      "0",
      56,
      56,
      56
    );
  }

  return v0_0_38_node;
}


#ifdef v0_0_38_node_MAIN

void test_v0_0_38_node(int include_optional) {
    v0_0_38_node_t* v0_0_38_node_1 = instantiate_v0_0_38_node(include_optional);

	cJSON* jsonv0_0_38_node_1 = v0_0_38_node_convertToJSON(v0_0_38_node_1);
	printf("v0_0_38_node :\n%s\n", cJSON_Print(jsonv0_0_38_node_1));
	v0_0_38_node_t* v0_0_38_node_2 = v0_0_38_node_parseFromJSON(jsonv0_0_38_node_1);
	cJSON* jsonv0_0_38_node_2 = v0_0_38_node_convertToJSON(v0_0_38_node_2);
	printf("repeating v0_0_38_node:\n%s\n", cJSON_Print(jsonv0_0_38_node_2));
}

int main() {
  test_v0_0_38_node(1);
  test_v0_0_38_node(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_38_node_MAIN
#endif // v0_0_38_node_TEST
