#ifndef v0_0_39_job_info_power_TEST
#define v0_0_39_job_info_power_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_job_info_power_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_job_info_power.h"
v0_0_39_job_info_power_t* instantiate_v0_0_39_job_info_power(int include_optional);



v0_0_39_job_info_power_t* instantiate_v0_0_39_job_info_power(int include_optional) {
  v0_0_39_job_info_power_t* v0_0_39_job_info_power = NULL;
  if (include_optional) {
    v0_0_39_job_info_power = v0_0_39_job_info_power_create(
      list_createList()
    );
  } else {
    v0_0_39_job_info_power = v0_0_39_job_info_power_create(
      list_createList()
    );
  }

  return v0_0_39_job_info_power;
}


#ifdef v0_0_39_job_info_power_MAIN

void test_v0_0_39_job_info_power(int include_optional) {
    v0_0_39_job_info_power_t* v0_0_39_job_info_power_1 = instantiate_v0_0_39_job_info_power(include_optional);

	cJSON* jsonv0_0_39_job_info_power_1 = v0_0_39_job_info_power_convertToJSON(v0_0_39_job_info_power_1);
	printf("v0_0_39_job_info_power :\n%s\n", cJSON_Print(jsonv0_0_39_job_info_power_1));
	v0_0_39_job_info_power_t* v0_0_39_job_info_power_2 = v0_0_39_job_info_power_parseFromJSON(jsonv0_0_39_job_info_power_1);
	cJSON* jsonv0_0_39_job_info_power_2 = v0_0_39_job_info_power_convertToJSON(v0_0_39_job_info_power_2);
	printf("repeating v0_0_39_job_info_power:\n%s\n", cJSON_Print(jsonv0_0_39_job_info_power_2));
}

int main() {
  test_v0_0_39_job_info_power(1);
  test_v0_0_39_job_info_power(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_job_info_power_MAIN
#endif // v0_0_39_job_info_power_TEST
