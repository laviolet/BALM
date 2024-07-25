  void mostrarSensores(){
   Serial.print(sright);
   Serial.print(" - ");
   Serial.print(scenterright);
   Serial.print(" - ");
   Serial.print(scenterleft);
   Serial.print(" - ");
   Serial.println(sleft);
 }
   void lerSensores(){
   sright = digitalRead(sensorR);
   delay (10);
   scenterright = analogRead(sensorCR);
   delay (10);
   scenterleft  = analogRead(sensorCL);
   delay (10);
   sleft = digitalRead(sensorL);
  delay (10);
 }

  