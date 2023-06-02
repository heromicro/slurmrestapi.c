#ifndef v0_0_39_wckey_TEST
#define v0_0_39_wckey_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_wckey_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_wckey.h"
v0_0_39_wckey_t* instantiate_v0_0_39_wckey(int include_optional);



v0_0_39_wckey_t* instantiate_v0_0_39_wckey(int include_optional) {
  v0_0_39_wckey_t* v0_0_39_wckey = NULL;
  if (include_optional) {
    v0_0_39_wckey = v0_0_39_wckey_create(
      list_createList(),
      "0",
      56,
      "0",
      "0",
      list_createList()
    );
  } else {
    v0_0_39_wckey = v0_0_39_wckey_create(
      list_createList(),
      "0",
      56,
      "0",
      "0",
      list_createList()
    );
  }

  return v0_0_39_wckey;
}


#ifdef v0_0_39_wckey_MAIN

void test_v0_0_39_wckey(int include_optional) {
    v0_0_39_wckey_t* v0_0_39_wckey_1 = instantiate_v0_0_39_wckey(include_optional);

	cJSON* jsonv0_0_39_wckey_1 = v0_0_39_wckey_convertToJSON(v0_0_39_wckey_1);
	printf("v0_0_39_wckey :\n%s\n", cJSON_Print(jsonv0_0_39_wckey_1));
	v0_0_39_wckey_t* v0_0_39_wckey_2 = v0_0_39_wckey_parseFromJSON(jsonv0_0_39_wckey_1);
	cJSON* jsonv0_0_39_wckey_2 = v0_0_39_wckey_convertToJSON(v0_0_39_wckey_2);
	printf("repeating v0_0_39_wckey:\n%s\n", cJSON_Print(jsonv0_0_39_wckey_2));
}

int main() {
  test_v0_0_39_wckey(1);
  test_v0_0_39_wckey(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_wckey_MAIN
#endif // v0_0_39_wckey_TEST
