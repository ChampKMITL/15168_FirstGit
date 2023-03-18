//#include <Wire.h>
#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);
//LiquidCrystal_I2C lcd(0x3F, 16, 2);
// ม่วง D4 SCL เขียว เทา
//เหลือง D6 SDA น้ำเงิน ขาว
void setup()
{
  
  lcd.begin();
  lcd.display();        //เปิดหน้าจอ
  lcd.backlight();      //เปิดไฟ backlight 
  //lcd.home();
  // lcd.print("Hello, world!");
  // lcd.setCursor(0, 1);
  // lcd.print("www.9Arduino.com");
}
void loop() {
   //ส่วนแสดงค่าที่จอ
      lcd.home();
      lcd.print("Temp : ");
      lcd.print("34");
      lcd.print(" C");

      lcd.setCursor(0, 1);
      lcd.print("Humidity : ");
      lcd.print("70");
      lcd.print(" %");
      lcd.setCursor(0, 2);
      
      lcd.print("Hum in soil:");
      lcd.print("563");
      lcd.print(" %");
      lcd.setCursor(0, 3);
}