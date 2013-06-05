int led = 13;
int button = 7;

int val = 0; // store state
int state = 0; // 0 = LED OFF ... 1 = LED ON

void setup(){
  pinMode(led, OUTPUT); 
  pinMode(button, INPUT);
}


void loop(){
  val = digitalRead(button);
  if(val == HIGH){
    state = 1 - state;
  }
  if(state == 1){
    digitalWrite(led, HIGH); 
  }else{
    digitalWrite(led, LOW);
  }
  
}

