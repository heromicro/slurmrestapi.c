#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_account.h"


char* flagsv0_0_39_account_ToString(slurm_rest_api_v0_0_39_account_FLAGS_e flags) {
	char *flagsArray[] =  { "NULL", "DELETED" };
	return flagsArray[flags - 1];
}

slurm_rest_api_v0_0_39_account_FLAGS_e flagsv0_0_39_account_FromString(char* flags) {
    int stringToReturn = 0;
    char *flagsArray[] =  { "NULL", "DELETED" };
    size_t sizeofArray = sizeof(flagsArray) / sizeof(flagsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(flags, flagsArray[stringToReturn]) == 0) {
            return stringToReturn + 1;
        }
        stringToReturn++;
    }
    return 0;
}

v0_0_39_account_t *v0_0_39_account_create(
    list_t *associations,
    list_t *coordinators,
    char *description,
    char *name,
    char *organization,
    list_t *flags
    ) {
    v0_0_39_account_t *v0_0_39_account_local_var = malloc(sizeof(v0_0_39_account_t));
    if (!v0_0_39_account_local_var) {
        return NULL;
    }
    v0_0_39_account_local_var->associations = associations;
    v0_0_39_account_local_var->coordinators = coordinators;
    v0_0_39_account_local_var->description = description;
    v0_0_39_account_local_var->name = name;
    v0_0_39_account_local_var->organization = organization;
    v0_0_39_account_local_var->flags = flags;

    return v0_0_39_account_local_var;
}


void v0_0_39_account_free(v0_0_39_account_t *v0_0_39_account) {
    if(NULL == v0_0_39_account){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_account->associations) {
        list_ForEach(listEntry, v0_0_39_account->associations) {
            v0_0_39_assoc_short_free(listEntry->data);
        }
        list_freeList(v0_0_39_account->associations);
        v0_0_39_account->associations = NULL;
    }
    if (v0_0_39_account->coordinators) {
        list_ForEach(listEntry, v0_0_39_account->coordinators) {
            v0_0_39_coord_free(listEntry->data);
        }
        list_freeList(v0_0_39_account->coordinators);
        v0_0_39_account->coordinators = NULL;
    }
    if (v0_0_39_account->description) {
        free(v0_0_39_account->description);
        v0_0_39_account->description = NULL;
    }
    if (v0_0_39_account->name) {
        free(v0_0_39_account->name);
        v0_0_39_account->name = NULL;
    }
    if (v0_0_39_account->organization) {
        free(v0_0_39_account->organization);
        v0_0_39_account->organization = NULL;
    }
    if (v0_0_39_account->flags) {
        list_ForEach(listEntry, v0_0_39_account->flags) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_account->flags);
        v0_0_39_account->flags = NULL;
    }
    free(v0_0_39_account);
}

cJSON *v0_0_39_account_convertToJSON(v0_0_39_account_t *v0_0_39_account) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_account->associations
    if(v0_0_39_account->associations) {
    cJSON *associations = cJSON_AddArrayToObject(item, "associations");
    if(associations == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *associationsListEntry;
    if (v0_0_39_account->associations) {
    list_ForEach(associationsListEntry, v0_0_39_account->associations) {
    cJSON *itemLocal = v0_0_39_assoc_short_convertToJSON(associationsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(associations, itemLocal);
    }
    }
    }


    // v0_0_39_account->coordinators
    if(v0_0_39_account->coordinators) {
    cJSON *coordinators = cJSON_AddArrayToObject(item, "coordinators");
    if(coordinators == NULL) {
    goto fail; //nonprimitive container
    }

    listEntry_t *coordinatorsListEntry;
    if (v0_0_39_account->coordinators) {
    list_ForEach(coordinatorsListEntry, v0_0_39_account->coordinators) {
    cJSON *itemLocal = v0_0_39_coord_convertToJSON(coordinatorsListEntry->data);
    if(itemLocal == NULL) {
    goto fail;
    }
    cJSON_AddItemToArray(coordinators, itemLocal);
    }
    }
    }


    // v0_0_39_account->description
    if (!v0_0_39_account->description) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "description", v0_0_39_account->description) == NULL) {
    goto fail; //String
    }


    // v0_0_39_account->name
    if (!v0_0_39_account->name) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "name", v0_0_39_account->name) == NULL) {
    goto fail; //String
    }


    // v0_0_39_account->organization
    if (!v0_0_39_account->organization) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "organization", v0_0_39_account->organization) == NULL) {
    goto fail; //String
    }


    // v0_0_39_account->flags
    if(v0_0_39_account->flags != slurm_rest_api_v0_0_39_account_FLAGS_NULL) {
    cJSON *flags = cJSON_AddArrayToObject(item, "flags");
    if(flags == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *flagsListEntry;
    list_ForEach(flagsListEntry, v0_0_39_account->flags) {
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

v0_0_39_account_t *v0_0_39_account_parseFromJSON(cJSON *v0_0_39_accountJSON){

    v0_0_39_account_t *v0_0_39_account_local_var = NULL;

    // define the local list for v0_0_39_account->associations
    list_t *associationsList = NULL;

    // define the local list for v0_0_39_account->coordinators
    list_t *coordinatorsList = NULL;

    // define the local list for v0_0_39_account->flags
    list_t *flagsList = NULL;

    // v0_0_39_account->associations
    cJSON *associations = cJSON_GetObjectItemCaseSensitive(v0_0_39_accountJSON, "associations");
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

    // v0_0_39_account->coordinators
    cJSON *coordinators = cJSON_GetObjectItemCaseSensitive(v0_0_39_accountJSON, "coordinators");
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

    // v0_0_39_account->description
    cJSON *description = cJSON_GetObjectItemCaseSensitive(v0_0_39_accountJSON, "description");
    if (!description) {
        goto end;
    }

    
    if(!cJSON_IsString(description))
    {
    goto end; //String
    }

    // v0_0_39_account->name
    cJSON *name = cJSON_GetObjectItemCaseSensitive(v0_0_39_accountJSON, "name");
    if (!name) {
        goto end;
    }

    
    if(!cJSON_IsString(name))
    {
    goto end; //String
    }

    // v0_0_39_account->organization
    cJSON *organization = cJSON_GetObjectItemCaseSensitive(v0_0_39_accountJSON, "organization");
    if (!organization) {
        goto end;
    }

    
    if(!cJSON_IsString(organization))
    {
    goto end; //String
    }

    // v0_0_39_account->flags
    cJSON *flags = cJSON_GetObjectItemCaseSensitive(v0_0_39_accountJSON, "flags");
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


    v0_0_39_account_local_var = v0_0_39_account_create (
        associations ? associationsList : NULL,
        coordinators ? coordinatorsList : NULL,
        strdup(description->valuestring),
        strdup(name->valuestring),
        strdup(organization->valuestring),
        flags ? flagsList : NULL
        );

    return v0_0_39_account_local_var;
end:
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
