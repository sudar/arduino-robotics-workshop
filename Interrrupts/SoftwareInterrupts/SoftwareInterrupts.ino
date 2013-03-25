#include <PinChangeInt.h>

void interruptFunction() {
  Serial.print("Interrupt occured for pin: ");
  Serial.println(PCintPort::arduinoPin);
}

void setup() {  
  Serial.begin(115200);
  
  pinMode(2, OUTPUT);
  PCintPort::attachInterrupt(2, &interruptFunction, CHANGE);
  
  pinMode(3, OUTPUT);  
  PCintPort::attachInterrupt(3, &interruptFunction, CHANGE);
  
  Serial.println("Ready");
}

void loop() {
  char val;
  while (Serial.available()) {
    val = Serial.read();
       
    if (val == '2') {
      digitalWrite(2, HIGH);
    }
    
    if (val == '3') {
      digitalWrite(3, HIGH);      
    }
  }
}
