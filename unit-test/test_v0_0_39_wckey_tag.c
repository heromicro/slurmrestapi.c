#ifndef v0_0_39_wckey_tag_TEST
#define v0_0_39_wckey_tag_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define v0_0_39_wckey_tag_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/v0_0_39_wckey_tag.h"
v0_0_39_wckey_tag_t* instantiate_v0_0_39_wckey_tag(int include_optional);



v0_0_39_wckey_tag_t* instantiate_v0_0_39_wckey_tag(int include_optional) {
  v0_0_39_wckey_tag_t* v0_0_39_wckey_tag = NULL;
  if (include_optional) {
    v0_0_39_wckey_tag = v0_0_39_wckey_tag_create(
      "0",
      list_createList()
    );
  } else {
    v0_0_39_wckey_tag = v0_0_39_wckey_tag_create(
      "0",
      list_createList()
    );
  }

  return v0_0_39_wckey_tag;
}


#ifdef v0_0_39_wckey_tag_MAIN

void test_v0_0_39_wckey_tag(int include_optional) {
    v0_0_39_wckey_tag_t* v0_0_39_wckey_tag_1 = instantiate_v0_0_39_wckey_tag(include_optional);

	cJSON* jsonv0_0_39_wckey_tag_1 = v0_0_39_wckey_tag_convertToJSON(v0_0_39_wckey_tag_1);
	printf("v0_0_39_wckey_tag :\n%s\n", cJSON_Print(jsonv0_0_39_wckey_tag_1));
	v0_0_39_wckey_tag_t* v0_0_39_wckey_tag_2 = v0_0_39_wckey_tag_parseFromJSON(jsonv0_0_39_wckey_tag_1);
	cJSON* jsonv0_0_39_wckey_tag_2 = v0_0_39_wckey_tag_convertToJSON(v0_0_39_wckey_tag_2);
	printf("repeating v0_0_39_wckey_tag:\n%s\n", cJSON_Print(jsonv0_0_39_wckey_tag_2));
}

int main() {
  test_v0_0_39_wckey_tag(1);
  test_v0_0_39_wckey_tag(0);

  printf("Hello world \n");
  return 0;
}

#endif // v0_0_39_wckey_tag_MAIN
#endif // v0_0_39_wckey_tag_TEST
