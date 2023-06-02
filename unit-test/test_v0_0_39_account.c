#ifndef v0_0_39_account_TEST
#define v0_0_39_account_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_account_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_account.h"
v0_0_39_account_t* instantiate_v0_0_39_account(int include_optional);



v0_0_39_account_t* instantiate_v0_0_39_account(int include_optional) {
  v0_0_39_account_t* v0_0_39_account = NULL;
  if (include_optional) {
    v0_0_39_account = v0_0_39_account_create(
      list_createList(),
      list_createList(),
      "0",
      "0",
      "0",
      list_createList()
    );
  } else {
    v0_0_39_account = v0_0_39_account_create(
      list_createList(),
      list_createList(),
      "0",
      "0",
      "0",
      list_createList()
    );
  }

  return v0_0_39_account;
}


#ifdef v0_0_39_account_MAIN

void test_v0_0_39_account(int include_optional) {
    v0_0_39_account_t* v0_0_39_account_1 = instantiate_v0_0_39_account(include_optional);

	cJSON* jsonv0_0_39_account_1 = v0_0_39_account_convertToJSON(v0_0_39_account_1);
	printf("v0_0_39_account :\n%s\n", cJSON_Print(jsonv0_0_39_account_1));
	v0_0_39_account_t* v0_0_39_account_2 = v0_0_39_account_parseFromJSON(jsonv0_0_39_account_1);
	cJSON* jsonv0_0_39_account_2 = v0_0_39_account_convertToJSON(v0_0_39_account_2);
	printf("repeating v0_0_39_account:\n%s\n", cJSON_Print(jsonv0_0_39_account_2));
}

int main() {
  test_v0_0_39_account(1);
  test_v0_0_39_account(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_account_MAIN
#endif // v0_0_39_account_TEST
