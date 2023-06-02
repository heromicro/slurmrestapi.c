#ifndef v0_0_39_stats_rec_TEST
#define v0_0_39_stats_rec_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_stats_rec_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_stats_rec.h"
v0_0_39_stats_rec_t* instantiate_v0_0_39_stats_rec(int include_optional);



v0_0_39_stats_rec_t* instantiate_v0_0_39_stats_rec(int include_optional) {
  v0_0_39_stats_rec_t* v0_0_39_stats_rec = NULL;
  if (include_optional) {
    v0_0_39_stats_rec = v0_0_39_stats_rec_create(
      56,
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    v0_0_39_stats_rec = v0_0_39_stats_rec_create(
      56,
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return v0_0_39_stats_rec;
}


#ifdef v0_0_39_stats_rec_MAIN

void test_v0_0_39_stats_rec(int include_optional) {
    v0_0_39_stats_rec_t* v0_0_39_stats_rec_1 = instantiate_v0_0_39_stats_rec(include_optional);

	cJSON* jsonv0_0_39_stats_rec_1 = v0_0_39_stats_rec_convertToJSON(v0_0_39_stats_rec_1);
	printf("v0_0_39_stats_rec :\n%s\n", cJSON_Print(jsonv0_0_39_stats_rec_1));
	v0_0_39_stats_rec_t* v0_0_39_stats_rec_2 = v0_0_39_stats_rec_parseFromJSON(jsonv0_0_39_stats_rec_1);
	cJSON* jsonv0_0_39_stats_rec_2 = v0_0_39_stats_rec_convertToJSON(v0_0_39_stats_rec_2);
	printf("repeating v0_0_39_stats_rec:\n%s\n", cJSON_Print(jsonv0_0_39_stats_rec_2));
}

int main() {
  test_v0_0_39_stats_rec(1);
  test_v0_0_39_stats_rec(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_stats_rec_MAIN
#endif // v0_0_39_stats_rec_TEST
