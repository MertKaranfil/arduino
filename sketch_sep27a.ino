void setup()
{
 pinMode(13, OUTPUT);
}
void loop()
{
 // LED’i açın (HIGH-YÜKSEK voltaj seviyesi)
 digitalWrite(13, HIGH);
 delay(50000); // 1000 milisaniye (1 saniye) bekleyin.
 // Voltajı LOW yazarak LED’i kapatın.
 digitalWrite(13, LOW);
 delay(50000); //1000 milisaniye (1 saniye) bekleyin.
digitalWrite(13, HIGH);
 delay(50000); // 1000 milisaniye (1 saniye) bekleyin.
 // Voltajı LOW yazarak LED’i kapatın.
 digitalWrite(13, LOW);
 delay(50000); //1000 milisaniye (1 saniye) bekleyi
}
