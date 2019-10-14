// se asigna el puerto
int  foco = 9;
void setup() {
  pinMode(foco, OUTPUT);
}
void loop() {
  digitalWrite(foco, HIGH);   
  // 5 segundo para prender mejor par ano estar y fundir el let 
  delay(5000);                
  digitalWrite(foco, LOW);    
  delay(1000);                      
}
