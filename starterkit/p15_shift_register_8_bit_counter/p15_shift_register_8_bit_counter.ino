//Project 15
int latchPin = 8; //pin connected to Pin 12 of 74HC595 (LATCH)
int clockPin = 12; // pin connected to Pin 11 of 74HC595 (CLOCK)
int dataPin = 11;//Pin connected to Pin 14 of 74HC595 (DATA)

void setup(){
 pinMode(latchPin, OUTPUT);
 pinMode(clockPin, OUTPUT);
 pinMode(dataPin, OUTPUT); 
}

void loop(){
  for(int i=0; i<256; i++){
    //set latchPin low to allow data flow
    digitalWrite(latchPin, LOW);
    shiftOut(i);
    //set  latchPin to high to lock and send Data
    digitalWrite(latchPin, HIGH);
    delay(1000);
  
  } 
}

void shiftOut(byte dataOut){
  //Shift out 8 bits LSB first,
  // on rising edge of clock
  boolean pinState;
  
  //clear shift register ready for sending data
  digitalWrite(dataPin, LOW);
  digitalWrite(clockPin, LOW);

  //for each bit in dataOut send out a bit
  for(int i=0; i<8;i++){
    //set clockPin to LOW prior to sending bit
    digitalWrite(clockPin, LOW);
    
    //if the value of dataOut and (logical AND) a bitmask are true, set pinState to 1 (HIGH)
    if(dataOut & (1<<i)){
      pinState = HIGH;
    }else{
      pinState = LOW;
    }
    
    //sets dataPin to HIGH or LOW depending on pinState
    digitalWrite( dataPin, pinState);
    //send bit out on rising edge of clock
    digitalWrite(clockPin, HIGH);  
  }
  
  //stop shiifting out data
  digitalWrite(clockPin, LOW);
}
  
