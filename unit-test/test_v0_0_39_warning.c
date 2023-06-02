#ifndef v0_0_39_warning_TEST
#define v0_0_39_warning_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_warning_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_warning.h"
v0_0_39_warning_t* instantiate_v0_0_39_warning(int include_optional);



v0_0_39_warning_t* instantiate_v0_0_39_warning(int include_optional) {
  v0_0_39_warning_t* v0_0_39_warning = NULL;
  if (include_optional) {
    v0_0_39_warning = v0_0_39_warning_create(
      "0",
      "0",
      "0"
    );
  } else {
    v0_0_39_warning = v0_0_39_warning_create(
      "0",
      "0",
      "0"
    );
  }

  return v0_0_39_warning;
}


#ifdef v0_0_39_warning_MAIN

void test_v0_0_39_warning(int include_optional) {
    v0_0_39_warning_t* v0_0_39_warning_1 = instantiate_v0_0_39_warning(include_optional);

	cJSON* jsonv0_0_39_warning_1 = v0_0_39_warning_convertToJSON(v0_0_39_warning_1);
	printf("v0_0_39_warning :\n%s\n", cJSON_Print(jsonv0_0_39_warning_1));
	v0_0_39_warning_t* v0_0_39_warning_2 = v0_0_39_warning_parseFromJSON(jsonv0_0_39_warning_1);
	cJSON* jsonv0_0_39_warning_2 = v0_0_39_warning_convertToJSON(v0_0_39_warning_2);
	printf("repeating v0_0_39_warning:\n%s\n", cJSON_Print(jsonv0_0_39_warning_2));
}

int main() {
  test_v0_0_39_warning(1);
  test_v0_0_39_warning(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_warning_MAIN
#endif // v0_0_39_warning_TEST
