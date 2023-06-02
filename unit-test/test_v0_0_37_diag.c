#ifndef v0_0_37_diag_TEST
#define v0_0_37_diag_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_37_diag_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_37_diag.h"
v0_0_37_diag_t* instantiate_v0_0_37_diag(int include_optional);

#include "test_v0_0_37_diag_statistics.c"


v0_0_37_diag_t* instantiate_v0_0_37_diag(int include_optional) {
  v0_0_37_diag_t* v0_0_37_diag = NULL;
  if (include_optional) {
    v0_0_37_diag = v0_0_37_diag_create(
      list_createList(),
       // false, not to have infinite recursion
      instantiate_v0_0_37_diag_statistics(0)
    );
  } else {
    v0_0_37_diag = v0_0_37_diag_create(
      list_createList(),
      NULL
    );
  }

  return v0_0_37_diag;
}


#ifdef v0_0_37_diag_MAIN

void test_v0_0_37_diag(int include_optional) {
    v0_0_37_diag_t* v0_0_37_diag_1 = instantiate_v0_0_37_diag(include_optional);

	cJSON* jsonv0_0_37_diag_1 = v0_0_37_diag_convertToJSON(v0_0_37_diag_1);
	printf("v0_0_37_diag :\n%s\n", cJSON_Print(jsonv0_0_37_diag_1));
	v0_0_37_diag_t* v0_0_37_diag_2 = v0_0_37_diag_parseFromJSON(jsonv0_0_37_diag_1);
	cJSON* jsonv0_0_37_diag_2 = v0_0_37_diag_convertToJSON(v0_0_37_diag_2);
	printf("repeating v0_0_37_diag:\n%s\n", cJSON_Print(jsonv0_0_37_diag_2));
}

int main() {
  test_v0_0_37_diag(1);
  test_v0_0_37_diag(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_37_diag_MAIN
#endif // v0_0_37_diag_TEST
