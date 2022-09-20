int botao = 0; //declaracao de variavel para estado do botao

void setup(){
  pinMode(2, INPUT); //pino 2 de entrada (botao)
  pinMode(13, OUTPUT); //pino 13 de saida (transistor/lampada)
}

void loop(){
  botao = digitalRead(2); //variavel recebe estado do pino 2
  if (botao == LOW){//quando pressionado
    for (int i = 0; i < 20; i++){ //acende e apaga 20x
      digitalWrite(13, HIGH); //liga
      delay(500); //espera 0,5 segundos
      digitalWrite(13, LOW); //desliga
      delay(500); //espera 0,5 segundos
    }
  }
}
