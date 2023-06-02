#ifndef dbv0_0_37_job_wckey_TEST
#define dbv0_0_37_job_wckey_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_37_job_wckey_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_37_job_wckey.h"
dbv0_0_37_job_wckey_t* instantiate_dbv0_0_37_job_wckey(int include_optional);



dbv0_0_37_job_wckey_t* instantiate_dbv0_0_37_job_wckey(int include_optional) {
  dbv0_0_37_job_wckey_t* dbv0_0_37_job_wckey = NULL;
  if (include_optional) {
    dbv0_0_37_job_wckey = dbv0_0_37_job_wckey_create(
      "0",
      list_createList()
    );
  } else {
    dbv0_0_37_job_wckey = dbv0_0_37_job_wckey_create(
      "0",
      list_createList()
    );
  }

  return dbv0_0_37_job_wckey;
}


#ifdef dbv0_0_37_job_wckey_MAIN

void test_dbv0_0_37_job_wckey(int include_optional) {
    dbv0_0_37_job_wckey_t* dbv0_0_37_job_wckey_1 = instantiate_dbv0_0_37_job_wckey(include_optional);

	cJSON* jsondbv0_0_37_job_wckey_1 = dbv0_0_37_job_wckey_convertToJSON(dbv0_0_37_job_wckey_1);
	printf("dbv0_0_37_job_wckey :\n%s\n", cJSON_Print(jsondbv0_0_37_job_wckey_1));
	dbv0_0_37_job_wckey_t* dbv0_0_37_job_wckey_2 = dbv0_0_37_job_wckey_parseFromJSON(jsondbv0_0_37_job_wckey_1);
	cJSON* jsondbv0_0_37_job_wckey_2 = dbv0_0_37_job_wckey_convertToJSON(dbv0_0_37_job_wckey_2);
	printf("repeating dbv0_0_37_job_wckey:\n%s\n", cJSON_Print(jsondbv0_0_37_job_wckey_2));
}

int main() {
  test_dbv0_0_37_job_wckey(1);
  test_dbv0_0_37_job_wckey(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_37_job_wckey_MAIN
#endif // dbv0_0_37_job_wckey_TEST
