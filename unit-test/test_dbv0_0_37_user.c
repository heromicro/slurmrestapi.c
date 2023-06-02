#ifndef dbv0_0_37_user_TEST
#define dbv0_0_37_user_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_37_user_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_37_user.h"
dbv0_0_37_user_t* instantiate_dbv0_0_37_user(int include_optional);

#include "test_dbv0_0_37_user_associations.c"
#include "test_dbv0_0_37_user_default.c"


dbv0_0_37_user_t* instantiate_dbv0_0_37_user(int include_optional) {
  dbv0_0_37_user_t* dbv0_0_37_user = NULL;
  if (include_optional) {
    dbv0_0_37_user = dbv0_0_37_user_create(
      "0",
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_user_associations(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_user_default(0),
      "0"
    );
  } else {
    dbv0_0_37_user = dbv0_0_37_user_create(
      "0",
      NULL,
      list_createList(),
      NULL,
      "0"
    );
  }

  return dbv0_0_37_user;
}


#ifdef dbv0_0_37_user_MAIN

void test_dbv0_0_37_user(int include_optional) {
    dbv0_0_37_user_t* dbv0_0_37_user_1 = instantiate_dbv0_0_37_user(include_optional);

	cJSON* jsondbv0_0_37_user_1 = dbv0_0_37_user_convertToJSON(dbv0_0_37_user_1);
	printf("dbv0_0_37_user :\n%s\n", cJSON_Print(jsondbv0_0_37_user_1));
	dbv0_0_37_user_t* dbv0_0_37_user_2 = dbv0_0_37_user_parseFromJSON(jsondbv0_0_37_user_1);
	cJSON* jsondbv0_0_37_user_2 = dbv0_0_37_user_convertToJSON(dbv0_0_37_user_2);
	printf("repeating dbv0_0_37_user:\n%s\n", cJSON_Print(jsondbv0_0_37_user_2));
}

int main() {
  test_dbv0_0_37_user(1);
  test_dbv0_0_37_user(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_37_user_MAIN
#endif // dbv0_0_37_user_TEST
