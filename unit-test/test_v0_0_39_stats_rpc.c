#ifndef v0_0_39_stats_rpc_TEST
#define v0_0_39_stats_rpc_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_stats_rpc_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_stats_rpc.h"
v0_0_39_stats_rpc_t* instantiate_v0_0_39_stats_rpc(int include_optional);

#include "test_v0_0_39_stats_rpc_time.c"


v0_0_39_stats_rpc_t* instantiate_v0_0_39_stats_rpc(int include_optional) {
  v0_0_39_stats_rpc_t* v0_0_39_stats_rpc = NULL;
  if (include_optional) {
    v0_0_39_stats_rpc = v0_0_39_stats_rpc_create(
      "0",
      56,
       // false, not to have infinite recursion
      instantiate_v0_0_39_stats_rpc_time(0)
    );
  } else {
    v0_0_39_stats_rpc = v0_0_39_stats_rpc_create(
      "0",
      56,
      NULL
    );
  }

  return v0_0_39_stats_rpc;
}


#ifdef v0_0_39_stats_rpc_MAIN

void test_v0_0_39_stats_rpc(int include_optional) {
    v0_0_39_stats_rpc_t* v0_0_39_stats_rpc_1 = instantiate_v0_0_39_stats_rpc(include_optional);

	cJSON* jsonv0_0_39_stats_rpc_1 = v0_0_39_stats_rpc_convertToJSON(v0_0_39_stats_rpc_1);
	printf("v0_0_39_stats_rpc :\n%s\n", cJSON_Print(jsonv0_0_39_stats_rpc_1));
	v0_0_39_stats_rpc_t* v0_0_39_stats_rpc_2 = v0_0_39_stats_rpc_parseFromJSON(jsonv0_0_39_stats_rpc_1);
	cJSON* jsonv0_0_39_stats_rpc_2 = v0_0_39_stats_rpc_convertToJSON(v0_0_39_stats_rpc_2);
	printf("repeating v0_0_39_stats_rpc:\n%s\n", cJSON_Print(jsonv0_0_39_stats_rpc_2));
}

int main() {
  test_v0_0_39_stats_rpc(1);
  test_v0_0_39_stats_rpc(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_stats_rpc_MAIN
#endif // v0_0_39_stats_rpc_TEST
