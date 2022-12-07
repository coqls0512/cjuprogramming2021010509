#include<Servo.h>

int RedPin = 2;
int GreenPin = 4;
int PushSWPin = 6;
int PotenPin = A0;
int Delay = 50;
int Ain;
int pos;
Servo myservo;
void setup()
{
  pinMode(RedPin, OUTPUT);
  pinMode(GreenPin, OUTPUT);
  pinMode(PushSWPin, INPUT);
  myservo.attach(9);  
  myservo.write(0);
  Serial.begin(9600);
}

void loop()
{
 
  int KnobDelay = analogRead(PotenPin);
  KnobDelay = map(KnobDelay, 0, 1024, 0, 75);
  Serial.print("Speed : ");
  
  if (digitalRead(PushSWPin) == HIGH)
  {
    Serial.print("Switch : ON\n");
   
    digitalWrite(RedPin, HIGH);
    Serial.print("RedLED : ON\n");
    delay(KnobDelay);
    digitalWrite(RedPin, LOW);
    Serial.print("RedLED : OFF\n");
    myservo.write(30);
    delay(500);
  
      digitalWrite(GreenPin, HIGH);
    Serial.print("GreenLED : ON\n");
    delay(KnobDelay);
    digitalWrite(GreenPin, LOW);
    Serial.print("GreenLED : OFF\n");
    delay(KnobDelay);
    myservo.write(60);
    delay(500);
    
   
  }
  else
  {
    Serial.print("Switch : OFF\n");
    
    
    digitalWrite(RedPin, LOW);
  
    digitalWrite(GreenPin, LOW);
   
  }
  Ain = analogRead(0);
  pos = analogRead(0);
  Ain = map(Ain, 0, 1023, 0, 255);
  pos = map(pos, 0, 1023, 0, 179);
  myservo.write(pos);
  delay(Delay);
  
}
