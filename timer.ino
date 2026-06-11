#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

unsigned long previousMillis = 0;
int seconds = 0;
int minutes = 0;

void setup() {

  lcd.init();
  lcd.backlight();

  lcd.setCursor(0, 0);
  lcd.print("ESP32 Timer");
}

void loop() {

  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= 1000) {

    previousMillis = currentMillis;

    seconds++;

    if (seconds == 60) {
      seconds = 0;
      minutes++;
    }

    lcd.setCursor(0, 1);

    if (minutes < 10) lcd.print("0");
    lcd.print(minutes);

    lcd.print(":");

    if (seconds < 10) lcd.print("0");
    lcd.print(seconds);

    lcd.print("   ");
  }
}
