#ifndef dbv0_0_38_update_account_TEST
#define dbv0_0_38_update_account_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_38_update_account_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_38_update_account.h"
dbv0_0_38_update_account_t* instantiate_dbv0_0_38_update_account(int include_optional);



dbv0_0_38_update_account_t* instantiate_dbv0_0_38_update_account(int include_optional) {
  dbv0_0_38_update_account_t* dbv0_0_38_update_account = NULL;
  if (include_optional) {
    dbv0_0_38_update_account = dbv0_0_38_update_account_create(
      list_createList()
    );
  } else {
    dbv0_0_38_update_account = dbv0_0_38_update_account_create(
      list_createList()
    );
  }

  return dbv0_0_38_update_account;
}


#ifdef dbv0_0_38_update_account_MAIN

void test_dbv0_0_38_update_account(int include_optional) {
    dbv0_0_38_update_account_t* dbv0_0_38_update_account_1 = instantiate_dbv0_0_38_update_account(include_optional);

	cJSON* jsondbv0_0_38_update_account_1 = dbv0_0_38_update_account_convertToJSON(dbv0_0_38_update_account_1);
	printf("dbv0_0_38_update_account :\n%s\n", cJSON_Print(jsondbv0_0_38_update_account_1));
	dbv0_0_38_update_account_t* dbv0_0_38_update_account_2 = dbv0_0_38_update_account_parseFromJSON(jsondbv0_0_38_update_account_1);
	cJSON* jsondbv0_0_38_update_account_2 = dbv0_0_38_update_account_convertToJSON(dbv0_0_38_update_account_2);
	printf("repeating dbv0_0_38_update_account:\n%s\n", cJSON_Print(jsondbv0_0_38_update_account_2));
}

int main() {
  test_dbv0_0_38_update_account(1);
  test_dbv0_0_38_update_account(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_38_update_account_MAIN
#endif // dbv0_0_38_update_account_TEST
