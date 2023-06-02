/*
 * v0_0_39_partition_info_accounts.h
 *
 * 
 */

#ifndef _v0_0_39_partition_info_accounts_H_
#define _v0_0_39_partition_info_accounts_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_partition_info_accounts_t v0_0_39_partition_info_accounts_t;




typedef struct v0_0_39_partition_info_accounts_t {
    char *deny; // string

} v0_0_39_partition_info_accounts_t;

v0_0_39_partition_info_accounts_t *v0_0_39_partition_info_accounts_create(
    char *deny
);

void v0_0_39_partition_info_accounts_free(v0_0_39_partition_info_accounts_t *v0_0_39_partition_info_accounts);

v0_0_39_partition_info_accounts_t *v0_0_39_partition_info_accounts_parseFromJSON(cJSON *v0_0_39_partition_info_accountsJSON);

cJSON *v0_0_39_partition_info_accounts_convertToJSON(v0_0_39_partition_info_accounts_t *v0_0_39_partition_info_accounts);

#endif /* _v0_0_39_partition_info_accounts_H_ */

