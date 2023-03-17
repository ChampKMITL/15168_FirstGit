#include <DHT.h>

void setup() {
  Serail.begin(9600);
  dht.setup(D1);

}

void loop() {
  Serail.print("Hum" + Sting(dht.getHumidity()) + "%");
  Serail.print("\t");
  Serail.println("Temp" + Sting(dht.getTemperature()) + "C");
  dalay(1000);
}
