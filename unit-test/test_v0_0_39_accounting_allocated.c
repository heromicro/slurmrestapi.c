#ifndef v0_0_39_accounting_allocated_TEST
#define v0_0_39_accounting_allocated_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_accounting_allocated_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_accounting_allocated.h"
v0_0_39_accounting_allocated_t* instantiate_v0_0_39_accounting_allocated(int include_optional);



v0_0_39_accounting_allocated_t* instantiate_v0_0_39_accounting_allocated(int include_optional) {
  v0_0_39_accounting_allocated_t* v0_0_39_accounting_allocated = NULL;
  if (include_optional) {
    v0_0_39_accounting_allocated = v0_0_39_accounting_allocated_create(
      56
    );
  } else {
    v0_0_39_accounting_allocated = v0_0_39_accounting_allocated_create(
      56
    );
  }

  return v0_0_39_accounting_allocated;
}


#ifdef v0_0_39_accounting_allocated_MAIN

void test_v0_0_39_accounting_allocated(int include_optional) {
    v0_0_39_accounting_allocated_t* v0_0_39_accounting_allocated_1 = instantiate_v0_0_39_accounting_allocated(include_optional);

	cJSON* jsonv0_0_39_accounting_allocated_1 = v0_0_39_accounting_allocated_convertToJSON(v0_0_39_accounting_allocated_1);
	printf("v0_0_39_accounting_allocated :\n%s\n", cJSON_Print(jsonv0_0_39_accounting_allocated_1));
	v0_0_39_accounting_allocated_t* v0_0_39_accounting_allocated_2 = v0_0_39_accounting_allocated_parseFromJSON(jsonv0_0_39_accounting_allocated_1);
	cJSON* jsonv0_0_39_accounting_allocated_2 = v0_0_39_accounting_allocated_convertToJSON(v0_0_39_accounting_allocated_2);
	printf("repeating v0_0_39_accounting_allocated:\n%s\n", cJSON_Print(jsonv0_0_39_accounting_allocated_2));
}

int main() {
  test_v0_0_39_accounting_allocated(1);
  test_v0_0_39_accounting_allocated(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_accounting_allocated_MAIN
#endif // v0_0_39_accounting_allocated_TEST
