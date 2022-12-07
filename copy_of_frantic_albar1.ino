#include<Servo.h>

int RedPin = 2;
int BluePin = 3;
int GreenPin = 4;
int YellowPin = 5;
int PushSWPin = 6;
int PotenPin = A0;
int Delay = 20;
int Ain;
int pos;
Servo myservo;
void setup()
{
  pinMode(RedPin, OUTPUT);
  pinMode(BluePin, OUTPUT);
  pinMode(GreenPin, OUTPUT);
  pinMode(YellowPin, OUTPUT);
  pinMode(PushSWPin, INPUT);
  myservo.attach(9);       
  Serial.begin(9600);
}

void loop()
{
 
  int KnobDelay = analogRead(PotenPin);
  KnobDelay = map(KnobDelay, 0, 1024, 50, 500);
  Serial.print("Speed : ");
  
  if (digitalRead(PushSWPin) == HIGH)
  {
    Serial.print("Switch : ON\n");
   
    digitalWrite(RedPin, HIGH);
    Serial.print("RedLED : ON\n");
    delay(KnobDelay);
    digitalWrite(RedPin, LOW);
    Serial.print("RedLED : OFF\n");
    delay(KnobDelay);
    
     digitalWrite(BluePin, LOW);
  
      digitalWrite(GreenPin, HIGH);
    Serial.print("GreenLED : ON\n");
    delay(KnobDelay);
    digitalWrite(GreenPin, LOW);
    Serial.print("GreenLED : OFF\n");
    delay(KnobDelay);
    
    digitalWrite(YellowPin, LOW);
   
  }
  else
  {
    Serial.print("Switch : OFF\n");
    
     digitalWrite(BluePin, HIGH);
    Serial.print("BlueLED : OFF\n");
    delay(KnobDelay);
    digitalWrite(BluePin, LOW);
    Serial.print("BlueLED : ON\n");
    delay(KnobDelay);
   
     digitalWrite(YellowPin, HIGH);
    Serial.print("YellowLED : OFF\n");
    delay(KnobDelay);
    digitalWrite(YellowPin, LOW);
    Serial.print("YellowLED : ON\n");
    delay(KnobDelay);
    
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