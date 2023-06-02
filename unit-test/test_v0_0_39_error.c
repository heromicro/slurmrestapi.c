#ifndef v0_0_39_error_TEST
#define v0_0_39_error_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_error_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_error.h"
v0_0_39_error_t* instantiate_v0_0_39_error(int include_optional);



v0_0_39_error_t* instantiate_v0_0_39_error(int include_optional) {
  v0_0_39_error_t* v0_0_39_error = NULL;
  if (include_optional) {
    v0_0_39_error = v0_0_39_error_create(
      56,
      "0",
      "0",
      "0"
    );
  } else {
    v0_0_39_error = v0_0_39_error_create(
      56,
      "0",
      "0",
      "0"
    );
  }

  return v0_0_39_error;
}


#ifdef v0_0_39_error_MAIN

void test_v0_0_39_error(int include_optional) {
    v0_0_39_error_t* v0_0_39_error_1 = instantiate_v0_0_39_error(include_optional);

	cJSON* jsonv0_0_39_error_1 = v0_0_39_error_convertToJSON(v0_0_39_error_1);
	printf("v0_0_39_error :\n%s\n", cJSON_Print(jsonv0_0_39_error_1));
	v0_0_39_error_t* v0_0_39_error_2 = v0_0_39_error_parseFromJSON(jsonv0_0_39_error_1);
	cJSON* jsonv0_0_39_error_2 = v0_0_39_error_convertToJSON(v0_0_39_error_2);
	printf("repeating v0_0_39_error:\n%s\n", cJSON_Print(jsonv0_0_39_error_2));
}

int main() {
  test_v0_0_39_error(1);
  test_v0_0_39_error(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_error_MAIN
#endif // v0_0_39_error_TEST
