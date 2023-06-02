#ifndef dbv0_0_37_diag_TEST
#define dbv0_0_37_diag_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_37_diag_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_37_diag.h"
dbv0_0_37_diag_t* instantiate_dbv0_0_37_diag(int include_optional);

#include "test_dbv0_0_37_diag_statistics.c"


dbv0_0_37_diag_t* instantiate_dbv0_0_37_diag(int include_optional) {
  dbv0_0_37_diag_t* dbv0_0_37_diag = NULL;
  if (include_optional) {
    dbv0_0_37_diag = dbv0_0_37_diag_create(
      list_createList(),
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_diag_statistics(0)
    );
  } else {
    dbv0_0_37_diag = dbv0_0_37_diag_create(
      list_createList(),
      NULL
    );
  }

  return dbv0_0_37_diag;
}


#ifdef dbv0_0_37_diag_MAIN

void test_dbv0_0_37_diag(int include_optional) {
    dbv0_0_37_diag_t* dbv0_0_37_diag_1 = instantiate_dbv0_0_37_diag(include_optional);

	cJSON* jsondbv0_0_37_diag_1 = dbv0_0_37_diag_convertToJSON(dbv0_0_37_diag_1);
	printf("dbv0_0_37_diag :\n%s\n", cJSON_Print(jsondbv0_0_37_diag_1));
	dbv0_0_37_diag_t* dbv0_0_37_diag_2 = dbv0_0_37_diag_parseFromJSON(jsondbv0_0_37_diag_1);
	cJSON* jsondbv0_0_37_diag_2 = dbv0_0_37_diag_convertToJSON(dbv0_0_37_diag_2);
	printf("repeating dbv0_0_37_diag:\n%s\n", cJSON_Print(jsondbv0_0_37_diag_2));
}

int main() {
  test_dbv0_0_37_diag(1);
  test_dbv0_0_37_diag(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_37_diag_MAIN
#endif // dbv0_0_37_diag_TEST
