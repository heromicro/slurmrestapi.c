#ifndef v0_0_39_job_required_TEST
#define v0_0_39_job_required_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_job_required_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_job_required.h"
v0_0_39_job_required_t* instantiate_v0_0_39_job_required(int include_optional);



v0_0_39_job_required_t* instantiate_v0_0_39_job_required(int include_optional) {
  v0_0_39_job_required_t* v0_0_39_job_required = NULL;
  if (include_optional) {
    v0_0_39_job_required = v0_0_39_job_required_create(
      56
    );
  } else {
    v0_0_39_job_required = v0_0_39_job_required_create(
      56
    );
  }

  return v0_0_39_job_required;
}


#ifdef v0_0_39_job_required_MAIN

void test_v0_0_39_job_required(int include_optional) {
    v0_0_39_job_required_t* v0_0_39_job_required_1 = instantiate_v0_0_39_job_required(include_optional);

	cJSON* jsonv0_0_39_job_required_1 = v0_0_39_job_required_convertToJSON(v0_0_39_job_required_1);
	printf("v0_0_39_job_required :\n%s\n", cJSON_Print(jsonv0_0_39_job_required_1));
	v0_0_39_job_required_t* v0_0_39_job_required_2 = v0_0_39_job_required_parseFromJSON(jsonv0_0_39_job_required_1);
	cJSON* jsonv0_0_39_job_required_2 = v0_0_39_job_required_convertToJSON(v0_0_39_job_required_2);
	printf("repeating v0_0_39_job_required:\n%s\n", cJSON_Print(jsonv0_0_39_job_required_2));
}

int main() {
  test_v0_0_39_job_required(1);
  test_v0_0_39_job_required(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_job_required_MAIN
#endif // v0_0_39_job_required_TEST
