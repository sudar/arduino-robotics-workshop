/*
  Blink
  Turns on an LED1 on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
#define LED1 1
#define LED2 0
#define BUZZER 6

void setup() {                
  // initialize the digital pin as an output.
  // Pin LED1 has an LED1 connected on most Arduino boards:
  pinMode(LED1, OUTPUT);     
  pinMode(LED2, OUTPUT);     
  pinMode(BUZZER, OUTPUT);     
}

void loop() {
    //digitalWrite(BUZZER, HIGH);   // set the LED1 on

  digitalWrite(LED1, HIGH);   // set the LED1 on
  digitalWrite(LED2, LOW);   // set the LED1 on
  delay(1000);              // wait for a second
  digitalWrite(LED1, LOW);    // set the LED1 off
  digitalWrite(LED2, HIGH);    // set the LED1 off
  delay(1000);              // wait for a second
}
