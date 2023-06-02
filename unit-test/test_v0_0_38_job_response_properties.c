#ifndef v0_0_38_job_response_properties_TEST
#define v0_0_38_job_response_properties_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_38_job_response_properties_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_38_job_response_properties.h"
v0_0_38_job_response_properties_t* instantiate_v0_0_38_job_response_properties(int include_optional);

#include "test_v0_0_38_job_resources.c"


v0_0_38_job_response_properties_t* instantiate_v0_0_38_job_response_properties(int include_optional) {
  v0_0_38_job_response_properties_t* v0_0_38_job_response_properties = NULL;
  if (include_optional) {
    v0_0_38_job_response_properties = v0_0_38_job_response_properties_create(
      "0",
      56,
      "0",
      56,
      56,
      56,
      "0",
      56,
      "0",
      1,
      "0",
      list_createList(),
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      "0",
      "0",
      "0",
      1.337,
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      56,
      "0",
      56,
      56,
      56,
      "0",
      56,
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      56,
      56,
       // false, not to have infinite recursion
      instantiate_v0_0_38_job_resources(0),
      "0",
      56,
      "0",
      56,
      56,
      "0",
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
      "0",
      56,
      "0",
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      list_createList(),
      "0",
      1,
      "0",
      1,
      56,
      56,
      "0",
      "0",
      list_createList(),
      56,
      56,
      56,
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      56,
      "0",
      56,
      56,
      56,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      "0",
      "0",
      "0"
    );
  } else {
    v0_0_38_job_response_properties = v0_0_38_job_response_properties_create(
      "0",
      56,
      "0",
      56,
      56,
      56,
      "0",
      56,
      "0",
      1,
      "0",
      list_createList(),
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      "0",
      "0",
      "0",
      1.337,
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      56,
      "0",
      56,
      56,
      56,
      "0",
      56,
      "0",
      "0",
      "0",
      "0",
      list_createList(),
      56,
      56,
      NULL,
      "0",
      56,
      "0",
      56,
      56,
      "0",
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
      "0",
      56,
      "0",
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      list_createList(),
      "0",
      1,
      "0",
      1,
      56,
      56,
      "0",
      "0",
      list_createList(),
      56,
      56,
      56,
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      56,
      "0",
      56,
      56,
      56,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      56,
      "0",
      "0",
      "0"
    );
  }

  return v0_0_38_job_response_properties;
}


#ifdef v0_0_38_job_response_properties_MAIN

void test_v0_0_38_job_response_properties(int include_optional) {
    v0_0_38_job_response_properties_t* v0_0_38_job_response_properties_1 = instantiate_v0_0_38_job_response_properties(include_optional);

	cJSON* jsonv0_0_38_job_response_properties_1 = v0_0_38_job_response_properties_convertToJSON(v0_0_38_job_response_properties_1);
	printf("v0_0_38_job_response_properties :\n%s\n", cJSON_Print(jsonv0_0_38_job_response_properties_1));
	v0_0_38_job_response_properties_t* v0_0_38_job_response_properties_2 = v0_0_38_job_response_properties_parseFromJSON(jsonv0_0_38_job_response_properties_1);
	cJSON* jsonv0_0_38_job_response_properties_2 = v0_0_38_job_response_properties_convertToJSON(v0_0_38_job_response_properties_2);
	printf("repeating v0_0_38_job_response_properties:\n%s\n", cJSON_Print(jsonv0_0_38_job_response_properties_2));
}

int main() {
  test_v0_0_38_job_response_properties(1);
  test_v0_0_38_job_response_properties(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_38_job_response_properties_MAIN
#endif // v0_0_38_job_response_properties_TEST
