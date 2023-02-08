int buttonPin = 1;
int ledPin = 0;

int buttonState = 0;
int ledState = LOW;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    if (ledState == LOW) {
      ledState == HIGH;
    }
    else {
      ledState == LOW;
    }
  }
  digitalWrite(ledPin, ledState);
  
}
