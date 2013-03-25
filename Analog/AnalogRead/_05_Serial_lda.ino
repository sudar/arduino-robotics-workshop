void setup() {
 Serial.begin(9600);   
// pinMode (3, INPUT);
// Serial.println("Waiting for button to be pressed: "); 
}

void loop() {
  Serial.println(analogRead(A0));
  delay(100);
//  button = digitalRead(3);
//  if (button == HIGH) {
//    Serial.println("Button Pressed");  
//  }
}
