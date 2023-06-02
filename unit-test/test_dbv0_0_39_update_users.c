#ifndef dbv0_0_39_update_users_TEST
#define dbv0_0_39_update_users_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_39_update_users_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_39_update_users.h"
dbv0_0_39_update_users_t* instantiate_dbv0_0_39_update_users(int include_optional);



dbv0_0_39_update_users_t* instantiate_dbv0_0_39_update_users(int include_optional) {
  dbv0_0_39_update_users_t* dbv0_0_39_update_users = NULL;
  if (include_optional) {
    dbv0_0_39_update_users = dbv0_0_39_update_users_create(
      list_createList()
    );
  } else {
    dbv0_0_39_update_users = dbv0_0_39_update_users_create(
      list_createList()
    );
  }

  return dbv0_0_39_update_users;
}


#ifdef dbv0_0_39_update_users_MAIN

void test_dbv0_0_39_update_users(int include_optional) {
    dbv0_0_39_update_users_t* dbv0_0_39_update_users_1 = instantiate_dbv0_0_39_update_users(include_optional);

	cJSON* jsondbv0_0_39_update_users_1 = dbv0_0_39_update_users_convertToJSON(dbv0_0_39_update_users_1);
	printf("dbv0_0_39_update_users :\n%s\n", cJSON_Print(jsondbv0_0_39_update_users_1));
	dbv0_0_39_update_users_t* dbv0_0_39_update_users_2 = dbv0_0_39_update_users_parseFromJSON(jsondbv0_0_39_update_users_1);
	cJSON* jsondbv0_0_39_update_users_2 = dbv0_0_39_update_users_convertToJSON(dbv0_0_39_update_users_2);
	printf("repeating dbv0_0_39_update_users:\n%s\n", cJSON_Print(jsondbv0_0_39_update_users_2));
}

int main() {
  test_dbv0_0_39_update_users(1);
  test_dbv0_0_39_update_users(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_39_update_users_MAIN
#endif // dbv0_0_39_update_users_TEST
