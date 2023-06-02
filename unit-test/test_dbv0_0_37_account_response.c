#ifndef dbv0_0_37_account_response_TEST
#define dbv0_0_37_account_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_37_account_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_37_account_response.h"
dbv0_0_37_account_response_t* instantiate_dbv0_0_37_account_response(int include_optional);



dbv0_0_37_account_response_t* instantiate_dbv0_0_37_account_response(int include_optional) {
  dbv0_0_37_account_response_t* dbv0_0_37_account_response = NULL;
  if (include_optional) {
    dbv0_0_37_account_response = dbv0_0_37_account_response_create(
      list_createList()
    );
  } else {
    dbv0_0_37_account_response = dbv0_0_37_account_response_create(
      list_createList()
    );
  }

  return dbv0_0_37_account_response;
}


#ifdef dbv0_0_37_account_response_MAIN

void test_dbv0_0_37_account_response(int include_optional) {
    dbv0_0_37_account_response_t* dbv0_0_37_account_response_1 = instantiate_dbv0_0_37_account_response(include_optional);

	cJSON* jsondbv0_0_37_account_response_1 = dbv0_0_37_account_response_convertToJSON(dbv0_0_37_account_response_1);
	printf("dbv0_0_37_account_response :\n%s\n", cJSON_Print(jsondbv0_0_37_account_response_1));
	dbv0_0_37_account_response_t* dbv0_0_37_account_response_2 = dbv0_0_37_account_response_parseFromJSON(jsondbv0_0_37_account_response_1);
	cJSON* jsondbv0_0_37_account_response_2 = dbv0_0_37_account_response_convertToJSON(dbv0_0_37_account_response_2);
	printf("repeating dbv0_0_37_account_response:\n%s\n", cJSON_Print(jsondbv0_0_37_account_response_2));
}

int main() {
  test_dbv0_0_37_account_response(1);
  test_dbv0_0_37_account_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_37_account_response_MAIN
#endif // dbv0_0_37_account_response_TEST
