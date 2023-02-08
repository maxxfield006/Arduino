int tempPin = A5;
int ledPin = 7;
int ledPinB = 2;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(ledPinB, OUTPUT);
}

void loop() {
  float tempF = analogRead(tempPin);
  tempF = tempF * 0.48828125;
  float tempC = (tempF-32)*.5556;

  if (tempC >= 25) {
    digitalWrite(ledPin, HIGH);
  }
  else if (tempC <= 15){
    digitalWrite(ledPinB, HIGH);
  }
    
  else {
    digitalWrite(ledPin, LOW);
    digitalWrite(ledPinB, LOW);
  }
  
  float milliS = millis();
  float seconds = milliS / 1000;
  delay(600);

  Serial.print(tempC);
  Serial.print(" C ");
  Serial.print("\t");
  Serial.print(seconds);
  Serial.println();
}
