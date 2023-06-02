#ifndef v0_0_39_meta_plugin_TEST
#define v0_0_39_meta_plugin_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_meta_plugin_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_meta_plugin.h"
v0_0_39_meta_plugin_t* instantiate_v0_0_39_meta_plugin(int include_optional);



v0_0_39_meta_plugin_t* instantiate_v0_0_39_meta_plugin(int include_optional) {
  v0_0_39_meta_plugin_t* v0_0_39_meta_plugin = NULL;
  if (include_optional) {
    v0_0_39_meta_plugin = v0_0_39_meta_plugin_create(
      "0",
      "0"
    );
  } else {
    v0_0_39_meta_plugin = v0_0_39_meta_plugin_create(
      "0",
      "0"
    );
  }

  return v0_0_39_meta_plugin;
}


#ifdef v0_0_39_meta_plugin_MAIN

void test_v0_0_39_meta_plugin(int include_optional) {
    v0_0_39_meta_plugin_t* v0_0_39_meta_plugin_1 = instantiate_v0_0_39_meta_plugin(include_optional);

	cJSON* jsonv0_0_39_meta_plugin_1 = v0_0_39_meta_plugin_convertToJSON(v0_0_39_meta_plugin_1);
	printf("v0_0_39_meta_plugin :\n%s\n", cJSON_Print(jsonv0_0_39_meta_plugin_1));
	v0_0_39_meta_plugin_t* v0_0_39_meta_plugin_2 = v0_0_39_meta_plugin_parseFromJSON(jsonv0_0_39_meta_plugin_1);
	cJSON* jsonv0_0_39_meta_plugin_2 = v0_0_39_meta_plugin_convertToJSON(v0_0_39_meta_plugin_2);
	printf("repeating v0_0_39_meta_plugin:\n%s\n", cJSON_Print(jsonv0_0_39_meta_plugin_2));
}

int main() {
  test_v0_0_39_meta_plugin(1);
  test_v0_0_39_meta_plugin(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_meta_plugin_MAIN
#endif // v0_0_39_meta_plugin_TEST
