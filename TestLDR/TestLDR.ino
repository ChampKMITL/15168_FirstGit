#include <SoftwareSerial.h>
// ขาที่ร ส่ง 
SoftwareSerial UnoSerial(4, 5); // RX | TX

//LDR set
int ldr = A1;
int val2 = 0;
int dataStatus = val2;


int analogPin = 0; //ประกาศตัวแปร ให้ analogPin แทนขา analog ขาที่5
//ค่าที่อ่านได้จากเซนเซอร์
int val = 0;
//setค่า 1
int status1 = 1;
//setค่า 0 
int status2 = 0;
//test dat
int TData = 123;

void setup() {
  // put your setup code here, to run once:
      pinMode(4, INPUT);
      pinMode(5, OUTPUT);
      Serial.begin(9600);
      UnoSerial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(analogPin);  //อ่านค่าสัญญาณ analog ขา5 ที่ต่อกับ Level Sensor Module v1
  val2 = analogRead(ldr); 
  //Serial.print("val = "); // พิมพ์ข้อมความส่งเข้าคอมพิวเตอร์ "val = "
  //Serial.println(String(val)); // พิมพ์ค่าของตัวแปร val

  if (val > 135) { 
   // UnoSerial.print("val1 = "); // พิมพ์ข้อมความส่งเข้าคอมพิวเตอร์ "val = " มีน้ำ ไฟที่ senser ติด status1
    UnoSerial.print(String(status1));
    Serial.println(String(status1));
    UnoSerial.print("\n");
  }
  else if (val < 120){ 
   // UnoSerial.print("val2 = "); // พิมพ์ข้อมความส่งเข้าคอมพิวเตอร์ "val = "ไม่มีน้ำ ในกับค่านี้ไปแจ้งเตือน Line ว่าให้เติมน้ำ  status2
    UnoSerial.print(String(status2));
    Serial.println(String(status2));
    UnoSerial.print("\n");
  }
    // if (val2 > val){

    // UnoSerial.print(String(val2));
    // Serial.println(String(val2));
    // UnoSerial.print("\n");
    // }
    
  
    


  delay(5000);

  
    
  
  

  // Serial.println(String(val2));

}
