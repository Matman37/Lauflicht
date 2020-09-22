byte led[8] = {13, 12, 11, 10, 9, 8 , 7 , 6};
byte ledZustand [6][8] = {
  {1, 0, 0, 0, 0, 0, 0, 1},
  {0, 1, 0, 0, 0, 0, 1, 0},
  {0, 0, 1, 0, 0, 1, 0, 0},
  {0, 0, 0, 1, 1, 0, 0, 0},
  {0, 0, 1, 0, 0, 1, 0, 0},
  {0, 1, 0, 0, 0, 0, 1, 0},
};


void setup() {

  for (byte i = 0; i < 8; i++)
    pinMode(led[i], OUTPUT);
}

void loop() {



  for (byte i = 0; i < 6; i++)    //Zeile
  { for (byte j = 0; j < 8; j++)    //Spalte
    {
      digitalWrite (led[j], ledZustand[i][j]);
    }
delay (100);

  }}

