#ifndef v0_0_39_assoc_short_TEST
#define v0_0_39_assoc_short_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_assoc_short_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_assoc_short.h"
v0_0_39_assoc_short_t* instantiate_v0_0_39_assoc_short(int include_optional);



v0_0_39_assoc_short_t* instantiate_v0_0_39_assoc_short(int include_optional) {
  v0_0_39_assoc_short_t* v0_0_39_assoc_short = NULL;
  if (include_optional) {
    v0_0_39_assoc_short = v0_0_39_assoc_short_create(
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    v0_0_39_assoc_short = v0_0_39_assoc_short_create(
      "0",
      "0",
      "0",
      "0"
    );
  }

  return v0_0_39_assoc_short;
}


#ifdef v0_0_39_assoc_short_MAIN

void test_v0_0_39_assoc_short(int include_optional) {
    v0_0_39_assoc_short_t* v0_0_39_assoc_short_1 = instantiate_v0_0_39_assoc_short(include_optional);

	cJSON* jsonv0_0_39_assoc_short_1 = v0_0_39_assoc_short_convertToJSON(v0_0_39_assoc_short_1);
	printf("v0_0_39_assoc_short :\n%s\n", cJSON_Print(jsonv0_0_39_assoc_short_1));
	v0_0_39_assoc_short_t* v0_0_39_assoc_short_2 = v0_0_39_assoc_short_parseFromJSON(jsonv0_0_39_assoc_short_1);
	cJSON* jsonv0_0_39_assoc_short_2 = v0_0_39_assoc_short_convertToJSON(v0_0_39_assoc_short_2);
	printf("repeating v0_0_39_assoc_short:\n%s\n", cJSON_Print(jsonv0_0_39_assoc_short_2));
}

int main() {
  test_v0_0_39_assoc_short(1);
  test_v0_0_39_assoc_short(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_assoc_short_MAIN
#endif // v0_0_39_assoc_short_TEST
