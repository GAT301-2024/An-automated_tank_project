// Define pin numbers
const int buzzerPin = 8;
const int redLedPin = 2;
const int yellowLedPin = 3;
const int greenLedPin = 4;
const int pumpPin = 9;
const int waterSensorPin = A0;

// Define water level thresholds (adjust these values based on your sensor)
const int lowLevelThreshold = 100;
const int minLevelThreshold = 300;
const int maxLevelThreshold = 700;

void setup() {
  // Initialize pins as outputs
  pinMode(buzzerPin, OUTPUT);
  pinMode(redLedPin, OUTPUT);
  pinMode(yellowLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);
  pinMode(pumpPin, OUTPUT);

  // Initialize serial communication for debugging
  Serial.begin(9600);
}

void loop() {
  // Read the water level from the sensor
  int waterLevel = analogRead(waterSensorPin);

  // Print the water level for debugging
  Serial.print("Water Level: ");
  Serial.println(waterLevel);

  // Determine the water level and control the LEDs, buzzer, and pump
  if (waterLevel < lowLevelThreshold) {
    digitalWrite(redLedPin, HIGH);
    digitalWrite(yellowLedPin, LOW);
    digitalWrite(greenLedPin, LOW);
    digitalWrite(buzzerPin, HIGH); // Buzzer on for low level
    digitalWrite(pumpPin, HIGH); // Turn on the pump
    Serial.println("Low water level");
  } else if (waterLevel < minLevelThreshold) {
    digitalWrite(redLedPin, LOW);
    digitalWrite(yellowLedPin, HIGH);
    digitalWrite(greenLedPin, LOW);
    digitalWrite(buzzerPin, LOW); // Buzzer off
    digitalWrite(pumpPin, HIGH); // Turn on the pump
    Serial.println("Water at minimum");
  } else if (waterLevel < maxLevelThreshold) {
    digitalWrite(redLedPin, LOW);
    digitalWrite(yellowLedPin, LOW);
    digitalWrite(greenLedPin, HIGH);
    digitalWrite(buzzerPin, LOW); // Buzzer off
    digitalWrite(pumpPin, LOW); // Turn off the pump
    Serial.println("Water at maximum");
  } else {
    digitalWrite(redLedPin, LOW);
    digitalWrite(yellowLedPin, LOW);
    digitalWrite(greenLedPin, LOW);
    digitalWrite(buzzerPin, LOW); // Buzzer off for maximum level
    digitalWrite(pumpPin, LOW); // Turn off the pump
    Serial.println("Water at maximum");
  }

  // Delay for stability
  delay(1000);
}
