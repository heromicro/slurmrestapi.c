#ifndef dbv0_0_37_user_associations_TEST
#define dbv0_0_37_user_associations_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_37_user_associations_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_37_user_associations.h"
dbv0_0_37_user_associations_t* instantiate_dbv0_0_37_user_associations(int include_optional);

#include "test_dbv0_0_37_association_short_info.c"


dbv0_0_37_user_associations_t* instantiate_dbv0_0_37_user_associations(int include_optional) {
  dbv0_0_37_user_associations_t* dbv0_0_37_user_associations = NULL;
  if (include_optional) {
    dbv0_0_37_user_associations = dbv0_0_37_user_associations_create(
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_association_short_info(0)
    );
  } else {
    dbv0_0_37_user_associations = dbv0_0_37_user_associations_create(
      NULL
    );
  }

  return dbv0_0_37_user_associations;
}


#ifdef dbv0_0_37_user_associations_MAIN

void test_dbv0_0_37_user_associations(int include_optional) {
    dbv0_0_37_user_associations_t* dbv0_0_37_user_associations_1 = instantiate_dbv0_0_37_user_associations(include_optional);

	cJSON* jsondbv0_0_37_user_associations_1 = dbv0_0_37_user_associations_convertToJSON(dbv0_0_37_user_associations_1);
	printf("dbv0_0_37_user_associations :\n%s\n", cJSON_Print(jsondbv0_0_37_user_associations_1));
	dbv0_0_37_user_associations_t* dbv0_0_37_user_associations_2 = dbv0_0_37_user_associations_parseFromJSON(jsondbv0_0_37_user_associations_1);
	cJSON* jsondbv0_0_37_user_associations_2 = dbv0_0_37_user_associations_convertToJSON(dbv0_0_37_user_associations_2);
	printf("repeating dbv0_0_37_user_associations:\n%s\n", cJSON_Print(jsondbv0_0_37_user_associations_2));
}

int main() {
  test_dbv0_0_37_user_associations(1);
  test_dbv0_0_37_user_associations(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_37_user_associations_MAIN
#endif // dbv0_0_37_user_associations_TEST
