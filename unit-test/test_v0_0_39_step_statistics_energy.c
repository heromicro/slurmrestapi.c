#ifndef v0_0_39_step_statistics_energy_TEST
#define v0_0_39_step_statistics_energy_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_step_statistics_energy_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_step_statistics_energy.h"
v0_0_39_step_statistics_energy_t* instantiate_v0_0_39_step_statistics_energy(int include_optional);

#include "test_v0_0_39_uint64_no_val.c"


v0_0_39_step_statistics_energy_t* instantiate_v0_0_39_step_statistics_energy(int include_optional) {
  v0_0_39_step_statistics_energy_t* v0_0_39_step_statistics_energy = NULL;
  if (include_optional) {
    v0_0_39_step_statistics_energy = v0_0_39_step_statistics_energy_create(
       // false, not to have infinite recursion
      instantiate_v0_0_39_uint64_no_val(0)
    );
  } else {
    v0_0_39_step_statistics_energy = v0_0_39_step_statistics_energy_create(
      NULL
    );
  }

  return v0_0_39_step_statistics_energy;
}


#ifdef v0_0_39_step_statistics_energy_MAIN

void test_v0_0_39_step_statistics_energy(int include_optional) {
    v0_0_39_step_statistics_energy_t* v0_0_39_step_statistics_energy_1 = instantiate_v0_0_39_step_statistics_energy(include_optional);

	cJSON* jsonv0_0_39_step_statistics_energy_1 = v0_0_39_step_statistics_energy_convertToJSON(v0_0_39_step_statistics_energy_1);
	printf("v0_0_39_step_statistics_energy :\n%s\n", cJSON_Print(jsonv0_0_39_step_statistics_energy_1));
	v0_0_39_step_statistics_energy_t* v0_0_39_step_statistics_energy_2 = v0_0_39_step_statistics_energy_parseFromJSON(jsonv0_0_39_step_statistics_energy_1);
	cJSON* jsonv0_0_39_step_statistics_energy_2 = v0_0_39_step_statistics_energy_convertToJSON(v0_0_39_step_statistics_energy_2);
	printf("repeating v0_0_39_step_statistics_energy:\n%s\n", cJSON_Print(jsonv0_0_39_step_statistics_energy_2));
}

int main() {
  test_v0_0_39_step_statistics_energy(1);
  test_v0_0_39_step_statistics_energy(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_step_statistics_energy_MAIN
#endif // v0_0_39_step_statistics_energy_TEST
