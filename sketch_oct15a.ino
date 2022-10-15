// C++ code
//
//created by Mert Karanfil
int button = 9 ;
void setup()
{
	pinMode(2,OUTPUT);
  	pinMode(3,OUTPUT);
  	pinMode(4,OUTPUT);
  	pinMode(5,OUTPUT);
  	pinMode(6,OUTPUT);
  	pinMode(7,OUTPUT);
  	pinMode(9,INPUT);
}

void loop()
{
  button = digitalRead(9);
  if (button == HIGH){
  
  digitalWrite(2,HIGH);
  delay(100);
  digitalWrite(3,HIGH);
  delay(100);
  digitalWrite(4,HIGH); 
  delay(100);
  digitalWrite(5,HIGH);
  delay(100);
  digitalWrite(6,HIGH);
  delay(100);
  digitalWrite(7,HIGH);
  }
  else {
   digitalWrite(2,LOW);
  
  digitalWrite(3,LOW);
  
  digitalWrite(4,LOW);

  digitalWrite(5,LOW);
  
  digitalWrite(6,LOW);
  
  digitalWrite(7,LOW);
  }
  delay(200);    
}
