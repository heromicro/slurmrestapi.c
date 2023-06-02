#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_cron_entry.h"


char* flagsv0_0_39_cron_entry_ToString(slurm_rest_api_v0_0_39_cron_entry_FLAGS_e flags) {
	char *flagsArray[] =  { "NULL", "WILD_MINUTE", "WILD_HOUR", "WILD_DAY_OF_MONTH", "WILD_MONTH", "WILD_DAY_OF_WEEK" };
	return flagsArray[flags - 1];
}

slurm_rest_api_v0_0_39_cron_entry_FLAGS_e flagsv0_0_39_cron_entry_FromString(char* flags) {
    int stringToReturn = 0;
    char *flagsArray[] =  { "NULL", "WILD_MINUTE", "WILD_HOUR", "WILD_DAY_OF_MONTH", "WILD_MONTH", "WILD_DAY_OF_WEEK" };
    size_t sizeofArray = sizeof(flagsArray) / sizeof(flagsArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(flags, flagsArray[stringToReturn]) == 0) {
            return stringToReturn + 1;
        }
        stringToReturn++;
    }
    return 0;
}

v0_0_39_cron_entry_t *v0_0_39_cron_entry_create(
    list_t *flags,
    char *minute,
    char *hour,
    char *day_of_month,
    char *month,
    char *day_of_week,
    char *specification,
    char *command,
    v0_0_39_cron_entry_line_t *line
    ) {
    v0_0_39_cron_entry_t *v0_0_39_cron_entry_local_var = malloc(sizeof(v0_0_39_cron_entry_t));
    if (!v0_0_39_cron_entry_local_var) {
        return NULL;
    }
    v0_0_39_cron_entry_local_var->flags = flags;
    v0_0_39_cron_entry_local_var->minute = minute;
    v0_0_39_cron_entry_local_var->hour = hour;
    v0_0_39_cron_entry_local_var->day_of_month = day_of_month;
    v0_0_39_cron_entry_local_var->month = month;
    v0_0_39_cron_entry_local_var->day_of_week = day_of_week;
    v0_0_39_cron_entry_local_var->specification = specification;
    v0_0_39_cron_entry_local_var->command = command;
    v0_0_39_cron_entry_local_var->line = line;

    return v0_0_39_cron_entry_local_var;
}


void v0_0_39_cron_entry_free(v0_0_39_cron_entry_t *v0_0_39_cron_entry) {
    if(NULL == v0_0_39_cron_entry){
        return ;
    }
    listEntry_t *listEntry;
    if (v0_0_39_cron_entry->flags) {
        list_ForEach(listEntry, v0_0_39_cron_entry->flags) {
            free(listEntry->data);
        }
        list_freeList(v0_0_39_cron_entry->flags);
        v0_0_39_cron_entry->flags = NULL;
    }
    if (v0_0_39_cron_entry->minute) {
        free(v0_0_39_cron_entry->minute);
        v0_0_39_cron_entry->minute = NULL;
    }
    if (v0_0_39_cron_entry->hour) {
        free(v0_0_39_cron_entry->hour);
        v0_0_39_cron_entry->hour = NULL;
    }
    if (v0_0_39_cron_entry->day_of_month) {
        free(v0_0_39_cron_entry->day_of_month);
        v0_0_39_cron_entry->day_of_month = NULL;
    }
    if (v0_0_39_cron_entry->month) {
        free(v0_0_39_cron_entry->month);
        v0_0_39_cron_entry->month = NULL;
    }
    if (v0_0_39_cron_entry->day_of_week) {
        free(v0_0_39_cron_entry->day_of_week);
        v0_0_39_cron_entry->day_of_week = NULL;
    }
    if (v0_0_39_cron_entry->specification) {
        free(v0_0_39_cron_entry->specification);
        v0_0_39_cron_entry->specification = NULL;
    }
    if (v0_0_39_cron_entry->command) {
        free(v0_0_39_cron_entry->command);
        v0_0_39_cron_entry->command = NULL;
    }
    if (v0_0_39_cron_entry->line) {
        v0_0_39_cron_entry_line_free(v0_0_39_cron_entry->line);
        v0_0_39_cron_entry->line = NULL;
    }
    free(v0_0_39_cron_entry);
}

cJSON *v0_0_39_cron_entry_convertToJSON(v0_0_39_cron_entry_t *v0_0_39_cron_entry) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_cron_entry->flags
    if(v0_0_39_cron_entry->flags != slurm_rest_api_v0_0_39_cron_entry_FLAGS_NULL) {
    cJSON *flags = cJSON_AddArrayToObject(item, "flags");
    if(flags == NULL) {
        goto fail; //primitive container
    }

    listEntry_t *flagsListEntry;
    list_ForEach(flagsListEntry, v0_0_39_cron_entry->flags) {
    if(cJSON_AddStringToObject(flags, "", (char*)flagsListEntry->data) == NULL)
    {
        goto fail;
    }
    }
    }


    // v0_0_39_cron_entry->minute
    if(v0_0_39_cron_entry->minute) {
    if(cJSON_AddStringToObject(item, "minute", v0_0_39_cron_entry->minute) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_cron_entry->hour
    if(v0_0_39_cron_entry->hour) {
    if(cJSON_AddStringToObject(item, "hour", v0_0_39_cron_entry->hour) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_cron_entry->day_of_month
    if(v0_0_39_cron_entry->day_of_month) {
    if(cJSON_AddStringToObject(item, "day_of_month", v0_0_39_cron_entry->day_of_month) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_cron_entry->month
    if(v0_0_39_cron_entry->month) {
    if(cJSON_AddStringToObject(item, "month", v0_0_39_cron_entry->month) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_cron_entry->day_of_week
    if(v0_0_39_cron_entry->day_of_week) {
    if(cJSON_AddStringToObject(item, "day_of_week", v0_0_39_cron_entry->day_of_week) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_cron_entry->specification
    if(v0_0_39_cron_entry->specification) {
    if(cJSON_AddStringToObject(item, "specification", v0_0_39_cron_entry->specification) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_cron_entry->command
    if(v0_0_39_cron_entry->command) {
    if(cJSON_AddStringToObject(item, "command", v0_0_39_cron_entry->command) == NULL) {
    goto fail; //String
    }
    }


    // v0_0_39_cron_entry->line
    if(v0_0_39_cron_entry->line) {
    cJSON *line_local_JSON = v0_0_39_cron_entry_line_convertToJSON(v0_0_39_cron_entry->line);
    if(line_local_JSON == NULL) {
    goto fail; //model
    }
    cJSON_AddItemToObject(item, "line", line_local_JSON);
    if(item->child == NULL) {
    goto fail;
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

v0_0_39_cron_entry_t *v0_0_39_cron_entry_parseFromJSON(cJSON *v0_0_39_cron_entryJSON){

    v0_0_39_cron_entry_t *v0_0_39_cron_entry_local_var = NULL;

    // define the local list for v0_0_39_cron_entry->flags
    list_t *flagsList = NULL;

    // define the local variable for v0_0_39_cron_entry->line
    v0_0_39_cron_entry_line_t *line_local_nonprim = NULL;

    // v0_0_39_cron_entry->flags
    cJSON *flags = cJSON_GetObjectItemCaseSensitive(v0_0_39_cron_entryJSON, "flags");
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

    // v0_0_39_cron_entry->minute
    cJSON *minute = cJSON_GetObjectItemCaseSensitive(v0_0_39_cron_entryJSON, "minute");
    if (minute) { 
    if(!cJSON_IsString(minute) && !cJSON_IsNull(minute))
    {
    goto end; //String
    }
    }

    // v0_0_39_cron_entry->hour
    cJSON *hour = cJSON_GetObjectItemCaseSensitive(v0_0_39_cron_entryJSON, "hour");
    if (hour) { 
    if(!cJSON_IsString(hour) && !cJSON_IsNull(hour))
    {
    goto end; //String
    }
    }

    // v0_0_39_cron_entry->day_of_month
    cJSON *day_of_month = cJSON_GetObjectItemCaseSensitive(v0_0_39_cron_entryJSON, "day_of_month");
    if (day_of_month) { 
    if(!cJSON_IsString(day_of_month) && !cJSON_IsNull(day_of_month))
    {
    goto end; //String
    }
    }

    // v0_0_39_cron_entry->month
    cJSON *month = cJSON_GetObjectItemCaseSensitive(v0_0_39_cron_entryJSON, "month");
    if (month) { 
    if(!cJSON_IsString(month) && !cJSON_IsNull(month))
    {
    goto end; //String
    }
    }

    // v0_0_39_cron_entry->day_of_week
    cJSON *day_of_week = cJSON_GetObjectItemCaseSensitive(v0_0_39_cron_entryJSON, "day_of_week");
    if (day_of_week) { 
    if(!cJSON_IsString(day_of_week) && !cJSON_IsNull(day_of_week))
    {
    goto end; //String
    }
    }

    // v0_0_39_cron_entry->specification
    cJSON *specification = cJSON_GetObjectItemCaseSensitive(v0_0_39_cron_entryJSON, "specification");
    if (specification) { 
    if(!cJSON_IsString(specification) && !cJSON_IsNull(specification))
    {
    goto end; //String
    }
    }

    // v0_0_39_cron_entry->command
    cJSON *command = cJSON_GetObjectItemCaseSensitive(v0_0_39_cron_entryJSON, "command");
    if (command) { 
    if(!cJSON_IsString(command) && !cJSON_IsNull(command))
    {
    goto end; //String
    }
    }

    // v0_0_39_cron_entry->line
    cJSON *line = cJSON_GetObjectItemCaseSensitive(v0_0_39_cron_entryJSON, "line");
    if (line) { 
    line_local_nonprim = v0_0_39_cron_entry_line_parseFromJSON(line); //nonprimitive
    }


    v0_0_39_cron_entry_local_var = v0_0_39_cron_entry_create (
        flags ? flagsList : NULL,
        minute && !cJSON_IsNull(minute) ? strdup(minute->valuestring) : NULL,
        hour && !cJSON_IsNull(hour) ? strdup(hour->valuestring) : NULL,
        day_of_month && !cJSON_IsNull(day_of_month) ? strdup(day_of_month->valuestring) : NULL,
        month && !cJSON_IsNull(month) ? strdup(month->valuestring) : NULL,
        day_of_week && !cJSON_IsNull(day_of_week) ? strdup(day_of_week->valuestring) : NULL,
        specification && !cJSON_IsNull(specification) ? strdup(specification->valuestring) : NULL,
        command && !cJSON_IsNull(command) ? strdup(command->valuestring) : NULL,
        line ? line_local_nonprim : NULL
        );

    return v0_0_39_cron_entry_local_var;
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
    if (line_local_nonprim) {
        v0_0_39_cron_entry_line_free(line_local_nonprim);
        line_local_nonprim = NULL;
    }
    return NULL;

}
