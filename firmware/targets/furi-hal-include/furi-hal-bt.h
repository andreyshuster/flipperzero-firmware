#pragma once

#include <m-string.h>
#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

/** Initialize */
void furi_hal_bt_init();

/** Start BLE app */
bool furi_hal_bt_start_app();

/** Get BT/BLE system component state */
void furi_hal_bt_dump_state(string_t buffer);

/** Get BT/BLE system component state */
bool furi_hal_bt_is_alive();

/**
 * Lock shared access to flash controller
 * @return true if lock was successful, false if not
 */
bool furi_hal_bt_lock_flash();

/** Unlock shared access to flash controller */
void furi_hal_bt_unlock_flash();

/** Start ble tone tx at given channel and power */
void furi_hal_bt_start_tone_tx(uint8_t channel, uint8_t power);

/** Stop ble tone tx */
void furi_hal_bt_stop_tone_tx();

/** Start sending ble packets at a given frequency and datarate */
void furi_hal_bt_start_packet_tx(uint8_t channel, uint8_t pattern, uint8_t datarate);

/** Stop sending ble packets */
uint16_t furi_hal_bt_stop_packet_test();

/** Start receiving packets */
void furi_hal_bt_start_packet_rx(uint8_t channel, uint8_t datarate);

/** Set up the RF to listen to a given RF channel */
void furi_hal_bt_start_rx(uint8_t channel);

/** Stop RF listenning */
void furi_hal_bt_stop_rx();

/** Get RSSI */
float furi_hal_bt_get_rssi();

/** Get number of transmitted packets */
uint32_t furi_hal_bt_get_transmitted_packets();

#ifdef __cplusplus
}
#endif
