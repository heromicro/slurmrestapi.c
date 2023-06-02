#ifndef dbv0_0_38_job_required_TEST
#define dbv0_0_38_job_required_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_38_job_required_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_38_job_required.h"
dbv0_0_38_job_required_t* instantiate_dbv0_0_38_job_required(int include_optional);



dbv0_0_38_job_required_t* instantiate_dbv0_0_38_job_required(int include_optional) {
  dbv0_0_38_job_required_t* dbv0_0_38_job_required = NULL;
  if (include_optional) {
    dbv0_0_38_job_required = dbv0_0_38_job_required_create(
      56,
      56
    );
  } else {
    dbv0_0_38_job_required = dbv0_0_38_job_required_create(
      56,
      56
    );
  }

  return dbv0_0_38_job_required;
}


#ifdef dbv0_0_38_job_required_MAIN

void test_dbv0_0_38_job_required(int include_optional) {
    dbv0_0_38_job_required_t* dbv0_0_38_job_required_1 = instantiate_dbv0_0_38_job_required(include_optional);

	cJSON* jsondbv0_0_38_job_required_1 = dbv0_0_38_job_required_convertToJSON(dbv0_0_38_job_required_1);
	printf("dbv0_0_38_job_required :\n%s\n", cJSON_Print(jsondbv0_0_38_job_required_1));
	dbv0_0_38_job_required_t* dbv0_0_38_job_required_2 = dbv0_0_38_job_required_parseFromJSON(jsondbv0_0_38_job_required_1);
	cJSON* jsondbv0_0_38_job_required_2 = dbv0_0_38_job_required_convertToJSON(dbv0_0_38_job_required_2);
	printf("repeating dbv0_0_38_job_required:\n%s\n", cJSON_Print(jsondbv0_0_38_job_required_2));
}

int main() {
  test_dbv0_0_38_job_required(1);
  test_dbv0_0_38_job_required(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_38_job_required_MAIN
#endif // dbv0_0_38_job_required_TEST
