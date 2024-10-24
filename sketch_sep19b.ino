long x = 0;
long y = 200;
long z = 500;
void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);  //RGB blau
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(1, OUTPUT);   //RGB grün
  pinMode(0, OUTPUT); // RGB rot

  digitalWrite (0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(8, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(2000);

  digitalWrite (4, HIGH);
  delay (500);
  digitalWrite (3, HIGH);
  delay (500);
  digitalWrite (5, HIGH);
  delay (500);
  digitalWrite (11, HIGH);
  delay (500);
  digitalWrite (1, HIGH);
  delay (500);
  digitalWrite (6, HIGH); //RGB grün
  delay (500);
  digitalWrite (13, HIGH);
  delay (500);
  digitalWrite (12, HIGH); //4,3,12
  delay (500);
  digitalWrite (5, LOW);
  digitalWrite (11, LOW);
  digitalWrite (1, LOW);
  digitalWrite (6, LOW);
  digitalWrite (13, LOW);
  digitalWrite (10, HIGH);
  delay (500);
  digitalWrite (8, HIGH);
  delay (500);
  digitalWrite (9, HIGH);
  delay (500);
  digitalWrite (2, HIGH); //RGB gelb
  digitalWrite (1, HIGH); //RGB gelb
  delay (500);
  digitalWrite (2, LOW);
  digitalWrite (1, LOW);
  digitalWrite (0, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite (0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(8, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay (500);

  digitalWrite (13, HIGH);
  delay (200);
  digitalWrite(13, LOW);
  delay (100);
  digitalWrite(13, HIGH);
  delay (200);
  digitalWrite(13, LOW);

  digitalWrite (5, HIGH);
  delay (200);
  digitalWrite(5, LOW);
  delay (100);
  digitalWrite(5, HIGH);
  delay (200);
  digitalWrite(5, LOW);

  digitalWrite (3, HIGH);
  delay (1000);
  digitalWrite (12, HIGH);
  delay (1000);
  digitalWrite (3, LOW);
  digitalWrite (12, LOW);

  digitalWrite (7, HIGH);
  delay (200);
  digitalWrite(7, LOW);
  delay (100);
  digitalWrite(7, HIGH);
  delay (200);
  digitalWrite(7, LOW);
  digitalWrite (9, HIGH); //Lauflicht anfang
  delay (200);
  digitalWrite(9, LOW);
  delay (100);
  digitalWrite(9, HIGH);
  delay (200);
  digitalWrite(9, LOW);
  digitalWrite (10, HIGH);
  delay(500);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  delay(500);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  delay(500);
  digitalWrite(8, LOW);
  delay(500);
  digitalWrite (9, HIGH); //Lauflicht wiederholung
  delay (200);
  digitalWrite(9, LOW);
  delay (100);
  digitalWrite(9, HIGH);
  delay (200);
  digitalWrite(9, LOW);
  digitalWrite (10, HIGH);
  delay(500);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  delay(500);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  delay(500);
  digitalWrite(8, LOW); //Lauflicht ende
  delay(300);
  digitalWrite(13, HIGH);
  delay(500);
  digitalWrite(13, LOW);
  digitalWrite(6, HIGH);
  delay(500);
  digitalWrite(6, LOW);
  digitalWrite(0, HIGH);
  delay(500);
  digitalWrite(0, LOW);
  digitalWrite(11, HIGH);
  delay(500);
  digitalWrite(11, LOW);
  digitalWrite(5, HIGH);
  delay(500);
  digitalWrite(5, LOW);
  digitalWrite(0, HIGH);
  delay(300);
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(13, HIGH);
  delay(2000);
  digitalWrite (0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(8, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay (500);

  digitalWrite (13, HIGH);
  delay (200);
  digitalWrite(13, LOW);
  delay (100);
  digitalWrite(13, HIGH);
  delay (200);
  digitalWrite(13, LOW);

  digitalWrite (5, HIGH);
  delay (200);
  digitalWrite(5, LOW);
  delay (100);
  digitalWrite(5, HIGH);
  delay (200);
  digitalWrite(5, LOW);

  digitalWrite (3, HIGH);
  delay (1000);
  digitalWrite (12, HIGH);
  delay (1000);
  digitalWrite (3, LOW);
  digitalWrite (12, LOW);

  digitalWrite (7, HIGH);
  delay (200);
  digitalWrite(7, LOW);
  delay (100);
  digitalWrite(7, HIGH);
  delay (200);
  digitalWrite(7, LOW);
  delay(300);
  digitalWrite(4, HIGH); //Blinken anfang
  digitalWrite(10, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(11, HIGH);
  delay(500);
  digitalWrite(4, LOW);
  digitalWrite(10, LOW);
  digitalWrite(13, LOW);
  digitalWrite(11, LOW);
  delay(500);
  digitalWrite(4, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(11, HIGH);
  delay(500);
  digitalWrite(4, LOW);
  digitalWrite(10, LOW);
  digitalWrite(13, LOW);
  digitalWrite(11, LOW);
  delay(500);
  digitalWrite(4, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(13, HIGH);
  digitalWrite(11, HIGH);
  delay(500);
  digitalWrite(4, LOW);
  digitalWrite(10, LOW);
  digitalWrite(13, LOW);
  digitalWrite(11, LOW);
  delay(500); // Blinken Ende

  delay(300);
  digitalWrite(7, LOW);
  delay (200);
  digitalWrite(7, HIGH);
  delay (100);
  digitalWrite (7, HIGH);
  digitalWrite (12, LOW);
  digitalWrite (3, LOW);
  delay (1000);
  digitalWrite (12, HIGH);
  delay (1000);
  digitalWrite (3, HIGH);
  delay (200);
  digitalWrite(5, LOW);
  delay (200);
  digitalWrite (5, HIGH);
  delay (100);
  digitalWrite(5, LOW);

  digitalWrite(13, LOW);
  delay(200);
  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(200);
  digitalWrite (13, HIGH);

  delay (500);
  digitalWrite(13, LOW);
  digitalWrite(0, HIGH);
  delay(500);
  digitalWrite(6, LOW);
  digitalWrite(6, HIGH);
  delay(500);
  digitalWrite(13, HIGH);
  delay(500);

  digitalWrite(8, LOW);
  delay(500);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  digitalWrite(5, LOW);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);
  digitalWrite(2, LOW);
  digitalWrite(1, LOW);
  digitalWrite(0, LOW);
  delay(500);

  delay(2000);
  digitalWrite (13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(0, HIGH);
  delay(2000);
  digitalWrite (0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(8, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(500);

  digitalWrite(9, LOW);
  delay(200);
  digitalWrite(9, HIGH);
  delay(200);
  digitalWrite(9, LOW);
  digitalWrite (10, HIGH);
  delay(500);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  delay(500);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  delay(500);
  digitalWrite(8, LOW);
  delay(500);
  digitalWrite (9, HIGH);
  delay (200);
  digitalWrite(9, LOW);
  delay (100);
  digitalWrite(9, HIGH);
  delay (200);
  digitalWrite(9, LOW);
  digitalWrite (10, HIGH);
  delay(500);
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  delay(500);
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  delay(500);
  digitalWrite(8, LOW);
  delay(300);

  digitalWrite(12, HIGH); //Ende fängt an
  delay(y);
  digitalWrite(12, LOW);
  delay(z);
  digitalWrite(12, HIGH);
  delay(y);
  digitalWrite(12, LOW);
  delay(z);
  digitalWrite(12, HIGH); 
  delay(y);
  digitalWrite(12, LOW);
  delay(z);
  digitalWrite(12, HIGH);
  delay(y);
  digitalWrite(12, LOW);
  delay(z);
      digitalWrite(12,HIGH);
      delay(y);
      digitalWrite(12,LOW);
      delay(z);
      digitalWrite(3,HIGH);
      delay(y);
      digitalWrite(3,LOW);
      delay(z);
            digitalWrite(12,HIGH);
      delay(y);
      digitalWrite(12,LOW);
      delay(z);
      digitalWrite(3,HIGH); 
      delay(y);
      digitalWrite(3,LOW);
      delay(z);
            digitalWrite(12,HIGH); 
      delay(y);
      digitalWrite(12,LOW);
      delay(z);
      digitalWrite(12,HIGH); 
      delay(y);
      digitalWrite(12,LOW);
      delay(z);
 for (int n=1000; n>200; ){
  
    digitalWrite (13, HIGH);
  digitalWrite(12, HIGH);
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  digitalWrite(8, HIGH);
  digitalWrite(7, HIGH);
  digitalWrite(6, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(3, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(1, HIGH);
  digitalWrite(0, HIGH);
  delay(n);
    digitalWrite (0, LOW);
  digitalWrite(1, LOW);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(8, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  digitalWrite(12, LOW);
  digitalWrite(13, LOW);
  delay(n);

  n = n-200;
  
 }


  x = millis();
  Serial.println(x);















}

void loop() {
  // put your main code here, to run repeatedly:

}
