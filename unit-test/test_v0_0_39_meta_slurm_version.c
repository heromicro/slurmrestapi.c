#ifndef v0_0_39_meta_slurm_version_TEST
#define v0_0_39_meta_slurm_version_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_meta_slurm_version_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_meta_slurm_version.h"
v0_0_39_meta_slurm_version_t* instantiate_v0_0_39_meta_slurm_version(int include_optional);



v0_0_39_meta_slurm_version_t* instantiate_v0_0_39_meta_slurm_version(int include_optional) {
  v0_0_39_meta_slurm_version_t* v0_0_39_meta_slurm_version = NULL;
  if (include_optional) {
    v0_0_39_meta_slurm_version = v0_0_39_meta_slurm_version_create(
      56,
      56,
      56
    );
  } else {
    v0_0_39_meta_slurm_version = v0_0_39_meta_slurm_version_create(
      56,
      56,
      56
    );
  }

  return v0_0_39_meta_slurm_version;
}


#ifdef v0_0_39_meta_slurm_version_MAIN

void test_v0_0_39_meta_slurm_version(int include_optional) {
    v0_0_39_meta_slurm_version_t* v0_0_39_meta_slurm_version_1 = instantiate_v0_0_39_meta_slurm_version(include_optional);

	cJSON* jsonv0_0_39_meta_slurm_version_1 = v0_0_39_meta_slurm_version_convertToJSON(v0_0_39_meta_slurm_version_1);
	printf("v0_0_39_meta_slurm_version :\n%s\n", cJSON_Print(jsonv0_0_39_meta_slurm_version_1));
	v0_0_39_meta_slurm_version_t* v0_0_39_meta_slurm_version_2 = v0_0_39_meta_slurm_version_parseFromJSON(jsonv0_0_39_meta_slurm_version_1);
	cJSON* jsonv0_0_39_meta_slurm_version_2 = v0_0_39_meta_slurm_version_convertToJSON(v0_0_39_meta_slurm_version_2);
	printf("repeating v0_0_39_meta_slurm_version:\n%s\n", cJSON_Print(jsonv0_0_39_meta_slurm_version_2));
}

int main() {
  test_v0_0_39_meta_slurm_version(1);
  test_v0_0_39_meta_slurm_version(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_meta_slurm_version_MAIN
#endif // v0_0_39_meta_slurm_version_TEST
