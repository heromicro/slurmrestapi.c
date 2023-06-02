#ifndef dbv0_0_38_qos_TEST
#define dbv0_0_38_qos_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_38_qos_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_38_qos.h"
dbv0_0_38_qos_t* instantiate_dbv0_0_38_qos(int include_optional);

#include "test_dbv0_0_38_qos_limits.c"
#include "test_dbv0_0_38_qos_preempt.c"


dbv0_0_38_qos_t* instantiate_dbv0_0_38_qos(int include_optional) {
  dbv0_0_38_qos_t* dbv0_0_38_qos = NULL;
  if (include_optional) {
    dbv0_0_38_qos = dbv0_0_38_qos_create(
      "0",
      list_createList(),
      "0",
       // false, not to have infinite recursion
      instantiate_dbv0_0_38_qos_limits(0),
       // false, not to have infinite recursion
      instantiate_dbv0_0_38_qos_preempt(0),
      56,
      1.337,
      1.337,
      "0"
    );
  } else {
    dbv0_0_38_qos = dbv0_0_38_qos_create(
      "0",
      list_createList(),
      "0",
      NULL,
      NULL,
      56,
      1.337,
      1.337,
      "0"
    );
  }

  return dbv0_0_38_qos;
}


#ifdef dbv0_0_38_qos_MAIN

void test_dbv0_0_38_qos(int include_optional) {
    dbv0_0_38_qos_t* dbv0_0_38_qos_1 = instantiate_dbv0_0_38_qos(include_optional);

	cJSON* jsondbv0_0_38_qos_1 = dbv0_0_38_qos_convertToJSON(dbv0_0_38_qos_1);
	printf("dbv0_0_38_qos :\n%s\n", cJSON_Print(jsondbv0_0_38_qos_1));
	dbv0_0_38_qos_t* dbv0_0_38_qos_2 = dbv0_0_38_qos_parseFromJSON(jsondbv0_0_38_qos_1);
	cJSON* jsondbv0_0_38_qos_2 = dbv0_0_38_qos_convertToJSON(dbv0_0_38_qos_2);
	printf("repeating dbv0_0_38_qos:\n%s\n", cJSON_Print(jsondbv0_0_38_qos_2));
}

int main() {
  test_dbv0_0_38_qos(1);
  test_dbv0_0_38_qos(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_38_qos_MAIN
#endif // dbv0_0_38_qos_TEST
