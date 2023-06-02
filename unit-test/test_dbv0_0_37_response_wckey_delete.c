#ifndef dbv0_0_37_response_wckey_delete_TEST
#define dbv0_0_37_response_wckey_delete_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_37_response_wckey_delete_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_37_response_wckey_delete.h"
dbv0_0_37_response_wckey_delete_t* instantiate_dbv0_0_37_response_wckey_delete(int include_optional);



dbv0_0_37_response_wckey_delete_t* instantiate_dbv0_0_37_response_wckey_delete(int include_optional) {
  dbv0_0_37_response_wckey_delete_t* dbv0_0_37_response_wckey_delete = NULL;
  if (include_optional) {
    dbv0_0_37_response_wckey_delete = dbv0_0_37_response_wckey_delete_create(
      list_createList()
    );
  } else {
    dbv0_0_37_response_wckey_delete = dbv0_0_37_response_wckey_delete_create(
      list_createList()
    );
  }

  return dbv0_0_37_response_wckey_delete;
}


#ifdef dbv0_0_37_response_wckey_delete_MAIN

void test_dbv0_0_37_response_wckey_delete(int include_optional) {
    dbv0_0_37_response_wckey_delete_t* dbv0_0_37_response_wckey_delete_1 = instantiate_dbv0_0_37_response_wckey_delete(include_optional);

	cJSON* jsondbv0_0_37_response_wckey_delete_1 = dbv0_0_37_response_wckey_delete_convertToJSON(dbv0_0_37_response_wckey_delete_1);
	printf("dbv0_0_37_response_wckey_delete :\n%s\n", cJSON_Print(jsondbv0_0_37_response_wckey_delete_1));
	dbv0_0_37_response_wckey_delete_t* dbv0_0_37_response_wckey_delete_2 = dbv0_0_37_response_wckey_delete_parseFromJSON(jsondbv0_0_37_response_wckey_delete_1);
	cJSON* jsondbv0_0_37_response_wckey_delete_2 = dbv0_0_37_response_wckey_delete_convertToJSON(dbv0_0_37_response_wckey_delete_2);
	printf("repeating dbv0_0_37_response_wckey_delete:\n%s\n", cJSON_Print(jsondbv0_0_37_response_wckey_delete_2));
}

int main() {
  test_dbv0_0_37_response_wckey_delete(1);
  test_dbv0_0_37_response_wckey_delete(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_37_response_wckey_delete_MAIN
#endif // dbv0_0_37_response_wckey_delete_TEST
