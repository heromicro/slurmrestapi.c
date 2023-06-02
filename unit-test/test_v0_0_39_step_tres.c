#ifndef v0_0_39_step_tres_TEST
#define v0_0_39_step_tres_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_step_tres_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_step_tres.h"
v0_0_39_step_tres_t* instantiate_v0_0_39_step_tres(int include_optional);



v0_0_39_step_tres_t* instantiate_v0_0_39_step_tres(int include_optional) {
  v0_0_39_step_tres_t* v0_0_39_step_tres = NULL;
  if (include_optional) {
    v0_0_39_step_tres = v0_0_39_step_tres_create(
      list_createList()
    );
  } else {
    v0_0_39_step_tres = v0_0_39_step_tres_create(
      list_createList()
    );
  }

  return v0_0_39_step_tres;
}


#ifdef v0_0_39_step_tres_MAIN

void test_v0_0_39_step_tres(int include_optional) {
    v0_0_39_step_tres_t* v0_0_39_step_tres_1 = instantiate_v0_0_39_step_tres(include_optional);

	cJSON* jsonv0_0_39_step_tres_1 = v0_0_39_step_tres_convertToJSON(v0_0_39_step_tres_1);
	printf("v0_0_39_step_tres :\n%s\n", cJSON_Print(jsonv0_0_39_step_tres_1));
	v0_0_39_step_tres_t* v0_0_39_step_tres_2 = v0_0_39_step_tres_parseFromJSON(jsonv0_0_39_step_tres_1);
	cJSON* jsonv0_0_39_step_tres_2 = v0_0_39_step_tres_convertToJSON(v0_0_39_step_tres_2);
	printf("repeating v0_0_39_step_tres:\n%s\n", cJSON_Print(jsonv0_0_39_step_tres_2));
}

int main() {
  test_v0_0_39_step_tres(1);
  test_v0_0_39_step_tres(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_step_tres_MAIN
#endif // v0_0_39_step_tres_TEST
