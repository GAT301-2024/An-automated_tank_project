OLWA SOLOMON 23-U-1647-GCS-PS

AN_AUTOMATED_TANK_PROJECT

_**MATERIALS AND TOOLS USED**__

Arduino Uno

Ultrasonic Sensor (e.g., HC-SR04)

Relay Module

Water Pump

Three LEDs (Red, Yellow, Green)

Resistors (for the LEDs, typically 220 ohms)

Power Supply

Wiring:

Connect the VCC and GND of the ultrasonic sensor to the 5V and GND of the ESP32.

Connect the Trig pin of the ultrasonic sensor to GPIO 23 of the ESP32.

Connect the Echo pin of the ultrasonic sensor to GPIO 22 of the ESP32.

Connect the IN pin of the relay module to GPIO 25 of the ESP32.

Connect the VCC and GND of the relay module to the 5V and GND of the ESP32.

Connect the water pump to the relay module.

Connect the anode (longer leg) of the Red LED to GPIO 26 of the ESP32 through a resistor.

Connect the cathode (shorter leg) of the Red LED to the GND of the ESP32.

Connect the anode (longer leg) of the Yellow LED to GPIO 27 of the ESP32 through a resistor.

Connect the cathode (shorter leg) of the Yellow LED to the GND of the ESP32.

Connect the anode (longer leg) of the Green LED to GPIO 14 of the ESP32 through a resistor.

Connect the cathode (shorter leg) of the Green LED to the GND of the ESP32.


Explanation:

Ultrasonic Sensor: Measures the distance to the water surface.

Relay Module: Controls the water pump.

LEDs: Indicate different water levels.

Red LED: Lights up when the water level is very low.

Yellow LED: Lights up when the water level is at the minimum.

Green LED: Lights up when the water level is at the maximum.

Setup Function: Initializes the pins and ensures the pump and LEDs are off initially.

Loop Function: Continuously measures the water level and controls the pump and LEDs based on the defined thresholds.


Notes:
Adjust the veryLowWaterLevel, minWaterLevel, and maxWaterLevel thresholds according to your tank's dimensions.

Ensure proper power supply and wiring to avoid damaging the components.

You may need to calibrate the ultrasonic sensor for accurate distance measurements.

This code provides a basic framework for an automated water tank control system with LED indicators for different water levels.
You can expand it with additional features like Wi-Fi connectivity, remote monitoring, and more sophisticated control logic as needed.
