#ifndef v0_0_39_uint64_no_val_TEST
#define v0_0_39_uint64_no_val_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_uint64_no_val_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_uint64_no_val.h"
v0_0_39_uint64_no_val_t* instantiate_v0_0_39_uint64_no_val(int include_optional);



v0_0_39_uint64_no_val_t* instantiate_v0_0_39_uint64_no_val(int include_optional) {
  v0_0_39_uint64_no_val_t* v0_0_39_uint64_no_val = NULL;
  if (include_optional) {
    v0_0_39_uint64_no_val = v0_0_39_uint64_no_val_create(
      1,
      1,
      56
    );
  } else {
    v0_0_39_uint64_no_val = v0_0_39_uint64_no_val_create(
      1,
      1,
      56
    );
  }

  return v0_0_39_uint64_no_val;
}


#ifdef v0_0_39_uint64_no_val_MAIN

void test_v0_0_39_uint64_no_val(int include_optional) {
    v0_0_39_uint64_no_val_t* v0_0_39_uint64_no_val_1 = instantiate_v0_0_39_uint64_no_val(include_optional);

	cJSON* jsonv0_0_39_uint64_no_val_1 = v0_0_39_uint64_no_val_convertToJSON(v0_0_39_uint64_no_val_1);
	printf("v0_0_39_uint64_no_val :\n%s\n", cJSON_Print(jsonv0_0_39_uint64_no_val_1));
	v0_0_39_uint64_no_val_t* v0_0_39_uint64_no_val_2 = v0_0_39_uint64_no_val_parseFromJSON(jsonv0_0_39_uint64_no_val_1);
	cJSON* jsonv0_0_39_uint64_no_val_2 = v0_0_39_uint64_no_val_convertToJSON(v0_0_39_uint64_no_val_2);
	printf("repeating v0_0_39_uint64_no_val:\n%s\n", cJSON_Print(jsonv0_0_39_uint64_no_val_2));
}

int main() {
  test_v0_0_39_uint64_no_val(1);
  test_v0_0_39_uint64_no_val(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_uint64_no_val_MAIN
#endif // v0_0_39_uint64_no_val_TEST
