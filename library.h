#ifndef NUNCHUCK_LIBRARY_H
#define NUNCHUCK_LIBRARY_H

#include "Wire.h"
#include <cstdint>

// calibration values for accelerometer on the nunchuck
#define ACCEL_X_ZERO 512
#define ACCEL_Y_ZERO 512
#define ACCEL_Z_ZERO 512

// calibration values for the joystikc of nunchuck
#define JOYSTICK_X_ZERO 127
#define JOYSTICK_Y_ZERO 128

// Don't use encryption for serial communication
#define DISABLE_ENCRYPTION

// Define I2C address for Nunchuck controller
#define I2C_ADDRESS 0x52


// original code uses #if ARDUINO >=100 (NOT SURE WHY?)

#define I2C_READ() Wire.read()
#define I2C_WRITE(x) Wire.write(x)

#define I2C_START(x) Wire.beginTransmission(x)
#define I2C_STOP() Wire.endTransmission(true)

// Initialise data and cal arrays
uint8_t nunchuck_data[6];
uint8_t nunchuck_cal[16];

// Initialise Nunchuck Communication
static void nunchuck_init() {
    Wire.setClock(400000);
    delay(1)
}



void hello();

#endif