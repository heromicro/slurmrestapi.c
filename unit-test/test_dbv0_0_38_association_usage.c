#ifndef dbv0_0_38_association_usage_TEST
#define dbv0_0_38_association_usage_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_38_association_usage_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_38_association_usage.h"
dbv0_0_38_association_usage_t* instantiate_dbv0_0_38_association_usage(int include_optional);



dbv0_0_38_association_usage_t* instantiate_dbv0_0_38_association_usage(int include_optional) {
  dbv0_0_38_association_usage_t* dbv0_0_38_association_usage = NULL;
  if (include_optional) {
    dbv0_0_38_association_usage = dbv0_0_38_association_usage_create(
      56,
      1.337,
      1.337,
      56,
      56,
      1.337,
      1.337,
      56,
      56,
      1.337
    );
  } else {
    dbv0_0_38_association_usage = dbv0_0_38_association_usage_create(
      56,
      1.337,
      1.337,
      56,
      56,
      1.337,
      1.337,
      56,
      56,
      1.337
    );
  }

  return dbv0_0_38_association_usage;
}


#ifdef dbv0_0_38_association_usage_MAIN

void test_dbv0_0_38_association_usage(int include_optional) {
    dbv0_0_38_association_usage_t* dbv0_0_38_association_usage_1 = instantiate_dbv0_0_38_association_usage(include_optional);

	cJSON* jsondbv0_0_38_association_usage_1 = dbv0_0_38_association_usage_convertToJSON(dbv0_0_38_association_usage_1);
	printf("dbv0_0_38_association_usage :\n%s\n", cJSON_Print(jsondbv0_0_38_association_usage_1));
	dbv0_0_38_association_usage_t* dbv0_0_38_association_usage_2 = dbv0_0_38_association_usage_parseFromJSON(jsondbv0_0_38_association_usage_1);
	cJSON* jsondbv0_0_38_association_usage_2 = dbv0_0_38_association_usage_convertToJSON(dbv0_0_38_association_usage_2);
	printf("repeating dbv0_0_38_association_usage:\n%s\n", cJSON_Print(jsondbv0_0_38_association_usage_2));
}

int main() {
  test_dbv0_0_38_association_usage(1);
  test_dbv0_0_38_association_usage(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_38_association_usage_MAIN
#endif // dbv0_0_38_association_usage_TEST
