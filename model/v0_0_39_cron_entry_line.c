#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_cron_entry_line.h"



v0_0_39_cron_entry_line_t *v0_0_39_cron_entry_line_create(
    int end
    ) {
    v0_0_39_cron_entry_line_t *v0_0_39_cron_entry_line_local_var = malloc(sizeof(v0_0_39_cron_entry_line_t));
    if (!v0_0_39_cron_entry_line_local_var) {
        return NULL;
    }
    v0_0_39_cron_entry_line_local_var->end = end;

    return v0_0_39_cron_entry_line_local_var;
}


void v0_0_39_cron_entry_line_free(v0_0_39_cron_entry_line_t *v0_0_39_cron_entry_line) {
    if(NULL == v0_0_39_cron_entry_line){
        return ;
    }
    listEntry_t *listEntry;
    free(v0_0_39_cron_entry_line);
}

cJSON *v0_0_39_cron_entry_line_convertToJSON(v0_0_39_cron_entry_line_t *v0_0_39_cron_entry_line) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_cron_entry_line->end
    if(v0_0_39_cron_entry_line->end) {
    if(cJSON_AddNumberToObject(item, "end", v0_0_39_cron_entry_line->end) == NULL) {
    goto fail; //Numeric
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

v0_0_39_cron_entry_line_t *v0_0_39_cron_entry_line_parseFromJSON(cJSON *v0_0_39_cron_entry_lineJSON){

    v0_0_39_cron_entry_line_t *v0_0_39_cron_entry_line_local_var = NULL;

    // v0_0_39_cron_entry_line->end
    cJSON *end = cJSON_GetObjectItemCaseSensitive(v0_0_39_cron_entry_lineJSON, "end");
    if (end) { 
    if(!cJSON_IsNumber(end))
    {
    goto end; //Numeric
    }
    }


    v0_0_39_cron_entry_line_local_var = v0_0_39_cron_entry_line_create (
        end ? end->valuedouble : 0
        );

    return v0_0_39_cron_entry_line_local_var;
end:
    return NULL;

}
