int ma;
int c;
long accx;
long accy;
int min;
int max;

void setup()
{
	// initaization
  ma=1;
  c=0;
  
  min=492;
  max=532;
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
}

void loop()
{
			// forward
			if(digitalRead(8) == ma)
     
			{ while(c==LOW)
      {
        digitalWrite(5, LOW);
        digitalWrite(7, LOW); 
        delayMicroseconds(100);
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
        digitalWrite(4, LOW);
        digitalWrite(6, LOW);
			 delayMicroseconds(100);
			}
     // right
     if(digitalRead(2) == ma)
     
      {
        digitalWrite(5, LOW);
        digitalWrite(6, LOW);
        delayMicroseconds(100);        
      }
      // left
      if(digitalRead(3) == ma)
      {
        digitalWrite(4, LOW);
        digitalWrite(7, LOW);
        delayMicroseconds(100);
     }
     else
     {digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
     }
     }	



  
