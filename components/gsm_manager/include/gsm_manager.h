#ifndef GSM_MANAGER_H
#define GSM_MANAGER_H

#include "esp_err.h"
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef enum
{
    GSM_DISCONNECTED = 0,
    GSM_CONNECTING,
    GSM_CONNECTED
} gsm_state_t;

esp_err_t gsm_manager_init(void);

esp_err_t gsm_manager_power_on(void);

esp_err_t gsm_manager_connect(void);

esp_err_t gsm_manager_disconnect(void);

gsm_state_t gsm_manager_get_state(void);

bool gsm_manager_is_connected(void);

#ifdef __cplusplus
}
#endif

#endif