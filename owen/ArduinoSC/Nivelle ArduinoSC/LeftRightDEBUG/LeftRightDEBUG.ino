

int pin8 = 8;
int pin9 = 9;
void setup() {
    Serial.begin(9600);
  Serial.setTimeout(5);
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(pin8, OUTPUT);
  pinMode(pin9, OUTPUT);
}

// the loop function runs over and over again forever
void loop() 
{
  String str = Serial.readString();

  if (str == "float")
  {
     digitalWrite(pin8, HIGH);  
     digitalWrite(pin9, LOW);   
  }
   else if (str =="int")
  {
    digitalWrite(pin9, HIGH);                       
    digitalWrite(pin8, LOW); 
  }
}
