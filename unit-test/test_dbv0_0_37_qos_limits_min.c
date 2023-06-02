#ifndef dbv0_0_37_qos_limits_min_TEST
#define dbv0_0_37_qos_limits_min_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_37_qos_limits_min_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_37_qos_limits_min.h"
dbv0_0_37_qos_limits_min_t* instantiate_dbv0_0_37_qos_limits_min(int include_optional);

#include "test_dbv0_0_37_qos_limits_min_tres.c"


dbv0_0_37_qos_limits_min_t* instantiate_dbv0_0_37_qos_limits_min(int include_optional) {
  dbv0_0_37_qos_limits_min_t* dbv0_0_37_qos_limits_min = NULL;
  if (include_optional) {
    dbv0_0_37_qos_limits_min = dbv0_0_37_qos_limits_min_create(
      56,
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_qos_limits_min_tres(0)
    );
  } else {
    dbv0_0_37_qos_limits_min = dbv0_0_37_qos_limits_min_create(
      56,
      NULL
    );
  }

  return dbv0_0_37_qos_limits_min;
}


#ifdef dbv0_0_37_qos_limits_min_MAIN

void test_dbv0_0_37_qos_limits_min(int include_optional) {
    dbv0_0_37_qos_limits_min_t* dbv0_0_37_qos_limits_min_1 = instantiate_dbv0_0_37_qos_limits_min(include_optional);

	cJSON* jsondbv0_0_37_qos_limits_min_1 = dbv0_0_37_qos_limits_min_convertToJSON(dbv0_0_37_qos_limits_min_1);
	printf("dbv0_0_37_qos_limits_min :\n%s\n", cJSON_Print(jsondbv0_0_37_qos_limits_min_1));
	dbv0_0_37_qos_limits_min_t* dbv0_0_37_qos_limits_min_2 = dbv0_0_37_qos_limits_min_parseFromJSON(jsondbv0_0_37_qos_limits_min_1);
	cJSON* jsondbv0_0_37_qos_limits_min_2 = dbv0_0_37_qos_limits_min_convertToJSON(dbv0_0_37_qos_limits_min_2);
	printf("repeating dbv0_0_37_qos_limits_min:\n%s\n", cJSON_Print(jsondbv0_0_37_qos_limits_min_2));
}

int main() {
  test_dbv0_0_37_qos_limits_min(1);
  test_dbv0_0_37_qos_limits_min(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_37_qos_limits_min_MAIN
#endif // dbv0_0_37_qos_limits_min_TEST
