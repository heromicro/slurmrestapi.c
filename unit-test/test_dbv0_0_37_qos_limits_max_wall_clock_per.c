#ifndef dbv0_0_37_qos_limits_max_wall_clock_per_TEST
#define dbv0_0_37_qos_limits_max_wall_clock_per_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_37_qos_limits_max_wall_clock_per_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_37_qos_limits_max_wall_clock_per.h"
dbv0_0_37_qos_limits_max_wall_clock_per_t* instantiate_dbv0_0_37_qos_limits_max_wall_clock_per(int include_optional);



dbv0_0_37_qos_limits_max_wall_clock_per_t* instantiate_dbv0_0_37_qos_limits_max_wall_clock_per(int include_optional) {
  dbv0_0_37_qos_limits_max_wall_clock_per_t* dbv0_0_37_qos_limits_max_wall_clock_per = NULL;
  if (include_optional) {
    dbv0_0_37_qos_limits_max_wall_clock_per = dbv0_0_37_qos_limits_max_wall_clock_per_create(
      56,
      56
    );
  } else {
    dbv0_0_37_qos_limits_max_wall_clock_per = dbv0_0_37_qos_limits_max_wall_clock_per_create(
      56,
      56
    );
  }

  return dbv0_0_37_qos_limits_max_wall_clock_per;
}


#ifdef dbv0_0_37_qos_limits_max_wall_clock_per_MAIN

void test_dbv0_0_37_qos_limits_max_wall_clock_per(int include_optional) {
    dbv0_0_37_qos_limits_max_wall_clock_per_t* dbv0_0_37_qos_limits_max_wall_clock_per_1 = instantiate_dbv0_0_37_qos_limits_max_wall_clock_per(include_optional);

	cJSON* jsondbv0_0_37_qos_limits_max_wall_clock_per_1 = dbv0_0_37_qos_limits_max_wall_clock_per_convertToJSON(dbv0_0_37_qos_limits_max_wall_clock_per_1);
	printf("dbv0_0_37_qos_limits_max_wall_clock_per :\n%s\n", cJSON_Print(jsondbv0_0_37_qos_limits_max_wall_clock_per_1));
	dbv0_0_37_qos_limits_max_wall_clock_per_t* dbv0_0_37_qos_limits_max_wall_clock_per_2 = dbv0_0_37_qos_limits_max_wall_clock_per_parseFromJSON(jsondbv0_0_37_qos_limits_max_wall_clock_per_1);
	cJSON* jsondbv0_0_37_qos_limits_max_wall_clock_per_2 = dbv0_0_37_qos_limits_max_wall_clock_per_convertToJSON(dbv0_0_37_qos_limits_max_wall_clock_per_2);
	printf("repeating dbv0_0_37_qos_limits_max_wall_clock_per:\n%s\n", cJSON_Print(jsondbv0_0_37_qos_limits_max_wall_clock_per_2));
}

int main() {
  test_dbv0_0_37_qos_limits_max_wall_clock_per(1);
  test_dbv0_0_37_qos_limits_max_wall_clock_per(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_37_qos_limits_max_wall_clock_per_MAIN
#endif // dbv0_0_37_qos_limits_max_wall_clock_per_TEST
