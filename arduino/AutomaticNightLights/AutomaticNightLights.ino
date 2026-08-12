// Automatic Night Lights and Street Lamps
// Turns an LED on when the photoresistor detects darkness.

const byte PHOTORESISTOR_PIN = A0;
const byte NIGHT_LIGHT_LED_PIN = 2;
const int DARK_THRESHOLD = 400;
const unsigned long READ_INTERVAL_MS = 200;

unsigned long previousReadMillis = 0;

void setup() {
  Serial.begin(9600);
  pinMode(NIGHT_LIGHT_LED_PIN, OUTPUT);
  digitalWrite(NIGHT_LIGHT_LED_PIN, LOW);

  Serial.println("Automatic night light started");
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousReadMillis >= READ_INTERVAL_MS) {
    previousReadMillis = currentMillis;
    updateNightLight();
  }
}

void updateNightLight() {
  int lightLevel = analogRead(PHOTORESISTOR_PIN);
  bool isNight = lightLevel < DARK_THRESHOLD;

  digitalWrite(NIGHT_LIGHT_LED_PIN, isNight ? HIGH : LOW);

  Serial.print("Photoresistor: ");
  Serial.print(lightLevel);
  Serial.print(" | Status: ");
  Serial.print(isNight ? "NIGHT" : "LIGHT");
  Serial.print(" | LED: ");
  Serial.println(isNight ? "ON" : "OFF");
}
