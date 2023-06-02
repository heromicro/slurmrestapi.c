#ifndef v0_0_39_cluster_rec_associations_TEST
#define v0_0_39_cluster_rec_associations_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_cluster_rec_associations_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_cluster_rec_associations.h"
v0_0_39_cluster_rec_associations_t* instantiate_v0_0_39_cluster_rec_associations(int include_optional);

#include "test_v0_0_39_assoc_short.c"


v0_0_39_cluster_rec_associations_t* instantiate_v0_0_39_cluster_rec_associations(int include_optional) {
  v0_0_39_cluster_rec_associations_t* v0_0_39_cluster_rec_associations = NULL;
  if (include_optional) {
    v0_0_39_cluster_rec_associations = v0_0_39_cluster_rec_associations_create(
       // false, not to have infinite recursion
      instantiate_v0_0_39_assoc_short(0)
    );
  } else {
    v0_0_39_cluster_rec_associations = v0_0_39_cluster_rec_associations_create(
      NULL
    );
  }

  return v0_0_39_cluster_rec_associations;
}


#ifdef v0_0_39_cluster_rec_associations_MAIN

void test_v0_0_39_cluster_rec_associations(int include_optional) {
    v0_0_39_cluster_rec_associations_t* v0_0_39_cluster_rec_associations_1 = instantiate_v0_0_39_cluster_rec_associations(include_optional);

	cJSON* jsonv0_0_39_cluster_rec_associations_1 = v0_0_39_cluster_rec_associations_convertToJSON(v0_0_39_cluster_rec_associations_1);
	printf("v0_0_39_cluster_rec_associations :\n%s\n", cJSON_Print(jsonv0_0_39_cluster_rec_associations_1));
	v0_0_39_cluster_rec_associations_t* v0_0_39_cluster_rec_associations_2 = v0_0_39_cluster_rec_associations_parseFromJSON(jsonv0_0_39_cluster_rec_associations_1);
	cJSON* jsonv0_0_39_cluster_rec_associations_2 = v0_0_39_cluster_rec_associations_convertToJSON(v0_0_39_cluster_rec_associations_2);
	printf("repeating v0_0_39_cluster_rec_associations:\n%s\n", cJSON_Print(jsonv0_0_39_cluster_rec_associations_2));
}

int main() {
  test_v0_0_39_cluster_rec_associations(1);
  test_v0_0_39_cluster_rec_associations(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_cluster_rec_associations_MAIN
#endif // v0_0_39_cluster_rec_associations_TEST
