// LED turns on when the button is pushed
const int ledPin = 13;      // pin number for LED
const int buttonPin = 2;    // pin number for pushbutton

int buttonState = 0;  // stores pushbutton status

void setup() {
  pinMode(ledPin, OUTPUT);  // initialize LED as an output
  pinMode(buttonPin, INPUT);  // initialize button as input
}

void loop() {
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH) {
    digitalWrite(ledPin, HIGH);  // turn the LED on
  } else {
    digitalWrite(ledPin, LOW);   // turn the LED off
  }
}

