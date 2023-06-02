#ifndef dbv0_0_38_job_het_TEST
#define dbv0_0_38_job_het_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_38_job_het_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_38_job_het.h"
dbv0_0_38_job_het_t* instantiate_dbv0_0_38_job_het(int include_optional);



dbv0_0_38_job_het_t* instantiate_dbv0_0_38_job_het(int include_optional) {
  dbv0_0_38_job_het_t* dbv0_0_38_job_het = NULL;
  if (include_optional) {
    dbv0_0_38_job_het = dbv0_0_38_job_het_create(
      56,
      56
    );
  } else {
    dbv0_0_38_job_het = dbv0_0_38_job_het_create(
      56,
      56
    );
  }

  return dbv0_0_38_job_het;
}


#ifdef dbv0_0_38_job_het_MAIN

void test_dbv0_0_38_job_het(int include_optional) {
    dbv0_0_38_job_het_t* dbv0_0_38_job_het_1 = instantiate_dbv0_0_38_job_het(include_optional);

	cJSON* jsondbv0_0_38_job_het_1 = dbv0_0_38_job_het_convertToJSON(dbv0_0_38_job_het_1);
	printf("dbv0_0_38_job_het :\n%s\n", cJSON_Print(jsondbv0_0_38_job_het_1));
	dbv0_0_38_job_het_t* dbv0_0_38_job_het_2 = dbv0_0_38_job_het_parseFromJSON(jsondbv0_0_38_job_het_1);
	cJSON* jsondbv0_0_38_job_het_2 = dbv0_0_38_job_het_convertToJSON(dbv0_0_38_job_het_2);
	printf("repeating dbv0_0_38_job_het:\n%s\n", cJSON_Print(jsondbv0_0_38_job_het_2));
}

int main() {
  test_dbv0_0_38_job_het(1);
  test_dbv0_0_38_job_het(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_38_job_het_MAIN
#endif // dbv0_0_38_job_het_TEST
