const int pinLED1 = 11;
const int pinLED2 = 12;
const int pinLED3 = 13;

int timeDelay = 1000; // Move the declaration outside the setup function to make it accessible globally.

void setup() {
  // Initialize pins as outputs
  pinMode(pinLED1, OUTPUT);
  pinMode(pinLED2, OUTPUT);
  pinMode(pinLED3, OUTPUT);
}

void loop() {
  // Decrease the delay
  timeDelay = timeDelay - 100;

  // Reset delay if it reaches or goes below 0
  if (timeDelay <= 0) {
    timeDelay = 1000; // Missing semicolon in original code
  }

  // Blink LED1
  digitalWrite(pinLED1, HIGH);
  delay(timeDelay);
  digitalWrite(pinLED1, LOW);

  // Blink LED2
  digitalWrite(pinLED2, HIGH);
  delay(timeDelay);
  digitalWrite(pinLED2, LOW);

  // Blink LED3
  digitalWrite(pinLED3, HIGH);
  delay(timeDelay); // Fixed incorrect reference to `timeDelay1000`
  digitalWrite(pinLED3, LOW);
}
