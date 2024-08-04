OLWA SOLOMON 23-U-1647-GCS-PS

AN_AUTOMATED_TANK_PROJECT

_**MATERIALS AND TOOLS USED**_

**Hardware Components:**

Arduino Board (e.g., Arduino Uno)

Buzzer

Red LED (for low water level)

Yellow LED (for minimum water level)

Green LED (for maximum water level)

Water Pump

Water Sensor (e.g., a float switch or ultrasonic sensor)

Resistors (for LEDs)

Jumper wires

Breadboard

**Wiring:**

Buzzer: Connect to a digital pin (e.g., pin 8).

Red LED: Connect to a digital pin (e.g., pin 2) with a resistor.

Yellow LED: Connect to a digital pin (e.g., pin 3) with a resistor.

Green LED: Connect to a digital pin (e.g., pin 4) with a resistor.

Water Pump: Connect to a digital pin (e.g., pin 9) with a relay or MOSFET if the pump requires more current than the Arduino can supply.

Water Sensor: Connect the sensor output to an analog pin (e.g., pin A0).

                  **Explanation:**__
                  
Pin Definitions: Define the pins for the buzzer, LEDs, water pump, and water sensor.

Thresholds: Define the thresholds for low, minimum, and maximum water levels. Adjust these values based on your specific sensor and setup.

Setup Function: Initialize the pins as outputs and start serial communication for debugging.

Loop Function:

Read the water level from the sensor.

Print the water level to the serial monitor.

Determine the water level and control the LEDs, buzzer, and water pump accordingly.

Print messages to the serial monitor based on the water level.

Use digitalWrite to control the LEDs, buzzer, and pump based on the water level.

Add a delay for stability.

            **Notes:**
Adjust the thresholds (lowLevelThreshold, minLevelThreshold, maxLevelThreshold) based on the actual readings from your water sensor.

Ensure that the water pump is properly controlled using a relay or MOSFET if it requires more current than the Arduino can supply.

Test the system thoroughly to ensure it works as expected.

Open the Serial Monitor in the Arduino IDE to see the printed messages.
