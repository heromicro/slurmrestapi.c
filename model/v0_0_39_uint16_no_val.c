#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "v0_0_39_uint16_no_val.h"



v0_0_39_uint16_no_val_t *v0_0_39_uint16_no_val_create(
    int set,
    int infinite,
    long number
    ) {
    v0_0_39_uint16_no_val_t *v0_0_39_uint16_no_val_local_var = malloc(sizeof(v0_0_39_uint16_no_val_t));
    if (!v0_0_39_uint16_no_val_local_var) {
        return NULL;
    }
    v0_0_39_uint16_no_val_local_var->set = set;
    v0_0_39_uint16_no_val_local_var->infinite = infinite;
    v0_0_39_uint16_no_val_local_var->number = number;

    return v0_0_39_uint16_no_val_local_var;
}


void v0_0_39_uint16_no_val_free(v0_0_39_uint16_no_val_t *v0_0_39_uint16_no_val) {
    if(NULL == v0_0_39_uint16_no_val){
        return ;
    }
    listEntry_t *listEntry;
    free(v0_0_39_uint16_no_val);
}

cJSON *v0_0_39_uint16_no_val_convertToJSON(v0_0_39_uint16_no_val_t *v0_0_39_uint16_no_val) {
    cJSON *item = cJSON_CreateObject();

    // v0_0_39_uint16_no_val->set
    if(v0_0_39_uint16_no_val->set) {
    if(cJSON_AddBoolToObject(item, "set", v0_0_39_uint16_no_val->set) == NULL) {
    goto fail; //Bool
    }
    }


    // v0_0_39_uint16_no_val->infinite
    if(v0_0_39_uint16_no_val->infinite) {
    if(cJSON_AddBoolToObject(item, "infinite", v0_0_39_uint16_no_val->infinite) == NULL) {
    goto fail; //Bool
    }
    }


    // v0_0_39_uint16_no_val->number
    if(v0_0_39_uint16_no_val->number) {
    if(cJSON_AddNumberToObject(item, "number", v0_0_39_uint16_no_val->number) == NULL) {
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

v0_0_39_uint16_no_val_t *v0_0_39_uint16_no_val_parseFromJSON(cJSON *v0_0_39_uint16_no_valJSON){

    v0_0_39_uint16_no_val_t *v0_0_39_uint16_no_val_local_var = NULL;

    // v0_0_39_uint16_no_val->set
    cJSON *set = cJSON_GetObjectItemCaseSensitive(v0_0_39_uint16_no_valJSON, "set");
    if (set) { 
    if(!cJSON_IsBool(set))
    {
    goto end; //Bool
    }
    }

    // v0_0_39_uint16_no_val->infinite
    cJSON *infinite = cJSON_GetObjectItemCaseSensitive(v0_0_39_uint16_no_valJSON, "infinite");
    if (infinite) { 
    if(!cJSON_IsBool(infinite))
    {
    goto end; //Bool
    }
    }

    // v0_0_39_uint16_no_val->number
    cJSON *number = cJSON_GetObjectItemCaseSensitive(v0_0_39_uint16_no_valJSON, "number");
    if (number) { 
    if(!cJSON_IsNumber(number))
    {
    goto end; //Numeric
    }
    }


    v0_0_39_uint16_no_val_local_var = v0_0_39_uint16_no_val_create (
        set ? set->valueint : 0,
        infinite ? infinite->valueint : 0,
        number ? number->valuedouble : 0
        );

    return v0_0_39_uint16_no_val_local_var;
end:
    return NULL;

}
