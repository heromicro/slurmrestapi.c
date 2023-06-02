#ifndef v0_0_37_reservation_purge_completed_TEST
#define v0_0_37_reservation_purge_completed_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_37_reservation_purge_completed_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_37_reservation_purge_completed.h"
v0_0_37_reservation_purge_completed_t* instantiate_v0_0_37_reservation_purge_completed(int include_optional);



v0_0_37_reservation_purge_completed_t* instantiate_v0_0_37_reservation_purge_completed(int include_optional) {
  v0_0_37_reservation_purge_completed_t* v0_0_37_reservation_purge_completed = NULL;
  if (include_optional) {
    v0_0_37_reservation_purge_completed = v0_0_37_reservation_purge_completed_create(
      56
    );
  } else {
    v0_0_37_reservation_purge_completed = v0_0_37_reservation_purge_completed_create(
      56
    );
  }

  return v0_0_37_reservation_purge_completed;
}


#ifdef v0_0_37_reservation_purge_completed_MAIN

void test_v0_0_37_reservation_purge_completed(int include_optional) {
    v0_0_37_reservation_purge_completed_t* v0_0_37_reservation_purge_completed_1 = instantiate_v0_0_37_reservation_purge_completed(include_optional);

	cJSON* jsonv0_0_37_reservation_purge_completed_1 = v0_0_37_reservation_purge_completed_convertToJSON(v0_0_37_reservation_purge_completed_1);
	printf("v0_0_37_reservation_purge_completed :\n%s\n", cJSON_Print(jsonv0_0_37_reservation_purge_completed_1));
	v0_0_37_reservation_purge_completed_t* v0_0_37_reservation_purge_completed_2 = v0_0_37_reservation_purge_completed_parseFromJSON(jsonv0_0_37_reservation_purge_completed_1);
	cJSON* jsonv0_0_37_reservation_purge_completed_2 = v0_0_37_reservation_purge_completed_convertToJSON(v0_0_37_reservation_purge_completed_2);
	printf("repeating v0_0_37_reservation_purge_completed:\n%s\n", cJSON_Print(jsonv0_0_37_reservation_purge_completed_2));
}

int main() {
  test_v0_0_37_reservation_purge_completed(1);
  test_v0_0_37_reservation_purge_completed(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_37_reservation_purge_completed_MAIN
#endif // v0_0_37_reservation_purge_completed_TEST
