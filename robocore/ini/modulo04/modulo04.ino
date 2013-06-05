const int pinoPotenciometro = 0;
const int pinoLed = 13;
int valPot = 0;


void setup(){
  pinMode(pinoLed, OUTPUT);
}

void loop(){
  valPot = analogRead(pinoPotenciometro);
  digitalWrite(pinoLed, HIGH); 
  delay (valPot);
  digitalWrite(pinoLed, LOW);
  delay(valPot);
  
}
