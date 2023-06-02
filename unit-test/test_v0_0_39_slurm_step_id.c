#ifndef v0_0_39_slurm_step_id_TEST
#define v0_0_39_slurm_step_id_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_slurm_step_id_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_slurm_step_id.h"
v0_0_39_slurm_step_id_t* instantiate_v0_0_39_slurm_step_id(int include_optional);



v0_0_39_slurm_step_id_t* instantiate_v0_0_39_slurm_step_id(int include_optional) {
  v0_0_39_slurm_step_id_t* v0_0_39_slurm_step_id = NULL;
  if (include_optional) {
    v0_0_39_slurm_step_id = v0_0_39_slurm_step_id_create(
      56,
      56,
      "0"
    );
  } else {
    v0_0_39_slurm_step_id = v0_0_39_slurm_step_id_create(
      56,
      56,
      "0"
    );
  }

  return v0_0_39_slurm_step_id;
}


#ifdef v0_0_39_slurm_step_id_MAIN

void test_v0_0_39_slurm_step_id(int include_optional) {
    v0_0_39_slurm_step_id_t* v0_0_39_slurm_step_id_1 = instantiate_v0_0_39_slurm_step_id(include_optional);

	cJSON* jsonv0_0_39_slurm_step_id_1 = v0_0_39_slurm_step_id_convertToJSON(v0_0_39_slurm_step_id_1);
	printf("v0_0_39_slurm_step_id :\n%s\n", cJSON_Print(jsonv0_0_39_slurm_step_id_1));
	v0_0_39_slurm_step_id_t* v0_0_39_slurm_step_id_2 = v0_0_39_slurm_step_id_parseFromJSON(jsonv0_0_39_slurm_step_id_1);
	cJSON* jsonv0_0_39_slurm_step_id_2 = v0_0_39_slurm_step_id_convertToJSON(v0_0_39_slurm_step_id_2);
	printf("repeating v0_0_39_slurm_step_id:\n%s\n", cJSON_Print(jsonv0_0_39_slurm_step_id_2));
}

int main() {
  test_v0_0_39_slurm_step_id(1);
  test_v0_0_39_slurm_step_id(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_slurm_step_id_MAIN
#endif // v0_0_39_slurm_step_id_TEST
