/*************************************
      ROBOCORE ARDUINO KIT INICIANTE
          Modulo 2
*************************************/
// basic struct for R/W
typedef struct {
  byte pin : 6;
  byte mode: 1;
  byte state: 1;
} DigitalPin;

//My Led Circuit
struct LedButtonCircuit{
  DigitalPin button;
  DigitalPin led;
  void doSetup();
  void doLoop();
};

void LedButtonCircuit::doSetup(){
  LedButtonCircuit ledButtonCircuit = *this;
  pinMode(ledButtonCircuit.led.pin, OUTPUT);
  pinMode(ledButtonCircuit.button.pin, INPUT);
}

void LedButtonCircuit::doLoop(){
  LedButtonCircuit ledButtonCircuit = *this;
  ledButtonCircuit.button.state = digitalRead(ledButtonCircuit.button.pin);
  if(ledButtonCircuit.button.state == HIGH){
    digitalWrite(ledButtonCircuit.led.pin, HIGH);
  }else{
    digitalWrite(ledButtonCircuit.led.pin, LOW);
  }
}

LedButtonCircuit redCircuit = {
    {3, INPUT, 0} //button
    ,{13, OUTPUT, 0} //led
  };

LedButtonCircuit yellowCircuit ={
    {2, INPUT, 0}//button
    ,{12, OUTPUT, 0}//led  
};

LedButtonCircuit greenCircuit = {
  {1, INPUT, 0}//button
  ,{11, OUTPUT, 0}//led
};

void setup(){
  redCircuit.doSetup();
  yellowCircuit.doSetup();
  greenCircuit.doSetup();
}

void loop(){
  redCircuit.doLoop();
  yellowCircuit.doLoop();
  greeCircuit.doLoop();
  //digitalWrite(12, HIGH);
}
