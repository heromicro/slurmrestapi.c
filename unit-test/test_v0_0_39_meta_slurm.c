#ifndef v0_0_39_meta_slurm_TEST
#define v0_0_39_meta_slurm_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_meta_slurm_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_meta_slurm.h"
v0_0_39_meta_slurm_t* instantiate_v0_0_39_meta_slurm(int include_optional);

#include "test_v0_0_39_meta_slurm_version.c"


v0_0_39_meta_slurm_t* instantiate_v0_0_39_meta_slurm(int include_optional) {
  v0_0_39_meta_slurm_t* v0_0_39_meta_slurm = NULL;
  if (include_optional) {
    v0_0_39_meta_slurm = v0_0_39_meta_slurm_create(
       // false, not to have infinite recursion
      instantiate_v0_0_39_meta_slurm_version(0),
      "0"
    );
  } else {
    v0_0_39_meta_slurm = v0_0_39_meta_slurm_create(
      NULL,
      "0"
    );
  }

  return v0_0_39_meta_slurm;
}


#ifdef v0_0_39_meta_slurm_MAIN

void test_v0_0_39_meta_slurm(int include_optional) {
    v0_0_39_meta_slurm_t* v0_0_39_meta_slurm_1 = instantiate_v0_0_39_meta_slurm(include_optional);

	cJSON* jsonv0_0_39_meta_slurm_1 = v0_0_39_meta_slurm_convertToJSON(v0_0_39_meta_slurm_1);
	printf("v0_0_39_meta_slurm :\n%s\n", cJSON_Print(jsonv0_0_39_meta_slurm_1));
	v0_0_39_meta_slurm_t* v0_0_39_meta_slurm_2 = v0_0_39_meta_slurm_parseFromJSON(jsonv0_0_39_meta_slurm_1);
	cJSON* jsonv0_0_39_meta_slurm_2 = v0_0_39_meta_slurm_convertToJSON(v0_0_39_meta_slurm_2);
	printf("repeating v0_0_39_meta_slurm:\n%s\n", cJSON_Print(jsonv0_0_39_meta_slurm_2));
}

int main() {
  test_v0_0_39_meta_slurm(1);
  test_v0_0_39_meta_slurm(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_meta_slurm_MAIN
#endif // v0_0_39_meta_slurm_TEST
