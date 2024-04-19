#include <Arduino.h>


void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(921600);
  Serial.println("Hello World!");
}

void loop() {
  delay(2000);
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("Testing...");
  delay(2000);
  digitalWrite(LED_BUILTIN, LOW);
  Serial.println("Success!");
}

