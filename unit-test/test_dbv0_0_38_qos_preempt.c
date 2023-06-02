#ifndef dbv0_0_38_qos_preempt_TEST
#define dbv0_0_38_qos_preempt_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_38_qos_preempt_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_38_qos_preempt.h"
dbv0_0_38_qos_preempt_t* instantiate_dbv0_0_38_qos_preempt(int include_optional);



dbv0_0_38_qos_preempt_t* instantiate_dbv0_0_38_qos_preempt(int include_optional) {
  dbv0_0_38_qos_preempt_t* dbv0_0_38_qos_preempt = NULL;
  if (include_optional) {
    dbv0_0_38_qos_preempt = dbv0_0_38_qos_preempt_create(
      list_createList(),
      list_createList(),
      56
    );
  } else {
    dbv0_0_38_qos_preempt = dbv0_0_38_qos_preempt_create(
      list_createList(),
      list_createList(),
      56
    );
  }

  return dbv0_0_38_qos_preempt;
}


#ifdef dbv0_0_38_qos_preempt_MAIN

void test_dbv0_0_38_qos_preempt(int include_optional) {
    dbv0_0_38_qos_preempt_t* dbv0_0_38_qos_preempt_1 = instantiate_dbv0_0_38_qos_preempt(include_optional);

	cJSON* jsondbv0_0_38_qos_preempt_1 = dbv0_0_38_qos_preempt_convertToJSON(dbv0_0_38_qos_preempt_1);
	printf("dbv0_0_38_qos_preempt :\n%s\n", cJSON_Print(jsondbv0_0_38_qos_preempt_1));
	dbv0_0_38_qos_preempt_t* dbv0_0_38_qos_preempt_2 = dbv0_0_38_qos_preempt_parseFromJSON(jsondbv0_0_38_qos_preempt_1);
	cJSON* jsondbv0_0_38_qos_preempt_2 = dbv0_0_38_qos_preempt_convertToJSON(dbv0_0_38_qos_preempt_2);
	printf("repeating dbv0_0_38_qos_preempt:\n%s\n", cJSON_Print(jsondbv0_0_38_qos_preempt_2));
}

int main() {
  test_dbv0_0_38_qos_preempt(1);
  test_dbv0_0_38_qos_preempt(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_38_qos_preempt_MAIN
#endif // dbv0_0_38_qos_preempt_TEST
