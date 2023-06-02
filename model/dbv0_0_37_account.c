#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "dbv0_0_37_account.h"



dbv0_0_37_account_t *dbv0_0_37_account_create(
    list_t *associations,
    list_t *coordinators,
    char *description,
    char *name,
    char *organization,
    list_t *flags
    ) {
    dbv0_0_37_account_t *dbv0_0_37_account_local_var = malloc(sizeof(dbv0_0_37_account_t));
    if (!dbv0_0_37_account_local_var) {
        return NULL;
    }
    dbv0_0_37_account_local_var->associations = associations;
    dbv0_0_37_account_local_var->coordinators = coordinators;
    dbv0_0_37_account_local_var->description = description;
    dbv0_0_37_account_local_var->name = name;
    dbv0_0_37_account_local_var->organization = organization;
    dbv0_0_37_account_local_var->flags = flags;

    return dbv0_0_37_account_local_var;
}


void dbv0_0_37_account_free(dbv0_0_37_account_t *dbv0_0_37_account) {
    if(NULL == dbv0_0_37_account){
        return ;
    }
    listEntry_t *listEntry;
    if (dbv0_0_37_account->associations) {
        list_ForEach(listEntry, dbv0_0_37_account->associations) {
            dbv0_0_37_association_short_info_free(listEntry->data);
        }
        list_freeList(dbv0_0_37_account->associations);
        dbv0_0_37_account->associations = NULL;
    }
    if (dbv0_0_37_account->coordinators) {
        list_ForEach(listEntry, dbv0_0_37_account->coordinators) {
            dbv0_0_37_coordinator_info_free(listEntry->data);
        }
        list_freeList(dbv0_0_37_account->coordinators);
        dbv0_0_37_account->coordinators = NULL;
    }
    if (dbv0_0_37_account->description) {
        free(dbv0_0_37_account->description);
        dbv0_0_37_account->description = NULL;
    }
    if (dbv0_0_37_account->name) {
        free(dbv0_0_37_account->name);
        dbv0_0_37_account->name = NULL;
    }
    if (dbv0_0_37_account->organization) {
        free(dbv0_0_37_account->organization);
        dbv0_0_37_account->organization = NULL;
    }
    if (dbv0_0_37_account->flags) {
        list_ForEach(listEntry, dbv0_0_37_account->flags) {
            free(listEntry->data);
        }
        list_freeList(dbv0_0_37_account->flags);
        dbv0_0_37_account->flags = NULL;
    }
    free(dbv0_0_37_account);
}

cJSON *dbv0_0_37_account_convertToJSON(dbv0_0_37_account_t *dbv0_0_37_account) {
    cJSON *item = cJSON_CreateObject();

    // dbv0_0_37_account->associations
    if(dbv0_0_37_account->associations) {
    cJSON *associations = cJSON_AddArrayToObject(item, "associations");
    if(associations == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *associationsListEntry;
    if (dbv0_0_37_account->associations) {
    list_ForEach(associationsListEntry, dbv0_0_37_account->associations) {
    cJSON *itemLocal = dbv0_0_37_association_short_info_convertToJSON(associationsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(associations, itemLocal);
    }
    }
    }


    // dbv0_0_37_account->coordinators
    if(dbv0_0_37_account->coordinators) {
    cJSON *coordinators = cJSON_AddArrayToObject(item, "coordinators");
    if(coordinators == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *coordinatorsListEntry;
    if (dbv0_0_37_account->coordinators) {
    list_ForEach(coordinatorsListEntry, dbv0_0_37_account->coordinators) {
    cJSON *itemLocal = dbv0_0_37_coordinator_info_convertToJSON(coordinatorsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(coordinators, itemLocal);
    }
    }
    }


    // dbv0_0_37_account->description
    if(dbv0_0_37_account->description) {
    if(cJSON_AddStringToObject(item, "description", dbv0_0_37_account->description) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_37_account->name
    if(dbv0_0_37_account->name) {
    if(cJSON_AddStringToObject(item, "name", dbv0_0_37_account->name) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_37_account->organization
    if(dbv0_0_37_account->organization) {
    if(cJSON_AddStringToObject(item, "organization", dbv0_0_37_account->organization) == NULL) {
    goto fail; //String
    }
    }


    // dbv0_0_37_account->flags
    if(dbv0_0_37_account->flags) {
    cJSON *flags = cJSON_AddArrayToObject(item, "flags");
    if(flags == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *flagsListEntry;
    list_ForEach(flagsListEntry, dbv0_0_37_account->flags) {
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

dbv0_0_37_account_t *dbv0_0_37_account_parseFromJSON(cJSON *dbv0_0_37_accountJSON){

    dbv0_0_37_account_t *dbv0_0_37_account_local_var = NULL;

    // define the local list for dbv0_0_37_account->associations
    list_t *associationsList = NULL;

    // define the local list for dbv0_0_37_account->coordinators
    list_t *coordinatorsList = NULL;

    // define the local list for dbv0_0_37_account->flags
    list_t *flagsList = NULL;

    // dbv0_0_37_account->associations
    cJSON *associations = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_accountJSON, "associations");
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
        dbv0_0_37_association_short_info_t *associationsItem = dbv0_0_37_association_short_info_parseFromJSON(associations_local_nonprimitive);

        list_addElement(associationsList, associationsItem);
    }
    }

    // dbv0_0_37_account->coordinators
    cJSON *coordinators = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_accountJSON, "coordinators");
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
        dbv0_0_37_coordinator_info_t *coordinatorsItem = dbv0_0_37_coordinator_info_parseFromJSON(coordinators_local_nonprimitive);

        list_addElement(coordinatorsList, coordinatorsItem);
    }
    }

    // dbv0_0_37_account->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_accountJSON, "description");
    if (description) { 
    if(!cJSON_IsString(description) && !cJSON_IsNull(description))
    {
    goto end; //String
    }
    }

    // dbv0_0_37_account->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_accountJSON, "name");
    if (name) { 
    if(!cJSON_IsString(name) && !cJSON_IsNull(name))
    {
    goto end; //String
    }
    }

    // dbv0_0_37_account->organization
    cJSON *organization = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_accountJSON, "organization");
    if (organization) { 
    if(!cJSON_IsString(organization) && !cJSON_IsNull(organization))
    {
    goto end; //String
    }
    }

    // dbv0_0_37_account->flags
    cJSON *flags = cJSON_GetObjectItemCaseSensitive(dbv0_0_37_accountJSON, "flags");
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


    dbv0_0_37_account_local_var = dbv0_0_37_account_create (
        associations ? associationsList : NULL,
        coordinators ? coordinatorsList : NULL,
        description && !cJSON_IsNull(description) ? strdup(description->valuestring) : NULL,
        name && !cJSON_IsNull(name) ? strdup(name->valuestring) : NULL,
        organization && !cJSON_IsNull(organization) ? strdup(organization->valuestring) : NULL,
        flags ? flagsList : NULL
        );

    return dbv0_0_37_account_local_var;
end:
    if (associationsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, associationsList) {
            dbv0_0_37_association_short_info_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(associationsList);
        associationsList = NULL;
    }
    if (coordinatorsList) {
        listEntry_t *listEntry = NULL;
        list_ForEach(listEntry, coordinatorsList) {
            dbv0_0_37_coordinator_info_free(listEntry->data);
            listEntry->data = NULL;
        }
        list_freeList(coordinatorsList);
        coordinatorsList = NULL;
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
