#ifndef dbv0_0_37_job_array_TEST
#define dbv0_0_37_job_array_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_37_job_array_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_37_job_array.h"
dbv0_0_37_job_array_t* instantiate_dbv0_0_37_job_array(int include_optional);

#include "test_dbv0_0_37_job_array_limits.c"


dbv0_0_37_job_array_t* instantiate_dbv0_0_37_job_array(int include_optional) {
  dbv0_0_37_job_array_t* dbv0_0_37_job_array = NULL;
  if (include_optional) {
    dbv0_0_37_job_array = dbv0_0_37_job_array_create(
      56,
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_job_array_limits(0),
      "0",
      56
    );
  } else {
    dbv0_0_37_job_array = dbv0_0_37_job_array_create(
      56,
      NULL,
      "0",
      56
    );
  }

  return dbv0_0_37_job_array;
}


#ifdef dbv0_0_37_job_array_MAIN

void test_dbv0_0_37_job_array(int include_optional) {
    dbv0_0_37_job_array_t* dbv0_0_37_job_array_1 = instantiate_dbv0_0_37_job_array(include_optional);

	cJSON* jsondbv0_0_37_job_array_1 = dbv0_0_37_job_array_convertToJSON(dbv0_0_37_job_array_1);
	printf("dbv0_0_37_job_array :\n%s\n", cJSON_Print(jsondbv0_0_37_job_array_1));
	dbv0_0_37_job_array_t* dbv0_0_37_job_array_2 = dbv0_0_37_job_array_parseFromJSON(jsondbv0_0_37_job_array_1);
	cJSON* jsondbv0_0_37_job_array_2 = dbv0_0_37_job_array_convertToJSON(dbv0_0_37_job_array_2);
	printf("repeating dbv0_0_37_job_array:\n%s\n", cJSON_Print(jsondbv0_0_37_job_array_2));
}

int main() {
  test_dbv0_0_37_job_array(1);
  test_dbv0_0_37_job_array(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_37_job_array_MAIN
#endif // dbv0_0_37_job_array_TEST
