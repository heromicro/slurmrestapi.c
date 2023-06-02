#ifndef dbv0_0_38_diag_statistics_rollups_inner_TEST
#define dbv0_0_38_diag_statistics_rollups_inner_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_38_diag_statistics_rollups_inner_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_38_diag_statistics_rollups_inner.h"
dbv0_0_38_diag_statistics_rollups_inner_t* instantiate_dbv0_0_38_diag_statistics_rollups_inner(int include_optional);



dbv0_0_38_diag_statistics_rollups_inner_t* instantiate_dbv0_0_38_diag_statistics_rollups_inner(int include_optional) {
  dbv0_0_38_diag_statistics_rollups_inner_t* dbv0_0_38_diag_statistics_rollups_inner = NULL;
  if (include_optional) {
    dbv0_0_38_diag_statistics_rollups_inner = dbv0_0_38_diag_statistics_rollups_inner_create(
      "0",
      56,
      56,
      56,
      56,
      56
    );
  } else {
    dbv0_0_38_diag_statistics_rollups_inner = dbv0_0_38_diag_statistics_rollups_inner_create(
      "0",
      56,
      56,
      56,
      56,
      56
    );
  }

  return dbv0_0_38_diag_statistics_rollups_inner;
}


#ifdef dbv0_0_38_diag_statistics_rollups_inner_MAIN

void test_dbv0_0_38_diag_statistics_rollups_inner(int include_optional) {
    dbv0_0_38_diag_statistics_rollups_inner_t* dbv0_0_38_diag_statistics_rollups_inner_1 = instantiate_dbv0_0_38_diag_statistics_rollups_inner(include_optional);

	cJSON* jsondbv0_0_38_diag_statistics_rollups_inner_1 = dbv0_0_38_diag_statistics_rollups_inner_convertToJSON(dbv0_0_38_diag_statistics_rollups_inner_1);
	printf("dbv0_0_38_diag_statistics_rollups_inner :\n%s\n", cJSON_Print(jsondbv0_0_38_diag_statistics_rollups_inner_1));
	dbv0_0_38_diag_statistics_rollups_inner_t* dbv0_0_38_diag_statistics_rollups_inner_2 = dbv0_0_38_diag_statistics_rollups_inner_parseFromJSON(jsondbv0_0_38_diag_statistics_rollups_inner_1);
	cJSON* jsondbv0_0_38_diag_statistics_rollups_inner_2 = dbv0_0_38_diag_statistics_rollups_inner_convertToJSON(dbv0_0_38_diag_statistics_rollups_inner_2);
	printf("repeating dbv0_0_38_diag_statistics_rollups_inner:\n%s\n", cJSON_Print(jsondbv0_0_38_diag_statistics_rollups_inner_2));
}

int main() {
  test_dbv0_0_38_diag_statistics_rollups_inner(1);
  test_dbv0_0_38_diag_statistics_rollups_inner(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_38_diag_statistics_rollups_inner_MAIN
#endif // dbv0_0_38_diag_statistics_rollups_inner_TEST
