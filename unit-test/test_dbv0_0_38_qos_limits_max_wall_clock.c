#ifndef dbv0_0_38_qos_limits_max_wall_clock_TEST
#define dbv0_0_38_qos_limits_max_wall_clock_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_38_qos_limits_max_wall_clock_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_38_qos_limits_max_wall_clock.h"
dbv0_0_38_qos_limits_max_wall_clock_t* instantiate_dbv0_0_38_qos_limits_max_wall_clock(int include_optional);

#include "test_dbv0_0_38_qos_limits_max_wall_clock_per.c"


dbv0_0_38_qos_limits_max_wall_clock_t* instantiate_dbv0_0_38_qos_limits_max_wall_clock(int include_optional) {
  dbv0_0_38_qos_limits_max_wall_clock_t* dbv0_0_38_qos_limits_max_wall_clock = NULL;
  if (include_optional) {
    dbv0_0_38_qos_limits_max_wall_clock = dbv0_0_38_qos_limits_max_wall_clock_create(
       // false, not to have infinite recursion
      instantiate_dbv0_0_38_qos_limits_max_wall_clock_per(0)
    );
  } else {
    dbv0_0_38_qos_limits_max_wall_clock = dbv0_0_38_qos_limits_max_wall_clock_create(
      NULL
    );
  }

  return dbv0_0_38_qos_limits_max_wall_clock;
}


#ifdef dbv0_0_38_qos_limits_max_wall_clock_MAIN

void test_dbv0_0_38_qos_limits_max_wall_clock(int include_optional) {
    dbv0_0_38_qos_limits_max_wall_clock_t* dbv0_0_38_qos_limits_max_wall_clock_1 = instantiate_dbv0_0_38_qos_limits_max_wall_clock(include_optional);

	cJSON* jsondbv0_0_38_qos_limits_max_wall_clock_1 = dbv0_0_38_qos_limits_max_wall_clock_convertToJSON(dbv0_0_38_qos_limits_max_wall_clock_1);
	printf("dbv0_0_38_qos_limits_max_wall_clock :\n%s\n", cJSON_Print(jsondbv0_0_38_qos_limits_max_wall_clock_1));
	dbv0_0_38_qos_limits_max_wall_clock_t* dbv0_0_38_qos_limits_max_wall_clock_2 = dbv0_0_38_qos_limits_max_wall_clock_parseFromJSON(jsondbv0_0_38_qos_limits_max_wall_clock_1);
	cJSON* jsondbv0_0_38_qos_limits_max_wall_clock_2 = dbv0_0_38_qos_limits_max_wall_clock_convertToJSON(dbv0_0_38_qos_limits_max_wall_clock_2);
	printf("repeating dbv0_0_38_qos_limits_max_wall_clock:\n%s\n", cJSON_Print(jsondbv0_0_38_qos_limits_max_wall_clock_2));
}

int main() {
  test_dbv0_0_38_qos_limits_max_wall_clock(1);
  test_dbv0_0_38_qos_limits_max_wall_clock(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_38_qos_limits_max_wall_clock_MAIN
#endif // dbv0_0_38_qos_limits_max_wall_clock_TEST
