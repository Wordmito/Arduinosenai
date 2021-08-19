int visor=13;
int ledF=12;
int ledA=11;
int ledB=10;
int ledE=9;
int ledD=8;
int ledC=7;

void setup()
{
  pinMode(visor, OUTPUT);
  pinMode(ledF, OUTPUT);
  pinMode(ledA, OUTPUT);
  pinMode(ledB, OUTPUT);
  pinMode(ledE, OUTPUT);
  pinMode(ledD, OUTPUT);
  pinMode(ledC, OUTPUT);
  
  digitalWrite(visor, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledC, HIGH);
}

// numero 0

void loop()
{
 digitalWrite(visor, HIGH);
  digitalWrite(ledF, LOW);
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledC, LOW);
  
  delay (1000);
  
  //numero 1
  
  digitalWrite(visor, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, LOW);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledC, LOW);
  
  delay (1000);
  
  digitalWrite(visor, LOW);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledC, HIGH);
   
  delay (1000);
  
  digitalWrite(visor, LOW);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledD, LOW);
  digitalWrite(ledC, LOW);
  
  delay (1000);
  
  digitalWrite(visor, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, LOW);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledC, LOW);
  
  delay (1000);
  
  digitalWrite(visor,LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledD, LOW);
  digitalWrite(ledC, LOW);
  
  delay (1000);
  
  digitalWrite(visor, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledE, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledC, LOW);
  
  delay (1000);
  
  digitalWrite(visor, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledC, LOW);
  
  delay (1000);
  
  digitalWrite(visor, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledC, LOW);
  
  delay (1000);
  
  digitalWrite(visor, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledD, LOW);
  digitalWrite(ledC, LOW);
  
  delay (1000);
  
  digitalWrite(visor, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledC, LOW);
  
  delay (1000);
  
  digitalWrite(visor, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledC, LOW);
  
  delay (1000);
  
  digitalWrite(visor, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledE, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledC, LOW);
  
  delay (1000);
   
  digitalWrite(visor,LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, HIGH);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledD, LOW);
  digitalWrite(ledC, LOW);
  
  delay (1000);
  
   digitalWrite(visor, LOW);
  digitalWrite(ledF, LOW);
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, LOW);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledC, LOW);
  
  delay (1000);
  
  digitalWrite(visor, LOW);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledD, LOW);
  digitalWrite(ledC, LOW);
  
  delay (1000);
  
  digitalWrite(visor, LOW);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledA, LOW);
  digitalWrite(ledB, LOW);
  digitalWrite(ledE, LOW);
  digitalWrite(ledD, LOW);
  digitalWrite(ledC, HIGH);
   
  delay (1000);
  
  digitalWrite(visor, HIGH);
  digitalWrite(ledF, HIGH);
  digitalWrite(ledA, HIGH);
  digitalWrite(ledB, LOW);
  digitalWrite(ledE, HIGH);
  digitalWrite(ledD, HIGH);
  digitalWrite(ledC, LOW);
  
  delay (1000); 
}