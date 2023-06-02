#ifndef v0_0_39_user_TEST
#define v0_0_39_user_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_user_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_user.h"
v0_0_39_user_t* instantiate_v0_0_39_user(int include_optional);

#include "test_v0_0_39_user_default.c"


v0_0_39_user_t* instantiate_v0_0_39_user(int include_optional) {
  v0_0_39_user_t* v0_0_39_user = NULL;
  if (include_optional) {
    v0_0_39_user = v0_0_39_user_create(
      list_createList(),
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_v0_0_39_user_default(0),
      list_createList(),
      "0",
      "0",
      list_createList()
    );
  } else {
    v0_0_39_user = v0_0_39_user_create(
      list_createList(),
      list_createList(),
      list_createList(),
      NULL,
      list_createList(),
      "0",
      "0",
      list_createList()
    );
  }

  return v0_0_39_user;
}


#ifdef v0_0_39_user_MAIN

void test_v0_0_39_user(int include_optional) {
    v0_0_39_user_t* v0_0_39_user_1 = instantiate_v0_0_39_user(include_optional);

	cJSON* jsonv0_0_39_user_1 = v0_0_39_user_convertToJSON(v0_0_39_user_1);
	printf("v0_0_39_user :\n%s\n", cJSON_Print(jsonv0_0_39_user_1));
	v0_0_39_user_t* v0_0_39_user_2 = v0_0_39_user_parseFromJSON(jsonv0_0_39_user_1);
	cJSON* jsonv0_0_39_user_2 = v0_0_39_user_convertToJSON(v0_0_39_user_2);
	printf("repeating v0_0_39_user:\n%s\n", cJSON_Print(jsonv0_0_39_user_2));
}

int main() {
  test_v0_0_39_user(1);
  test_v0_0_39_user(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_user_MAIN
#endif // v0_0_39_user_TEST
