#ifndef v0_0_37_pings_TEST
#define v0_0_37_pings_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_37_pings_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_37_pings.h"
v0_0_37_pings_t* instantiate_v0_0_37_pings(int include_optional);



v0_0_37_pings_t* instantiate_v0_0_37_pings(int include_optional) {
  v0_0_37_pings_t* v0_0_37_pings = NULL;
  if (include_optional) {
    v0_0_37_pings = v0_0_37_pings_create(
      list_createList(),
      list_createList()
    );
  } else {
    v0_0_37_pings = v0_0_37_pings_create(
      list_createList(),
      list_createList()
    );
  }

  return v0_0_37_pings;
}


#ifdef v0_0_37_pings_MAIN

void test_v0_0_37_pings(int include_optional) {
    v0_0_37_pings_t* v0_0_37_pings_1 = instantiate_v0_0_37_pings(include_optional);

	cJSON* jsonv0_0_37_pings_1 = v0_0_37_pings_convertToJSON(v0_0_37_pings_1);
	printf("v0_0_37_pings :\n%s\n", cJSON_Print(jsonv0_0_37_pings_1));
	v0_0_37_pings_t* v0_0_37_pings_2 = v0_0_37_pings_parseFromJSON(jsonv0_0_37_pings_1);
	cJSON* jsonv0_0_37_pings_2 = v0_0_37_pings_convertToJSON(v0_0_37_pings_2);
	printf("repeating v0_0_37_pings:\n%s\n", cJSON_Print(jsonv0_0_37_pings_2));
}

int main() {
  test_v0_0_37_pings(1);
  test_v0_0_37_pings(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_37_pings_MAIN
#endif // v0_0_37_pings_TEST
