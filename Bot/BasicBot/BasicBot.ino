#define EA 3
#define IA1 2
#define IA2 4

#define EB 5
#define IB1 7
#define IB2 8

void setup() {
 pinMode(EA, OUTPUT);
 pinMode(IA1, OUTPUT); 
 pinMode(IA2, OUTPUT);  
 
 pinMode(EB, OUTPUT);
 pinMode(IB1, OUTPUT); 
 pinMode(IB2, OUTPUT);  
}

void loop() {
 digitalWrite(EA, HIGH);

 digitalWrite(IA1, HIGH);
 digitalWrite(IA2, LOW); 
 
 digitalWrite(EB, HIGH);

 digitalWrite(IB1, HIGH);
 digitalWrite(IB2, LOW); 

delay(10000);
 digitalWrite(EA, LOW);
 digitalWrite(EA, HIGH);

 digitalWrite(IA1, LOW);
 digitalWrite(IA2, HIGH); 
 
 digitalWrite(EB, LOW); 
 digitalWrite(EB, HIGH);

 digitalWrite(IB1, LOW);
 digitalWrite(IB2, HIGH); 
  
}
