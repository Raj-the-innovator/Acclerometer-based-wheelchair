long accx;
long accy;
int min;
int max;
void setup()
{
	// initaization
	
	min=462;
	max=582;
	accx=0;
	accy=0;
	pinMode(4,OUTPUT);
	pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
	pinMode(A1,INPUT);
  pinMode(A0,INPUT);
  
  analogReference(EXTERNAL);
	// include aref to external for 3.3V	

        digitalWrite(4, HIGH);
        digitalWrite(5, HIGH);
        digitalWrite(6, HIGH);
        digitalWrite(7, HIGH);
}

void loop()
{
			// initaization
			accy=analogRead(A1);
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

