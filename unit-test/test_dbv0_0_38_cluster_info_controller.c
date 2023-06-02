#ifndef dbv0_0_38_cluster_info_controller_TEST
#define dbv0_0_38_cluster_info_controller_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_38_cluster_info_controller_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_38_cluster_info_controller.h"
dbv0_0_38_cluster_info_controller_t* instantiate_dbv0_0_38_cluster_info_controller(int include_optional);



dbv0_0_38_cluster_info_controller_t* instantiate_dbv0_0_38_cluster_info_controller(int include_optional) {
  dbv0_0_38_cluster_info_controller_t* dbv0_0_38_cluster_info_controller = NULL;
  if (include_optional) {
    dbv0_0_38_cluster_info_controller = dbv0_0_38_cluster_info_controller_create(
      "0",
      56
    );
  } else {
    dbv0_0_38_cluster_info_controller = dbv0_0_38_cluster_info_controller_create(
      "0",
      56
    );
  }

  return dbv0_0_38_cluster_info_controller;
}


#ifdef dbv0_0_38_cluster_info_controller_MAIN

void test_dbv0_0_38_cluster_info_controller(int include_optional) {
    dbv0_0_38_cluster_info_controller_t* dbv0_0_38_cluster_info_controller_1 = instantiate_dbv0_0_38_cluster_info_controller(include_optional);

	cJSON* jsondbv0_0_38_cluster_info_controller_1 = dbv0_0_38_cluster_info_controller_convertToJSON(dbv0_0_38_cluster_info_controller_1);
	printf("dbv0_0_38_cluster_info_controller :\n%s\n", cJSON_Print(jsondbv0_0_38_cluster_info_controller_1));
	dbv0_0_38_cluster_info_controller_t* dbv0_0_38_cluster_info_controller_2 = dbv0_0_38_cluster_info_controller_parseFromJSON(jsondbv0_0_38_cluster_info_controller_1);
	cJSON* jsondbv0_0_38_cluster_info_controller_2 = dbv0_0_38_cluster_info_controller_convertToJSON(dbv0_0_38_cluster_info_controller_2);
	printf("repeating dbv0_0_38_cluster_info_controller:\n%s\n", cJSON_Print(jsondbv0_0_38_cluster_info_controller_2));
}

int main() {
  test_dbv0_0_38_cluster_info_controller(1);
  test_dbv0_0_38_cluster_info_controller(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_38_cluster_info_controller_MAIN
#endif // dbv0_0_38_cluster_info_controller_TEST
