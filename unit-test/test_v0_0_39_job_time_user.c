#ifndef v0_0_39_job_time_user_TEST
#define v0_0_39_job_time_user_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_job_time_user_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_job_time_user.h"
v0_0_39_job_time_user_t* instantiate_v0_0_39_job_time_user(int include_optional);



v0_0_39_job_time_user_t* instantiate_v0_0_39_job_time_user(int include_optional) {
  v0_0_39_job_time_user_t* v0_0_39_job_time_user = NULL;
  if (include_optional) {
    v0_0_39_job_time_user = v0_0_39_job_time_user_create(
      56
    );
  } else {
    v0_0_39_job_time_user = v0_0_39_job_time_user_create(
      56
    );
  }

  return v0_0_39_job_time_user;
}


#ifdef v0_0_39_job_time_user_MAIN

void test_v0_0_39_job_time_user(int include_optional) {
    v0_0_39_job_time_user_t* v0_0_39_job_time_user_1 = instantiate_v0_0_39_job_time_user(include_optional);

	cJSON* jsonv0_0_39_job_time_user_1 = v0_0_39_job_time_user_convertToJSON(v0_0_39_job_time_user_1);
	printf("v0_0_39_job_time_user :\n%s\n", cJSON_Print(jsonv0_0_39_job_time_user_1));
	v0_0_39_job_time_user_t* v0_0_39_job_time_user_2 = v0_0_39_job_time_user_parseFromJSON(jsonv0_0_39_job_time_user_1);
	cJSON* jsonv0_0_39_job_time_user_2 = v0_0_39_job_time_user_convertToJSON(v0_0_39_job_time_user_2);
	printf("repeating v0_0_39_job_time_user:\n%s\n", cJSON_Print(jsonv0_0_39_job_time_user_2));
}

int main() {
  test_v0_0_39_job_time_user(1);
  test_v0_0_39_job_time_user(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_job_time_user_MAIN
#endif // v0_0_39_job_time_user_TEST
