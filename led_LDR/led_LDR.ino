const int LDR = 0;
const int ledPin = 11;

int valorLido = 0;
int valorPWM = 0;

void setup(){
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}


void loop(){
  valorLido  = analogRead(LDR);
  valorPWM = map( valorLido, 0,25, 0, 1023);

  String msg = msg + "LDR = " + valorLido ;m
  msg = msg + " PWM = " + valorPWM;
  Serial.println(msg);

  analogWrite(ledPin, valorPWM);  
  
  delay(500);
   
}
