int botao = 0;

void setup()
{
  pinMode(2, INPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
  botao = digitalRead(2);
  if (botao == LOW) {
    for (int i = 0; i < 20; i++) 
	{
      digitalWrite(13, HIGH);
      delay(500);
      digitalWrite(13, LOW);
      delay(500);
	}
  }
}