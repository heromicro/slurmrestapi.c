#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_37_signal.h"


char* v0_0_37_signal_v0_0_37_signal_ToString(slurm_rest_api_v0_0_37_signal__e v0_0_37_signal) {
    char *v0_0_37_signalArray[] =  { "NULL", "HUP", "INT", "QUIT", "ABRT", "KILL", "ALRM", "TERM", "USR1", "USR2", "URG", "CONT", "STOP", "TSTP", "TTIN", "TTOU" };
    return v0_0_37_signalArray[v0_0_37_signal];
}

slurm_rest_api_v0_0_37_signal__e v0_0_37_signal_v0_0_37_signal_FromString(char* v0_0_37_signal) {
    int stringToReturn = 0;
    char *v0_0_37_signalArray[] =  { "NULL", "HUP", "INT", "QUIT", "ABRT", "KILL", "ALRM", "TERM", "USR1", "USR2", "URG", "CONT", "STOP", "TSTP", "TTIN", "TTOU" };
    size_t sizeofArray = sizeof(v0_0_37_signalArray) / sizeof(v0_0_37_signalArray[0]);
    while(stringToReturn < sizeofArray) {
        if(strcmp(v0_0_37_signal, v0_0_37_signalArray[stringToReturn]) == 0) {
            return stringToReturn;
        }
        stringToReturn++;
    }
    return 0;
}

cJSON *v0_0_37_signal_v0_0_37_signal_convertToJSON(slurm_rest_api_v0_0_37_signal__e v0_0_37_signal) {
    cJSON *item = cJSON_CreateObject();
    if(cJSON_AddStringToObject(item, "v0_0_37_signal", v0_0_37_signal_v0_0_37_signal_ToString(v0_0_37_signal)) == NULL) {
        goto fail;
    }
    return item;
fail:
    cJSON_Delete(item);
    return NULL;
}

slurm_rest_api_v0_0_37_signal__e v0_0_37_signal_v0_0_37_signal_parseFromJSON(cJSON *v0_0_37_signalJSON) {
    slurm_rest_api_v0_0_37_signal__e *v0_0_37_signal = NULL;
    slurm_rest_api_v0_0_37_signal__e v0_0_37_signalVariable;
    cJSON *v0_0_37_signalVar = cJSON_GetObjectItemCaseSensitive(v0_0_37_signalJSON, "v0_0_37_signal");
    if(!cJSON_IsString(v0_0_37_signalVar) || (v0_0_37_signalVar->valuestring == NULL)){
        goto end;
    }
    v0_0_37_signalVariable = v0_0_37_signal_v0_0_37_signal_FromString(v0_0_37_signalVar->valuestring);
    return v0_0_37_signalVariable;
end:
    return 0;
}
