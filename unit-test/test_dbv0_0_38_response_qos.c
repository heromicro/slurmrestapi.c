#ifndef dbv0_0_38_response_qos_TEST
#define dbv0_0_38_response_qos_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_38_response_qos_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_38_response_qos.h"
dbv0_0_38_response_qos_t* instantiate_dbv0_0_38_response_qos(int include_optional);

#include "test_dbv0_0_38_meta.c"


dbv0_0_38_response_qos_t* instantiate_dbv0_0_38_response_qos(int include_optional) {
  dbv0_0_38_response_qos_t* dbv0_0_38_response_qos = NULL;
  if (include_optional) {
    dbv0_0_38_response_qos = dbv0_0_38_response_qos_create(
       // false, not to have infinite recursion
      instantiate_dbv0_0_38_meta(0),
      list_createList()
    );
  } else {
    dbv0_0_38_response_qos = dbv0_0_38_response_qos_create(
      NULL,
      list_createList()
    );
  }

  return dbv0_0_38_response_qos;
}


#ifdef dbv0_0_38_response_qos_MAIN

void test_dbv0_0_38_response_qos(int include_optional) {
    dbv0_0_38_response_qos_t* dbv0_0_38_response_qos_1 = instantiate_dbv0_0_38_response_qos(include_optional);

	cJSON* jsondbv0_0_38_response_qos_1 = dbv0_0_38_response_qos_convertToJSON(dbv0_0_38_response_qos_1);
	printf("dbv0_0_38_response_qos :\n%s\n", cJSON_Print(jsondbv0_0_38_response_qos_1));
	dbv0_0_38_response_qos_t* dbv0_0_38_response_qos_2 = dbv0_0_38_response_qos_parseFromJSON(jsondbv0_0_38_response_qos_1);
	cJSON* jsondbv0_0_38_response_qos_2 = dbv0_0_38_response_qos_convertToJSON(dbv0_0_38_response_qos_2);
	printf("repeating dbv0_0_38_response_qos:\n%s\n", cJSON_Print(jsondbv0_0_38_response_qos_2));
}

int main() {
  test_dbv0_0_38_response_qos(1);
  test_dbv0_0_38_response_qos(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_38_response_qos_MAIN
#endif // dbv0_0_38_response_qos_TEST
