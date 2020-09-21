
byte LED [4] = {13,12,11,10};
void setup() {

pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
pinMode(10, OUTPUT);

}

void loop() {

    for(byte i = 0; i<4; i++)
digitalWrite(LED, HIGH);
delay(180);

}
