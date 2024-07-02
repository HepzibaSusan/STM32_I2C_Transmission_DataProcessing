# STM32 Arduino I2C Communication

# This repository contains a demonstration project for bidirectional communication over I2C between an STM32 microcontroller and an Arduino device. The STM32 board receives data from the Arduino via I2C communication, processes it, and demonstrates basic GPIO configuration and error handling functionalities using STM32 HAL libraries.

# Features
*I2C Communication* : Utilizes the I2C protocol for reliable data exchange between STM32 and Arduino.
*Data Handling*: Receives data packets from Arduino, stores them in a buffer, and assigns values to global variables on the STM32.
*Modular Processing:* Demonstrates modular data processing using separate methods for each variable assignment.
*Peripheral Initialization*: Uses STM32 HAL for initializing I2C and GPIO peripherals.
*Error Handling:* Implements error handling mechanisms to manage communication failures effectively.
*Basic Setup:* Provides a foundational setup for establishing and managing bidirectional communication over I2C.

# Usage
# Hardware Setup:
Connect STM32 and Arduino via I2C.
Ensure proper power and signal connections between the devices.

# Software Setup:
Clone this repository to your local environment.
Open the project in your STM32 development environment (e.g., STM32CubeIDE).

# Build and Flash:
Build the project and flash it onto your STM32 board.
Ensure Arduino is configured to send data over I2C to the STM32.

# Run the Application:
Upon running, the STM32 will receive data packets from the Arduino via I2C.
Data will be stored in the buffer and assigned to global variables.
Additional processing methods will be invoked to manipulate the received data.

# License
This software is licensed under terms that can be found in the LICENSE file in the root directory of this repository. If no LICENSE file comes with this software, it is provided AS-IS.

