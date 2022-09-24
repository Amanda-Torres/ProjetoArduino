// Alarme de vazamento de gás
// Autor: Amanda Torres

int pino_gas = A0; 
int alarme = 12;
int gas = 0; 

void setup()
{
  pinMode(alarme, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  gas=analogRead(pino_gas);
  Serial.println(gas, DEC);

  	if (gas>487){
      tone (alarme, 1500, 50);
  	}
}