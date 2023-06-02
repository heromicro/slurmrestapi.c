#ifndef v0_0_39_stats_msg_rpcs_by_user_inner_TEST
#define v0_0_39_stats_msg_rpcs_by_user_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_stats_msg_rpcs_by_user_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_stats_msg_rpcs_by_user_inner.h"
v0_0_39_stats_msg_rpcs_by_user_inner_t* instantiate_v0_0_39_stats_msg_rpcs_by_user_inner(int include_optional);



v0_0_39_stats_msg_rpcs_by_user_inner_t* instantiate_v0_0_39_stats_msg_rpcs_by_user_inner(int include_optional) {
  v0_0_39_stats_msg_rpcs_by_user_inner_t* v0_0_39_stats_msg_rpcs_by_user_inner = NULL;
  if (include_optional) {
    v0_0_39_stats_msg_rpcs_by_user_inner = v0_0_39_stats_msg_rpcs_by_user_inner_create(
      "0",
      56,
      56,
      56,
      56
    );
  } else {
    v0_0_39_stats_msg_rpcs_by_user_inner = v0_0_39_stats_msg_rpcs_by_user_inner_create(
      "0",
      56,
      56,
      56,
      56
    );
  }

  return v0_0_39_stats_msg_rpcs_by_user_inner;
}


#ifdef v0_0_39_stats_msg_rpcs_by_user_inner_MAIN

void test_v0_0_39_stats_msg_rpcs_by_user_inner(int include_optional) {
    v0_0_39_stats_msg_rpcs_by_user_inner_t* v0_0_39_stats_msg_rpcs_by_user_inner_1 = instantiate_v0_0_39_stats_msg_rpcs_by_user_inner(include_optional);

	cJSON* jsonv0_0_39_stats_msg_rpcs_by_user_inner_1 = v0_0_39_stats_msg_rpcs_by_user_inner_convertToJSON(v0_0_39_stats_msg_rpcs_by_user_inner_1);
	printf("v0_0_39_stats_msg_rpcs_by_user_inner :\n%s\n", cJSON_Print(jsonv0_0_39_stats_msg_rpcs_by_user_inner_1));
	v0_0_39_stats_msg_rpcs_by_user_inner_t* v0_0_39_stats_msg_rpcs_by_user_inner_2 = v0_0_39_stats_msg_rpcs_by_user_inner_parseFromJSON(jsonv0_0_39_stats_msg_rpcs_by_user_inner_1);
	cJSON* jsonv0_0_39_stats_msg_rpcs_by_user_inner_2 = v0_0_39_stats_msg_rpcs_by_user_inner_convertToJSON(v0_0_39_stats_msg_rpcs_by_user_inner_2);
	printf("repeating v0_0_39_stats_msg_rpcs_by_user_inner:\n%s\n", cJSON_Print(jsonv0_0_39_stats_msg_rpcs_by_user_inner_2));
}

int main() {
  test_v0_0_39_stats_msg_rpcs_by_user_inner(1);
  test_v0_0_39_stats_msg_rpcs_by_user_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_stats_msg_rpcs_by_user_inner_MAIN
#endif // v0_0_39_stats_msg_rpcs_by_user_inner_TEST
