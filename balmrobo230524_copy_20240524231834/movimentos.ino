#define speed 100

void teste(){
  parar();
  digitalWrite(FontRightWheel_Foward, HIGH);   
  digitalWrite(FrontRightWheel_Backwards, LOW);   
  digitalWrite(FrontLeftWheel_Backwards, LOW);
  digitalWrite(FrontLeftwheel_Foward, LOW);
  digitalWrite(BackRightWheel_Foward, LOW);   
  digitalWrite(BackRightWheel_Backwards, LOW);
  digitalWrite(BackLeftWheel_Backwards, LOW);
  digitalWrite(BackLeftWheel_Foward, LOW); 

  analogWrite(ENB, speed);
  analogWrite(ENA, speed);
  analogWrite(ENC, speed);
  analogWrite(END, speed);  
  delay(1000);

  digitalWrite(FontRightWheel_Foward, LOW);   
  digitalWrite(FrontRightWheel_Backwards, HIGH);   
  digitalWrite(FrontLeftWheel_Backwards, LOW);
  digitalWrite(FrontLeftwheel_Foward, LOW);
  digitalWrite(BackRightWheel_Foward, LOW);   
  digitalWrite(BackRightWheel_Backwards, LOW);
  digitalWrite(BackLeftWheel_Backwards, LOW);
  digitalWrite(BackLeftWheel_Foward, LOW); 
  delay(1000);

  digitalWrite(FontRightWheel_Foward, LOW);   
  digitalWrite(FrontRightWheel_Backwards, LOW);   
  digitalWrite(FrontLeftWheel_Backwards, HIGH);
  digitalWrite(FrontLeftwheel_Foward, LOW);
  digitalWrite(BackRightWheel_Foward, LOW);   
  digitalWrite(BackRightWheel_Backwards, LOW);
  digitalWrite(BackLeftWheel_Backwards, LOW);
  digitalWrite(BackLeftWheel_Foward, LOW); 
  delay(1000);

  digitalWrite(FontRightWheel_Foward, LOW);   
  digitalWrite(FrontRightWheel_Backwards, LOW);   
  digitalWrite(FrontLeftWheel_Backwards, LOW);
  digitalWrite(FrontLeftwheel_Foward, HIGH);
  digitalWrite(BackRightWheel_Foward, LOW);   
  digitalWrite(BackRightWheel_Backwards, LOW);
  digitalWrite(BackLeftWheel_Backwards, LOW);
  digitalWrite(BackLeftWheel_Foward, LOW); 
  delay(1000);

  digitalWrite(FontRightWheel_Foward, LOW);   
  digitalWrite(FrontRightWheel_Backwards, LOW);   
  digitalWrite(FrontLeftWheel_Backwards, LOW);
  digitalWrite(FrontLeftwheel_Foward, LOW);
  digitalWrite(BackRightWheel_Foward, HIGH);   
  digitalWrite(BackRightWheel_Backwards, LOW);
  digitalWrite(BackLeftWheel_Backwards, LOW);
  digitalWrite(BackLeftWheel_Foward, LOW); 
  delay(1000);

  digitalWrite(FontRightWheel_Foward, LOW);   
  digitalWrite(FrontRightWheel_Backwards, LOW);   
  digitalWrite(FrontLeftWheel_Backwards, LOW);
  digitalWrite(FrontLeftwheel_Foward, LOW);
  digitalWrite(BackRightWheel_Foward, LOW);   
  digitalWrite(BackRightWheel_Backwards, HIGH);
  digitalWrite(BackLeftWheel_Backwards, LOW);
  digitalWrite(BackLeftWheel_Foward, LOW); 
  delay(1000);

  digitalWrite(FontRightWheel_Foward, LOW);   
  digitalWrite(FrontRightWheel_Backwards, LOW);   
  digitalWrite(FrontLeftWheel_Backwards, LOW);
  digitalWrite(FrontLeftwheel_Foward, LOW);
  digitalWrite(BackRightWheel_Foward, LOW);   
  digitalWrite(BackRightWheel_Backwards, LOW);
  digitalWrite(BackLeftWheel_Backwards, HIGH);
  digitalWrite(BackLeftWheel_Foward, LOW); 
  delay(1000);

    digitalWrite(FontRightWheel_Foward, LOW);   
  digitalWrite(FrontRightWheel_Backwards, LOW);   
  digitalWrite(FrontLeftWheel_Backwards, LOW);
  digitalWrite(FrontLeftwheel_Foward, LOW);
  digitalWrite(BackRightWheel_Foward, LOW);   
  digitalWrite(BackRightWheel_Backwards, LOW);
  digitalWrite(BackLeftWheel_Backwards, LOW);
  digitalWrite(BackLeftWheel_Foward, HIGH); 
  delay(1000);
}

//Parar
void stop() {
  digitalWrite(FontRightWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftwheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW

}

//Frente
void foward() {

  digitalWrite(FontRightWheel_Foward, HIGH);   
  digitalWrite(FrontRightWheel_Backwards, LOW);   
  digitalWrite(FrontLeftWheel_Backwards, LOW);
  digitalWrite(FrontLeftwheel_Foward, HIGH);
  digitalWrite(BackRightWheel_Foward, HIGH);   
  digitalWrite(BackRightWheel_Backwards, LOW);
  digitalWrite(BackLeftWheel_Backwards, LOW);
  digitalWrite(BackLeftWheel_Foward, HIGH); 

  analogWrite(ENB, speed);
  analogWrite(ENA, speed);
  analogWrite(ENC, speed);
  analogWrite(END, speed);  
}
//Trás
void backwards() {

  digitalWrite(FontRightWheel_Foward, LOW);   
  digitalWrite(FrontRightWheel_Backwards,HIGH );   
  digitalWrite(FrontLeftwheel_Foward, LOW);   
  digitalWrite(FrontLeftWheel_Backwards, HIGH);   
  digitalWrite(BackRightWheel_Foward, LOW);   
  digitalWrite(BackRightWheel_Backwards, HIGH);   
  digitalWrite(BackLeftWheel_Foward, LOW);   
  digitalWrite(BackLeftWheel_Backwards, HIGH);   

  analogWrite(ENB, speed);
  analogWrite(ENA, speed);
  analogWrite(ENC, speed);
  analogWrite(END, speed);
}
//Lados

void turningRight() {
  digitalWrite(FontRightWheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftwheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftWheel_Backwards, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Backwards, HIGH);   // turn the LED off by making the voltage LOW

  analogWrite(ENB, speed);
  analogWrite(ENA, speed);
  analogWrite(ENC, speed);
  analogWrite(END, speed);
}

void turningLeft() {
  digitalWrite(FontRightWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontRightWheel_Backwards, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftwheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Backwards, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW

  analogWrite(ENB, speed);
  analogWrite(ENA, speed);
  analogWrite(ENC, speed);
  analogWrite(END, speed);
}

//Lados diagonal
void LeftDiagonally(){
  digitalWrite(FontRightWheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftwheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW

  analogWrite(ENB, speed);
  analogWrite(ENA, speed);
  analogWrite(ENC, speed);
  analogWrite(END, speed);

}

void RightDiagonally(){
  digitalWrite(FontRightWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftwheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW

  analogWrite(ENB, speed);
  analogWrite(ENA, speed);
  analogWrite(ENC, speed);
  analogWrite(END, speed);

}
// giro 360 (?)
void LeftSpinning(){
  digitalWrite(FontRightWheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftwheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW

  analogWrite(ENB, speed);
  analogWrite(ENA, speed);
  analogWrite(ENC, speed);
  analogWrite(END, speed);
  
}

void RightSpinning(){
  digitalWrite(FontRightWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftwheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW

  analogWrite(ENB, speed);
  analogWrite(ENA, speed);
  analogWrite(ENC, speed);
  analogWrite(END, speed);
  
}
// caranguejo
void LeftCrabWalk (){
  digitalWrite(FontRightWheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftwheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftWheel_Backwards, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Backwards, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW

  analogWrite(ENB, speed);
  analogWrite(ENA, speed);
  analogWrite(ENC, speed);
  analogWrite(END, speed);
}

void RightCrabWalk (){
  digitalWrite(FontRightWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontRightWheel_Backwards, HIGH);   // turn the LED off by making the voltage HIGH
  digitalWrite(FrontLeftwheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(FrontLeftWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Foward, HIGH);   // turn the LED off by making the voltage LOW
  digitalWrite(BackRightWheel_Backwards, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Foward, LOW);   // turn the LED off by making the voltage LOW
  digitalWrite(BackLeftWheel_Backwards, HIGH);   // turn the LED off by making the voltage LOW

  analogWrite(ENB, speed);
  analogWrite(ENA, speed);
  analogWrite(ENC, speed);
  analogWrite(END, speed);
}

