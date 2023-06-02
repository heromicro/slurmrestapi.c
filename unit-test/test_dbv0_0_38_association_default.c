#ifndef dbv0_0_38_association_default_TEST
#define dbv0_0_38_association_default_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_38_association_default_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_38_association_default.h"
dbv0_0_38_association_default_t* instantiate_dbv0_0_38_association_default(int include_optional);



dbv0_0_38_association_default_t* instantiate_dbv0_0_38_association_default(int include_optional) {
  dbv0_0_38_association_default_t* dbv0_0_38_association_default = NULL;
  if (include_optional) {
    dbv0_0_38_association_default = dbv0_0_38_association_default_create(
      "0"
    );
  } else {
    dbv0_0_38_association_default = dbv0_0_38_association_default_create(
      "0"
    );
  }

  return dbv0_0_38_association_default;
}


#ifdef dbv0_0_38_association_default_MAIN

void test_dbv0_0_38_association_default(int include_optional) {
    dbv0_0_38_association_default_t* dbv0_0_38_association_default_1 = instantiate_dbv0_0_38_association_default(include_optional);

	cJSON* jsondbv0_0_38_association_default_1 = dbv0_0_38_association_default_convertToJSON(dbv0_0_38_association_default_1);
	printf("dbv0_0_38_association_default :\n%s\n", cJSON_Print(jsondbv0_0_38_association_default_1));
	dbv0_0_38_association_default_t* dbv0_0_38_association_default_2 = dbv0_0_38_association_default_parseFromJSON(jsondbv0_0_38_association_default_1);
	cJSON* jsondbv0_0_38_association_default_2 = dbv0_0_38_association_default_convertToJSON(dbv0_0_38_association_default_2);
	printf("repeating dbv0_0_38_association_default:\n%s\n", cJSON_Print(jsondbv0_0_38_association_default_2));
}

int main() {
  test_dbv0_0_38_association_default(1);
  test_dbv0_0_38_association_default(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_38_association_default_MAIN
#endif // dbv0_0_38_association_default_TEST
