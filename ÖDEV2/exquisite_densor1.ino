
int kirmiziled = 10;
int sariled=9;
int yesilled = 8;

void setup()
{
  pinMode(kirmiziled, OUTPUT);
  pinMode(sariled, OUTPUT);
  pinMode(yesilled, OUTPUT);
}

void loop()
{
  digitalWrite(kirmiziled, HIGH);
  delay(10000);

  digitalWrite(sariled,HIGH);
  delay(2000);
  
  digitalWrite(kirmiziled,LOW);
  digitalWrite(sariled,LOW);
  digitalWrite(yesilled,HIGH);
  delay(10000);
  
  digitalWrite(sariled,HIGH);
  digitalWrite(yesilled,LOW);
  delay(2000);
  
  digitalWrite(sariled,LOW);

  
}