#ifndef v0_0_39_stats_msg_TEST
#define v0_0_39_stats_msg_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_stats_msg_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_stats_msg.h"
v0_0_39_stats_msg_t* instantiate_v0_0_39_stats_msg(int include_optional);



v0_0_39_stats_msg_t* instantiate_v0_0_39_stats_msg(int include_optional) {
  v0_0_39_stats_msg_t* v0_0_39_stats_msg = NULL;
  if (include_optional) {
    v0_0_39_stats_msg = v0_0_39_stats_msg_create(
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      1,
      list_createList(),
      list_createList()
    );
  } else {
    v0_0_39_stats_msg = v0_0_39_stats_msg_create(
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      1,
      list_createList(),
      list_createList()
    );
  }

  return v0_0_39_stats_msg;
}


#ifdef v0_0_39_stats_msg_MAIN

void test_v0_0_39_stats_msg(int include_optional) {
    v0_0_39_stats_msg_t* v0_0_39_stats_msg_1 = instantiate_v0_0_39_stats_msg(include_optional);

	cJSON* jsonv0_0_39_stats_msg_1 = v0_0_39_stats_msg_convertToJSON(v0_0_39_stats_msg_1);
	printf("v0_0_39_stats_msg :\n%s\n", cJSON_Print(jsonv0_0_39_stats_msg_1));
	v0_0_39_stats_msg_t* v0_0_39_stats_msg_2 = v0_0_39_stats_msg_parseFromJSON(jsonv0_0_39_stats_msg_1);
	cJSON* jsonv0_0_39_stats_msg_2 = v0_0_39_stats_msg_convertToJSON(v0_0_39_stats_msg_2);
	printf("repeating v0_0_39_stats_msg:\n%s\n", cJSON_Print(jsonv0_0_39_stats_msg_2));
}

int main() {
  test_v0_0_39_stats_msg(1);
  test_v0_0_39_stats_msg(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_stats_msg_MAIN
#endif // v0_0_39_stats_msg_TEST
