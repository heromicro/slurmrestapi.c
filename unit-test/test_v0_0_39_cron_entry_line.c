#ifndef v0_0_39_cron_entry_line_TEST
#define v0_0_39_cron_entry_line_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_cron_entry_line_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_cron_entry_line.h"
v0_0_39_cron_entry_line_t* instantiate_v0_0_39_cron_entry_line(int include_optional);



v0_0_39_cron_entry_line_t* instantiate_v0_0_39_cron_entry_line(int include_optional) {
  v0_0_39_cron_entry_line_t* v0_0_39_cron_entry_line = NULL;
  if (include_optional) {
    v0_0_39_cron_entry_line = v0_0_39_cron_entry_line_create(
      56
    );
  } else {
    v0_0_39_cron_entry_line = v0_0_39_cron_entry_line_create(
      56
    );
  }

  return v0_0_39_cron_entry_line;
}


#ifdef v0_0_39_cron_entry_line_MAIN

void test_v0_0_39_cron_entry_line(int include_optional) {
    v0_0_39_cron_entry_line_t* v0_0_39_cron_entry_line_1 = instantiate_v0_0_39_cron_entry_line(include_optional);

	cJSON* jsonv0_0_39_cron_entry_line_1 = v0_0_39_cron_entry_line_convertToJSON(v0_0_39_cron_entry_line_1);
	printf("v0_0_39_cron_entry_line :\n%s\n", cJSON_Print(jsonv0_0_39_cron_entry_line_1));
	v0_0_39_cron_entry_line_t* v0_0_39_cron_entry_line_2 = v0_0_39_cron_entry_line_parseFromJSON(jsonv0_0_39_cron_entry_line_1);
	cJSON* jsonv0_0_39_cron_entry_line_2 = v0_0_39_cron_entry_line_convertToJSON(v0_0_39_cron_entry_line_2);
	printf("repeating v0_0_39_cron_entry_line:\n%s\n", cJSON_Print(jsonv0_0_39_cron_entry_line_2));
}

int main() {
  test_v0_0_39_cron_entry_line(1);
  test_v0_0_39_cron_entry_line(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_cron_entry_line_MAIN
#endif // v0_0_39_cron_entry_line_TEST
