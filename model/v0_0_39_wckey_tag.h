/*
 * v0_0_39_wckey_tag.h
 *
 * wckey details
 */

#ifndef _v0_0_39_wckey_tag_H_
#define _v0_0_39_wckey_tag_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_wckey_tag_t v0_0_39_wckey_tag_t;


// Enum FLAGS for v0_0_39_wckey_tag

typedef enum  { slurm_rest_api_v0_0_39_wckey_tag_FLAGS_NULL = 0, slurm_rest_api_v0_0_39_wckey_tag_FLAGS_ASSIGNED_DEFAULT } slurm_rest_api_v0_0_39_wckey_tag_FLAGS_e;

char* v0_0_39_wckey_tag_flags_ToString(slurm_rest_api_v0_0_39_wckey_tag_FLAGS_e flags);

slurm_rest_api_v0_0_39_wckey_tag_FLAGS_e v0_0_39_wckey_tag_flags_FromString(char* flags);



typedef struct v0_0_39_wckey_tag_t {
    char *wckey; // string
    list_t *flags; //primitive container

} v0_0_39_wckey_tag_t;

v0_0_39_wckey_tag_t *v0_0_39_wckey_tag_create(
    char *wckey,
    list_t *flags
);

void v0_0_39_wckey_tag_free(v0_0_39_wckey_tag_t *v0_0_39_wckey_tag);

v0_0_39_wckey_tag_t *v0_0_39_wckey_tag_parseFromJSON(cJSON *v0_0_39_wckey_tagJSON);

cJSON *v0_0_39_wckey_tag_convertToJSON(v0_0_39_wckey_tag_t *v0_0_39_wckey_tag);

#endif /* _v0_0_39_wckey_tag_H_ */

