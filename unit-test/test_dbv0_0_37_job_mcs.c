#ifndef dbv0_0_37_job_mcs_TEST
#define dbv0_0_37_job_mcs_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_37_job_mcs_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_37_job_mcs.h"
dbv0_0_37_job_mcs_t* instantiate_dbv0_0_37_job_mcs(int include_optional);



dbv0_0_37_job_mcs_t* instantiate_dbv0_0_37_job_mcs(int include_optional) {
  dbv0_0_37_job_mcs_t* dbv0_0_37_job_mcs = NULL;
  if (include_optional) {
    dbv0_0_37_job_mcs = dbv0_0_37_job_mcs_create(
      "0"
    );
  } else {
    dbv0_0_37_job_mcs = dbv0_0_37_job_mcs_create(
      "0"
    );
  }

  return dbv0_0_37_job_mcs;
}


#ifdef dbv0_0_37_job_mcs_MAIN

void test_dbv0_0_37_job_mcs(int include_optional) {
    dbv0_0_37_job_mcs_t* dbv0_0_37_job_mcs_1 = instantiate_dbv0_0_37_job_mcs(include_optional);

	cJSON* jsondbv0_0_37_job_mcs_1 = dbv0_0_37_job_mcs_convertToJSON(dbv0_0_37_job_mcs_1);
	printf("dbv0_0_37_job_mcs :\n%s\n", cJSON_Print(jsondbv0_0_37_job_mcs_1));
	dbv0_0_37_job_mcs_t* dbv0_0_37_job_mcs_2 = dbv0_0_37_job_mcs_parseFromJSON(jsondbv0_0_37_job_mcs_1);
	cJSON* jsondbv0_0_37_job_mcs_2 = dbv0_0_37_job_mcs_convertToJSON(dbv0_0_37_job_mcs_2);
	printf("repeating dbv0_0_37_job_mcs:\n%s\n", cJSON_Print(jsondbv0_0_37_job_mcs_2));
}

int main() {
  test_dbv0_0_37_job_mcs(1);
  test_dbv0_0_37_job_mcs(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_37_job_mcs_MAIN
#endif // dbv0_0_37_job_mcs_TEST
