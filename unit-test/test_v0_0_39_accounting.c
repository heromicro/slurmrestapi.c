#ifndef v0_0_39_accounting_TEST
#define v0_0_39_accounting_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_accounting_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_accounting.h"
v0_0_39_accounting_t* instantiate_v0_0_39_accounting(int include_optional);

#include "test_v0_0_39_accounting_allocated.c"
#include "test_v0_0_39_tres.c"


v0_0_39_accounting_t* instantiate_v0_0_39_accounting(int include_optional) {
  v0_0_39_accounting_t* v0_0_39_accounting = NULL;
  if (include_optional) {
    v0_0_39_accounting = v0_0_39_accounting_create(
       // false, not to have infinite recursion
      instantiate_v0_0_39_accounting_allocated(0),
      56,
      56,
       // false, not to have infinite recursion
      instantiate_v0_0_39_tres(0)
    );
  } else {
    v0_0_39_accounting = v0_0_39_accounting_create(
      NULL,
      56,
      56,
      NULL
    );
  }

  return v0_0_39_accounting;
}


#ifdef v0_0_39_accounting_MAIN

void test_v0_0_39_accounting(int include_optional) {
    v0_0_39_accounting_t* v0_0_39_accounting_1 = instantiate_v0_0_39_accounting(include_optional);

	cJSON* jsonv0_0_39_accounting_1 = v0_0_39_accounting_convertToJSON(v0_0_39_accounting_1);
	printf("v0_0_39_accounting :\n%s\n", cJSON_Print(jsonv0_0_39_accounting_1));
	v0_0_39_accounting_t* v0_0_39_accounting_2 = v0_0_39_accounting_parseFromJSON(jsonv0_0_39_accounting_1);
	cJSON* jsonv0_0_39_accounting_2 = v0_0_39_accounting_convertToJSON(v0_0_39_accounting_2);
	printf("repeating v0_0_39_accounting:\n%s\n", cJSON_Print(jsonv0_0_39_accounting_2));
}

int main() {
  test_v0_0_39_accounting(1);
  test_v0_0_39_accounting(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_accounting_MAIN
#endif // v0_0_39_accounting_TEST
