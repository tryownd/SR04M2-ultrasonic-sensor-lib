# SR04M-2 Arduino Library
SR04M-2 ultrasonic sensor lib SR04M-2.h

This Arduino library provides an easy-to-use interface for interfacing with the SR04M-2 ultrasonic sensor module. 
The library simplifies the initialization and usage of the sensor, allowing you to quickly integrate it into your Arduino projects.

## Installation

1. Download the ZIP archive of this repository.
2. In the Arduino IDE, go to **Sketch > Include Library > Add .ZIP Library...** and select the downloaded ZIP file.

## Usage

### Initialization

```cpp
#include <SR04M-2.h>

#define rxPin 27
SR04M2 ultrasonic(rxPin); // Initialize the sensor with the RX pin number

void setup() {
  ultrasonic.begin(); // Initialize the sensor
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int distance = ultrasonic.getDistance(); // Get the distance from the sensor in centimeters
  Serial.println(distance); // Print the distance value to the serial monitor
  delay(1000); // Wait for 1 second
}

/*

Initialization
begin(): Initializes the sensor and the required serial communication.
getDistance(): Returns the distance measured by the sensor in centimeters.
License
This library is open-source software released under the MIT License. See the LICENSE file for details.

Acknowledgments
This library was created and is maintained by tryownd.
Contributing
Contributions to this library are welcome. Please follow the Contribution Guidelines for more information.

If you encounter any issues or have suggestions, please create an issue.

*/
