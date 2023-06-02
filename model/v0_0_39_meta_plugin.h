/*
 * v0_0_39_meta_plugin.h
 *
 * 
 */

#ifndef _v0_0_39_meta_plugin_H_
#define _v0_0_39_meta_plugin_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_meta_plugin_t v0_0_39_meta_plugin_t;




typedef struct v0_0_39_meta_plugin_t {
    char *type; // string
    char *name; // string

} v0_0_39_meta_plugin_t;

v0_0_39_meta_plugin_t *v0_0_39_meta_plugin_create(
    char *type,
    char *name
);

void v0_0_39_meta_plugin_free(v0_0_39_meta_plugin_t *v0_0_39_meta_plugin);

v0_0_39_meta_plugin_t *v0_0_39_meta_plugin_parseFromJSON(cJSON *v0_0_39_meta_pluginJSON);

cJSON *v0_0_39_meta_plugin_convertToJSON(v0_0_39_meta_plugin_t *v0_0_39_meta_plugin);

#endif /* _v0_0_39_meta_plugin_H_ */

