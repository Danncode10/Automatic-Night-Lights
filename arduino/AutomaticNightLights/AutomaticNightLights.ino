// Automatic Night Lights and Street Lamps
// Shows the photoresistor reading and NIGHT/LIGHT status on a 16x2 I2C LCD.

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

const byte PHOTORESISTOR_PIN = A0;
const byte NIGHT_LIGHT_LED_PIN = 2;
const int DARK_THRESHOLD = 400;
const unsigned long READ_INTERVAL_MS = 200;

const byte LCD_ADDRESS = 0x3F;
const byte LCD_COLUMNS = 16;
const byte LCD_ROWS = 2;

LiquidCrystal_I2C lcd(LCD_ADDRESS, LCD_COLUMNS, LCD_ROWS);

unsigned long previousReadMillis = 0;

void setup() {
  Serial.begin(9600);
  pinMode(NIGHT_LIGHT_LED_PIN, OUTPUT);
  digitalWrite(NIGHT_LIGHT_LED_PIN, LOW);

  lcd.init();
  lcd.backlight();
  lcd.clear();
  lcd.print("Night Light");
  lcd.setCursor(0, 1);
  lcd.print("Starting...");

  Serial.println("Automatic night-light monitor started");
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousReadMillis >= READ_INTERVAL_MS) {
    previousReadMillis = currentMillis;
    updateNightLightStatus();
  }
}

void updateNightLightStatus() {
  int lightLevel = analogRead(PHOTORESISTOR_PIN);
  bool isNight = lightLevel < DARK_THRESHOLD;

  digitalWrite(NIGHT_LIGHT_LED_PIN, isNight ? HIGH : LOW);

  lcd.setCursor(0, 0);
  lcd.print("Light: ");
  lcd.print(lightLevel);
  lcd.print("    ");

  lcd.setCursor(0, 1);
  lcd.print("Status: ");
  lcd.print(isNight ? "NIGHT" : "LIGHT");
  lcd.print("   ");

  Serial.print("Photoresistor / LDR: ");
  Serial.print(lightLevel);
  Serial.print(" | Status: ");
  Serial.print(isNight ? "NIGHT" : "LIGHT");
  Serial.print(" | LED: ");
  Serial.println(isNight ? "ON" : "OFF");
}
