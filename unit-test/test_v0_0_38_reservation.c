#ifndef v0_0_38_reservation_TEST
#define v0_0_38_reservation_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_38_reservation_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_38_reservation.h"
v0_0_38_reservation_t* instantiate_v0_0_38_reservation(int include_optional);

#include "test_v0_0_38_reservation_purge_completed.c"


v0_0_38_reservation_t* instantiate_v0_0_38_reservation(int include_optional) {
  v0_0_38_reservation_t* v0_0_38_reservation = NULL;
  if (include_optional) {
    v0_0_38_reservation = v0_0_38_reservation_create(
      "0",
      "0",
      56,
      56,
      56,
      "0",
      list_createList(),
      "0",
      "0",
      56,
      "0",
      56,
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_v0_0_38_reservation_purge_completed(0),
      56,
      56,
      "0",
      "0"
    );
  } else {
    v0_0_38_reservation = v0_0_38_reservation_create(
      "0",
      "0",
      56,
      56,
      56,
      "0",
      list_createList(),
      "0",
      "0",
      56,
      "0",
      56,
      "0",
      "0",
      NULL,
      56,
      56,
      "0",
      "0"
    );
  }

  return v0_0_38_reservation;
}


#ifdef v0_0_38_reservation_MAIN

void test_v0_0_38_reservation(int include_optional) {
    v0_0_38_reservation_t* v0_0_38_reservation_1 = instantiate_v0_0_38_reservation(include_optional);

	cJSON* jsonv0_0_38_reservation_1 = v0_0_38_reservation_convertToJSON(v0_0_38_reservation_1);
	printf("v0_0_38_reservation :\n%s\n", cJSON_Print(jsonv0_0_38_reservation_1));
	v0_0_38_reservation_t* v0_0_38_reservation_2 = v0_0_38_reservation_parseFromJSON(jsonv0_0_38_reservation_1);
	cJSON* jsonv0_0_38_reservation_2 = v0_0_38_reservation_convertToJSON(v0_0_38_reservation_2);
	printf("repeating v0_0_38_reservation:\n%s\n", cJSON_Print(jsonv0_0_38_reservation_2));
}

int main() {
  test_v0_0_38_reservation(1);
  test_v0_0_38_reservation(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_38_reservation_MAIN
#endif // v0_0_38_reservation_TEST
