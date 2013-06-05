int led = 13;
int button = 7;

int val = 0; //state of input pin
int old_val = 0; //previous state of 'val'
int state = 0; // 0 = LED ON... 1 = LED OFF


void setup(){
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);  
 
}

void loop(){
  val = digitalRead(button);
  
  //check if there was a transition
  if((val == HIGH) && (old_val == LOW)){
    state = 1 - state;
    delay(10);
  } 
  
  old_val = val; 
  
  if (state == 1){
    digitalWrite(led, HIGH);
    
  }else{
    digitalWrite(led, LOW);
  }
  
}


