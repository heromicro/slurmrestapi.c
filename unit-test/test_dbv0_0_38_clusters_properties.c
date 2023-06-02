#ifndef dbv0_0_38_clusters_properties_TEST
#define dbv0_0_38_clusters_properties_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_38_clusters_properties_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_38_clusters_properties.h"
dbv0_0_38_clusters_properties_t* instantiate_dbv0_0_38_clusters_properties(int include_optional);

#include "test_dbv0_0_38_cluster_info.c"


dbv0_0_38_clusters_properties_t* instantiate_dbv0_0_38_clusters_properties(int include_optional) {
  dbv0_0_38_clusters_properties_t* dbv0_0_38_clusters_properties = NULL;
  if (include_optional) {
    dbv0_0_38_clusters_properties = dbv0_0_38_clusters_properties_create(
       // false, not to have infinite recursion
      instantiate_dbv0_0_38_cluster_info(0)
    );
  } else {
    dbv0_0_38_clusters_properties = dbv0_0_38_clusters_properties_create(
      NULL
    );
  }

  return dbv0_0_38_clusters_properties;
}


#ifdef dbv0_0_38_clusters_properties_MAIN

void test_dbv0_0_38_clusters_properties(int include_optional) {
    dbv0_0_38_clusters_properties_t* dbv0_0_38_clusters_properties_1 = instantiate_dbv0_0_38_clusters_properties(include_optional);

	cJSON* jsondbv0_0_38_clusters_properties_1 = dbv0_0_38_clusters_properties_convertToJSON(dbv0_0_38_clusters_properties_1);
	printf("dbv0_0_38_clusters_properties :\n%s\n", cJSON_Print(jsondbv0_0_38_clusters_properties_1));
	dbv0_0_38_clusters_properties_t* dbv0_0_38_clusters_properties_2 = dbv0_0_38_clusters_properties_parseFromJSON(jsondbv0_0_38_clusters_properties_1);
	cJSON* jsondbv0_0_38_clusters_properties_2 = dbv0_0_38_clusters_properties_convertToJSON(dbv0_0_38_clusters_properties_2);
	printf("repeating dbv0_0_38_clusters_properties:\n%s\n", cJSON_Print(jsondbv0_0_38_clusters_properties_2));
}

int main() {
  test_dbv0_0_38_clusters_properties(1);
  test_dbv0_0_38_clusters_properties(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_38_clusters_properties_MAIN
#endif // dbv0_0_38_clusters_properties_TEST
