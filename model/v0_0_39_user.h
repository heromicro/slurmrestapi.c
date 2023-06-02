/*
 * v0_0_39_user.h
 *
 * 
 */

#ifndef _v0_0_39_user_H_
#define _v0_0_39_user_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_user_t v0_0_39_user_t;

#include "v0_0_39_assoc_short.h"
#include "v0_0_39_coord.h"
#include "v0_0_39_user_default.h"
#include "v0_0_39_wckey.h"

// Enum ADMINISTRATORLEVEL for v0_0_39_user

typedef enum  { slurm_rest_api_v0_0_39_user_ADMINISTRATORLEVEL_NULL = 0, slurm_rest_api_v0_0_39_user_ADMINISTRATORLEVEL_Not Set, slurm_rest_api_v0_0_39_user_ADMINISTRATORLEVEL_None, slurm_rest_api_v0_0_39_user_ADMINISTRATORLEVEL__Operator, slurm_rest_api_v0_0_39_user_ADMINISTRATORLEVEL_Administrator } slurm_rest_api_v0_0_39_user_ADMINISTRATORLEVEL_e;

char* v0_0_39_user_administrator_level_ToString(slurm_rest_api_v0_0_39_user_ADMINISTRATORLEVEL_e administrator_level);

slurm_rest_api_v0_0_39_user_ADMINISTRATORLEVEL_e v0_0_39_user_administrator_level_FromString(char* administrator_level);

// Enum FLAGS for v0_0_39_user

typedef enum  { slurm_rest_api_v0_0_39_user_FLAGS_NULL = 0, slurm_rest_api_v0_0_39_user_FLAGS_NONE, slurm_rest_api_v0_0_39_user_FLAGS_DELETED } slurm_rest_api_v0_0_39_user_FLAGS_e;

char* v0_0_39_user_flags_ToString(slurm_rest_api_v0_0_39_user_FLAGS_e flags);

slurm_rest_api_v0_0_39_user_FLAGS_e v0_0_39_user_flags_FromString(char* flags);



typedef struct v0_0_39_user_t {
    list_t *administrator_level; //primitive container
    list_t *associations; //nonprimitive container
    list_t *coordinators; //nonprimitive container
    struct v0_0_39_user_default_t *_default; //model
    list_t *flags; //primitive container
    char *name; // string
    char *old_name; // string
    list_t *wckeys; //nonprimitive container

} v0_0_39_user_t;

v0_0_39_user_t *v0_0_39_user_create(
    list_t *administrator_level,
    list_t *associations,
    list_t *coordinators,
    v0_0_39_user_default_t *_default,
    list_t *flags,
    char *name,
    char *old_name,
    list_t *wckeys
);

void v0_0_39_user_free(v0_0_39_user_t *v0_0_39_user);

v0_0_39_user_t *v0_0_39_user_parseFromJSON(cJSON *v0_0_39_userJSON);

cJSON *v0_0_39_user_convertToJSON(v0_0_39_user_t *v0_0_39_user);

#endif /* _v0_0_39_user_H_ */

