#ifndef dbv0_0_38_association_TEST
#define dbv0_0_38_association_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_38_association_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_38_association.h"
dbv0_0_38_association_t* instantiate_dbv0_0_38_association(int include_optional);

#include "test_dbv0_0_38_association_default.c"
#include "test_dbv0_0_38_association_max.c"
#include "test_dbv0_0_38_association_min.c"
#include "test_dbv0_0_38_association_usage.c"


dbv0_0_38_association_t* instantiate_dbv0_0_38_association(int include_optional) {
  dbv0_0_38_association_t* dbv0_0_38_association = NULL;
  if (include_optional) {
    dbv0_0_38_association = dbv0_0_38_association_create(
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_dbv0_0_38_association_default(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_dbv0_0_38_association_max(0),
       // false, not to have infinite recursion
      instantiate_dbv0_0_38_association_min(0),
      "0",
      "0",
      56,
      56,
       // false, not to have infinite recursion
      instantiate_dbv0_0_38_association_usage(0),
      "0",
      list_createList()
    );
  } else {
    dbv0_0_38_association = dbv0_0_38_association_create(
      "0",
      "0",
      NULL,
      list_createList(),
      NULL,
      NULL,
      "0",
      "0",
      56,
      56,
      NULL,
      "0",
      list_createList()
    );
  }

  return dbv0_0_38_association;
}


#ifdef dbv0_0_38_association_MAIN

void test_dbv0_0_38_association(int include_optional) {
    dbv0_0_38_association_t* dbv0_0_38_association_1 = instantiate_dbv0_0_38_association(include_optional);

	cJSON* jsondbv0_0_38_association_1 = dbv0_0_38_association_convertToJSON(dbv0_0_38_association_1);
	printf("dbv0_0_38_association :\n%s\n", cJSON_Print(jsondbv0_0_38_association_1));
	dbv0_0_38_association_t* dbv0_0_38_association_2 = dbv0_0_38_association_parseFromJSON(jsondbv0_0_38_association_1);
	cJSON* jsondbv0_0_38_association_2 = dbv0_0_38_association_convertToJSON(dbv0_0_38_association_2);
	printf("repeating dbv0_0_38_association:\n%s\n", cJSON_Print(jsondbv0_0_38_association_2));
}

int main() {
  test_dbv0_0_38_association(1);
  test_dbv0_0_38_association(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_38_association_MAIN
#endif // dbv0_0_38_association_TEST
