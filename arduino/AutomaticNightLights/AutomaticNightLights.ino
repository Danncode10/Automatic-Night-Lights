// Automatic Night Lights and Street Lamps - sensor monitoring mini-activity
// Reads an IR obstacle sensor and an LDR voltage divider every 200 ms.

const byte IR_SENSOR_PIN = 2;
const byte LDR_SENSOR_PIN = A0;
const unsigned long READ_INTERVAL_MS = 200;

unsigned long previousReadMillis = 0;

void setup() {
  pinMode(IR_SENSOR_PIN, INPUT);
  Serial.begin(9600);

  Serial.println("IR and LDR sensor monitor started");
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousReadMillis >= READ_INTERVAL_MS) {
    previousReadMillis = currentMillis;
    printSensorReadings();
  }
}

void printSensorReadings() {
  int irSensorState = digitalRead(IR_SENSOR_PIN);
  int ldrSensorValue = analogRead(LDR_SENSOR_PIN);

  // Most IR obstacle modules are active-low: LOW means obstacle detected.
  const char* obstacleStatus = irSensorState == LOW ? "OBSTACLE DETECTED" : "CLEAR";

  Serial.print("IR: ");
  Serial.print(irSensorState == LOW ? "LOW" : "HIGH");
  Serial.print(" (");
  Serial.print(obstacleStatus);
  Serial.print(") | LDR: ");
  Serial.println(ldrSensorValue);
}
