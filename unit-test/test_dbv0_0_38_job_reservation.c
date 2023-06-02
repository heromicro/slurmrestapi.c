#ifndef dbv0_0_38_job_reservation_TEST
#define dbv0_0_38_job_reservation_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_38_job_reservation_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_38_job_reservation.h"
dbv0_0_38_job_reservation_t* instantiate_dbv0_0_38_job_reservation(int include_optional);



dbv0_0_38_job_reservation_t* instantiate_dbv0_0_38_job_reservation(int include_optional) {
  dbv0_0_38_job_reservation_t* dbv0_0_38_job_reservation = NULL;
  if (include_optional) {
    dbv0_0_38_job_reservation = dbv0_0_38_job_reservation_create(
      56,
      56
    );
  } else {
    dbv0_0_38_job_reservation = dbv0_0_38_job_reservation_create(
      56,
      56
    );
  }

  return dbv0_0_38_job_reservation;
}


#ifdef dbv0_0_38_job_reservation_MAIN

void test_dbv0_0_38_job_reservation(int include_optional) {
    dbv0_0_38_job_reservation_t* dbv0_0_38_job_reservation_1 = instantiate_dbv0_0_38_job_reservation(include_optional);

	cJSON* jsondbv0_0_38_job_reservation_1 = dbv0_0_38_job_reservation_convertToJSON(dbv0_0_38_job_reservation_1);
	printf("dbv0_0_38_job_reservation :\n%s\n", cJSON_Print(jsondbv0_0_38_job_reservation_1));
	dbv0_0_38_job_reservation_t* dbv0_0_38_job_reservation_2 = dbv0_0_38_job_reservation_parseFromJSON(jsondbv0_0_38_job_reservation_1);
	cJSON* jsondbv0_0_38_job_reservation_2 = dbv0_0_38_job_reservation_convertToJSON(dbv0_0_38_job_reservation_2);
	printf("repeating dbv0_0_38_job_reservation:\n%s\n", cJSON_Print(jsondbv0_0_38_job_reservation_2));
}

int main() {
  test_dbv0_0_38_job_reservation(1);
  test_dbv0_0_38_job_reservation(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_38_job_reservation_MAIN
#endif // dbv0_0_38_job_reservation_TEST
