const int verde = 5;
const int amarelo = 7;
const int vermelho = 6;
  
void setup()
{
  pinMode(verde, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(vermelho, OUTPUT);
}

void loop()
{
  digitalWrite(vermelho, HIGH);
  delay(5000);
  digitalWrite(vermelho, LOW);
  digitalWrite(verde, HIGH);
  delay(500);
  digitalWrite(verde, LOW);
  delay(200);
  digitalWrite(amarelo, HIGH);
  delay(7000);
  digitalWrite(amarelo, LOW);
}