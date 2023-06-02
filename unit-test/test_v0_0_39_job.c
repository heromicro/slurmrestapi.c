#ifndef v0_0_39_job_TEST
#define v0_0_39_job_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_job_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_job.h"
v0_0_39_job_t* instantiate_v0_0_39_job(int include_optional);

#include "test_v0_0_39_job_comment.c"
#include "test_v0_0_39_job_array.c"
#include "test_v0_0_39_assoc_short.c"
#include "test_v0_0_39_job_exit_code.c"
#include "test_v0_0_39_job_time.c"
#include "test_v0_0_39_job_exit_code.c"
#include "test_v0_0_39_job_het.c"
#include "test_v0_0_39_job_mcs.c"
#include "test_v0_0_39_uint32_no_val.c"
#include "test_v0_0_39_job_required.c"
#include "test_v0_0_39_job_reservation.c"
#include "test_v0_0_39_job_state.c"
#include "test_v0_0_39_job_tres.c"
#include "test_v0_0_39_wckey_tag.c"


v0_0_39_job_t* instantiate_v0_0_39_job(int include_optional) {
  v0_0_39_job_t* v0_0_39_job = NULL;
  if (include_optional) {
    v0_0_39_job = v0_0_39_job_create(
      "0",
       // false, not to have infinite recursion
      instantiate_v0_0_39_job_comment(0),
      56,
       // false, not to have infinite recursion
      instantiate_v0_0_39_job_array(0),
       // false, not to have infinite recursion
      instantiate_v0_0_39_assoc_short(0),
      "0",
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_v0_0_39_job_exit_code(0),
       // false, not to have infinite recursion
      instantiate_v0_0_39_job_time(0),
       // false, not to have infinite recursion
      instantiate_v0_0_39_job_exit_code(0),
      "0",
      "0",
      list_createList(),
      "0",
       // false, not to have infinite recursion
      instantiate_v0_0_39_job_het(0),
      56,
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_v0_0_39_job_mcs(0),
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_v0_0_39_uint32_no_val(0),
      "0",
       // false, not to have infinite recursion
      instantiate_v0_0_39_job_required(0),
      "0",
       // false, not to have infinite recursion
      instantiate_v0_0_39_job_reservation(0),
      "0",
       // false, not to have infinite recursion
      instantiate_v0_0_39_job_state(0),
      list_createList(),
      "0",
       // false, not to have infinite recursion
      instantiate_v0_0_39_job_tres(0),
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_v0_0_39_wckey_tag(0),
      "0"
    );
  } else {
    v0_0_39_job = v0_0_39_job_create(
      "0",
      NULL,
      56,
      NULL,
      NULL,
      "0",
      "0",
      "0",
      "0",
      NULL,
      NULL,
      NULL,
      "0",
      "0",
      list_createList(),
      "0",
      NULL,
      56,
      "0",
      "0",
      NULL,
      "0",
      "0",
      NULL,
      "0",
      NULL,
      "0",
      NULL,
      "0",
      NULL,
      list_createList(),
      "0",
      NULL,
      "0",
      "0",
      NULL,
      "0"
    );
  }

  return v0_0_39_job;
}


#ifdef v0_0_39_job_MAIN

void test_v0_0_39_job(int include_optional) {
    v0_0_39_job_t* v0_0_39_job_1 = instantiate_v0_0_39_job(include_optional);

	cJSON* jsonv0_0_39_job_1 = v0_0_39_job_convertToJSON(v0_0_39_job_1);
	printf("v0_0_39_job :\n%s\n", cJSON_Print(jsonv0_0_39_job_1));
	v0_0_39_job_t* v0_0_39_job_2 = v0_0_39_job_parseFromJSON(jsonv0_0_39_job_1);
	cJSON* jsonv0_0_39_job_2 = v0_0_39_job_convertToJSON(v0_0_39_job_2);
	printf("repeating v0_0_39_job:\n%s\n", cJSON_Print(jsonv0_0_39_job_2));
}

int main() {
  test_v0_0_39_job(1);
  test_v0_0_39_job(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_job_MAIN
#endif // v0_0_39_job_TEST
