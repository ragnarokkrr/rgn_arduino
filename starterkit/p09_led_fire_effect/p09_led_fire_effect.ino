//Project  9 - LED Fire Effect

int yellowPin1 = 9;
int redPin = 10;
int yellowPin2 = 11;


void setup(){
  pinMode(yellowPin1, OUTPUT);
  pinMode(redPin, OUTPUT);
  pinMode(yellowPin2, OUTPUT);
}


void loop(){
  analogWrite(yellowPin1, random(120)+135);
  analogWrite(redPin, random(120)+135);
  analogWrite(yellowPin2, random(120)+135);  
  delay(random(100));
}
