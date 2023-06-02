#ifndef v0_0_39_assoc_TEST
#define v0_0_39_assoc_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_assoc_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_assoc.h"
v0_0_39_assoc_t* instantiate_v0_0_39_assoc(int include_optional);

#include "test_v0_0_39_assoc_default.c"
#include "test_v0_0_39_assoc_max.c"
#include "test_v0_0_39_assoc_min.c"
#include "test_v0_0_39_uint32_no_val.c"
#include "test_v0_0_39_assoc_usage.c"


v0_0_39_assoc_t* instantiate_v0_0_39_assoc(int include_optional) {
  v0_0_39_assoc_t* v0_0_39_assoc = NULL;
  if (include_optional) {
    v0_0_39_assoc = v0_0_39_assoc_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_v0_0_39_assoc_default(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_v0_0_39_assoc_max(0),
      1,
       // false, not to have infinite recursion
      instantiate_v0_0_39_assoc_min(0),
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_v0_0_39_uint32_no_val(0),
      list_createList(),
      56,
       // false, not to have infinite recursion
      instantiate_v0_0_39_assoc_usage(0),
      "0"
    );
  } else {
    v0_0_39_assoc = v0_0_39_assoc_create(
      "0",
      "0",
      NULL,
      list_createList(),
      NULL,
      1,
      NULL,
      "0",
      "0",
      NULL,
      list_createList(),
      56,
      NULL,
      "0"
    );
  }

  return v0_0_39_assoc;
}


#ifdef v0_0_39_assoc_MAIN

void test_v0_0_39_assoc(int include_optional) {
    v0_0_39_assoc_t* v0_0_39_assoc_1 = instantiate_v0_0_39_assoc(include_optional);

	cJSON* jsonv0_0_39_assoc_1 = v0_0_39_assoc_convertToJSON(v0_0_39_assoc_1);
	printf("v0_0_39_assoc :\n%s\n", cJSON_Print(jsonv0_0_39_assoc_1));
	v0_0_39_assoc_t* v0_0_39_assoc_2 = v0_0_39_assoc_parseFromJSON(jsonv0_0_39_assoc_1);
	cJSON* jsonv0_0_39_assoc_2 = v0_0_39_assoc_convertToJSON(v0_0_39_assoc_2);
	printf("repeating v0_0_39_assoc:\n%s\n", cJSON_Print(jsonv0_0_39_assoc_2));
}

int main() {
  test_v0_0_39_assoc(1);
  test_v0_0_39_assoc(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_assoc_MAIN
#endif // v0_0_39_assoc_TEST
