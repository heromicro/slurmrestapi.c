#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_wckey_tag.h"


char* flagsv0_0_39_wckey_tag_ToString(slurm_rest_api_v0_0_39_wckey_tag_FLAGS_e flags) {
	char *flagsArray[] =  { "NULL", "ASSIGNED_DEFAULT" };
	return flagsArray[flags - 1];
}

slurm_rest_api_v0_0_39_wckey_tag_FLAGS_e flagsv0_0_39_wckey_tag_FromString(char* flags) {
    int stringToReturn = 0;
    char *flagsArray[] =  { "NULL", "ASSIGNED_DEFAULT" };
    size_t sizeofArray = sizeof(flagsArray) / sizeof(flagsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(flags, flagsArray[stringToReturn]) == 0) {
            return stringToReturn + 1;
        }
        stringToReturn++;
    }
    return 0;
}

v0_0_39_wckey_tag_t *v0_0_39_wckey_tag_create(
    char *wckey,
    list_t *flags
    ) {
    v0_0_39_wckey_tag_t *v0_0_39_wckey_tag_local_var = malloc(sizeof(v0_0_39_wckey_tag_t));
    if (!v0_0_39_wckey_tag_local_var) {
        return NULL;
    }
    v0_0_39_wckey_tag_local_var->wckey = wckey;
    v0_0_39_wckey_tag_local_var->flags = flags;

    return v0_0_39_wckey_tag_local_var;
}


void v0_0_39_wckey_tag_free(v0_0_39_wckey_tag_t *v0_0_39_wckey_tag) {
    if(NULL == v0_0_39_wckey_tag){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_wckey_tag->wckey) {
        free(v0_0_39_wckey_tag->wckey);
        v0_0_39_wckey_tag->wckey = NULL;
    }
    if (v0_0_39_wckey_tag->flags) {
        list_ForEach(listEntry, v0_0_39_wckey_tag->flags) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_wckey_tag->flags);
        v0_0_39_wckey_tag->flags = NULL;
    }
    free(v0_0_39_wckey_tag);
}

cJSON *v0_0_39_wckey_tag_convertToJSON(v0_0_39_wckey_tag_t *v0_0_39_wckey_tag) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_wckey_tag->wckey
    if(v0_0_39_wckey_tag->wckey) {
    if(cJSON_AddStringToObject(item, "wckey", v0_0_39_wckey_tag->wckey) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_wckey_tag->flags
    if(v0_0_39_wckey_tag->flags != slurm_rest_api_v0_0_39_wckey_tag_FLAGS_NULL) {
    cJSON *flags = cJSON_AddArrayToObject(item, "flags");
    if(flags == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *flagsListEntry;
    list_ForEach(flagsListEntry, v0_0_39_wckey_tag->flags) {
    if(cJSON_AddStringToObject(flags, "", (char*)flagsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

v0_0_39_wckey_tag_t *v0_0_39_wckey_tag_parseFromJSON(cJSON *v0_0_39_wckey_tagJSON){

    v0_0_39_wckey_tag_t *v0_0_39_wckey_tag_local_var = NULL;

    // define the local list for v0_0_39_wckey_tag->flags
    list_t *flagsList = NULL;

    // v0_0_39_wckey_tag->wckey
    cJSON *wckey = cJSON_GetObjectItemCaseSensitive(v0_0_39_wckey_tagJSON, "wckey");
    if (wckey) { 
    if(!cJSON_IsString(wckey) && !cJSON_IsNull(wckey))
    {
    goto end; //String
    }
    }

    // v0_0_39_wckey_tag->flags
    cJSON *flags = cJSON_GetObjectItemCaseSensitive(v0_0_39_wckey_tagJSON, "flags");
    if (flags) { 
    cJSON *flags_local = NULL;
    if(!cJSON_IsArray(flags)) {
        goto end;//primitive container
    }
    flagsList = list_createList();

    cJSON_ArrayForEach(flags_local, flags)
    {
        if(!cJSON_IsString(flags_local))
        {
            goto end;
        }
        list_addElement(flagsList , strdup(flags_local->valuestring));
    }
    }


    v0_0_39_wckey_tag_local_var = v0_0_39_wckey_tag_create (
        wckey && !cJSON_IsNull(wckey) ? strdup(wckey->valuestring) : NULL,
        flags ? flagsList : NULL
        );

    return v0_0_39_wckey_tag_local_var;
end:
    if (flagsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, flagsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(flagsList);
        flagsList = NULL;
    }
    return NULL;

}
