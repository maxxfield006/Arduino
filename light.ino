int lightPin = A0;

void setup() {
  pinMode(7, OUTPUT);
  pinMode(8,OUTPUT);
  
  pinMode(lightPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  
  int lightThreshold = analogRead(lightPin);

 
  if (lightThreshold > 70){
    digitalWrite(7, LOW);
    digitalWrite(8,HIGH);
    
    Serial.print("light");
  }

  
  else if (lightThreshold <= 70){
    digitalWrite(7, HIGH);
    digitalWrite(8,LOW);
    
    Serial.print(lightThreshold);
  }

  Serial.print(" ");
  delay(200);
  
}
