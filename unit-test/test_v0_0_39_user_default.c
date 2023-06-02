#ifndef v0_0_39_user_default_TEST
#define v0_0_39_user_default_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_user_default_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_user_default.h"
v0_0_39_user_default_t* instantiate_v0_0_39_user_default(int include_optional);



v0_0_39_user_default_t* instantiate_v0_0_39_user_default(int include_optional) {
  v0_0_39_user_default_t* v0_0_39_user_default = NULL;
  if (include_optional) {
    v0_0_39_user_default = v0_0_39_user_default_create(
      "0"
    );
  } else {
    v0_0_39_user_default = v0_0_39_user_default_create(
      "0"
    );
  }

  return v0_0_39_user_default;
}


#ifdef v0_0_39_user_default_MAIN

void test_v0_0_39_user_default(int include_optional) {
    v0_0_39_user_default_t* v0_0_39_user_default_1 = instantiate_v0_0_39_user_default(include_optional);

	cJSON* jsonv0_0_39_user_default_1 = v0_0_39_user_default_convertToJSON(v0_0_39_user_default_1);
	printf("v0_0_39_user_default :\n%s\n", cJSON_Print(jsonv0_0_39_user_default_1));
	v0_0_39_user_default_t* v0_0_39_user_default_2 = v0_0_39_user_default_parseFromJSON(jsonv0_0_39_user_default_1);
	cJSON* jsonv0_0_39_user_default_2 = v0_0_39_user_default_convertToJSON(v0_0_39_user_default_2);
	printf("repeating v0_0_39_user_default:\n%s\n", cJSON_Print(jsonv0_0_39_user_default_2));
}

int main() {
  test_v0_0_39_user_default(1);
  test_v0_0_39_user_default(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_user_default_MAIN
#endif // v0_0_39_user_default_TEST
