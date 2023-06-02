#ifndef dbv0_0_38_error_TEST
#define dbv0_0_38_error_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_38_error_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_38_error.h"
dbv0_0_38_error_t* instantiate_dbv0_0_38_error(int include_optional);



dbv0_0_38_error_t* instantiate_dbv0_0_38_error(int include_optional) {
  dbv0_0_38_error_t* dbv0_0_38_error = NULL;
  if (include_optional) {
    dbv0_0_38_error = dbv0_0_38_error_create(
      56,
      "0",
      "0",
      "0"
    );
  } else {
    dbv0_0_38_error = dbv0_0_38_error_create(
      56,
      "0",
      "0",
      "0"
    );
  }

  return dbv0_0_38_error;
}


#ifdef dbv0_0_38_error_MAIN

void test_dbv0_0_38_error(int include_optional) {
    dbv0_0_38_error_t* dbv0_0_38_error_1 = instantiate_dbv0_0_38_error(include_optional);

	cJSON* jsondbv0_0_38_error_1 = dbv0_0_38_error_convertToJSON(dbv0_0_38_error_1);
	printf("dbv0_0_38_error :\n%s\n", cJSON_Print(jsondbv0_0_38_error_1));
	dbv0_0_38_error_t* dbv0_0_38_error_2 = dbv0_0_38_error_parseFromJSON(jsondbv0_0_38_error_1);
	cJSON* jsondbv0_0_38_error_2 = dbv0_0_38_error_convertToJSON(dbv0_0_38_error_2);
	printf("repeating dbv0_0_38_error:\n%s\n", cJSON_Print(jsondbv0_0_38_error_2));
}

int main() {
  test_dbv0_0_38_error(1);
  test_dbv0_0_38_error(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_38_error_MAIN
#endif // dbv0_0_38_error_TEST
