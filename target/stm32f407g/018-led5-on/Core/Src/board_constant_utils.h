#ifndef STD_INT_H
#define STD_INT_H
#include <stdint.h>
#endif

uint32_t getRccEnableAHB1RegisterAddress();

uint32_t getGpiodModeRegisterAddress();
uint32_t getGpiodDataRegisterAddress();

uint32_t getGpioaModeRegisterAddress();
uint32_t getGpioaDataRegisterAddress();


uint32_t const rcc_AHB1_base_address = 0x40023800;

uint8_t const rcc_enable_register_offset = 0x30;

uint32_t const gpiod_base_address = 0x40020C00;
uint32_t const gpioa_baseaddress  = 0x40020000;

uint8_t const gpio_mode_register_offset     = 0x00;
uint8_t const gpio_in_data_register_offset  = 0x10;
uint8_t const gpio_out_data_register_offset = 0x14;

uint32_t getRccEnableAHB1RegisterAddress() {
	return rcc_AHB1_base_address + rcc_enable_register_offset;
}

uint32_t getGpioaModeRegisterAddress() {
	return gpioa_baseaddress + gpio_mode_register_offset;
}

uint32_t getGpioaDataRegisterAddress() {
	return gpioa_baseaddress + gpio_in_data_register_offset;
}

uint32_t getGpiodModeRegisterAddress() {
	return gpiod_base_address + gpio_mode_register_offset;
}

uint32_t getGpiodDataRegisterAddress() {
	return gpiod_base_address + gpio_out_data_register_offset;
}
