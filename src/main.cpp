#include <Arduino.h>
const int ledPin=D2;

void setup() {
  pinMode(ledPin, OUTPUT); 
  Serial.begin(115200);    
}

void loop() {
  digitalWrite(ledPin, HIGH);
  Serial.println("LED ON");   
  delay(1000);       

  digitalWrite(ledPin, LOW);
  Serial.println("LED OFF");  
  delay(1000); 
}
