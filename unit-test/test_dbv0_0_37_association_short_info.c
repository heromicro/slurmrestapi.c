#ifndef dbv0_0_37_association_short_info_TEST
#define dbv0_0_37_association_short_info_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_37_association_short_info_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_37_association_short_info.h"
dbv0_0_37_association_short_info_t* instantiate_dbv0_0_37_association_short_info(int include_optional);



dbv0_0_37_association_short_info_t* instantiate_dbv0_0_37_association_short_info(int include_optional) {
  dbv0_0_37_association_short_info_t* dbv0_0_37_association_short_info = NULL;
  if (include_optional) {
    dbv0_0_37_association_short_info = dbv0_0_37_association_short_info_create(
      "0",
      "0",
      "0",
      "0"
    );
  } else {
    dbv0_0_37_association_short_info = dbv0_0_37_association_short_info_create(
      "0",
      "0",
      "0",
      "0"
    );
  }

  return dbv0_0_37_association_short_info;
}


#ifdef dbv0_0_37_association_short_info_MAIN

void test_dbv0_0_37_association_short_info(int include_optional) {
    dbv0_0_37_association_short_info_t* dbv0_0_37_association_short_info_1 = instantiate_dbv0_0_37_association_short_info(include_optional);

	cJSON* jsondbv0_0_37_association_short_info_1 = dbv0_0_37_association_short_info_convertToJSON(dbv0_0_37_association_short_info_1);
	printf("dbv0_0_37_association_short_info :\n%s\n", cJSON_Print(jsondbv0_0_37_association_short_info_1));
	dbv0_0_37_association_short_info_t* dbv0_0_37_association_short_info_2 = dbv0_0_37_association_short_info_parseFromJSON(jsondbv0_0_37_association_short_info_1);
	cJSON* jsondbv0_0_37_association_short_info_2 = dbv0_0_37_association_short_info_convertToJSON(dbv0_0_37_association_short_info_2);
	printf("repeating dbv0_0_37_association_short_info:\n%s\n", cJSON_Print(jsondbv0_0_37_association_short_info_2));
}

int main() {
  test_dbv0_0_37_association_short_info(1);
  test_dbv0_0_37_association_short_info(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_37_association_short_info_MAIN
#endif // dbv0_0_37_association_short_info_TEST
