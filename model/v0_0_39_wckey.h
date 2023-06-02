/*
 * v0_0_39_wckey.h
 *
 * 
 */

#ifndef _v0_0_39_wckey_H_
#define _v0_0_39_wckey_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_wckey_t v0_0_39_wckey_t;

#include "v0_0_39_accounting.h"

// Enum FLAGS for v0_0_39_wckey

typedef enum  { slurm_rest_api_v0_0_39_wckey_FLAGS_NULL = 0, slurm_rest_api_v0_0_39_wckey_FLAGS_DELETED } slurm_rest_api_v0_0_39_wckey_FLAGS_e;

char* v0_0_39_wckey_flags_ToString(slurm_rest_api_v0_0_39_wckey_FLAGS_e flags);

slurm_rest_api_v0_0_39_wckey_FLAGS_e v0_0_39_wckey_flags_FromString(char* flags);



typedef struct v0_0_39_wckey_t {
    list_t *accounting; //nonprimitive container
    char *cluster; // string
    int id; //numeric
    char *name; // string
    char *user; // string
    list_t *flags; //primitive container

} v0_0_39_wckey_t;

v0_0_39_wckey_t *v0_0_39_wckey_create(
    list_t *accounting,
    char *cluster,
    int id,
    char *name,
    char *user,
    list_t *flags
);

void v0_0_39_wckey_free(v0_0_39_wckey_t *v0_0_39_wckey);

v0_0_39_wckey_t *v0_0_39_wckey_parseFromJSON(cJSON *v0_0_39_wckeyJSON);

cJSON *v0_0_39_wckey_convertToJSON(v0_0_39_wckey_t *v0_0_39_wckey);

#endif /* _v0_0_39_wckey_H_ */

