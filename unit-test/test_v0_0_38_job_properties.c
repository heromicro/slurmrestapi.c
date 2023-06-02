#ifndef v0_0_38_job_properties_TEST
#define v0_0_38_job_properties_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_38_job_properties_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_38_job_properties.h"
v0_0_38_job_properties_t* instantiate_v0_0_38_job_properties(int include_optional);



v0_0_38_job_properties_t* instantiate_v0_0_38_job_properties(int include_optional) {
  v0_0_38_job_properties_t* v0_0_38_job_properties = NULL;
  if (include_optional) {
    v0_0_38_job_properties = v0_0_38_job_properties_create(
      "0",
      "0",
      list_createList(),
      "0",
      "0",
      56,
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      56,
      "0",
      "0",
      "0",
      "0",
      56,
      "0",
      "0",
      56,
      "0",
      "0",
      0,
      slurm_rest_api_v0_0_38_job_properties_EXCLUSIVE_user,
      1,
      "0",
      slurm_rest_api_v0_0_38_job_properties_GRESFLAGS_disable-binding,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      56,
      56,
      56,
      1,
      "0",
      56,
      1,
      list_createList(),
      slurm_rest_api_v0_0_38_job_properties_OPENMODE_"append",
      1,
      "0",
      "0",
      "0",
      "0",
      1,
      "0",
      "a",
      56,
      1,
      "0",
      "0",
      "0",
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      1,
      "0"
    );
  } else {
    v0_0_38_job_properties = v0_0_38_job_properties_create(
      "0",
      "0",
      list_createList(),
      "0",
      "0",
      56,
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      56,
      "0",
      "0",
      "0",
      "0",
      56,
      "0",
      "0",
      56,
      "0",
      "0",
      0,
      slurm_rest_api_v0_0_38_job_properties_EXCLUSIVE_user,
      1,
      "0",
      slurm_rest_api_v0_0_38_job_properties_GRESFLAGS_disable-binding,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      1,
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      56,
      56,
      56,
      1,
      "0",
      56,
      1,
      list_createList(),
      slurm_rest_api_v0_0_38_job_properties_OPENMODE_"append",
      1,
      "0",
      "0",
      "0",
      "0",
      1,
      "0",
      "a",
      56,
      1,
      "0",
      "0",
      "0",
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      1,
      "0"
    );
  }

  return v0_0_38_job_properties;
}


#ifdef v0_0_38_job_properties_MAIN

void test_v0_0_38_job_properties(int include_optional) {
    v0_0_38_job_properties_t* v0_0_38_job_properties_1 = instantiate_v0_0_38_job_properties(include_optional);

	cJSON* jsonv0_0_38_job_properties_1 = v0_0_38_job_properties_convertToJSON(v0_0_38_job_properties_1);
	printf("v0_0_38_job_properties :\n%s\n", cJSON_Print(jsonv0_0_38_job_properties_1));
	v0_0_38_job_properties_t* v0_0_38_job_properties_2 = v0_0_38_job_properties_parseFromJSON(jsonv0_0_38_job_properties_1);
	cJSON* jsonv0_0_38_job_properties_2 = v0_0_38_job_properties_convertToJSON(v0_0_38_job_properties_2);
	printf("repeating v0_0_38_job_properties:\n%s\n", cJSON_Print(jsonv0_0_38_job_properties_2));
}

int main() {
  test_v0_0_38_job_properties(1);
  test_v0_0_38_job_properties(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_38_job_properties_MAIN
#endif // v0_0_38_job_properties_TEST
