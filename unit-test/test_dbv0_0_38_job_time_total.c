#ifndef dbv0_0_38_job_time_total_TEST
#define dbv0_0_38_job_time_total_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_38_job_time_total_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_38_job_time_total.h"
dbv0_0_38_job_time_total_t* instantiate_dbv0_0_38_job_time_total(int include_optional);



dbv0_0_38_job_time_total_t* instantiate_dbv0_0_38_job_time_total(int include_optional) {
  dbv0_0_38_job_time_total_t* dbv0_0_38_job_time_total = NULL;
  if (include_optional) {
    dbv0_0_38_job_time_total = dbv0_0_38_job_time_total_create(
      56,
      56
    );
  } else {
    dbv0_0_38_job_time_total = dbv0_0_38_job_time_total_create(
      56,
      56
    );
  }

  return dbv0_0_38_job_time_total;
}


#ifdef dbv0_0_38_job_time_total_MAIN

void test_dbv0_0_38_job_time_total(int include_optional) {
    dbv0_0_38_job_time_total_t* dbv0_0_38_job_time_total_1 = instantiate_dbv0_0_38_job_time_total(include_optional);

	cJSON* jsondbv0_0_38_job_time_total_1 = dbv0_0_38_job_time_total_convertToJSON(dbv0_0_38_job_time_total_1);
	printf("dbv0_0_38_job_time_total :\n%s\n", cJSON_Print(jsondbv0_0_38_job_time_total_1));
	dbv0_0_38_job_time_total_t* dbv0_0_38_job_time_total_2 = dbv0_0_38_job_time_total_parseFromJSON(jsondbv0_0_38_job_time_total_1);
	cJSON* jsondbv0_0_38_job_time_total_2 = dbv0_0_38_job_time_total_convertToJSON(dbv0_0_38_job_time_total_2);
	printf("repeating dbv0_0_38_job_time_total:\n%s\n", cJSON_Print(jsondbv0_0_38_job_time_total_2));
}

int main() {
  test_dbv0_0_38_job_time_total(1);
  test_dbv0_0_38_job_time_total(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_38_job_time_total_MAIN
#endif // dbv0_0_38_job_time_total_TEST
