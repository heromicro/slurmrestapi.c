/*
 * v0_0_39_account.h
 *
 * 
 */

#ifndef _v0_0_39_account_H_
#define _v0_0_39_account_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_account_t v0_0_39_account_t;

#include "v0_0_39_assoc_short.h"
#include "v0_0_39_coord.h"

// Enum FLAGS for v0_0_39_account

typedef enum  { slurm_rest_api_v0_0_39_account_FLAGS_NULL = 0, slurm_rest_api_v0_0_39_account_FLAGS_DELETED } slurm_rest_api_v0_0_39_account_FLAGS_e;

char* v0_0_39_account_flags_ToString(slurm_rest_api_v0_0_39_account_FLAGS_e flags);

slurm_rest_api_v0_0_39_account_FLAGS_e v0_0_39_account_flags_FromString(char* flags);



typedef struct v0_0_39_account_t {
    list_t *associations; //nonprimitive container
    list_t *coordinators; //nonprimitive container
    char *description; // string
    char *name; // string
    char *organization; // string
    list_t *flags; //primitive container

} v0_0_39_account_t;

v0_0_39_account_t *v0_0_39_account_create(
    list_t *associations,
    list_t *coordinators,
    char *description,
    char *name,
    char *organization,
    list_t *flags
);

void v0_0_39_account_free(v0_0_39_account_t *v0_0_39_account);

v0_0_39_account_t *v0_0_39_account_parseFromJSON(cJSON *v0_0_39_accountJSON);

cJSON *v0_0_39_account_convertToJSON(v0_0_39_account_t *v0_0_39_account);

#endif /* _v0_0_39_account_H_ */

