#ifndef v0_0_39_partition_info_accounts_TEST
#define v0_0_39_partition_info_accounts_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_partition_info_accounts_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_partition_info_accounts.h"
v0_0_39_partition_info_accounts_t* instantiate_v0_0_39_partition_info_accounts(int include_optional);



v0_0_39_partition_info_accounts_t* instantiate_v0_0_39_partition_info_accounts(int include_optional) {
  v0_0_39_partition_info_accounts_t* v0_0_39_partition_info_accounts = NULL;
  if (include_optional) {
    v0_0_39_partition_info_accounts = v0_0_39_partition_info_accounts_create(
      "0"
    );
  } else {
    v0_0_39_partition_info_accounts = v0_0_39_partition_info_accounts_create(
      "0"
    );
  }

  return v0_0_39_partition_info_accounts;
}


#ifdef v0_0_39_partition_info_accounts_MAIN

void test_v0_0_39_partition_info_accounts(int include_optional) {
    v0_0_39_partition_info_accounts_t* v0_0_39_partition_info_accounts_1 = instantiate_v0_0_39_partition_info_accounts(include_optional);

	cJSON* jsonv0_0_39_partition_info_accounts_1 = v0_0_39_partition_info_accounts_convertToJSON(v0_0_39_partition_info_accounts_1);
	printf("v0_0_39_partition_info_accounts :\n%s\n", cJSON_Print(jsonv0_0_39_partition_info_accounts_1));
	v0_0_39_partition_info_accounts_t* v0_0_39_partition_info_accounts_2 = v0_0_39_partition_info_accounts_parseFromJSON(jsonv0_0_39_partition_info_accounts_1);
	cJSON* jsonv0_0_39_partition_info_accounts_2 = v0_0_39_partition_info_accounts_convertToJSON(v0_0_39_partition_info_accounts_2);
	printf("repeating v0_0_39_partition_info_accounts:\n%s\n", cJSON_Print(jsonv0_0_39_partition_info_accounts_2));
}

int main() {
  test_v0_0_39_partition_info_accounts(1);
  test_v0_0_39_partition_info_accounts(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_partition_info_accounts_MAIN
#endif // v0_0_39_partition_info_accounts_TEST
