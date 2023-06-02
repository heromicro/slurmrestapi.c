#ifndef v0_0_39_licenses_info_TEST
#define v0_0_39_licenses_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_licenses_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_licenses_info.h"
v0_0_39_licenses_info_t* instantiate_v0_0_39_licenses_info(int include_optional);

#include "test_v0_0_39_meta.c"


v0_0_39_licenses_info_t* instantiate_v0_0_39_licenses_info(int include_optional) {
  v0_0_39_licenses_info_t* v0_0_39_licenses_info = NULL;
  if (include_optional) {
    v0_0_39_licenses_info = v0_0_39_licenses_info_create(
       // false, not to have infinite recursion
      instantiate_v0_0_39_meta(0),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    v0_0_39_licenses_info = v0_0_39_licenses_info_create(
      NULL,
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return v0_0_39_licenses_info;
}


#ifdef v0_0_39_licenses_info_MAIN

void test_v0_0_39_licenses_info(int include_optional) {
    v0_0_39_licenses_info_t* v0_0_39_licenses_info_1 = instantiate_v0_0_39_licenses_info(include_optional);

	cJSON* jsonv0_0_39_licenses_info_1 = v0_0_39_licenses_info_convertToJSON(v0_0_39_licenses_info_1);
	printf("v0_0_39_licenses_info :\n%s\n", cJSON_Print(jsonv0_0_39_licenses_info_1));
	v0_0_39_licenses_info_t* v0_0_39_licenses_info_2 = v0_0_39_licenses_info_parseFromJSON(jsonv0_0_39_licenses_info_1);
	cJSON* jsonv0_0_39_licenses_info_2 = v0_0_39_licenses_info_convertToJSON(v0_0_39_licenses_info_2);
	printf("repeating v0_0_39_licenses_info:\n%s\n", cJSON_Print(jsonv0_0_39_licenses_info_2));
}

int main() {
  test_v0_0_39_licenses_info(1);
  test_v0_0_39_licenses_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_licenses_info_MAIN
#endif // v0_0_39_licenses_info_TEST
