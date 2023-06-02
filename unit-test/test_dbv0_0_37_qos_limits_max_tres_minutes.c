#ifndef dbv0_0_37_qos_limits_max_tres_minutes_TEST
#define dbv0_0_37_qos_limits_max_tres_minutes_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_37_qos_limits_max_tres_minutes_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_37_qos_limits_max_tres_minutes.h"
dbv0_0_37_qos_limits_max_tres_minutes_t* instantiate_dbv0_0_37_qos_limits_max_tres_minutes(int include_optional);

#include "test_dbv0_0_37_qos_limits_max_tres_minutes_per.c"


dbv0_0_37_qos_limits_max_tres_minutes_t* instantiate_dbv0_0_37_qos_limits_max_tres_minutes(int include_optional) {
  dbv0_0_37_qos_limits_max_tres_minutes_t* dbv0_0_37_qos_limits_max_tres_minutes = NULL;
  if (include_optional) {
    dbv0_0_37_qos_limits_max_tres_minutes = dbv0_0_37_qos_limits_max_tres_minutes_create(
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_qos_limits_max_tres_minutes_per(0)
    );
  } else {
    dbv0_0_37_qos_limits_max_tres_minutes = dbv0_0_37_qos_limits_max_tres_minutes_create(
      NULL
    );
  }

  return dbv0_0_37_qos_limits_max_tres_minutes;
}


#ifdef dbv0_0_37_qos_limits_max_tres_minutes_MAIN

void test_dbv0_0_37_qos_limits_max_tres_minutes(int include_optional) {
    dbv0_0_37_qos_limits_max_tres_minutes_t* dbv0_0_37_qos_limits_max_tres_minutes_1 = instantiate_dbv0_0_37_qos_limits_max_tres_minutes(include_optional);

	cJSON* jsondbv0_0_37_qos_limits_max_tres_minutes_1 = dbv0_0_37_qos_limits_max_tres_minutes_convertToJSON(dbv0_0_37_qos_limits_max_tres_minutes_1);
	printf("dbv0_0_37_qos_limits_max_tres_minutes :\n%s\n", cJSON_Print(jsondbv0_0_37_qos_limits_max_tres_minutes_1));
	dbv0_0_37_qos_limits_max_tres_minutes_t* dbv0_0_37_qos_limits_max_tres_minutes_2 = dbv0_0_37_qos_limits_max_tres_minutes_parseFromJSON(jsondbv0_0_37_qos_limits_max_tres_minutes_1);
	cJSON* jsondbv0_0_37_qos_limits_max_tres_minutes_2 = dbv0_0_37_qos_limits_max_tres_minutes_convertToJSON(dbv0_0_37_qos_limits_max_tres_minutes_2);
	printf("repeating dbv0_0_37_qos_limits_max_tres_minutes:\n%s\n", cJSON_Print(jsondbv0_0_37_qos_limits_max_tres_minutes_2));
}

int main() {
  test_dbv0_0_37_qos_limits_max_tres_minutes(1);
  test_dbv0_0_37_qos_limits_max_tres_minutes(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_37_qos_limits_max_tres_minutes_MAIN
#endif // dbv0_0_37_qos_limits_max_tres_minutes_TEST
