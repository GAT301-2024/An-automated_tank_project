// Define the pins for the sensors, LEDs, buzzer, and motor
const int waterSensorPin = A0; // Analog pin for water level sensor
const int redLedPin = 2;
const int greenLedPin = 3;
const int buzzerPin = 4;
const int motorPin = 5;

// Define the water level thresholds
const int lowLevel = 200; // Adjust this value based on your sensor's output
const int maxLevel = 600; // Adjust this value based on your sensor's output

void setup() {
  // Initialize the pins as outputs
  pinMode(redLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(motorPin, OUTPUT);

  // Initialize serial communication for debugging
  Serial.begin(9600);
}

void loop() {
  // Read the water level from the sensor
  int waterLevel = analogRead(waterSensorPin);

  // Print the water level for debugging
  Serial.print("Water Level: ");
  Serial.println(waterLevel);

  // Check the water level and control the LEDs, buzzer, and motor accordingly
  if (waterLevel < lowLevel) {
    // Water level is low
    digitalWrite(redLedPin, HIGH);
    digitalWrite(greenLedPin, LOW);
    tone(buzzerPin, 1000); // Sound the buzzer
    digitalWrite(motorPin, HIGH); // Turn on the motor to open the tap
    Serial.println("Water level is low");
  } else if (waterLevel >= maxLevel) {
    // Water level is at the maximum
    digitalWrite(redLedPin, LOW);
    digitalWrite(greenLedPin, HIGH);
    noTone(buzzerPin); // Turn off the buzzer
    digitalWrite(motorPin, LOW); // Turn off the motor to close the tap
    Serial.println("Water level is at maximum");
  }

  // Delay for a short period before checking the water level again
  delay(1000);
}
