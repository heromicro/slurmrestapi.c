#ifndef dbv0_0_37_qos_limits_max_TEST
#define dbv0_0_37_qos_limits_max_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_37_qos_limits_max_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_37_qos_limits_max.h"
dbv0_0_37_qos_limits_max_t* instantiate_dbv0_0_37_qos_limits_max(int include_optional);

#include "test_dbv0_0_37_qos_limits_max_wall_clock.c"
#include "test_dbv0_0_37_qos_limits_max_jobs.c"
#include "test_dbv0_0_37_qos_limits_max_accruing.c"
#include "test_dbv0_0_37_qos_limits_max_tres.c"


dbv0_0_37_qos_limits_max_t* instantiate_dbv0_0_37_qos_limits_max(int include_optional) {
  dbv0_0_37_qos_limits_max_t* dbv0_0_37_qos_limits_max = NULL;
  if (include_optional) {
    dbv0_0_37_qos_limits_max = dbv0_0_37_qos_limits_max_create(
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_qos_limits_max_wall_clock(0),
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_qos_limits_max_jobs(0),
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_qos_limits_max_accruing(0),
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_qos_limits_max_tres(0)
    );
  } else {
    dbv0_0_37_qos_limits_max = dbv0_0_37_qos_limits_max_create(
      NULL,
      NULL,
      NULL,
      NULL
    );
  }

  return dbv0_0_37_qos_limits_max;
}


#ifdef dbv0_0_37_qos_limits_max_MAIN

void test_dbv0_0_37_qos_limits_max(int include_optional) {
    dbv0_0_37_qos_limits_max_t* dbv0_0_37_qos_limits_max_1 = instantiate_dbv0_0_37_qos_limits_max(include_optional);

	cJSON* jsondbv0_0_37_qos_limits_max_1 = dbv0_0_37_qos_limits_max_convertToJSON(dbv0_0_37_qos_limits_max_1);
	printf("dbv0_0_37_qos_limits_max :\n%s\n", cJSON_Print(jsondbv0_0_37_qos_limits_max_1));
	dbv0_0_37_qos_limits_max_t* dbv0_0_37_qos_limits_max_2 = dbv0_0_37_qos_limits_max_parseFromJSON(jsondbv0_0_37_qos_limits_max_1);
	cJSON* jsondbv0_0_37_qos_limits_max_2 = dbv0_0_37_qos_limits_max_convertToJSON(dbv0_0_37_qos_limits_max_2);
	printf("repeating dbv0_0_37_qos_limits_max:\n%s\n", cJSON_Print(jsondbv0_0_37_qos_limits_max_2));
}

int main() {
  test_dbv0_0_37_qos_limits_max(1);
  test_dbv0_0_37_qos_limits_max(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_37_qos_limits_max_MAIN
#endif // dbv0_0_37_qos_limits_max_TEST
