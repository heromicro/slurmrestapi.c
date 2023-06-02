#ifndef dbv0_0_37_response_wckey_add_TEST
#define dbv0_0_37_response_wckey_add_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_37_response_wckey_add_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_37_response_wckey_add.h"
dbv0_0_37_response_wckey_add_t* instantiate_dbv0_0_37_response_wckey_add(int include_optional);



dbv0_0_37_response_wckey_add_t* instantiate_dbv0_0_37_response_wckey_add(int include_optional) {
  dbv0_0_37_response_wckey_add_t* dbv0_0_37_response_wckey_add = NULL;
  if (include_optional) {
    dbv0_0_37_response_wckey_add = dbv0_0_37_response_wckey_add_create(
      list_createList()
    );
  } else {
    dbv0_0_37_response_wckey_add = dbv0_0_37_response_wckey_add_create(
      list_createList()
    );
  }

  return dbv0_0_37_response_wckey_add;
}


#ifdef dbv0_0_37_response_wckey_add_MAIN

void test_dbv0_0_37_response_wckey_add(int include_optional) {
    dbv0_0_37_response_wckey_add_t* dbv0_0_37_response_wckey_add_1 = instantiate_dbv0_0_37_response_wckey_add(include_optional);

	cJSON* jsondbv0_0_37_response_wckey_add_1 = dbv0_0_37_response_wckey_add_convertToJSON(dbv0_0_37_response_wckey_add_1);
	printf("dbv0_0_37_response_wckey_add :\n%s\n", cJSON_Print(jsondbv0_0_37_response_wckey_add_1));
	dbv0_0_37_response_wckey_add_t* dbv0_0_37_response_wckey_add_2 = dbv0_0_37_response_wckey_add_parseFromJSON(jsondbv0_0_37_response_wckey_add_1);
	cJSON* jsondbv0_0_37_response_wckey_add_2 = dbv0_0_37_response_wckey_add_convertToJSON(dbv0_0_37_response_wckey_add_2);
	printf("repeating dbv0_0_37_response_wckey_add:\n%s\n", cJSON_Print(jsondbv0_0_37_response_wckey_add_2));
}

int main() {
  test_dbv0_0_37_response_wckey_add(1);
  test_dbv0_0_37_response_wckey_add(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_37_response_wckey_add_MAIN
#endif // dbv0_0_37_response_wckey_add_TEST
