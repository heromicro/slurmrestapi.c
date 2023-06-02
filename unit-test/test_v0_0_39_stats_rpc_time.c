#ifndef v0_0_39_stats_rpc_time_TEST
#define v0_0_39_stats_rpc_time_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_stats_rpc_time_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_stats_rpc_time.h"
v0_0_39_stats_rpc_time_t* instantiate_v0_0_39_stats_rpc_time(int include_optional);



v0_0_39_stats_rpc_time_t* instantiate_v0_0_39_stats_rpc_time(int include_optional) {
  v0_0_39_stats_rpc_time_t* v0_0_39_stats_rpc_time = NULL;
  if (include_optional) {
    v0_0_39_stats_rpc_time = v0_0_39_stats_rpc_time_create(
      56
    );
  } else {
    v0_0_39_stats_rpc_time = v0_0_39_stats_rpc_time_create(
      56
    );
  }

  return v0_0_39_stats_rpc_time;
}


#ifdef v0_0_39_stats_rpc_time_MAIN

void test_v0_0_39_stats_rpc_time(int include_optional) {
    v0_0_39_stats_rpc_time_t* v0_0_39_stats_rpc_time_1 = instantiate_v0_0_39_stats_rpc_time(include_optional);

	cJSON* jsonv0_0_39_stats_rpc_time_1 = v0_0_39_stats_rpc_time_convertToJSON(v0_0_39_stats_rpc_time_1);
	printf("v0_0_39_stats_rpc_time :\n%s\n", cJSON_Print(jsonv0_0_39_stats_rpc_time_1));
	v0_0_39_stats_rpc_time_t* v0_0_39_stats_rpc_time_2 = v0_0_39_stats_rpc_time_parseFromJSON(jsonv0_0_39_stats_rpc_time_1);
	cJSON* jsonv0_0_39_stats_rpc_time_2 = v0_0_39_stats_rpc_time_convertToJSON(v0_0_39_stats_rpc_time_2);
	printf("repeating v0_0_39_stats_rpc_time:\n%s\n", cJSON_Print(jsonv0_0_39_stats_rpc_time_2));
}

int main() {
  test_v0_0_39_stats_rpc_time(1);
  test_v0_0_39_stats_rpc_time(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_stats_rpc_time_MAIN
#endif // v0_0_39_stats_rpc_time_TEST
