const int buttonPin = 2;    // pin number for button
const int ledPin = 13;      // pin number for built_int LED

int buttonState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT);  // get intput from button
  pinMode(ledPin, OUTPUT);   // send output to LED
}

void dimmer(int freq, int duty) {
  int period, onTime, offTime;  
  period = 1000 / freq;                 // delay() is in milliseconds
  onTime = period * duty / 100;         // how to pretend duty is a fraction
  offTime = period - onTime;            // all time is accounted for (none lost to rounding)
  digitalWrite(LED_BUILTIN, HIGH);      // turn the LED on (HIGH is the voltage level)
  delay(onTime);                        // wait for the interval
  digitalWrite(LED_BUILTIN, LOW);       // turn the LED off by making the voltage LOW
  delay(offTime);                       // wait for a 10ms
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH){
    dimmer(10, 100);
  } else {
    dimmer(10, 50);
  }
}
