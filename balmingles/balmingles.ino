// definição da ponte h
#define FontRightWheel_Foward  26 // branco
#define FrontRightWheel_Backwards  22 // marrom 
#define FrontLeftwheel_Foward 30 //azul
#define FrontLeftWheel_Backwards 24 // roxo
#define BackRightWheel_Foward 46 // vermelho
#define BackRightWheel_Backwards 48 // laranja
#define BackLeftWheel_Foward 50 // amarelo 
#define BackLeftWheel_Backwards 52 // verde
#define ENA 12 //frente esquerdo                           
#define ENB 11 //frente direito 
#define ENC 10 //tras esquerdo (ENB)
#define END 9 //tras direito (ENA) 

// definição dos sensores
#define sensorR 36 // verde
#define sensorCR A2 // azul
#define sensorCL A1 // amarelo
#define sensorL 38 // roxo
// the setup function runs once when you press reset or power the board

 int sright, sleft;
 int scenterright, scenterleft;     
 int white = 100;
 int black = 350;


void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  Serial.begin(9600);
  pinMode(FontRightWheel_Foward, OUTPUT);
  pinMode(FrontRightWheel_Backwards, OUTPUT);
  pinMode(FrontLeftwheel_Foward, OUTPUT);
  pinMode(FrontLeftWheel_Backwards, OUTPUT);
  pinMode(BackRightWheel_Foward, OUTPUT);
  pinMode(BackRightWheel_Backwards, OUTPUT);
  pinMode(BackLeftWheel_Foward, OUTPUT);
  pinMode(BackLeftWheel_Backwards, OUTPUT);

  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);
  pinMode(ENC, OUTPUT);
  pinMode(END, OUTPUT);

  pinMode(sensorR, INPUT);
  pinMode(sensorCR, INPUT);
  pinMode(sensorCL, INPUT);
  pinMode(sensorL, INPUT);
  
}

void loop() { 
  /*linha();
  lerSensores();
  mostrarSensores();*/

  foward();
  delay(1000);
  RightTurning();
  delay(1000);
  LeftTurning();
  delay(1000);
  backwards();
  delay(1000);
  RightSpinningFast();
  delay(1000);
  LeftSpinningFast();
  delay(1000);
  foward();
  delay(1000);
  RightCrabWalk();
  delay(1000);
  LeftCrabWalk();
  }
// HIGH + HIGH = quando os dois forem pretos o robo continua a andar 
// LOW + LOW = quando os dois forem brancos o robo continua a andar 
