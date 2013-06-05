// Project 2 - SOS Morse Code Signaler

int ledPin = 10;

void setup(){
   pinMode(ledPin, OUTPUT);  
}


void loop(){
  //3 dits
  for(int i=0; i<3; i++){
    digitalWrite(ledPin, HIGH);
    delay (150);
    digitalWrite(ledPin, LOW);
    delay(100);
  }
  
  delay(100); //gap between letters
  
  //3 dahs
  for(int i=0; i<3; i++){
    digitalWrite(ledPin, HIGH);
    delay(400);
    digitalWrite(ledPin, LOW);
    delay(100);
  }
  
  delay (100);
  
  for (int i=0; i<3; i++){
    digitalWrite(ledPin, HIGH);
    delay(150);
    digitalWrite(ledPin, LOW);
    delay(100);
  }
  
  
  delay(5000);
}
