#ifndef dbv0_0_38_set_config_TEST
#define dbv0_0_38_set_config_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_38_set_config_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_38_set_config.h"
dbv0_0_38_set_config_t* instantiate_dbv0_0_38_set_config(int include_optional);



dbv0_0_38_set_config_t* instantiate_dbv0_0_38_set_config(int include_optional) {
  dbv0_0_38_set_config_t* dbv0_0_38_set_config = NULL;
  if (include_optional) {
    dbv0_0_38_set_config = dbv0_0_38_set_config_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  } else {
    dbv0_0_38_set_config = dbv0_0_38_set_config_create(
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList(),
      list_createList()
    );
  }

  return dbv0_0_38_set_config;
}


#ifdef dbv0_0_38_set_config_MAIN

void test_dbv0_0_38_set_config(int include_optional) {
    dbv0_0_38_set_config_t* dbv0_0_38_set_config_1 = instantiate_dbv0_0_38_set_config(include_optional);

	cJSON* jsondbv0_0_38_set_config_1 = dbv0_0_38_set_config_convertToJSON(dbv0_0_38_set_config_1);
	printf("dbv0_0_38_set_config :\n%s\n", cJSON_Print(jsondbv0_0_38_set_config_1));
	dbv0_0_38_set_config_t* dbv0_0_38_set_config_2 = dbv0_0_38_set_config_parseFromJSON(jsondbv0_0_38_set_config_1);
	cJSON* jsondbv0_0_38_set_config_2 = dbv0_0_38_set_config_convertToJSON(dbv0_0_38_set_config_2);
	printf("repeating dbv0_0_38_set_config:\n%s\n", cJSON_Print(jsondbv0_0_38_set_config_2));
}

int main() {
  test_dbv0_0_38_set_config(1);
  test_dbv0_0_38_set_config(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_38_set_config_MAIN
#endif // dbv0_0_38_set_config_TEST
