int data;

void setup()
{
  Serial.begin(9600);
  pinMode(13,OUTPUT);
}

void loop()
{
  int a;200
  int sValue= analogRead(A0);
  Serial.println(sValue);
  delay(10);
  
  if(Serial.available())
  {
    data=Serial.read();
    if(data == "A")
    digitalWrite(13,HIGH);
    else
    digitalWrite(13,LOW);
  }
}

