#ifndef v0_0_39_cron_entry_TEST
#define v0_0_39_cron_entry_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_cron_entry_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_cron_entry.h"
v0_0_39_cron_entry_t* instantiate_v0_0_39_cron_entry(int include_optional);

#include "test_v0_0_39_cron_entry_line.c"


v0_0_39_cron_entry_t* instantiate_v0_0_39_cron_entry(int include_optional) {
  v0_0_39_cron_entry_t* v0_0_39_cron_entry = NULL;
  if (include_optional) {
    v0_0_39_cron_entry = v0_0_39_cron_entry_create(
      list_createList(),
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_v0_0_39_cron_entry_line(0)
    );
  } else {
    v0_0_39_cron_entry = v0_0_39_cron_entry_create(
      list_createList(),
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      NULL
    );
  }

  return v0_0_39_cron_entry;
}


#ifdef v0_0_39_cron_entry_MAIN

void test_v0_0_39_cron_entry(int include_optional) {
    v0_0_39_cron_entry_t* v0_0_39_cron_entry_1 = instantiate_v0_0_39_cron_entry(include_optional);

	cJSON* jsonv0_0_39_cron_entry_1 = v0_0_39_cron_entry_convertToJSON(v0_0_39_cron_entry_1);
	printf("v0_0_39_cron_entry :\n%s\n", cJSON_Print(jsonv0_0_39_cron_entry_1));
	v0_0_39_cron_entry_t* v0_0_39_cron_entry_2 = v0_0_39_cron_entry_parseFromJSON(jsonv0_0_39_cron_entry_1);
	cJSON* jsonv0_0_39_cron_entry_2 = v0_0_39_cron_entry_convertToJSON(v0_0_39_cron_entry_2);
	printf("repeating v0_0_39_cron_entry:\n%s\n", cJSON_Print(jsonv0_0_39_cron_entry_2));
}

int main() {
  test_v0_0_39_cron_entry(1);
  test_v0_0_39_cron_entry(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_cron_entry_MAIN
#endif // v0_0_39_cron_entry_TEST
