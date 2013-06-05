/*******************************************
      ROBOCORE ARDUINO KIT INICIANTE
            PRJ PIANO
*******************************************/
//basic struct for R/W
typedef struct{
  byte pin: 6;
  byte mode: 1;
  byte state: 1;
}DigitalPin;

//R/W for Analog Pin
typedef struct{
  byte pin: 6;
  byte value: 10;
}AnalogPin;

//-------------------------------------------
struct LedButtonCircuit{
  DigitalPin button;
  DigitalPin led;
  void doSetup();
  void doLoop();
};

void LedButtonCircuit::doSetup(){
  LedButtonCircuit thisCircuit = *this;
  pinMode(thisCircuit.led.pin, OUTPUT);
  pinMode(thisCircuit.button.pin, INPUT);
}

void LedButtonCircuit::doLoop(){
  LedButtonCircuit thisCircuit = *this;
  thisCircuit.button.state = digitalRead(thisCircuit.button.pin);
  if(thisCircuit.button.state == HIGH){
    digitalWrite(thisCircuit.led.pin, HIGH);
  }else{
    digitalWrite(thisCircuit.led.pin, LOW);
  }
}
//-------------------------------------------



//--------------------------------------------

LedButtonCircuit redCircuit ={
  {12, INPUT, 0}//button
  ,{13, OUTPUT, 0}//led
};

DigitalPin  buzzer = {4, OUTPUT, 0};

int tune = 0;

void setup(){
  redCircuit.doSetup();
}


void loop(){
  redCircuit.doLoop();
  if(redCircuit.button.state){
    tune = 100;
  }
  while(tune > 0){
    digitalWrite(buzzer.pin, HIGH);
    delay(tune); //delay ~= wave length
    digitalWrite(buzzer.pin, LOW);
    delay(tune);
    tune = 0;
    
    digitalWrite(redCircuit.led.pin, LOW);
  }
  
}
