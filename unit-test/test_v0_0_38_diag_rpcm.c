#ifndef v0_0_38_diag_rpcm_TEST
#define v0_0_38_diag_rpcm_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_38_diag_rpcm_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_38_diag_rpcm.h"
v0_0_38_diag_rpcm_t* instantiate_v0_0_38_diag_rpcm(int include_optional);



v0_0_38_diag_rpcm_t* instantiate_v0_0_38_diag_rpcm(int include_optional) {
  v0_0_38_diag_rpcm_t* v0_0_38_diag_rpcm = NULL;
  if (include_optional) {
    v0_0_38_diag_rpcm = v0_0_38_diag_rpcm_create(
      "0",
      56,
      56,
      56,
      56
    );
  } else {
    v0_0_38_diag_rpcm = v0_0_38_diag_rpcm_create(
      "0",
      56,
      56,
      56,
      56
    );
  }

  return v0_0_38_diag_rpcm;
}


#ifdef v0_0_38_diag_rpcm_MAIN

void test_v0_0_38_diag_rpcm(int include_optional) {
    v0_0_38_diag_rpcm_t* v0_0_38_diag_rpcm_1 = instantiate_v0_0_38_diag_rpcm(include_optional);

	cJSON* jsonv0_0_38_diag_rpcm_1 = v0_0_38_diag_rpcm_convertToJSON(v0_0_38_diag_rpcm_1);
	printf("v0_0_38_diag_rpcm :\n%s\n", cJSON_Print(jsonv0_0_38_diag_rpcm_1));
	v0_0_38_diag_rpcm_t* v0_0_38_diag_rpcm_2 = v0_0_38_diag_rpcm_parseFromJSON(jsonv0_0_38_diag_rpcm_1);
	cJSON* jsonv0_0_38_diag_rpcm_2 = v0_0_38_diag_rpcm_convertToJSON(v0_0_38_diag_rpcm_2);
	printf("repeating v0_0_38_diag_rpcm:\n%s\n", cJSON_Print(jsonv0_0_38_diag_rpcm_2));
}

int main() {
  test_v0_0_38_diag_rpcm(1);
  test_v0_0_38_diag_rpcm(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_38_diag_rpcm_MAIN
#endif // v0_0_38_diag_rpcm_TEST
