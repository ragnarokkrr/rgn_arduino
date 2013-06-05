int led = 9;    //pin 9, analog!
int button = 7;  //pin 7, digital

int val = 0;      //input pin state
int old_val = 0;  //stores previous value of "val"
int state = 0 ;   //0 = LED OFF ... 1 = LED ON

int brightness = 128;
unsigned long startTime = 0;  //when did we begin pressing?

void setup(){
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
}

void loop(){
  val = digitalRead(button);  //read input value (fresh)
  
  if(( val == HIGH) && (old_val == LOW)){
      state = 1 - state;  //ON<=>OFF
      
      startTime = millis();// arduino clock -> ms since last reset
                            //remembers when  the button was last pressed
      delay(10);
  }

  //check wheter button is being held down
  if((val==HIGH) && (old_val==HIGH)){

    //if the button is held for more than 500ms
    if(state==1 && (millis() - startTime) > 500){
      brightness++;
      delay(10);
      
      if(brightness > 255){
         brightness = 0; 
      }
    }
  }
  
  old_val = val;
  
  if(state == 1){
    analogWrite(led, brightness);
  }else{
    analogWrite(led,0);
  }
}
