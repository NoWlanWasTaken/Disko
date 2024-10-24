#include <LiquidCrystal_I2C.h>
#include <Wire.h>
LiquidCrystal_I2C Lcd (0x27,16, 2);
void setup() {

  
  // put your setup code here, to run once:
Lcd.init();
}

void loop() {
  // put your main code here, to run repeatedly:
Lcd.clear();
Lcd.setCursor (3, 0);
Lcd.print ("Zeit:");
Lcd.print (millis());
delay (100);
}
