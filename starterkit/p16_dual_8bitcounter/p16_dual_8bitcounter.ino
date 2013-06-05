int latchPin = 8;
int clockPin = 12;
int dataPin = 11;


void setup(){
  Serial.begin(9600);
  
  pinMode(latchPin, OUTPUT);
  pinMode(clockPin, OUTPUT);
  pinMode(dataPin, OUTPUT); 
}

void loop(){
  
 for (int i =0; i<255; i++){
   digitalWrite(latchPin, LOW);
   shiftOut(i);
   shiftOut(255 -i);
   digitalWrite(latchPin, HIGH);

   Serial.println(i);
   Serial.println(255 -  i);
   
   delay(2500);
   
   
  
 } 
 }


void shiftOut(byte dataOut){

  boolean pinState;

  digitalWrite(dataPin, LOW);
  digitalWrite(clockPin, LOW);
  
  for(int i=0; i<=7; i++){
    digitalWrite(clockPin, LOW);
    if(dataOut & (1<<i)){
      pinState = HIGH;
      
    }else{
      pinState = LOW ; 
    }
    
    digitalWrite(dataPin, pinState);
    
    digitalWrite(clockPin, HIGH);
    digitalWrite(dataPin, LOW);
  }
  digitalWrite(clockPin, LOW);
}








