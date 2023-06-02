#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_user.h"


char* administrator_levelv0_0_39_user_ToString(slurm_rest_api_v0_0_39_user_ADMINISTRATORLEVEL_e administrator_level) {
	char *administrator_levelArray[] =  { "NULL", "Not Set", "None", "Operator", "Administrator" };
	return administrator_levelArray[administrator_level - 1];
}

slurm_rest_api_v0_0_39_user_ADMINISTRATORLEVEL_e administrator_levelv0_0_39_user_FromString(char* administrator_level) {
    int stringToReturn = 0;
    char *administrator_levelArray[] =  { "NULL", "Not Set", "None", "Operator", "Administrator" };
    size_t sizeofArray = sizeof(administrator_levelArray) / sizeof(administrator_levelArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(administrator_level, administrator_levelArray[stringToReturn]) == 0) {
            return stringToReturn + 1;
        }
        stringToReturn++;
    }
    return 0;
}
char* flagsv0_0_39_user_ToString(slurm_rest_api_v0_0_39_user_FLAGS_e flags) {
	char *flagsArray[] =  { "NULL", "NONE", "DELETED" };
	return flagsArray[flags - 1];
}

slurm_rest_api_v0_0_39_user_FLAGS_e flagsv0_0_39_user_FromString(char* flags) {
    int stringToReturn = 0;
    char *flagsArray[] =  { "NULL", "NONE", "DELETED" };
    size_t sizeofArray = sizeof(flagsArray) / sizeof(flagsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(flags, flagsArray[stringToReturn]) == 0) {
            return stringToReturn + 1;
        }
        stringToReturn++;
    }
    return 0;
}

v0_0_39_user_t *v0_0_39_user_create(
    list_t *administrator_level,
    list_t *associations,
    list_t *coordinators,
    v0_0_39_user_default_t *_default,
    list_t *flags,
    char *name,
    char *old_name,
    list_t *wckeys
    ) {
    v0_0_39_user_t *v0_0_39_user_local_var = malloc(sizeof(v0_0_39_user_t));
    if (!v0_0_39_user_local_var) {
        return NULL;
    }
    v0_0_39_user_local_var->administrator_level = administrator_level;
    v0_0_39_user_local_var->associations = associations;
    v0_0_39_user_local_var->coordinators = coordinators;
    v0_0_39_user_local_var->_default = _default;
    v0_0_39_user_local_var->flags = flags;
    v0_0_39_user_local_var->name = name;
    v0_0_39_user_local_var->old_name = old_name;
    v0_0_39_user_local_var->wckeys = wckeys;

    return v0_0_39_user_local_var;
}


void v0_0_39_user_free(v0_0_39_user_t *v0_0_39_user) {
    if(NULL == v0_0_39_user){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_user->administrator_level) {
        list_ForEach(listEntry, v0_0_39_user->administrator_level) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_user->administrator_level);
        v0_0_39_user->administrator_level = NULL;
    }
    if (v0_0_39_user->associations) {
        list_ForEach(listEntry, v0_0_39_user->associations) {
            v0_0_39_assoc_short_free(listEntry->data);
        }
        list_freeList(v0_0_39_user->associations);
        v0_0_39_user->associations = NULL;
    }
    if (v0_0_39_user->coordinators) {
        list_ForEach(listEntry, v0_0_39_user->coordinators) {
            v0_0_39_coord_free(listEntry->data);
        }
        list_freeList(v0_0_39_user->coordinators);
        v0_0_39_user->coordinators = NULL;
    }
    if (v0_0_39_user->_default) {
        v0_0_39_user_default_free(v0_0_39_user->_default);
        v0_0_39_user->_default = NULL;
    }
    if (v0_0_39_user->flags) {
        list_ForEach(listEntry, v0_0_39_user->flags) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_user->flags);
        v0_0_39_user->flags = NULL;
    }
    if (v0_0_39_user->name) {
        free(v0_0_39_user->name);
        v0_0_39_user->name = NULL;
    }
    if (v0_0_39_user->old_name) {
        free(v0_0_39_user->old_name);
        v0_0_39_user->old_name = NULL;
    }
    if (v0_0_39_user->wckeys) {
        list_ForEach(listEntry, v0_0_39_user->wckeys) {
            v0_0_39_wckey_free(listEntry->data);
        }
        list_freeList(v0_0_39_user->wckeys);
        v0_0_39_user->wckeys = NULL;
    }
    free(v0_0_39_user);
}

cJSON *v0_0_39_user_convertToJSON(v0_0_39_user_t *v0_0_39_user) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_user->administrator_level
    if(v0_0_39_user->administrator_level != slurm_rest_api_v0_0_39_user_ADMINISTRATORLEVEL_NULL) {
    cJSON *administrator_level = cJSON_AddArrayToObject(item, "administrator_level");
    if(administrator_level == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *administrator_levelListEntry;
    list_ForEach(administrator_levelListEntry, v0_0_39_user->administrator_level) {
    if(cJSON_AddStringToObject(administrator_level, "", (char*)administrator_levelListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_user->associations
    if(v0_0_39_user->associations) {
    cJSON *associations = cJSON_AddArrayToObject(item, "associations");
    if(associations == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *associationsListEntry;
    if (v0_0_39_user->associations) {
    list_ForEach(associationsListEntry, v0_0_39_user->associations) {
    cJSON *itemLocal = v0_0_39_assoc_short_convertToJSON(associationsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(associations, itemLocal);
    }
    }
    }


    // v0_0_39_user->coordinators
    if(v0_0_39_user->coordinators) {
    cJSON *coordinators = cJSON_AddArrayToObject(item, "coordinators");
    if(coordinators == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *coordinatorsListEntry;
    if (v0_0_39_user->coordinators) {
    list_ForEach(coordinatorsListEntry, v0_0_39_user->coordinators) {
    cJSON *itemLocal = v0_0_39_coord_convertToJSON(coordinatorsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(coordinators, itemLocal);
    }
    }
    }


    // v0_0_39_user->_default
    if(v0_0_39_user->_default) {
    cJSON *_default_local_JSON = v0_0_39_user_default_convertToJSON(v0_0_39_user->_default);
    if(_default_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "default", _default_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // v0_0_39_user->flags
    if(v0_0_39_user->flags != slurm_rest_api_v0_0_39_user_FLAGS_NULL) {
    cJSON *flags = cJSON_AddArrayToObject(item, "flags");
    if(flags == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *flagsListEntry;
    list_ForEach(flagsListEntry, v0_0_39_user->flags) {
    if(cJSON_AddStringToObject(flags, "", (char*)flagsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_user->name
    if (!v0_0_39_user->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", v0_0_39_user->name) == NULL) {
    goto fail; //String
    }


    // v0_0_39_user->old_name
    if(v0_0_39_user->old_name) {
    if(cJSON_AddStringToObject(item, "old_name", v0_0_39_user->old_name) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_user->wckeys
    if(v0_0_39_user->wckeys) {
    cJSON *wckeys = cJSON_AddArrayToObject(item, "wckeys");
    if(wckeys == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *wckeysListEntry;
    if (v0_0_39_user->wckeys) {
    list_ForEach(wckeysListEntry, v0_0_39_user->wckeys) {
    cJSON *itemLocal = v0_0_39_wckey_convertToJSON(wckeysListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(wckeys, itemLocal);
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

v0_0_39_user_t *v0_0_39_user_parseFromJSON(cJSON *v0_0_39_userJSON){

    v0_0_39_user_t *v0_0_39_user_local_var = NULL;

    // define the local list for v0_0_39_user->administrator_level
    list_t *administrator_levelList = NULL;

    // define the local list for v0_0_39_user->associations
    list_t *associationsList = NULL;

    // define the local list for v0_0_39_user->coordinators
    list_t *coordinatorsList = NULL;

    // define the local variable for v0_0_39_user->_default
    v0_0_39_user_default_t *_default_local_nonprim = NULL;

    // define the local list for v0_0_39_user->flags
    list_t *flagsList = NULL;

    // define the local list for v0_0_39_user->wckeys
    list_t *wckeysList = NULL;

    // v0_0_39_user->administrator_level
    cJSON *administrator_level = cJSON_GetObjectItemCaseSensitive(v0_0_39_userJSON, "administrator_level");
    if (administrator_level) { 
    cJSON *administrator_level_local = NULL;
    if(!cJSON_IsArray(administrator_level)) {
        goto end;//primitive container
    }
    administrator_levelList = list_createList();

    cJSON_ArrayForEach(administrator_level_local, administrator_level)
    {
        if(!cJSON_IsString(administrator_level_local))
        {
            goto end;
        }
        list_addElement(administrator_levelList , strdup(administrator_level_local->valuestring));
    }
    }

    // v0_0_39_user->associations
    cJSON *associations = cJSON_GetObjectItemCaseSensitive(v0_0_39_userJSON, "associations");
    if (associations) { 
    cJSON *associations_local_nonprimitive = NULL;
    if(!cJSON_IsArray(associations)){
        goto end; //nonprimitive container
    }

    associationsList = list_createList();

    cJSON_ArrayForEach(associations_local_nonprimitive,associations )
    {
        if(!cJSON_IsObject(associations_local_nonprimitive)){
            goto end;
        }
        v0_0_39_assoc_short_t *associationsItem = v0_0_39_assoc_short_parseFromJSON(associations_local_nonprimitive);

        list_addElement(associationsList, associationsItem);
    }
    }

    // v0_0_39_user->coordinators
    cJSON *coordinators = cJSON_GetObjectItemCaseSensitive(v0_0_39_userJSON, "coordinators");
    if (coordinators) { 
    cJSON *coordinators_local_nonprimitive = NULL;
    if(!cJSON_IsArray(coordinators)){
        goto end; //nonprimitive container
    }

    coordinatorsList = list_createList();

    cJSON_ArrayForEach(coordinators_local_nonprimitive,coordinators )
    {
        if(!cJSON_IsObject(coordinators_local_nonprimitive)){
            goto end;
        }
        v0_0_39_coord_t *coordinatorsItem = v0_0_39_coord_parseFromJSON(coordinators_local_nonprimitive);

        list_addElement(coordinatorsList, coordinatorsItem);
    }
    }

    // v0_0_39_user->_default
    cJSON *_default = cJSON_GetObjectItemCaseSensitive(v0_0_39_userJSON, "default");
    if (_default) { 
    _default_local_nonprim = v0_0_39_user_default_parseFromJSON(_default); //nonprimitive
    }

    // v0_0_39_user->flags
    cJSON *flags = cJSON_GetObjectItemCaseSensitive(v0_0_39_userJSON, "flags");
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

    // v0_0_39_user->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(v0_0_39_userJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // v0_0_39_user->old_name
    cJSON *old_name = cJSON_GetObjectItemCaseSensitive(v0_0_39_userJSON, "old_name");
    if (old_name) { 
    if(!cJSON_IsString(old_name) && !cJSON_IsNull(old_name))
    {
    goto end; //String
    }
    }

    // v0_0_39_user->wckeys
    cJSON *wckeys = cJSON_GetObjectItemCaseSensitive(v0_0_39_userJSON, "wckeys");
    if (wckeys) { 
    cJSON *wckeys_local_nonprimitive = NULL;
    if(!cJSON_IsArray(wckeys)){
        goto end; //nonprimitive container
    }

    wckeysList = list_createList();

    cJSON_ArrayForEach(wckeys_local_nonprimitive,wckeys )
    {
        if(!cJSON_IsObject(wckeys_local_nonprimitive)){
            goto end;
        }
        v0_0_39_wckey_t *wckeysItem = v0_0_39_wckey_parseFromJSON(wckeys_local_nonprimitive);

        list_addElement(wckeysList, wckeysItem);
    }
    }


    v0_0_39_user_local_var = v0_0_39_user_create (
        administrator_level ? administrator_levelList : NULL,
        associations ? associationsList : NULL,
        coordinators ? coordinatorsList : NULL,
        _default ? _default_local_nonprim : NULL,
        flags ? flagsList : NULL,
        strdup(name->valuestring),
        old_name && !cJSON_IsNull(old_name) ? strdup(old_name->valuestring) : NULL,
        wckeys ? wckeysList : NULL
        );

    return v0_0_39_user_local_var;
end:
    if (administrator_levelList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, administrator_levelList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(administrator_levelList);
        administrator_levelList = NULL;
    }
    if (associationsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, associationsList) {
            v0_0_39_assoc_short_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(associationsList);
        associationsList = NULL;
    }
    if (coordinatorsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, coordinatorsList) {
            v0_0_39_coord_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(coordinatorsList);
        coordinatorsList = NULL;
    }
    if (_default_local_nonprim) {
        v0_0_39_user_default_free(_default_local_nonprim);
        _default_local_nonprim = NULL;
    }
    if (flagsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, flagsList) {
            free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(flagsList);
        flagsList = NULL;
    }
    if (wckeysList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, wckeysList) {
            v0_0_39_wckey_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(wckeysList);
        wckeysList = NULL;
    }
    return NULL;

}
