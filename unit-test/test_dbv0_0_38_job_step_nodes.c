#ifndef dbv0_0_38_job_step_nodes_TEST
#define dbv0_0_38_job_step_nodes_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_38_job_step_nodes_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_38_job_step_nodes.h"
dbv0_0_38_job_step_nodes_t* instantiate_dbv0_0_38_job_step_nodes(int include_optional);



dbv0_0_38_job_step_nodes_t* instantiate_dbv0_0_38_job_step_nodes(int include_optional) {
  dbv0_0_38_job_step_nodes_t* dbv0_0_38_job_step_nodes = NULL;
  if (include_optional) {
    dbv0_0_38_job_step_nodes = dbv0_0_38_job_step_nodes_create(
      56,
      "0"
    );
  } else {
    dbv0_0_38_job_step_nodes = dbv0_0_38_job_step_nodes_create(
      56,
      "0"
    );
  }

  return dbv0_0_38_job_step_nodes;
}


#ifdef dbv0_0_38_job_step_nodes_MAIN

void test_dbv0_0_38_job_step_nodes(int include_optional) {
    dbv0_0_38_job_step_nodes_t* dbv0_0_38_job_step_nodes_1 = instantiate_dbv0_0_38_job_step_nodes(include_optional);

	cJSON* jsondbv0_0_38_job_step_nodes_1 = dbv0_0_38_job_step_nodes_convertToJSON(dbv0_0_38_job_step_nodes_1);
	printf("dbv0_0_38_job_step_nodes :\n%s\n", cJSON_Print(jsondbv0_0_38_job_step_nodes_1));
	dbv0_0_38_job_step_nodes_t* dbv0_0_38_job_step_nodes_2 = dbv0_0_38_job_step_nodes_parseFromJSON(jsondbv0_0_38_job_step_nodes_1);
	cJSON* jsondbv0_0_38_job_step_nodes_2 = dbv0_0_38_job_step_nodes_convertToJSON(dbv0_0_38_job_step_nodes_2);
	printf("repeating dbv0_0_38_job_step_nodes:\n%s\n", cJSON_Print(jsondbv0_0_38_job_step_nodes_2));
}

int main() {
  test_dbv0_0_38_job_step_nodes(1);
  test_dbv0_0_38_job_step_nodes(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_38_job_step_nodes_MAIN
#endif // dbv0_0_38_job_step_nodes_TEST
