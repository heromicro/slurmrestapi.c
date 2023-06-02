#ifndef dbv0_0_37_diag_statistics_rpcs_inner_TEST
#define dbv0_0_37_diag_statistics_rpcs_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_37_diag_statistics_rpcs_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_37_diag_statistics_rpcs_inner.h"
dbv0_0_37_diag_statistics_rpcs_inner_t* instantiate_dbv0_0_37_diag_statistics_rpcs_inner(int include_optional);

#include "test_dbv0_0_37_diag_statistics_rpcs_inner_time.c"


dbv0_0_37_diag_statistics_rpcs_inner_t* instantiate_dbv0_0_37_diag_statistics_rpcs_inner(int include_optional) {
  dbv0_0_37_diag_statistics_rpcs_inner_t* dbv0_0_37_diag_statistics_rpcs_inner = NULL;
  if (include_optional) {
    dbv0_0_37_diag_statistics_rpcs_inner = dbv0_0_37_diag_statistics_rpcs_inner_create(
      "0",
      56,
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_diag_statistics_rpcs_inner_time(0)
    );
  } else {
    dbv0_0_37_diag_statistics_rpcs_inner = dbv0_0_37_diag_statistics_rpcs_inner_create(
      "0",
      56,
      NULL
    );
  }

  return dbv0_0_37_diag_statistics_rpcs_inner;
}


#ifdef dbv0_0_37_diag_statistics_rpcs_inner_MAIN

void test_dbv0_0_37_diag_statistics_rpcs_inner(int include_optional) {
    dbv0_0_37_diag_statistics_rpcs_inner_t* dbv0_0_37_diag_statistics_rpcs_inner_1 = instantiate_dbv0_0_37_diag_statistics_rpcs_inner(include_optional);

	cJSON* jsondbv0_0_37_diag_statistics_rpcs_inner_1 = dbv0_0_37_diag_statistics_rpcs_inner_convertToJSON(dbv0_0_37_diag_statistics_rpcs_inner_1);
	printf("dbv0_0_37_diag_statistics_rpcs_inner :\n%s\n", cJSON_Print(jsondbv0_0_37_diag_statistics_rpcs_inner_1));
	dbv0_0_37_diag_statistics_rpcs_inner_t* dbv0_0_37_diag_statistics_rpcs_inner_2 = dbv0_0_37_diag_statistics_rpcs_inner_parseFromJSON(jsondbv0_0_37_diag_statistics_rpcs_inner_1);
	cJSON* jsondbv0_0_37_diag_statistics_rpcs_inner_2 = dbv0_0_37_diag_statistics_rpcs_inner_convertToJSON(dbv0_0_37_diag_statistics_rpcs_inner_2);
	printf("repeating dbv0_0_37_diag_statistics_rpcs_inner:\n%s\n", cJSON_Print(jsondbv0_0_37_diag_statistics_rpcs_inner_2));
}

int main() {
  test_dbv0_0_37_diag_statistics_rpcs_inner(1);
  test_dbv0_0_37_diag_statistics_rpcs_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_37_diag_statistics_rpcs_inner_MAIN
#endif // dbv0_0_37_diag_statistics_rpcs_inner_TEST
