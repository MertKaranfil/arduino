int buttonState = 0;
void setup() 
{
pinMode(2, INPUT);
pinMode(13,OUTPUT);  

}

void loop() 
{
buttonState= digitalRead(2); //buton değerini oku.
                             //düğmeye basılıp basılmadığını kontrol et.
if                             
 (buttonState == HIGH)  {
digitalWrite(13, HIGH); //LED'İ aç.
 } else {
digitalWrite(13, LOW); //LED'İ kapat.
  }
delay(10); //Geciktirme işlemi
}
