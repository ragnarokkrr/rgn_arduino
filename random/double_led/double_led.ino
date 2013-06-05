int ledPinGreen = 4;
int ledPinRed = 6;


void setup(){
  pinMode(ledPinGreen, OUTPUT);
  pinMode(ledPinRed, OUTPUT);
}

void loop(){
  digitalWrite(ledPinGreen, HIGH);
  digitalWrite(ledPinRed, HIGH);
  delay(1000); 
  digitalWrite(ledPinGreen, LOW);
  digitalWrite(ledPinRed, LOW);
  delay(1000);
}
