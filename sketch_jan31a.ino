#include "DigitLedDisplay.h"

int relayPin = 3;
int tempSensor = A4;

#define DIN 8
#define CS 9
#define CLK 10

DigitLedDisplay ld = DigitLedDisplay(DIN, CS, CLK);

void setup() {
  pinMode(relayPin, OUTPUT);
  ld.setBright(10);
  ld.setDigitLimit(2);
  Serial.begin(9600);
}

void loop() {
  //assuming it is nc

  float temp = analogRead(tempSensor);
  temp = temp * 0.48828125;
  float tempC = (temp-32) * .5556;

  Serial.println(tempC);
  ld.printDigit(tempC);
  
  if(tempC >= 20)
  {
    //HIGH BECAUSE ITS NORMALLY CLOSED
    digitalWrite(relayPin, HIGH);
  }
  else {
    digitalWrite(relayPin, LOW);
  }

  delay(1000);
  
}
