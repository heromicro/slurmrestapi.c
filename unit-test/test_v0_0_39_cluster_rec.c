#ifndef v0_0_39_cluster_rec_TEST
#define v0_0_39_cluster_rec_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_cluster_rec_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_cluster_rec.h"
v0_0_39_cluster_rec_t* instantiate_v0_0_39_cluster_rec(int include_optional);

#include "test_v0_0_39_cluster_rec_controller.c"
#include "test_v0_0_39_cluster_rec_associations.c"


v0_0_39_cluster_rec_t* instantiate_v0_0_39_cluster_rec(int include_optional) {
  v0_0_39_cluster_rec_t* v0_0_39_cluster_rec = NULL;
  if (include_optional) {
    v0_0_39_cluster_rec = v0_0_39_cluster_rec_create(
       // false, not to have infinite recursion
      instantiate_v0_0_39_cluster_rec_controller(0),
      list_createList(),
      "0",
      "0",
      "0",
       // false, not to have infinite recursion
      instantiate_v0_0_39_cluster_rec_associations(0),
      56,
      list_createList()
    );
  } else {
    v0_0_39_cluster_rec = v0_0_39_cluster_rec_create(
      NULL,
      list_createList(),
      "0",
      "0",
      "0",
      NULL,
      56,
      list_createList()
    );
  }

  return v0_0_39_cluster_rec;
}


#ifdef v0_0_39_cluster_rec_MAIN

void test_v0_0_39_cluster_rec(int include_optional) {
    v0_0_39_cluster_rec_t* v0_0_39_cluster_rec_1 = instantiate_v0_0_39_cluster_rec(include_optional);

	cJSON* jsonv0_0_39_cluster_rec_1 = v0_0_39_cluster_rec_convertToJSON(v0_0_39_cluster_rec_1);
	printf("v0_0_39_cluster_rec :\n%s\n", cJSON_Print(jsonv0_0_39_cluster_rec_1));
	v0_0_39_cluster_rec_t* v0_0_39_cluster_rec_2 = v0_0_39_cluster_rec_parseFromJSON(jsonv0_0_39_cluster_rec_1);
	cJSON* jsonv0_0_39_cluster_rec_2 = v0_0_39_cluster_rec_convertToJSON(v0_0_39_cluster_rec_2);
	printf("repeating v0_0_39_cluster_rec:\n%s\n", cJSON_Print(jsonv0_0_39_cluster_rec_2));
}

int main() {
  test_v0_0_39_cluster_rec(1);
  test_v0_0_39_cluster_rec(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_cluster_rec_MAIN
#endif // v0_0_39_cluster_rec_TEST
