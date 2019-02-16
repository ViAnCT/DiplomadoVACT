void setup() {
  // put your setup code here, to run once:
  
  //Llanta derecha
  pinMode(8,OUTPUT);
  pinMode(7,OUTPUT);
  //Llanta izquierda
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  adelante();
  delay(1000);
  for(int i=0;i<=5;i++){
    gira_izq();
    delay(200);
    adelante();
    delay(500);
  }
  adelante();
  delay(500);
  for(int i=0;i<=5;i++){
    gira_der();
    delay(200);
    atras();
    delay(500);
  }
  adelante();
  delay(500);

  while(1){
    para();
    delay(100);   
  }
}

void atras(){
  digitalWrite(8,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(13,HIGH);
  analogWrite(3,255);
  analogWrite(5,255);
}
  
void para(){
  digitalWrite(8,HIGH);
  digitalWrite(7,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(13,LOW);
  analogWrite(3,0);
  analogWrite(5,0);
}

void adelante(){
  digitalWrite(8,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(12,HIGH);
  digitalWrite(13,LOW);
  analogWrite(3,255);
  analogWrite(5,255);
}

void gira_der(){
  digitalWrite(8,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(13,HIGH);
  analogWrite(3,150);
  analogWrite(5,75);
}

void gira_izq(){
  digitalWrite(8,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(12,LOW);
  digitalWrite(13,HIGH);
  analogWrite(3,75);
  analogWrite(5,150);
}
