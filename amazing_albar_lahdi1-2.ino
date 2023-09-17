//#include<SoftwareSerial.h>
//SoftwareSerial BT(5, 6);
String pass;
void setup() 
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  Serial.begin(9600);
  Serial.println("Enter Password");
  //pass = Serial.readString();
  
  //BT.begin(9600);
}
void loop()
{
  int i=0;
  //Serial.println("Enter Password");
  String pass = Serial.readString();
  if (pass == "Aditya69" && i==0)
  {
    
    Serial.println("Correct Password");
    while (1==1)
    {
      if (Serial.available())
      {
        char res = Serial.read();
        Serial.println(res);
        if (res == 'w')
        {
          digitalWrite(13, HIGH);
          digitalWrite(12, LOW);
          digitalWrite(11, HIGH);
          digitalWrite(10, LOW);
        }
        if (res == 's')
        {
          digitalWrite(13, LOW);
          digitalWrite(12, HIGH);
          digitalWrite(11, LOW);
          digitalWrite(10, HIGH);
        }
        if (res == 'a')
        {
          digitalWrite(13, LOW);
          digitalWrite(12, LOW);
          digitalWrite(11, HIGH);
          digitalWrite(10, LOW);
        }
        if (res == 'd')
        {
          digitalWrite(13, HIGH);
          digitalWrite(12, LOW);
          digitalWrite(11, LOW);
          digitalWrite(10, LOW);
        }
        if (res == 'f')
        {
          digitalWrite(13, LOW);
          digitalWrite(12, LOW);
          digitalWrite(11, LOW);
          digitalWrite(10, LOW);
        }
        if (res == 'b')
        {
          break;
        }
      }
    
    }
  
  }
}