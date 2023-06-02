#ifndef dbv0_0_38_response_associations_TEST
#define dbv0_0_38_response_associations_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_38_response_associations_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_38_response_associations.h"
dbv0_0_38_response_associations_t* instantiate_dbv0_0_38_response_associations(int include_optional);

#include "test_dbv0_0_38_meta.c"


dbv0_0_38_response_associations_t* instantiate_dbv0_0_38_response_associations(int include_optional) {
  dbv0_0_38_response_associations_t* dbv0_0_38_response_associations = NULL;
  if (include_optional) {
    dbv0_0_38_response_associations = dbv0_0_38_response_associations_create(
       // false, not to have infinite recursion
      instantiate_dbv0_0_38_meta(0),
      list_createList()
    );
  } else {
    dbv0_0_38_response_associations = dbv0_0_38_response_associations_create(
      NULL,
      list_createList()
    );
  }

  return dbv0_0_38_response_associations;
}


#ifdef dbv0_0_38_response_associations_MAIN

void test_dbv0_0_38_response_associations(int include_optional) {
    dbv0_0_38_response_associations_t* dbv0_0_38_response_associations_1 = instantiate_dbv0_0_38_response_associations(include_optional);

	cJSON* jsondbv0_0_38_response_associations_1 = dbv0_0_38_response_associations_convertToJSON(dbv0_0_38_response_associations_1);
	printf("dbv0_0_38_response_associations :\n%s\n", cJSON_Print(jsondbv0_0_38_response_associations_1));
	dbv0_0_38_response_associations_t* dbv0_0_38_response_associations_2 = dbv0_0_38_response_associations_parseFromJSON(jsondbv0_0_38_response_associations_1);
	cJSON* jsondbv0_0_38_response_associations_2 = dbv0_0_38_response_associations_convertToJSON(dbv0_0_38_response_associations_2);
	printf("repeating dbv0_0_38_response_associations:\n%s\n", cJSON_Print(jsondbv0_0_38_response_associations_2));
}

int main() {
  test_dbv0_0_38_response_associations(1);
  test_dbv0_0_38_response_associations(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_38_response_associations_MAIN
#endif // dbv0_0_38_response_associations_TEST
