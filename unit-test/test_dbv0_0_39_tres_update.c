#ifndef dbv0_0_39_tres_update_TEST
#define dbv0_0_39_tres_update_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_39_tres_update_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_39_tres_update.h"
dbv0_0_39_tres_update_t* instantiate_dbv0_0_39_tres_update(int include_optional);



dbv0_0_39_tres_update_t* instantiate_dbv0_0_39_tres_update(int include_optional) {
  dbv0_0_39_tres_update_t* dbv0_0_39_tres_update = NULL;
  if (include_optional) {
    dbv0_0_39_tres_update = dbv0_0_39_tres_update_create(
      list_createList()
    );
  } else {
    dbv0_0_39_tres_update = dbv0_0_39_tres_update_create(
      list_createList()
    );
  }

  return dbv0_0_39_tres_update;
}


#ifdef dbv0_0_39_tres_update_MAIN

void test_dbv0_0_39_tres_update(int include_optional) {
    dbv0_0_39_tres_update_t* dbv0_0_39_tres_update_1 = instantiate_dbv0_0_39_tres_update(include_optional);

	cJSON* jsondbv0_0_39_tres_update_1 = dbv0_0_39_tres_update_convertToJSON(dbv0_0_39_tres_update_1);
	printf("dbv0_0_39_tres_update :\n%s\n", cJSON_Print(jsondbv0_0_39_tres_update_1));
	dbv0_0_39_tres_update_t* dbv0_0_39_tres_update_2 = dbv0_0_39_tres_update_parseFromJSON(jsondbv0_0_39_tres_update_1);
	cJSON* jsondbv0_0_39_tres_update_2 = dbv0_0_39_tres_update_convertToJSON(dbv0_0_39_tres_update_2);
	printf("repeating dbv0_0_39_tres_update:\n%s\n", cJSON_Print(jsondbv0_0_39_tres_update_2));
}

int main() {
  test_dbv0_0_39_tres_update(1);
  test_dbv0_0_39_tres_update(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_39_tres_update_MAIN
#endif // dbv0_0_39_tres_update_TEST
