int led = 13;
void setup() {
  pinMode(led, OUTPUT); // Initializes the 13 number datapin as the output
  Serial.begin(9600);
  }
int state = 0;
void loop()
{ 
if(Serial.available() > 0)  // Checks if there's any data in the serial port  
{
  state = Serial.read();  // Reads serial port port data
}
  if (state == '0')
  {
    digitalWrite(led, LOW); // If the serieal port data is "0", Turns off the led
  } 
 if (state == '1')  
 {  
    digitalWrite(led, HIGH); // If the serieal port data is "1", Turns on the led
  }
}
