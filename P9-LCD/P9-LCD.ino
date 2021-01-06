//connection :: SDA->D2 ;; SCL->D1

#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x3F, 16, 2);

void setup() {
  lcd.begin(16,2);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(5, 0);
  lcd.print("Home");
  lcd.setCursor(3, 1);
  lcd.print("Automation");
}

void loop() {}
