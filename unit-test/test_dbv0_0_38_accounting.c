#ifndef dbv0_0_38_accounting_TEST
#define dbv0_0_38_accounting_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_38_accounting_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_38_accounting.h"
dbv0_0_38_accounting_t* instantiate_dbv0_0_38_accounting(int include_optional);



dbv0_0_38_accounting_t* instantiate_dbv0_0_38_accounting(int include_optional) {
  dbv0_0_38_accounting_t* dbv0_0_38_accounting = NULL;
  if (include_optional) {
    dbv0_0_38_accounting = dbv0_0_38_accounting_create(
      56,
      56,
      56,
      list_createList()
    );
  } else {
    dbv0_0_38_accounting = dbv0_0_38_accounting_create(
      56,
      56,
      56,
      list_createList()
    );
  }

  return dbv0_0_38_accounting;
}


#ifdef dbv0_0_38_accounting_MAIN

void test_dbv0_0_38_accounting(int include_optional) {
    dbv0_0_38_accounting_t* dbv0_0_38_accounting_1 = instantiate_dbv0_0_38_accounting(include_optional);

	cJSON* jsondbv0_0_38_accounting_1 = dbv0_0_38_accounting_convertToJSON(dbv0_0_38_accounting_1);
	printf("dbv0_0_38_accounting :\n%s\n", cJSON_Print(jsondbv0_0_38_accounting_1));
	dbv0_0_38_accounting_t* dbv0_0_38_accounting_2 = dbv0_0_38_accounting_parseFromJSON(jsondbv0_0_38_accounting_1);
	cJSON* jsondbv0_0_38_accounting_2 = dbv0_0_38_accounting_convertToJSON(dbv0_0_38_accounting_2);
	printf("repeating dbv0_0_38_accounting:\n%s\n", cJSON_Print(jsondbv0_0_38_accounting_2));
}

int main() {
  test_dbv0_0_38_accounting(1);
  test_dbv0_0_38_accounting(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_38_accounting_MAIN
#endif // dbv0_0_38_accounting_TEST
