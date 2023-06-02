#ifndef v0_0_39_partition_info_qos_TEST
#define v0_0_39_partition_info_qos_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_partition_info_qos_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_partition_info_qos.h"
v0_0_39_partition_info_qos_t* instantiate_v0_0_39_partition_info_qos(int include_optional);



v0_0_39_partition_info_qos_t* instantiate_v0_0_39_partition_info_qos(int include_optional) {
  v0_0_39_partition_info_qos_t* v0_0_39_partition_info_qos = NULL;
  if (include_optional) {
    v0_0_39_partition_info_qos = v0_0_39_partition_info_qos_create(
      "0"
    );
  } else {
    v0_0_39_partition_info_qos = v0_0_39_partition_info_qos_create(
      "0"
    );
  }

  return v0_0_39_partition_info_qos;
}


#ifdef v0_0_39_partition_info_qos_MAIN

void test_v0_0_39_partition_info_qos(int include_optional) {
    v0_0_39_partition_info_qos_t* v0_0_39_partition_info_qos_1 = instantiate_v0_0_39_partition_info_qos(include_optional);

	cJSON* jsonv0_0_39_partition_info_qos_1 = v0_0_39_partition_info_qos_convertToJSON(v0_0_39_partition_info_qos_1);
	printf("v0_0_39_partition_info_qos :\n%s\n", cJSON_Print(jsonv0_0_39_partition_info_qos_1));
	v0_0_39_partition_info_qos_t* v0_0_39_partition_info_qos_2 = v0_0_39_partition_info_qos_parseFromJSON(jsonv0_0_39_partition_info_qos_1);
	cJSON* jsonv0_0_39_partition_info_qos_2 = v0_0_39_partition_info_qos_convertToJSON(v0_0_39_partition_info_qos_2);
	printf("repeating v0_0_39_partition_info_qos:\n%s\n", cJSON_Print(jsonv0_0_39_partition_info_qos_2));
}

int main() {
  test_v0_0_39_partition_info_qos(1);
  test_v0_0_39_partition_info_qos(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_partition_info_qos_MAIN
#endif // v0_0_39_partition_info_qos_TEST
