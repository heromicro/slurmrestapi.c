#ifndef v0_0_37_diag_statistics_TEST
#define v0_0_37_diag_statistics_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_37_diag_statistics_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_37_diag_statistics.h"
v0_0_37_diag_statistics_t* instantiate_v0_0_37_diag_statistics(int include_optional);



v0_0_37_diag_statistics_t* instantiate_v0_0_37_diag_statistics(int include_optional) {
  v0_0_37_diag_statistics_t* v0_0_37_diag_statistics = NULL;
  if (include_optional) {
    v0_0_37_diag_statistics = v0_0_37_diag_statistics_create(
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      1
    );
  } else {
    v0_0_37_diag_statistics = v0_0_37_diag_statistics_create(
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      1
    );
  }

  return v0_0_37_diag_statistics;
}


#ifdef v0_0_37_diag_statistics_MAIN

void test_v0_0_37_diag_statistics(int include_optional) {
    v0_0_37_diag_statistics_t* v0_0_37_diag_statistics_1 = instantiate_v0_0_37_diag_statistics(include_optional);

	cJSON* jsonv0_0_37_diag_statistics_1 = v0_0_37_diag_statistics_convertToJSON(v0_0_37_diag_statistics_1);
	printf("v0_0_37_diag_statistics :\n%s\n", cJSON_Print(jsonv0_0_37_diag_statistics_1));
	v0_0_37_diag_statistics_t* v0_0_37_diag_statistics_2 = v0_0_37_diag_statistics_parseFromJSON(jsonv0_0_37_diag_statistics_1);
	cJSON* jsonv0_0_37_diag_statistics_2 = v0_0_37_diag_statistics_convertToJSON(v0_0_37_diag_statistics_2);
	printf("repeating v0_0_37_diag_statistics:\n%s\n", cJSON_Print(jsonv0_0_37_diag_statistics_2));
}

int main() {
  test_v0_0_37_diag_statistics(1);
  test_v0_0_37_diag_statistics(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_37_diag_statistics_MAIN
#endif // v0_0_37_diag_statistics_TEST
