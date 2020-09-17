void setup() {

pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);

#define roteLED1 13
#define roteLED2 12
#define roteLED3 11
#define roteLED4 10

}

void loop() {
                           // Lauflicht rechts         
digitalWrite(roteLED1, HIGH);
delay(180);
digitalWrite(roteLED1, LOW);
digitalWrite(roteLED2, HIGH);
delay(180);
digitalWrite(roteLED2, LOW);
digitalWrite(roteLED3, HIGH);
delay(180);
digitalWrite(roteLED3, LOW);
digitalWrite(roteLED4, HIGH);
delay(180);
digitalWrite(roteLED4, LOW);
                            //Lauflicht links
digitalWrite(roteLED3, HIGH);
delay(180);
digitalWrite(roteLED3, LOW);
digitalWrite(roteLED2, HIGH);
delay(180);
digitalWrite(roteLED2, LOW);

}
