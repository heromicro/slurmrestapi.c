#ifndef v0_0_39_assoc_usage_TEST
#define v0_0_39_assoc_usage_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_assoc_usage_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_assoc_usage.h"
v0_0_39_assoc_usage_t* instantiate_v0_0_39_assoc_usage(int include_optional);



v0_0_39_assoc_usage_t* instantiate_v0_0_39_assoc_usage(int include_optional) {
  v0_0_39_assoc_usage_t* v0_0_39_assoc_usage = NULL;
  if (include_optional) {
    v0_0_39_assoc_usage = v0_0_39_assoc_usage_create(
      56,
      1.337,
      1.337,
      56,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      56,
      56,
      1.337
    );
  } else {
    v0_0_39_assoc_usage = v0_0_39_assoc_usage_create(
      56,
      1.337,
      1.337,
      56,
      1.337,
      1.337,
      1.337,
      1.337,
      1.337,
      56,
      56,
      1.337
    );
  }

  return v0_0_39_assoc_usage;
}


#ifdef v0_0_39_assoc_usage_MAIN

void test_v0_0_39_assoc_usage(int include_optional) {
    v0_0_39_assoc_usage_t* v0_0_39_assoc_usage_1 = instantiate_v0_0_39_assoc_usage(include_optional);

	cJSON* jsonv0_0_39_assoc_usage_1 = v0_0_39_assoc_usage_convertToJSON(v0_0_39_assoc_usage_1);
	printf("v0_0_39_assoc_usage :\n%s\n", cJSON_Print(jsonv0_0_39_assoc_usage_1));
	v0_0_39_assoc_usage_t* v0_0_39_assoc_usage_2 = v0_0_39_assoc_usage_parseFromJSON(jsonv0_0_39_assoc_usage_1);
	cJSON* jsonv0_0_39_assoc_usage_2 = v0_0_39_assoc_usage_convertToJSON(v0_0_39_assoc_usage_2);
	printf("repeating v0_0_39_assoc_usage:\n%s\n", cJSON_Print(jsonv0_0_39_assoc_usage_2));
}

int main() {
  test_v0_0_39_assoc_usage(1);
  test_v0_0_39_assoc_usage(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_assoc_usage_MAIN
#endif // v0_0_39_assoc_usage_TEST
