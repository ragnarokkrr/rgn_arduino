//Project 14

int ledPin = 6;
int ldrPin = 0; //Light dependent resistor
int lightVal = 0; // value read from LDR

void setup(){
  Serial.begin(9600);
  // set both pins as output
  pinMode(ledPin, OUTPUT); 
  
}

void loop(){
  lightVal = analogRead(ldrPin);
  digitalWrite(ledPin, HIGH);
  
  Serial.println("LightVal:  " + lightVal);
  Serial.println("");
  delay (lightVal);
  digitalWrite(ledPin, LOW);
  delay(lightVal);
  Serial.println("");
}

