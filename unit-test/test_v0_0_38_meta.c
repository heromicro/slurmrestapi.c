#ifndef v0_0_38_meta_TEST
#define v0_0_38_meta_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_38_meta_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_38_meta.h"
v0_0_38_meta_t* instantiate_v0_0_38_meta(int include_optional);

#include "test_v0_0_38_meta_plugin.c"
#include "test_v0_0_38_meta_slurm.c"


v0_0_38_meta_t* instantiate_v0_0_38_meta(int include_optional) {
  v0_0_38_meta_t* v0_0_38_meta = NULL;
  if (include_optional) {
    v0_0_38_meta = v0_0_38_meta_create(
       // false, not to have infinite recursion
      instantiate_v0_0_38_meta_plugin(0),
       // false, not to have infinite recursion
      instantiate_v0_0_38_meta_slurm(0)
    );
  } else {
    v0_0_38_meta = v0_0_38_meta_create(
      NULL,
      NULL
    );
  }

  return v0_0_38_meta;
}


#ifdef v0_0_38_meta_MAIN

void test_v0_0_38_meta(int include_optional) {
    v0_0_38_meta_t* v0_0_38_meta_1 = instantiate_v0_0_38_meta(include_optional);

	cJSON* jsonv0_0_38_meta_1 = v0_0_38_meta_convertToJSON(v0_0_38_meta_1);
	printf("v0_0_38_meta :\n%s\n", cJSON_Print(jsonv0_0_38_meta_1));
	v0_0_38_meta_t* v0_0_38_meta_2 = v0_0_38_meta_parseFromJSON(jsonv0_0_38_meta_1);
	cJSON* jsonv0_0_38_meta_2 = v0_0_38_meta_convertToJSON(v0_0_38_meta_2);
	printf("repeating v0_0_38_meta:\n%s\n", cJSON_Print(jsonv0_0_38_meta_2));
}

int main() {
  test_v0_0_38_meta(1);
  test_v0_0_38_meta(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_38_meta_MAIN
#endif // v0_0_38_meta_TEST
