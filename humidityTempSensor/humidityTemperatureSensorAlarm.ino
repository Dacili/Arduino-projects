#include "DHT.h"

// params are pin number, and type
DHT sensorMedi (2, DHT22);
int speakerPin = 4;

void setup() {
   Serial.begin(115200);
   sensorMedi.begin();
   pinMode(speakerPin, OUTPUT); // speaker pin
}

void loop() {
    float temperature = sensorMedi.readTemperature();
    if(temperature < 50){
      noTone(speakerPin);
    }
    else {
      tone(speakerPin, 262, 3000);
    }
  float humidity = sensorMedi.readHumidity();
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print("%  Temperature: ");
  Serial.print(temperature);
  Serial.println("°C ");
  delay(2000);
}
