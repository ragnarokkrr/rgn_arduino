/**************************************
    ROBOCORE ARDUINO KIT INICIANTE
        Mod03 - Temperature Sensor NTC
**************************************/


const int pinoSensor = 0;
int valorSensor = 0;

void setup(){
  Serial.begin(9600);
}


void loop(){
  valorSensor = analogRead(pinoSensor);
  Serial.print("Valor do sensor: ");
  Serial.println(valorSensor);
  delay(500);
}
