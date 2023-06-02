#ifndef v0_0_39_job_array_TEST
#define v0_0_39_job_array_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_job_array_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_job_array.h"
v0_0_39_job_array_t* instantiate_v0_0_39_job_array(int include_optional);



v0_0_39_job_array_t* instantiate_v0_0_39_job_array(int include_optional) {
  v0_0_39_job_array_t* v0_0_39_job_array = NULL;
  if (include_optional) {
    v0_0_39_job_array = v0_0_39_job_array_create(
      "0"
    );
  } else {
    v0_0_39_job_array = v0_0_39_job_array_create(
      "0"
    );
  }

  return v0_0_39_job_array;
}


#ifdef v0_0_39_job_array_MAIN

void test_v0_0_39_job_array(int include_optional) {
    v0_0_39_job_array_t* v0_0_39_job_array_1 = instantiate_v0_0_39_job_array(include_optional);

	cJSON* jsonv0_0_39_job_array_1 = v0_0_39_job_array_convertToJSON(v0_0_39_job_array_1);
	printf("v0_0_39_job_array :\n%s\n", cJSON_Print(jsonv0_0_39_job_array_1));
	v0_0_39_job_array_t* v0_0_39_job_array_2 = v0_0_39_job_array_parseFromJSON(jsonv0_0_39_job_array_1);
	cJSON* jsonv0_0_39_job_array_2 = v0_0_39_job_array_convertToJSON(v0_0_39_job_array_2);
	printf("repeating v0_0_39_job_array:\n%s\n", cJSON_Print(jsonv0_0_39_job_array_2));
}

int main() {
  test_v0_0_39_job_array(1);
  test_v0_0_39_job_array(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_job_array_MAIN
#endif // v0_0_39_job_array_TEST
