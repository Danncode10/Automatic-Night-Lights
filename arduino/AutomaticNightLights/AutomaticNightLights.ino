// Automatic Night Lights and Street Lamps - photoresistor monitoring activity
// Reads the photoresistor voltage divider every 200 ms.

const byte PHOTORESISTOR_PIN = A0;
const unsigned long READ_INTERVAL_MS = 200;

unsigned long previousReadMillis = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("Photoresistor monitor started");
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousReadMillis >= READ_INTERVAL_MS) {
    previousReadMillis = currentMillis;
    printLightReading();
  }
}

void printLightReading() {
  int lightLevel = analogRead(PHOTORESISTOR_PIN);

  Serial.print("Photoresistor / LDR: ");
  Serial.println(lightLevel);
}
