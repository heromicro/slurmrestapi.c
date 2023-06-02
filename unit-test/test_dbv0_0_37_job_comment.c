#ifndef dbv0_0_37_job_comment_TEST
#define dbv0_0_37_job_comment_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_37_job_comment_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_37_job_comment.h"
dbv0_0_37_job_comment_t* instantiate_dbv0_0_37_job_comment(int include_optional);



dbv0_0_37_job_comment_t* instantiate_dbv0_0_37_job_comment(int include_optional) {
  dbv0_0_37_job_comment_t* dbv0_0_37_job_comment = NULL;
  if (include_optional) {
    dbv0_0_37_job_comment = dbv0_0_37_job_comment_create(
      "0",
      "0",
      "0"
    );
  } else {
    dbv0_0_37_job_comment = dbv0_0_37_job_comment_create(
      "0",
      "0",
      "0"
    );
  }

  return dbv0_0_37_job_comment;
}


#ifdef dbv0_0_37_job_comment_MAIN

void test_dbv0_0_37_job_comment(int include_optional) {
    dbv0_0_37_job_comment_t* dbv0_0_37_job_comment_1 = instantiate_dbv0_0_37_job_comment(include_optional);

	cJSON* jsondbv0_0_37_job_comment_1 = dbv0_0_37_job_comment_convertToJSON(dbv0_0_37_job_comment_1);
	printf("dbv0_0_37_job_comment :\n%s\n", cJSON_Print(jsondbv0_0_37_job_comment_1));
	dbv0_0_37_job_comment_t* dbv0_0_37_job_comment_2 = dbv0_0_37_job_comment_parseFromJSON(jsondbv0_0_37_job_comment_1);
	cJSON* jsondbv0_0_37_job_comment_2 = dbv0_0_37_job_comment_convertToJSON(dbv0_0_37_job_comment_2);
	printf("repeating dbv0_0_37_job_comment:\n%s\n", cJSON_Print(jsondbv0_0_37_job_comment_2));
}

int main() {
  test_dbv0_0_37_job_comment(1);
  test_dbv0_0_37_job_comment(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_37_job_comment_MAIN
#endif // dbv0_0_37_job_comment_TEST
