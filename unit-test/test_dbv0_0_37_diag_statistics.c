#ifndef dbv0_0_37_diag_statistics_TEST
#define dbv0_0_37_diag_statistics_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_37_diag_statistics_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_37_diag_statistics.h"
dbv0_0_37_diag_statistics_t* instantiate_dbv0_0_37_diag_statistics(int include_optional);



dbv0_0_37_diag_statistics_t* instantiate_dbv0_0_37_diag_statistics(int include_optional) {
  dbv0_0_37_diag_statistics_t* dbv0_0_37_diag_statistics = NULL;
  if (include_optional) {
    dbv0_0_37_diag_statistics = dbv0_0_37_diag_statistics_create(
      56,
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    dbv0_0_37_diag_statistics = dbv0_0_37_diag_statistics_create(
      56,
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return dbv0_0_37_diag_statistics;
}


#ifdef dbv0_0_37_diag_statistics_MAIN

void test_dbv0_0_37_diag_statistics(int include_optional) {
    dbv0_0_37_diag_statistics_t* dbv0_0_37_diag_statistics_1 = instantiate_dbv0_0_37_diag_statistics(include_optional);

	cJSON* jsondbv0_0_37_diag_statistics_1 = dbv0_0_37_diag_statistics_convertToJSON(dbv0_0_37_diag_statistics_1);
	printf("dbv0_0_37_diag_statistics :\n%s\n", cJSON_Print(jsondbv0_0_37_diag_statistics_1));
	dbv0_0_37_diag_statistics_t* dbv0_0_37_diag_statistics_2 = dbv0_0_37_diag_statistics_parseFromJSON(jsondbv0_0_37_diag_statistics_1);
	cJSON* jsondbv0_0_37_diag_statistics_2 = dbv0_0_37_diag_statistics_convertToJSON(dbv0_0_37_diag_statistics_2);
	printf("repeating dbv0_0_37_diag_statistics:\n%s\n", cJSON_Print(jsondbv0_0_37_diag_statistics_2));
}

int main() {
  test_dbv0_0_37_diag_statistics(1);
  test_dbv0_0_37_diag_statistics(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_37_diag_statistics_MAIN
#endif // dbv0_0_37_diag_statistics_TEST
