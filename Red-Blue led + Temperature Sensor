//Pins that LED + Temp sensor are on
int tempPin = A5;
int ledPin = 7;
int ledPinB = 2;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(ledPinB, OUTPUT);
}

void loop() {
  //This bit of code takes the temperature sensors input and converts it celcius
  float tempF = analogRead(tempPin);
  tempF = tempF * 0.48828125;
  float tempC = (tempF-32)*.5556;
  
  //If the temperature is above 25C it will turn the red led on, and if its below 15C it will turn the blue led on
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
  
}
