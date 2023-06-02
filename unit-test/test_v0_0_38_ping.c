#ifndef v0_0_38_ping_TEST
#define v0_0_38_ping_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_38_ping_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_38_ping.h"
v0_0_38_ping_t* instantiate_v0_0_38_ping(int include_optional);



v0_0_38_ping_t* instantiate_v0_0_38_ping(int include_optional) {
  v0_0_38_ping_t* v0_0_38_ping = NULL;
  if (include_optional) {
    v0_0_38_ping = v0_0_38_ping_create(
      "0",
      slurm_rest_api_v0_0_38_ping_PING_UP,
      "0",
      56
    );
  } else {
    v0_0_38_ping = v0_0_38_ping_create(
      "0",
      slurm_rest_api_v0_0_38_ping_PING_UP,
      "0",
      56
    );
  }

  return v0_0_38_ping;
}


#ifdef v0_0_38_ping_MAIN

void test_v0_0_38_ping(int include_optional) {
    v0_0_38_ping_t* v0_0_38_ping_1 = instantiate_v0_0_38_ping(include_optional);

	cJSON* jsonv0_0_38_ping_1 = v0_0_38_ping_convertToJSON(v0_0_38_ping_1);
	printf("v0_0_38_ping :\n%s\n", cJSON_Print(jsonv0_0_38_ping_1));
	v0_0_38_ping_t* v0_0_38_ping_2 = v0_0_38_ping_parseFromJSON(jsonv0_0_38_ping_1);
	cJSON* jsonv0_0_38_ping_2 = v0_0_38_ping_convertToJSON(v0_0_38_ping_2);
	printf("repeating v0_0_38_ping:\n%s\n", cJSON_Print(jsonv0_0_38_ping_2));
}

int main() {
  test_v0_0_38_ping(1);
  test_v0_0_38_ping(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_38_ping_MAIN
#endif // v0_0_38_ping_TEST
