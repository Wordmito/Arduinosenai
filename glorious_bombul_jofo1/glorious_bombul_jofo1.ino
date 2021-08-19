// C++ code
//
int LED =13;
int lid =12;
int lod =11;

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(lid, OUTPUT);
}

void loop()
{ 
  digitalWrite (LED, LOW);
  digitalWrite (lid, LOW);
  digitalWrite (lod, LOW);
  delay(5000);
  
  digitalWrite(lod, HIGH);
  delay(5000);
  digitalWrite(lod, LOW);
  delay(500);
  
   digitalWrite(lid, HIGH);
  delay(1000);
  digitalWrite(lid, LOW);
  delay(500);
  
 digitalWrite(LED, HIGH);
  delay(5000);
  digitalWrite(LED, LOW);
  delay(500);
  
  digitalWrite (LED, LOW);
  digitalWrite (lid, LOW);
  digitalWrite (lod, LOW);
  delay(5000);
  
}