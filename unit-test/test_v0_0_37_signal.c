#ifndef v0_0_37_signal_TEST
#define v0_0_37_signal_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_37_signal_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_37_signal.h"
v0_0_37_signal_t* instantiate_v0_0_37_signal(int include_optional);



v0_0_37_signal_t* instantiate_v0_0_37_signal(int include_optional) {
  v0_0_37_signal_t* v0_0_37_signal = NULL;
  if (include_optional) {
    v0_0_37_signal = v0_0_37_signal_create(
    );
  } else {
    v0_0_37_signal = v0_0_37_signal_create(
    );
  }

  return v0_0_37_signal;
}


#ifdef v0_0_37_signal_MAIN

void test_v0_0_37_signal(int include_optional) {
    v0_0_37_signal_t* v0_0_37_signal_1 = instantiate_v0_0_37_signal(include_optional);

	cJSON* jsonv0_0_37_signal_1 = v0_0_37_signal_convertToJSON(v0_0_37_signal_1);
	printf("v0_0_37_signal :\n%s\n", cJSON_Print(jsonv0_0_37_signal_1));
	v0_0_37_signal_t* v0_0_37_signal_2 = v0_0_37_signal_parseFromJSON(jsonv0_0_37_signal_1);
	cJSON* jsonv0_0_37_signal_2 = v0_0_37_signal_convertToJSON(v0_0_37_signal_2);
	printf("repeating v0_0_37_signal:\n%s\n", cJSON_Print(jsonv0_0_37_signal_2));
}

int main() {
  test_v0_0_37_signal(1);
  test_v0_0_37_signal(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_37_signal_MAIN
#endif // v0_0_37_signal_TEST
