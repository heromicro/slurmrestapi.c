#ifndef dbv0_0_38_qos_limits_max_accruing_TEST
#define dbv0_0_38_qos_limits_max_accruing_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_38_qos_limits_max_accruing_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_38_qos_limits_max_accruing.h"
dbv0_0_38_qos_limits_max_accruing_t* instantiate_dbv0_0_38_qos_limits_max_accruing(int include_optional);

#include "test_dbv0_0_38_qos_limits_max_accruing_per.c"


dbv0_0_38_qos_limits_max_accruing_t* instantiate_dbv0_0_38_qos_limits_max_accruing(int include_optional) {
  dbv0_0_38_qos_limits_max_accruing_t* dbv0_0_38_qos_limits_max_accruing = NULL;
  if (include_optional) {
    dbv0_0_38_qos_limits_max_accruing = dbv0_0_38_qos_limits_max_accruing_create(
       // false, not to have infinite recursion
      instantiate_dbv0_0_38_qos_limits_max_accruing_per(0)
    );
  } else {
    dbv0_0_38_qos_limits_max_accruing = dbv0_0_38_qos_limits_max_accruing_create(
      NULL
    );
  }

  return dbv0_0_38_qos_limits_max_accruing;
}


#ifdef dbv0_0_38_qos_limits_max_accruing_MAIN

void test_dbv0_0_38_qos_limits_max_accruing(int include_optional) {
    dbv0_0_38_qos_limits_max_accruing_t* dbv0_0_38_qos_limits_max_accruing_1 = instantiate_dbv0_0_38_qos_limits_max_accruing(include_optional);

	cJSON* jsondbv0_0_38_qos_limits_max_accruing_1 = dbv0_0_38_qos_limits_max_accruing_convertToJSON(dbv0_0_38_qos_limits_max_accruing_1);
	printf("dbv0_0_38_qos_limits_max_accruing :\n%s\n", cJSON_Print(jsondbv0_0_38_qos_limits_max_accruing_1));
	dbv0_0_38_qos_limits_max_accruing_t* dbv0_0_38_qos_limits_max_accruing_2 = dbv0_0_38_qos_limits_max_accruing_parseFromJSON(jsondbv0_0_38_qos_limits_max_accruing_1);
	cJSON* jsondbv0_0_38_qos_limits_max_accruing_2 = dbv0_0_38_qos_limits_max_accruing_convertToJSON(dbv0_0_38_qos_limits_max_accruing_2);
	printf("repeating dbv0_0_38_qos_limits_max_accruing:\n%s\n", cJSON_Print(jsondbv0_0_38_qos_limits_max_accruing_2));
}

int main() {
  test_dbv0_0_38_qos_limits_max_accruing(1);
  test_dbv0_0_38_qos_limits_max_accruing(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_38_qos_limits_max_accruing_MAIN
#endif // dbv0_0_38_qos_limits_max_accruing_TEST
