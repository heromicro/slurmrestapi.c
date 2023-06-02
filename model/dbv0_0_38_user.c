#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_38_user.h"



dbv0_0_38_user_t *dbv0_0_38_user_create(
    char *administrator_level,
    list_t *associations,
    list_t *coordinators,
    dbv0_0_38_user_default_t *_default,
    list_t *flags,
    char *name
    ) {
    dbv0_0_38_user_t *dbv0_0_38_user_local_var = malloc(sizeof(dbv0_0_38_user_t));
    if (!dbv0_0_38_user_local_var) {
        return NULL;
    }
    dbv0_0_38_user_local_var->administrator_level = administrator_level;
    dbv0_0_38_user_local_var->associations = associations;
    dbv0_0_38_user_local_var->coordinators = coordinators;
    dbv0_0_38_user_local_var->_default = _default;
    dbv0_0_38_user_local_var->flags = flags;
    dbv0_0_38_user_local_var->name = name;

    return dbv0_0_38_user_local_var;
}


void dbv0_0_38_user_free(dbv0_0_38_user_t *dbv0_0_38_user) {
    if(NULL == dbv0_0_38_user){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_38_user->administrator_level) {
        free(dbv0_0_38_user->administrator_level);
        dbv0_0_38_user->administrator_level = NULL;
    }
    if (dbv0_0_38_user->associations) {
        list_ForEach(listEntry, dbv0_0_38_user->associations) {
            dbv0_0_38_association_short_info_free(listEntry->data);
        }
        list_freeList(dbv0_0_38_user->associations);
        dbv0_0_38_user->associations = NULL;
    }
    if (dbv0_0_38_user->coordinators) {
        list_ForEach(listEntry, dbv0_0_38_user->coordinators) {
            dbv0_0_38_coordinator_info_free(listEntry->data);
        }
        list_freeList(dbv0_0_38_user->coordinators);
        dbv0_0_38_user->coordinators = NULL;
    }
    if (dbv0_0_38_user->_default) {
        dbv0_0_38_user_default_free(dbv0_0_38_user->_default);
        dbv0_0_38_user->_default = NULL;
    }
    if (dbv0_0_38_user->flags) {
        list_ForEach(listEntry, dbv0_0_38_user->flags) {
            free(listEntry->data);
        }
        list_freeList(dbv0_0_38_user->flags);
        dbv0_0_38_user->flags = NULL;
    }
    if (dbv0_0_38_user->name) {
        free(dbv0_0_38_user->name);
        dbv0_0_38_user->name = NULL;
    }
    free(dbv0_0_38_user);
}

cJSON *dbv0_0_38_user_convertToJSON(dbv0_0_38_user_t *dbv0_0_38_user) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_38_user->administrator_level
    if(dbv0_0_38_user->administrator_level) {
    if(cJSON_AddStringToObject(item, "administrator_level", dbv0_0_38_user->administrator_level) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_38_user->associations
    if(dbv0_0_38_user->associations) {
    cJSON *associations = cJSON_AddArrayToObject(item, "associations");
    if(associations == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *associationsListEntry;
    if (dbv0_0_38_user->associations) {
    list_ForEach(associationsListEntry, dbv0_0_38_user->associations) {
    cJSON *itemLocal = dbv0_0_38_association_short_info_convertToJSON(associationsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(associations, itemLocal);
    }
    }
    }


    // dbv0_0_38_user->coordinators
    if(dbv0_0_38_user->coordinators) {
    cJSON *coordinators = cJSON_AddArrayToObject(item, "coordinators");
    if(coordinators == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *coordinatorsListEntry;
    if (dbv0_0_38_user->coordinators) {
    list_ForEach(coordinatorsListEntry, dbv0_0_38_user->coordinators) {
    cJSON *itemLocal = dbv0_0_38_coordinator_info_convertToJSON(coordinatorsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(coordinators, itemLocal);
    }
    }
    }


    // dbv0_0_38_user->_default
    if(dbv0_0_38_user->_default) {
    cJSON *_default_local_JSON = dbv0_0_38_user_default_convertToJSON(dbv0_0_38_user->_default);
    if(_default_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "default", _default_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }


    // dbv0_0_38_user->flags
    if(dbv0_0_38_user->flags) {
    cJSON *flags = cJSON_AddArrayToObject(item, "flags");
    if(flags == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *flagsListEntry;
    list_ForEach(flagsListEntry, dbv0_0_38_user->flags) {
    if(cJSON_AddStringToObject(flags, "", (char*)flagsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // dbv0_0_38_user->name
    if(dbv0_0_38_user->name) {
    if(cJSON_AddStringToObject(item, "name", dbv0_0_38_user->name) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

dbv0_0_38_user_t *dbv0_0_38_user_parseFromJSON(cJSON *dbv0_0_38_userJSON){

    dbv0_0_38_user_t *dbv0_0_38_user_local_var = NULL;

    // define the local list for dbv0_0_38_user->associations
    list_t *associationsList = NULL;

    // define the local list for dbv0_0_38_user->coordinators
    list_t *coordinatorsList = NULL;

    // define the local variable for dbv0_0_38_user->_default
    dbv0_0_38_user_default_t *_default_local_nonprim = NULL;

    // define the local list for dbv0_0_38_user->flags
    list_t *flagsList = NULL;

    // dbv0_0_38_user->administrator_level
    cJSON *administrator_level = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_userJSON, "administrator_level");
    if (administrator_level) { 
    if(!cJSON_IsString(administrator_level) && !cJSON_IsNull(administrator_level))
    {
    goto end; //String
    }
    }

    // dbv0_0_38_user->associations
    cJSON *associations = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_userJSON, "associations");
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
        dbv0_0_38_association_short_info_t *associationsItem = dbv0_0_38_association_short_info_parseFromJSON(associations_local_nonprimitive);

        list_addElement(associationsList, associationsItem);
    }
    }

    // dbv0_0_38_user->coordinators
    cJSON *coordinators = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_userJSON, "coordinators");
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
        dbv0_0_38_coordinator_info_t *coordinatorsItem = dbv0_0_38_coordinator_info_parseFromJSON(coordinators_local_nonprimitive);

        list_addElement(coordinatorsList, coordinatorsItem);
    }
    }

    // dbv0_0_38_user->_default
    cJSON *_default = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_userJSON, "default");
    if (_default) { 
    _default_local_nonprim = dbv0_0_38_user_default_parseFromJSON(_default); //nonprimitive
    }

    // dbv0_0_38_user->flags
    cJSON *flags = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_userJSON, "flags");
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

    // dbv0_0_38_user->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(dbv0_0_38_userJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }


    dbv0_0_38_user_local_var = dbv0_0_38_user_create (
        administrator_level && !cJSON_IsNull(administrator_level) ? strdup(administrator_level->valuestring) : NULL,
        associations ? associationsList : NULL,
        coordinators ? coordinatorsList : NULL,
        _default ? _default_local_nonprim : NULL,
        flags ? flagsList : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL
        );

    return dbv0_0_38_user_local_var;
end:
    if (associationsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, associationsList) {
            dbv0_0_38_association_short_info_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(associationsList);
        associationsList = NULL;
    }
    if (coordinatorsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, coordinatorsList) {
            dbv0_0_38_coordinator_info_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(coordinatorsList);
        coordinatorsList = NULL;
    }
    if (_default_local_nonprim) {
        dbv0_0_38_user_default_free(_default_local_nonprim);
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
    return NULL;

}
