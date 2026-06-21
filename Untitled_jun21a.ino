#include "thingProperties.h"

void setup() {
  Serial.begin(115200);
  delay(1500);

  initProperties();
  ArduinoCloud.begin(ArduinoIoTPreferredConnection);

  setDebugMessageLevel(2);
  ArduinoCloud.printDebugInfo();

  firmwareversion = "1.0.0";

  Serial.println("Hirup.id Dummy Monitoring Started");
}

void loop() {
  ArduinoCloud.update();

  airQuality = random(100, 1500);

  Serial.print("Air Quality (Dummy): ");
  Serial.println(airQuality);

  delay(3000);
}