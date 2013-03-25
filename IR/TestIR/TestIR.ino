
#define IR1 10
#define IR2 11
#define IR3 12
#define IR4 13

void setup()
{
    
    Serial.begin(9600);

    pinMode(IR1, INPUT);     
    pinMode(IR2, INPUT);     
    pinMode(IR3, INPUT);     
    pinMode(IR4, INPUT);     

}

void loop()
{
    Serial.print(digitalRead(IR1));Serial.print(",");
    Serial.print(digitalRead(IR2));Serial.print(",");
    Serial.print(digitalRead(IR3));Serial.print(",");
    Serial.print(digitalRead(IR4));Serial.println(" ");
}
