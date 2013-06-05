//Project 15 - Simple Motor Control

int potPin = 0; // analog in connected to the potentiometer
int transistorPin = 9;// PWM Pin 9 connected to the base of the transistor
int potValue = 0; //value returned from pot


void setup(){
  Serial.begin(9600);
  pinMode(transistorPin, OUTPUT);
   
  
}


void loop(){
  potValue = analogRead(potPin);
  Serial.println(potValue);
  
  
  analogWrite(transistorPin, potValue); 
  
}
