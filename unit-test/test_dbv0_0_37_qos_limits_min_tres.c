#ifndef dbv0_0_37_qos_limits_min_tres_TEST
#define dbv0_0_37_qos_limits_min_tres_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_37_qos_limits_min_tres_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_37_qos_limits_min_tres.h"
dbv0_0_37_qos_limits_min_tres_t* instantiate_dbv0_0_37_qos_limits_min_tres(int include_optional);

#include "test_dbv0_0_37_qos_limits_min_tres_per.c"


dbv0_0_37_qos_limits_min_tres_t* instantiate_dbv0_0_37_qos_limits_min_tres(int include_optional) {
  dbv0_0_37_qos_limits_min_tres_t* dbv0_0_37_qos_limits_min_tres = NULL;
  if (include_optional) {
    dbv0_0_37_qos_limits_min_tres = dbv0_0_37_qos_limits_min_tres_create(
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_qos_limits_min_tres_per(0)
    );
  } else {
    dbv0_0_37_qos_limits_min_tres = dbv0_0_37_qos_limits_min_tres_create(
      NULL
    );
  }

  return dbv0_0_37_qos_limits_min_tres;
}


#ifdef dbv0_0_37_qos_limits_min_tres_MAIN

void test_dbv0_0_37_qos_limits_min_tres(int include_optional) {
    dbv0_0_37_qos_limits_min_tres_t* dbv0_0_37_qos_limits_min_tres_1 = instantiate_dbv0_0_37_qos_limits_min_tres(include_optional);

	cJSON* jsondbv0_0_37_qos_limits_min_tres_1 = dbv0_0_37_qos_limits_min_tres_convertToJSON(dbv0_0_37_qos_limits_min_tres_1);
	printf("dbv0_0_37_qos_limits_min_tres :\n%s\n", cJSON_Print(jsondbv0_0_37_qos_limits_min_tres_1));
	dbv0_0_37_qos_limits_min_tres_t* dbv0_0_37_qos_limits_min_tres_2 = dbv0_0_37_qos_limits_min_tres_parseFromJSON(jsondbv0_0_37_qos_limits_min_tres_1);
	cJSON* jsondbv0_0_37_qos_limits_min_tres_2 = dbv0_0_37_qos_limits_min_tres_convertToJSON(dbv0_0_37_qos_limits_min_tres_2);
	printf("repeating dbv0_0_37_qos_limits_min_tres:\n%s\n", cJSON_Print(jsondbv0_0_37_qos_limits_min_tres_2));
}

int main() {
  test_dbv0_0_37_qos_limits_min_tres(1);
  test_dbv0_0_37_qos_limits_min_tres(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_37_qos_limits_min_tres_MAIN
#endif // dbv0_0_37_qos_limits_min_tres_TEST
