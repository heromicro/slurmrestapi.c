#ifndef v0_0_38_diag_rpcu_TEST
#define v0_0_38_diag_rpcu_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_38_diag_rpcu_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_38_diag_rpcu.h"
v0_0_38_diag_rpcu_t* instantiate_v0_0_38_diag_rpcu(int include_optional);



v0_0_38_diag_rpcu_t* instantiate_v0_0_38_diag_rpcu(int include_optional) {
  v0_0_38_diag_rpcu_t* v0_0_38_diag_rpcu = NULL;
  if (include_optional) {
    v0_0_38_diag_rpcu = v0_0_38_diag_rpcu_create(
      "0",
      56,
      56,
      56,
      56
    );
  } else {
    v0_0_38_diag_rpcu = v0_0_38_diag_rpcu_create(
      "0",
      56,
      56,
      56,
      56
    );
  }

  return v0_0_38_diag_rpcu;
}


#ifdef v0_0_38_diag_rpcu_MAIN

void test_v0_0_38_diag_rpcu(int include_optional) {
    v0_0_38_diag_rpcu_t* v0_0_38_diag_rpcu_1 = instantiate_v0_0_38_diag_rpcu(include_optional);

	cJSON* jsonv0_0_38_diag_rpcu_1 = v0_0_38_diag_rpcu_convertToJSON(v0_0_38_diag_rpcu_1);
	printf("v0_0_38_diag_rpcu :\n%s\n", cJSON_Print(jsonv0_0_38_diag_rpcu_1));
	v0_0_38_diag_rpcu_t* v0_0_38_diag_rpcu_2 = v0_0_38_diag_rpcu_parseFromJSON(jsonv0_0_38_diag_rpcu_1);
	cJSON* jsonv0_0_38_diag_rpcu_2 = v0_0_38_diag_rpcu_convertToJSON(v0_0_38_diag_rpcu_2);
	printf("repeating v0_0_38_diag_rpcu:\n%s\n", cJSON_Print(jsonv0_0_38_diag_rpcu_2));
}

int main() {
  test_v0_0_38_diag_rpcu(1);
  test_v0_0_38_diag_rpcu(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_38_diag_rpcu_MAIN
#endif // v0_0_38_diag_rpcu_TEST
