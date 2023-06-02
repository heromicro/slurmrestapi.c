#ifndef v0_0_39_job_reservation_TEST
#define v0_0_39_job_reservation_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_job_reservation_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_job_reservation.h"
v0_0_39_job_reservation_t* instantiate_v0_0_39_job_reservation(int include_optional);



v0_0_39_job_reservation_t* instantiate_v0_0_39_job_reservation(int include_optional) {
  v0_0_39_job_reservation_t* v0_0_39_job_reservation = NULL;
  if (include_optional) {
    v0_0_39_job_reservation = v0_0_39_job_reservation_create(
      "0"
    );
  } else {
    v0_0_39_job_reservation = v0_0_39_job_reservation_create(
      "0"
    );
  }

  return v0_0_39_job_reservation;
}


#ifdef v0_0_39_job_reservation_MAIN

void test_v0_0_39_job_reservation(int include_optional) {
    v0_0_39_job_reservation_t* v0_0_39_job_reservation_1 = instantiate_v0_0_39_job_reservation(include_optional);

	cJSON* jsonv0_0_39_job_reservation_1 = v0_0_39_job_reservation_convertToJSON(v0_0_39_job_reservation_1);
	printf("v0_0_39_job_reservation :\n%s\n", cJSON_Print(jsonv0_0_39_job_reservation_1));
	v0_0_39_job_reservation_t* v0_0_39_job_reservation_2 = v0_0_39_job_reservation_parseFromJSON(jsonv0_0_39_job_reservation_1);
	cJSON* jsonv0_0_39_job_reservation_2 = v0_0_39_job_reservation_convertToJSON(v0_0_39_job_reservation_2);
	printf("repeating v0_0_39_job_reservation:\n%s\n", cJSON_Print(jsonv0_0_39_job_reservation_2));
}

int main() {
  test_v0_0_39_job_reservation(1);
  test_v0_0_39_job_reservation(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_job_reservation_MAIN
#endif // v0_0_39_job_reservation_TEST
