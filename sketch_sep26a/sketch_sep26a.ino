#include <M5Atom.h>
#include <DHT.h>


#define DHTPIN 21
#define DHTTYPE DHT22
DHT dht(DHTPIN, DHTTYPE);

int chk;
float hum;
float temp;



void setup() {
  M5.begin();
  dht.begin();
  Serial.begin(9600);
  // pinMode(21, INPUT);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  delay(2000);
  hum= dht.readHumidity();
  temp= dht.readTemperature();
  Serial.print("Humidity: ");
  Serial.print(hum);
  Serial.print("%, Temp: ");
  Serial.print(temp);
  Serial.println("Celcius");
  delay(10000);

}
