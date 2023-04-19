#define SensorSol 10
#define SensorOrta 11
#define SensorSag 12

#define MotorR1 6
#define MotorR2 7
#define MotorRE 9

#define MotorL1 5
#define MotorL2 4
#define MotorLE 3
void setup() {
  pinMode(SensorSol,INPUT);
  pinMode(SensorOrta,INPUT);
  pinMode(SensorSag,INPUT);
  
  pinMode(MotorR1,INPUT);
  pinMode(MotorR2,INPUT); 
  pinMode(MotorL1,INPUT);
  pinMode(MotorL2,INPUT);


}

void loop() {
  if(digitalRead(SensorSol) == 0 && digitalRead(SensorOrta)==1 && digitalRead(SensorSag)==0){
    ileri();
  }
  if(digitalRead(SensorSol) == 0 && digitalRead(SensorOrta)==0 && digitalRead(SensorSag)==1){
    sag();
  }
  if(digitalRead(SensorSol) == 1 && digitalRead(SensorOrta)==0 && digitalRead(SensorSag)==0){
    sol();
  }
}
void ileri (){
  digitalWrite(MotorR1, 1);
  digitalWrite(MotorR2, 0);
  analogWrite(MotorRE, 150);
  digitalWrite(MotorL1, 1);
  digitalWrite(MotorL2, 0);
  analogWrite(MotorLE, 150);
  }
  void sag (){
  digitalWrite(MotorR1, 1);
  digitalWrite(MotorR2, 0);
  analogWrite(MotorRE, 0);
  digitalWrite(MotorL1, 1);
  digitalWrite(MotorL2, 0);
  analogWrite(MotorLE, 150);
  }
  void sol (){
  digitalWrite(MotorR1, 1);
  digitalWrite(MotorR2, 0);
  analogWrite(MotorRE, 150);
  digitalWrite(MotorL1, 1);
  digitalWrite(MotorL2, 0);
  analogWrite(MotorLE, 0);
  }
