#ifndef v0_0_39_license_TEST
#define v0_0_39_license_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_license_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_license.h"
v0_0_39_license_t* instantiate_v0_0_39_license(int include_optional);



v0_0_39_license_t* instantiate_v0_0_39_license(int include_optional) {
  v0_0_39_license_t* v0_0_39_license = NULL;
  if (include_optional) {
    v0_0_39_license = v0_0_39_license_create(
      "0",
      56,
      56,
      56,
      1,
      56,
      56,
      56,
      56
    );
  } else {
    v0_0_39_license = v0_0_39_license_create(
      "0",
      56,
      56,
      56,
      1,
      56,
      56,
      56,
      56
    );
  }

  return v0_0_39_license;
}


#ifdef v0_0_39_license_MAIN

void test_v0_0_39_license(int include_optional) {
    v0_0_39_license_t* v0_0_39_license_1 = instantiate_v0_0_39_license(include_optional);

	cJSON* jsonv0_0_39_license_1 = v0_0_39_license_convertToJSON(v0_0_39_license_1);
	printf("v0_0_39_license :\n%s\n", cJSON_Print(jsonv0_0_39_license_1));
	v0_0_39_license_t* v0_0_39_license_2 = v0_0_39_license_parseFromJSON(jsonv0_0_39_license_1);
	cJSON* jsonv0_0_39_license_2 = v0_0_39_license_convertToJSON(v0_0_39_license_2);
	printf("repeating v0_0_39_license:\n%s\n", cJSON_Print(jsonv0_0_39_license_2));
}

int main() {
  test_v0_0_39_license(1);
  test_v0_0_39_license(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_license_MAIN
#endif // v0_0_39_license_TEST
