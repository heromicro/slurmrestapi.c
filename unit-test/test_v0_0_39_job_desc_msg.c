#ifndef v0_0_39_job_desc_msg_TEST
#define v0_0_39_job_desc_msg_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_job_desc_msg_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_job_desc_msg.h"
v0_0_39_job_desc_msg_t* instantiate_v0_0_39_job_desc_msg(int include_optional);

#include "test_v0_0_39_cron_entry.c"
#include "test_v0_0_39_uint32_no_val.c"
#include "test_v0_0_39_uint32_no_val.c"
#include "test_v0_0_39_uint16_no_val.c"
#include "test_v0_0_39_uint64_no_val.c"
#include "test_v0_0_39_uint64_no_val.c"
#include "test_v0_0_39_uint32_no_val.c"


v0_0_39_job_desc_msg_t* instantiate_v0_0_39_job_desc_msg(int include_optional) {
  v0_0_39_job_desc_msg_t* v0_0_39_job_desc_msg = NULL;
  if (include_optional) {
    v0_0_39_job_desc_msg = v0_0_39_job_desc_msg_create(
      "0",
      "0",
      "0",
      "0",
      56,
      list_createList(),
      "0",
      "0",
      56,
      list_createList(),
      "0",
      "0",
      "0",
      "0",
      1,
      "0",
      "0",
      56,
      56,
      "0",
      list_createList(),
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_v0_0_39_cron_entry(0),
      56,
      56,
      "0",
      56,
      list_createList(),
      list_createList(),
      "0",
      "0",
      "0",
      56,
      1,
      56,
      1,
      "0",
      list_createList(),
      "0",
      "0",
      "0",
      list_createList(),
      "0",
      "0",
      "0",
      56,
      56,
      list_createList(),
      56,
      1,
      "0",
      56,
      list_createList(),
      "0",
      56,
      list_createList(),
      "0",
      1,
      list_createList(),
      1,
      "0",
      "0",
      list_createList(),
      list_createList(),
      56,
      list_createList(),
      "0",
       // false, not to have infinite recursion
      instantiate_v0_0_39_uint32_no_val(0),
       // false, not to have infinite recursion
      instantiate_v0_0_39_uint32_no_val(0),
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      list_createList(),
      "0",
       // false, not to have infinite recursion
      instantiate_v0_0_39_uint16_no_val(0),
      "0",
      56,
      56,
      56,
      "0",
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
       // false, not to have infinite recursion
      instantiate_v0_0_39_uint64_no_val(0),
       // false, not to have infinite recursion
      instantiate_v0_0_39_uint64_no_val(0),
      56,
      "0",
       // false, not to have infinite recursion
      instantiate_v0_0_39_uint32_no_val(0),
      "0",
      "0",
      "0",
      56,
      "0",
      list_createList(),
      "0",
      "0",
      56
    );
  } else {
    v0_0_39_job_desc_msg = v0_0_39_job_desc_msg_create(
      "0",
      "0",
      "0",
      "0",
      56,
      list_createList(),
      "0",
      "0",
      56,
      list_createList(),
      "0",
      "0",
      "0",
      "0",
      1,
      "0",
      "0",
      56,
      56,
      "0",
      list_createList(),
      "0",
      "0",
      NULL,
      56,
      56,
      "0",
      56,
      list_createList(),
      list_createList(),
      "0",
      "0",
      "0",
      56,
      1,
      56,
      1,
      "0",
      list_createList(),
      "0",
      "0",
      "0",
      list_createList(),
      "0",
      "0",
      "0",
      56,
      56,
      list_createList(),
      56,
      1,
      "0",
      56,
      list_createList(),
      "0",
      56,
      list_createList(),
      "0",
      1,
      list_createList(),
      1,
      "0",
      "0",
      list_createList(),
      list_createList(),
      56,
      list_createList(),
      "0",
      NULL,
      NULL,
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      "0",
      1,
      list_createList(),
      "0",
      NULL,
      "0",
      56,
      56,
      56,
      "0",
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      56,
      NULL,
      NULL,
      56,
      "0",
      NULL,
      "0",
      "0",
      "0",
      56,
      "0",
      list_createList(),
      "0",
      "0",
      56
    );
  }

  return v0_0_39_job_desc_msg;
}


#ifdef v0_0_39_job_desc_msg_MAIN

void test_v0_0_39_job_desc_msg(int include_optional) {
    v0_0_39_job_desc_msg_t* v0_0_39_job_desc_msg_1 = instantiate_v0_0_39_job_desc_msg(include_optional);

	cJSON* jsonv0_0_39_job_desc_msg_1 = v0_0_39_job_desc_msg_convertToJSON(v0_0_39_job_desc_msg_1);
	printf("v0_0_39_job_desc_msg :\n%s\n", cJSON_Print(jsonv0_0_39_job_desc_msg_1));
	v0_0_39_job_desc_msg_t* v0_0_39_job_desc_msg_2 = v0_0_39_job_desc_msg_parseFromJSON(jsonv0_0_39_job_desc_msg_1);
	cJSON* jsonv0_0_39_job_desc_msg_2 = v0_0_39_job_desc_msg_convertToJSON(v0_0_39_job_desc_msg_2);
	printf("repeating v0_0_39_job_desc_msg:\n%s\n", cJSON_Print(jsonv0_0_39_job_desc_msg_2));
}

int main() {
  test_v0_0_39_job_desc_msg(1);
  test_v0_0_39_job_desc_msg(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_job_desc_msg_MAIN
#endif // v0_0_39_job_desc_msg_TEST
