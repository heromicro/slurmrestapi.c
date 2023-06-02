#ifndef v0_0_38_licenses_TEST
#define v0_0_38_licenses_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_38_licenses_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_38_licenses.h"
v0_0_38_licenses_t* instantiate_v0_0_38_licenses(int include_optional);



v0_0_38_licenses_t* instantiate_v0_0_38_licenses(int include_optional) {
  v0_0_38_licenses_t* v0_0_38_licenses = NULL;
  if (include_optional) {
    v0_0_38_licenses = v0_0_38_licenses_create(
      list_createList(),
      list_createList()
    );
  } else {
    v0_0_38_licenses = v0_0_38_licenses_create(
      list_createList(),
      list_createList()
    );
  }

  return v0_0_38_licenses;
}


#ifdef v0_0_38_licenses_MAIN

void test_v0_0_38_licenses(int include_optional) {
    v0_0_38_licenses_t* v0_0_38_licenses_1 = instantiate_v0_0_38_licenses(include_optional);

	cJSON* jsonv0_0_38_licenses_1 = v0_0_38_licenses_convertToJSON(v0_0_38_licenses_1);
	printf("v0_0_38_licenses :\n%s\n", cJSON_Print(jsonv0_0_38_licenses_1));
	v0_0_38_licenses_t* v0_0_38_licenses_2 = v0_0_38_licenses_parseFromJSON(jsonv0_0_38_licenses_1);
	cJSON* jsonv0_0_38_licenses_2 = v0_0_38_licenses_convertToJSON(v0_0_38_licenses_2);
	printf("repeating v0_0_38_licenses:\n%s\n", cJSON_Print(jsonv0_0_38_licenses_2));
}

int main() {
  test_v0_0_38_licenses(1);
  test_v0_0_38_licenses(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_38_licenses_MAIN
#endif // v0_0_38_licenses_TEST
