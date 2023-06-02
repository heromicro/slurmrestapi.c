/*
 * v0_0_39_acct_gather_energy.h
 *
 * 
 */

#ifndef _v0_0_39_acct_gather_energy_H_
#define _v0_0_39_acct_gather_energy_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct v0_0_39_acct_gather_energy_t v0_0_39_acct_gather_energy_t;




typedef struct v0_0_39_acct_gather_energy_t {
    int average_watts; //numeric
    long base_consumed_energy; //numeric
    long consumed_energy; //numeric
    int current_watts; //numeric
    long previous_consumed_energy; //numeric
    long last_collected; //numeric

} v0_0_39_acct_gather_energy_t;

v0_0_39_acct_gather_energy_t *v0_0_39_acct_gather_energy_create(
    int average_watts,
    long base_consumed_energy,
    long consumed_energy,
    int current_watts,
    long previous_consumed_energy,
    long last_collected
);

void v0_0_39_acct_gather_energy_free(v0_0_39_acct_gather_energy_t *v0_0_39_acct_gather_energy);

v0_0_39_acct_gather_energy_t *v0_0_39_acct_gather_energy_parseFromJSON(cJSON *v0_0_39_acct_gather_energyJSON);

cJSON *v0_0_39_acct_gather_energy_convertToJSON(v0_0_39_acct_gather_energy_t *v0_0_39_acct_gather_energy);

#endif /* _v0_0_39_acct_gather_energy_H_ */

