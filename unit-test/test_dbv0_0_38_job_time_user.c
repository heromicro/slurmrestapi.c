#ifndef dbv0_0_38_job_time_user_TEST
#define dbv0_0_38_job_time_user_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_38_job_time_user_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_38_job_time_user.h"
dbv0_0_38_job_time_user_t* instantiate_dbv0_0_38_job_time_user(int include_optional);



dbv0_0_38_job_time_user_t* instantiate_dbv0_0_38_job_time_user(int include_optional) {
  dbv0_0_38_job_time_user_t* dbv0_0_38_job_time_user = NULL;
  if (include_optional) {
    dbv0_0_38_job_time_user = dbv0_0_38_job_time_user_create(
      56,
      56
    );
  } else {
    dbv0_0_38_job_time_user = dbv0_0_38_job_time_user_create(
      56,
      56
    );
  }

  return dbv0_0_38_job_time_user;
}


#ifdef dbv0_0_38_job_time_user_MAIN

void test_dbv0_0_38_job_time_user(int include_optional) {
    dbv0_0_38_job_time_user_t* dbv0_0_38_job_time_user_1 = instantiate_dbv0_0_38_job_time_user(include_optional);

	cJSON* jsondbv0_0_38_job_time_user_1 = dbv0_0_38_job_time_user_convertToJSON(dbv0_0_38_job_time_user_1);
	printf("dbv0_0_38_job_time_user :\n%s\n", cJSON_Print(jsondbv0_0_38_job_time_user_1));
	dbv0_0_38_job_time_user_t* dbv0_0_38_job_time_user_2 = dbv0_0_38_job_time_user_parseFromJSON(jsondbv0_0_38_job_time_user_1);
	cJSON* jsondbv0_0_38_job_time_user_2 = dbv0_0_38_job_time_user_convertToJSON(dbv0_0_38_job_time_user_2);
	printf("repeating dbv0_0_38_job_time_user:\n%s\n", cJSON_Print(jsondbv0_0_38_job_time_user_2));
}

int main() {
  test_dbv0_0_38_job_time_user(1);
  test_dbv0_0_38_job_time_user(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_38_job_time_user_MAIN
#endif // dbv0_0_38_job_time_user_TEST
