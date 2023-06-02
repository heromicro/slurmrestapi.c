#ifndef v0_0_39_job_mcs_TEST
#define v0_0_39_job_mcs_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_job_mcs_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_job_mcs.h"
v0_0_39_job_mcs_t* instantiate_v0_0_39_job_mcs(int include_optional);



v0_0_39_job_mcs_t* instantiate_v0_0_39_job_mcs(int include_optional) {
  v0_0_39_job_mcs_t* v0_0_39_job_mcs = NULL;
  if (include_optional) {
    v0_0_39_job_mcs = v0_0_39_job_mcs_create(
      "0"
    );
  } else {
    v0_0_39_job_mcs = v0_0_39_job_mcs_create(
      "0"
    );
  }

  return v0_0_39_job_mcs;
}


#ifdef v0_0_39_job_mcs_MAIN

void test_v0_0_39_job_mcs(int include_optional) {
    v0_0_39_job_mcs_t* v0_0_39_job_mcs_1 = instantiate_v0_0_39_job_mcs(include_optional);

	cJSON* jsonv0_0_39_job_mcs_1 = v0_0_39_job_mcs_convertToJSON(v0_0_39_job_mcs_1);
	printf("v0_0_39_job_mcs :\n%s\n", cJSON_Print(jsonv0_0_39_job_mcs_1));
	v0_0_39_job_mcs_t* v0_0_39_job_mcs_2 = v0_0_39_job_mcs_parseFromJSON(jsonv0_0_39_job_mcs_1);
	cJSON* jsonv0_0_39_job_mcs_2 = v0_0_39_job_mcs_convertToJSON(v0_0_39_job_mcs_2);
	printf("repeating v0_0_39_job_mcs:\n%s\n", cJSON_Print(jsonv0_0_39_job_mcs_2));
}

int main() {
  test_v0_0_39_job_mcs(1);
  test_v0_0_39_job_mcs(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_job_mcs_MAIN
#endif // v0_0_39_job_mcs_TEST
