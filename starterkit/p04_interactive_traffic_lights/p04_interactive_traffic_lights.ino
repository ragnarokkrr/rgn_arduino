// Project 4 - interactive traffic Lights
int carRed = 12;
int carYellow = 11;
int carGreen = 10;
int pedRed = 9;
int pedGreen = 8;
int button = 2;
int crossTime = 5000;  //time to cross
unsigned long changeTime;   // time since booton pressed


void setup(){
  pinMode(carRed, OUTPUT);
  pinMode(carYellow, OUTPUT);
  pinMode(carGreen, OUTPUT);
  pinMode(pedRed, OUTPUT);
  pinMode(pedGreen, OUTPUT);

  //turn on the car green light
  digitalWrite(carGreen, HIGH);
  digitalWrite(pedRed, HIGH);
}

void loop(){
  int state = digitalRead(button);
  
  if(state == HIGH &&(millis() - changeTime ) >5000){
    changeLights();
  }
  
}


void changeLights(){
  digitalWrite(carGreen, LOW);
  digitalWrite(carYellow, HIGH);
  delay(2000);
  
  digitalWrite(carYellow, LOW);
  digitalWrite(carRed, HIGH);
  delay(crossTime);
  
  
  for(int i=0; i <10; i++){
    digitalWrite(pedGreen, HIGH);
    delay(250);
    digitalWrite(pedGreen, LOW);
    delay(250); 
  }
  
  digitalWrite(pedRed, HIGH);
  delay(500);
  
  digitalWrite(carYellow, HIGH);
  digitalWrite(carRed, LOW);
  delay(1000);
  digitalWrite(carGreen, HIGH);
  digitalWrite(carYellow, LOW);
  
  changeTime = millis();
  
}


