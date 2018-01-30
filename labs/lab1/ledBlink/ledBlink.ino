// makes the on-board LED blink in a certain manner

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

// blink for "interval" seconds and turn off
void timedBlink(int interval){
  digitalWrite(LED_BUILTIN, HIGH);
  delay(interval * 1000); // arguments in nanoseconds
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);
}

// the button turns on for 1 second, 2 seconds and 3 second with 1 second turnoff time between each blink.
void sequenceBlink(int interval) {
  for(int i = 1; i <= 3; i++){
    timedBlink(i);
  }
}

void loop() {
  // put your main code here, to run repeatedly:
  sequenceBlink(2);
}
