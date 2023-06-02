#ifndef dbv0_0_38_meta_TEST
#define dbv0_0_38_meta_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_38_meta_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_38_meta.h"
dbv0_0_38_meta_t* instantiate_dbv0_0_38_meta(int include_optional);

#include "test_v0_0_38_meta_plugin.c"
#include "test_v0_0_38_meta_slurm.c"


dbv0_0_38_meta_t* instantiate_dbv0_0_38_meta(int include_optional) {
  dbv0_0_38_meta_t* dbv0_0_38_meta = NULL;
  if (include_optional) {
    dbv0_0_38_meta = dbv0_0_38_meta_create(
       // false, not to have infinite recursion
      instantiate_v0_0_38_meta_plugin(0),
       // false, not to have infinite recursion
      instantiate_v0_0_38_meta_slurm(0)
    );
  } else {
    dbv0_0_38_meta = dbv0_0_38_meta_create(
      NULL,
      NULL
    );
  }

  return dbv0_0_38_meta;
}


#ifdef dbv0_0_38_meta_MAIN

void test_dbv0_0_38_meta(int include_optional) {
    dbv0_0_38_meta_t* dbv0_0_38_meta_1 = instantiate_dbv0_0_38_meta(include_optional);

	cJSON* jsondbv0_0_38_meta_1 = dbv0_0_38_meta_convertToJSON(dbv0_0_38_meta_1);
	printf("dbv0_0_38_meta :\n%s\n", cJSON_Print(jsondbv0_0_38_meta_1));
	dbv0_0_38_meta_t* dbv0_0_38_meta_2 = dbv0_0_38_meta_parseFromJSON(jsondbv0_0_38_meta_1);
	cJSON* jsondbv0_0_38_meta_2 = dbv0_0_38_meta_convertToJSON(dbv0_0_38_meta_2);
	printf("repeating dbv0_0_38_meta:\n%s\n", cJSON_Print(jsondbv0_0_38_meta_2));
}

int main() {
  test_dbv0_0_38_meta(1);
  test_dbv0_0_38_meta(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_38_meta_MAIN
#endif // dbv0_0_38_meta_TEST
