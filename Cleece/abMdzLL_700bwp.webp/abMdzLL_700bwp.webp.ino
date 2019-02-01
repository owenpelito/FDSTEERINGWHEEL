#define sensor 9



void setup()
{
  Serial.begin(9600);
  pinMode(sensor,INPUT);

  Serial.println("-----SpeedMeter-----");
  Serial.println("Press 1 to Start: ");
}

void loop()
{
  char user_Input;
    while(Serial.available())
      {
        user_Input = Serial.read();
        Serial.print(user_Input);

              if (user_Input =='1')
                {
                  unsigned int time=0,RPM=0;
                  time=delay1();
                  RPM=(time*12)/3;
                  delay(2000);
                  Serial.println("RPM");
                  Serial.println(RPM);
                  delay(5000);          
                  }
            else
            {
              Serial.println("Invalid Option Entered.");  
            }
        
       }
}



int delay1()
{
//unsigned int long k;
int i,j;
unsigned int count=0;
for(i=0;i<1000;i++)
{
for(j=0;j<1000;j++)
{
if(digitalRead(sensor))
{
count++;
while(digitalRead(sensor));
}
}
}
return count;
}
