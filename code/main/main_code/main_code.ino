#include <LiquidCrystal.h>
int ma;
int c;
int z;
long accx;
long accy;
int min;
int max;
  LiquidCrystal lcd(11, 10, A5, A4, A3, A2);

void setup()
{
	// initaization
  ma=1;
  c=0;
  z=0;
  min=462;
  max=542;
  accx=0;
  accy=0;
  pinMode(A1,INPUT);
  pinMode(A0,INPUT);
	pinMode(4,OUTPUT);
	pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
	pinMode(8,INPUT);
  pinMode(9,INPUT);
  pinMode(2,INPUT);
  pinMode(3,INPUT);
  analogReference(EXTERNAL);
        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);
        digitalWrite(7, HIGH);
         lcd.begin(16, 2);
        lcd.setCursor(0, 0);
        lcd.print("     WELCOME   ");
        lcd.setCursor(0, 1);
        lcd.print("AUTO WHEEL CHAIR");
        delay(5000);
}

void loop()
{	
  lcd.setCursor(0, 0);
  lcd.print("MODE SELECTION");
  lcd.setCursor(0, 1);
  lcd.print("1=nor 2=au 3=acc");
  // initaization
	if(digitalRead(9) == ma)
  {
    while(1)
  {
			// forward
			if(digitalRead(8) == ma)
			{ while(c==LOW)
      {
        digitalWrite(4, LOW);
        digitalWrite(6, LOW); 
        delay(10);
        if(digitalRead(9)==HIGH)
          {
            c=HIGH; 
          }       
			}
			}
     c=0;
			// backward
			if(digitalRead(9) == ma)
			{
        digitalWrite(5, LOW);
        digitalWrite(7, LOW);
			 delay(10);
			}
     // right
     if(digitalRead(2) == ma)
      {
        digitalWrite(4, LOW);
        digitalWrite(7, LOW);
        delay(10);        
      }
      // left
      if(digitalRead(3) == ma)
      {
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        delay(10);
     }
     else
     {digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
     }
}
  }
    // initaization
  if(digitalRead(8) == ma)
  {
   while(1)
  {
      // forward
      if(digitalRead(8) == ma)
      {
        digitalWrite(4, LOW);
        digitalWrite(6, LOW); 
        delay(10);
      }
      if(digitalRead(9) == ma)
      {
        digitalWrite(5, LOW);
        digitalWrite(7, LOW);
       delay(10);
      }
     // right
     if(digitalRead(2) == ma)
      {
        digitalWrite(4, LOW);
        digitalWrite(7, LOW);
        delay(10);        
      }
      // left
      if(digitalRead(3) == ma)
      {
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        delay(10);
     }
     else
     {digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
     }
}
  }
if(digitalRead(2) == ma)
  {
    delay(2);
    while(1)
// initaization
   {   accy=analogRead(A1);
      accx = analogRead(A0);
      
      // forward
      if(accx < min)
     
      {digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
        delayMicroseconds(100);
        digitalWrite(5, LOW);
        digitalWrite(7, LOW);
       delayMicroseconds(1000);        
      }
      
      // backward
      if(accx > max)
      {
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
        delayMicroseconds(100);
        digitalWrite(4, LOW);
        digitalWrite(6, LOW);
        delayMicroseconds(1000);
      }
     // right
     if(accy < min)
     
      {
        digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
        delayMicroseconds(100);
        digitalWrite(4, LOW);
        digitalWrite(7, LOW);
        delayMicroseconds(1000);        
      }
      
      // left
      if(accy > max)
      {
        digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
        delayMicroseconds(100);
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        delayMicroseconds(1000);
      }
  else    
 {   digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
}
}
  }
}
