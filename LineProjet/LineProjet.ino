#include <TridentTD_LineNotify.h>

#define SSID "vivo 1814" /////////////*************แก้
#define PASSWORD "champ123"////////**************แก้
#define LINE_TOKEN "JLTuOayK2TA5GGU3OXCNZKBA9XlbCHH0dG9LPu5BWDQ" ////***************แก้

int state = 1;
int sensor_pin = D6;
      void setup() {
  Serial.begin(115200); Serial.println();
  Serial.println(LINE.getVersion());
  WiFi.begin(SSID, PASSWORD);
  Serial.printf("WiFi connecting to %s\n", SSID);
  while (WiFi.status() != WL_CONNECTED) {
  Serial.print(".");
  delay(200);
  }
  Serial.printf("\nWiFi connected\nIP : ");
  Serial.println(WiFi.localIP());
  LINE.setToken(LINE_TOKEN);
  pinMode(sensor_pin , INPUT);
  }

      void loop() {
int sensor = digitalRead(sensor_pin);
if (sensor == 1 and state == 1) {
LINE.notify("มีจดหมายมาส่งครับ");
//LINE.notifySticker(4,271);
state = 0;
}
else if (sensor == 0 and state == 0) {
Serial.println("No object");
state = 1;
}
}
