#ifndef v0_0_38_job_resources_TEST
#define v0_0_38_job_resources_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_38_job_resources_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_38_job_resources.h"
v0_0_38_job_resources_t* instantiate_v0_0_38_job_resources(int include_optional);



v0_0_38_job_resources_t* instantiate_v0_0_38_job_resources(int include_optional) {
  v0_0_38_job_resources_t* v0_0_38_job_resources = NULL;
  if (include_optional) {
    v0_0_38_job_resources = v0_0_38_job_resources_create(
      "0",
      56,
      56,
      list_createList()
    );
  } else {
    v0_0_38_job_resources = v0_0_38_job_resources_create(
      "0",
      56,
      56,
      list_createList()
    );
  }

  return v0_0_38_job_resources;
}


#ifdef v0_0_38_job_resources_MAIN

void test_v0_0_38_job_resources(int include_optional) {
    v0_0_38_job_resources_t* v0_0_38_job_resources_1 = instantiate_v0_0_38_job_resources(include_optional);

	cJSON* jsonv0_0_38_job_resources_1 = v0_0_38_job_resources_convertToJSON(v0_0_38_job_resources_1);
	printf("v0_0_38_job_resources :\n%s\n", cJSON_Print(jsonv0_0_38_job_resources_1));
	v0_0_38_job_resources_t* v0_0_38_job_resources_2 = v0_0_38_job_resources_parseFromJSON(jsonv0_0_38_job_resources_1);
	cJSON* jsonv0_0_38_job_resources_2 = v0_0_38_job_resources_convertToJSON(v0_0_38_job_resources_2);
	printf("repeating v0_0_38_job_resources:\n%s\n", cJSON_Print(jsonv0_0_38_job_resources_2));
}

int main() {
  test_v0_0_38_job_resources(1);
  test_v0_0_38_job_resources(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_38_job_resources_MAIN
#endif // v0_0_38_job_resources_TEST
