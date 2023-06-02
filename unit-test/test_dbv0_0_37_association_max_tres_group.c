#ifndef dbv0_0_37_association_max_tres_group_TEST
#define dbv0_0_37_association_max_tres_group_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define dbv0_0_37_association_max_tres_group_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/dbv0_0_37_association_max_tres_group.h"
dbv0_0_37_association_max_tres_group_t* instantiate_dbv0_0_37_association_max_tres_group(int include_optional);



dbv0_0_37_association_max_tres_group_t* instantiate_dbv0_0_37_association_max_tres_group(int include_optional) {
  dbv0_0_37_association_max_tres_group_t* dbv0_0_37_association_max_tres_group = NULL;
  if (include_optional) {
    dbv0_0_37_association_max_tres_group = dbv0_0_37_association_max_tres_group_create(
      list_createList(),
      list_createList()
    );
  } else {
    dbv0_0_37_association_max_tres_group = dbv0_0_37_association_max_tres_group_create(
      list_createList(),
      list_createList()
    );
  }

  return dbv0_0_37_association_max_tres_group;
}


#ifdef dbv0_0_37_association_max_tres_group_MAIN

void test_dbv0_0_37_association_max_tres_group(int include_optional) {
    dbv0_0_37_association_max_tres_group_t* dbv0_0_37_association_max_tres_group_1 = instantiate_dbv0_0_37_association_max_tres_group(include_optional);

	cJSON* jsondbv0_0_37_association_max_tres_group_1 = dbv0_0_37_association_max_tres_group_convertToJSON(dbv0_0_37_association_max_tres_group_1);
	printf("dbv0_0_37_association_max_tres_group :\n%s\n", cJSON_Print(jsondbv0_0_37_association_max_tres_group_1));
	dbv0_0_37_association_max_tres_group_t* dbv0_0_37_association_max_tres_group_2 = dbv0_0_37_association_max_tres_group_parseFromJSON(jsondbv0_0_37_association_max_tres_group_1);
	cJSON* jsondbv0_0_37_association_max_tres_group_2 = dbv0_0_37_association_max_tres_group_convertToJSON(dbv0_0_37_association_max_tres_group_2);
	printf("repeating dbv0_0_37_association_max_tres_group:\n%s\n", cJSON_Print(jsondbv0_0_37_association_max_tres_group_2));
}

int main() {
  test_dbv0_0_37_association_max_tres_group(1);
  test_dbv0_0_37_association_max_tres_group(0);

  printf("Hello world \n");
  return 0;
}

#endif // dbv0_0_37_association_max_tres_group_MAIN
#endif // dbv0_0_37_association_max_tres_group_TEST
