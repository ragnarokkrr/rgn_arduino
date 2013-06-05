//array for LED pins
byte ledPin[] = {
  4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
int ledDelay(65);
int direction = 1;
int currentLED = 0;
unsigned long changeTime;


void setup(){
  //set all pins to output
  for(int i=0; i<10; i++){
    pinMode(ledPin[i], OUTPUT);
  }
  changeTime = millis();
}


void loop(){
  //if it has been ledDelay ms since last change
  if((millis() - changeTime) > ledDelay){
    changeLED();
    changeTime = millis();
  }
}

void changeLED(){
  //turn off all LED's
  for(int i=0; i<10; i++){
    digitalWrite(ledPin[i], LOW);  
  }
  digitalWrite(ledPin[currentLED], HIGH);
  
  //increment by the direction value
  currentLED += direction;
  
  //change direction if we reach the end
  if(currentLED == 9){
    direction = -1;
  }
  if (currentLED == 0){
    direction = 1;
  }
  
}
