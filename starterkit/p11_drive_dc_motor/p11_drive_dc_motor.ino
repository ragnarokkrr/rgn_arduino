int potPin = 0;
int transistorPin = 11;

int potValue;


void setup(){
  pinMode(transistorPin, OUTPUT);
}

void loop(){
  
  potValue = analogRead(potPin) / 4;
  analogWrite(transistorPin, potValue);
}
