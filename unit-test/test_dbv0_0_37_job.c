#ifndef dbv0_0_37_job_TEST
#define dbv0_0_37_job_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_37_job_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_37_job.h"
dbv0_0_37_job_t* instantiate_dbv0_0_37_job(int include_optional);

#include "test_dbv0_0_37_job_comment.c"
#include "test_dbv0_0_37_job_array.c"
#include "test_dbv0_0_37_job_time.c"
#include "test_dbv0_0_37_association_short_info.c"
#include "test_dbv0_0_37_job_exit_code.c"
#include "test_dbv0_0_37_job_exit_code.c"
#include "test_dbv0_0_37_job_het.c"
#include "test_dbv0_0_37_job_mcs.c"
#include "test_dbv0_0_37_job_required.c"
#include "test_dbv0_0_37_job_reservation.c"
#include "test_dbv0_0_37_job_state.c"
#include "test_dbv0_0_37_job_tres.c"
#include "test_dbv0_0_37_job_wckey.c"


dbv0_0_37_job_t* instantiate_dbv0_0_37_job(int include_optional) {
  dbv0_0_37_job_t* dbv0_0_37_job = NULL;
  if (include_optional) {
    dbv0_0_37_job = dbv0_0_37_job_create(
      "0",
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_job_comment(0),
      "0",
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_job_array(0),
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_job_time(0),
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_association_short_info(0),
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_job_exit_code(0),
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_job_exit_code(0),
      list_createList(),
      "0",
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_job_het(0),
      56,
      "0",
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_job_mcs(0),
      "0",
      "0",
      56,
      "0",
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_job_required(0),
      "0",
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_job_reservation(0),
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_job_state(0),
      list_createList(),
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_job_tres(0),
      "0",
       // false, not to have infinite recursion
      instantiate_dbv0_0_37_job_wckey(0),
      "0"
    );
  } else {
    dbv0_0_37_job = dbv0_0_37_job_create(
      "0",
      NULL,
      "0",
      NULL,
      NULL,
      NULL,
      "0",
      "0",
      NULL,
      NULL,
      list_createList(),
      "0",
      NULL,
      56,
      "0",
      NULL,
      "0",
      "0",
      56,
      "0",
      NULL,
      "0",
      NULL,
      NULL,
      list_createList(),
      NULL,
      "0",
      NULL,
      "0"
    );
  }

  return dbv0_0_37_job;
}


#ifdef dbv0_0_37_job_MAIN

void test_dbv0_0_37_job(int include_optional) {
    dbv0_0_37_job_t* dbv0_0_37_job_1 = instantiate_dbv0_0_37_job(include_optional);

	cJSON* jsondbv0_0_37_job_1 = dbv0_0_37_job_convertToJSON(dbv0_0_37_job_1);
	printf("dbv0_0_37_job :\n%s\n", cJSON_Print(jsondbv0_0_37_job_1));
	dbv0_0_37_job_t* dbv0_0_37_job_2 = dbv0_0_37_job_parseFromJSON(jsondbv0_0_37_job_1);
	cJSON* jsondbv0_0_37_job_2 = dbv0_0_37_job_convertToJSON(dbv0_0_37_job_2);
	printf("repeating dbv0_0_37_job:\n%s\n", cJSON_Print(jsondbv0_0_37_job_2));
}

int main() {
  test_dbv0_0_37_job(1);
  test_dbv0_0_37_job(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_37_job_MAIN
#endif // dbv0_0_37_job_TEST
