#ifndef v0_0_39_diag_TEST
#define v0_0_39_diag_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_diag_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_diag.h"
v0_0_39_diag_t* instantiate_v0_0_39_diag(int include_optional);

#include "test_v0_0_39_meta.c"
#include "test_v0_0_39_stats_msg.c"


v0_0_39_diag_t* instantiate_v0_0_39_diag(int include_optional) {
  v0_0_39_diag_t* v0_0_39_diag = NULL;
  if (include_optional) {
    v0_0_39_diag = v0_0_39_diag_create(
       // false, not to have infinite recursion
      instantiate_v0_0_39_meta(0),
      list_createList(),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_v0_0_39_stats_msg(0)
    );
  } else {
    v0_0_39_diag = v0_0_39_diag_create(
      NULL,
      list_createList(),
      list_createList(),
      NULL
    );
  }

  return v0_0_39_diag;
}


#ifdef v0_0_39_diag_MAIN

void test_v0_0_39_diag(int include_optional) {
    v0_0_39_diag_t* v0_0_39_diag_1 = instantiate_v0_0_39_diag(include_optional);

	cJSON* jsonv0_0_39_diag_1 = v0_0_39_diag_convertToJSON(v0_0_39_diag_1);
	printf("v0_0_39_diag :\n%s\n", cJSON_Print(jsonv0_0_39_diag_1));
	v0_0_39_diag_t* v0_0_39_diag_2 = v0_0_39_diag_parseFromJSON(jsonv0_0_39_diag_1);
	cJSON* jsonv0_0_39_diag_2 = v0_0_39_diag_convertToJSON(v0_0_39_diag_2);
	printf("repeating v0_0_39_diag:\n%s\n", cJSON_Print(jsonv0_0_39_diag_2));
}

int main() {
  test_v0_0_39_diag(1);
  test_v0_0_39_diag(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_diag_MAIN
#endif // v0_0_39_diag_TEST
