#ifndef dbv0_0_37_qos_limits_TEST
#define dbv0_0_37_qos_limits_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_37_qos_limits_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_37_qos_limits.h"
dbv0_0_37_qos_limits_t* instantiate_dbv0_0_37_qos_limits(int include_optional);

#include "test_dbv0_0_37_qos_limits_max.c"
#include "test_dbv0_0_37_qos_limits_min.c"


dbv0_0_37_qos_limits_t* instantiate_dbv0_0_37_qos_limits(int include_optional) {
  dbv0_0_37_qos_limits_t* dbv0_0_37_qos_limits = NULL;
  if (include_optional) {
    dbv0_0_37_qos_limits = dbv0_0_37_qos_limits_create(
      1.337,
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_qos_limits_max(0),
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_qos_limits_min(0)
    );
  } else {
    dbv0_0_37_qos_limits = dbv0_0_37_qos_limits_create(
      1.337,
      NULL,
      NULL
    );
  }

  return dbv0_0_37_qos_limits;
}


#ifdef dbv0_0_37_qos_limits_MAIN

void test_dbv0_0_37_qos_limits(int include_optional) {
    dbv0_0_37_qos_limits_t* dbv0_0_37_qos_limits_1 = instantiate_dbv0_0_37_qos_limits(include_optional);

	cJSON* jsondbv0_0_37_qos_limits_1 = dbv0_0_37_qos_limits_convertToJSON(dbv0_0_37_qos_limits_1);
	printf("dbv0_0_37_qos_limits :\n%s\n", cJSON_Print(jsondbv0_0_37_qos_limits_1));
	dbv0_0_37_qos_limits_t* dbv0_0_37_qos_limits_2 = dbv0_0_37_qos_limits_parseFromJSON(jsondbv0_0_37_qos_limits_1);
	cJSON* jsondbv0_0_37_qos_limits_2 = dbv0_0_37_qos_limits_convertToJSON(dbv0_0_37_qos_limits_2);
	printf("repeating dbv0_0_37_qos_limits:\n%s\n", cJSON_Print(jsondbv0_0_37_qos_limits_2));
}

int main() {
  test_dbv0_0_37_qos_limits(1);
  test_dbv0_0_37_qos_limits(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_37_qos_limits_MAIN
#endif // dbv0_0_37_qos_limits_TEST
