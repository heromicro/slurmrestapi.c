#ifndef v0_0_39_job_res_TEST
#define v0_0_39_job_res_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_job_res_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_job_res.h"
v0_0_39_job_res_t* instantiate_v0_0_39_job_res(int include_optional);



v0_0_39_job_res_t* instantiate_v0_0_39_job_res(int include_optional) {
  v0_0_39_job_res_t* v0_0_39_job_res = NULL;
  if (include_optional) {
    v0_0_39_job_res = v0_0_39_job_res_create(
      "0",
      56,
      56,
      56,
      list_createList()
    );
  } else {
    v0_0_39_job_res = v0_0_39_job_res_create(
      "0",
      56,
      56,
      56,
      list_createList()
    );
  }

  return v0_0_39_job_res;
}


#ifdef v0_0_39_job_res_MAIN

void test_v0_0_39_job_res(int include_optional) {
    v0_0_39_job_res_t* v0_0_39_job_res_1 = instantiate_v0_0_39_job_res(include_optional);

	cJSON* jsonv0_0_39_job_res_1 = v0_0_39_job_res_convertToJSON(v0_0_39_job_res_1);
	printf("v0_0_39_job_res :\n%s\n", cJSON_Print(jsonv0_0_39_job_res_1));
	v0_0_39_job_res_t* v0_0_39_job_res_2 = v0_0_39_job_res_parseFromJSON(jsonv0_0_39_job_res_1);
	cJSON* jsonv0_0_39_job_res_2 = v0_0_39_job_res_convertToJSON(v0_0_39_job_res_2);
	printf("repeating v0_0_39_job_res:\n%s\n", cJSON_Print(jsonv0_0_39_job_res_2));
}

int main() {
  test_v0_0_39_job_res(1);
  test_v0_0_39_job_res(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_job_res_MAIN
#endif // v0_0_39_job_res_TEST
