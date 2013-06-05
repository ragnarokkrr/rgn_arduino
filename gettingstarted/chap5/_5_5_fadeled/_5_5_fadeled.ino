int led = 9;
int i =0; // guess it!

void setup(){
  pinMode(led, OUTPUT);  
}


void loop(){
  for (i=0; i<255; i++) { //(fade in) 0 ->254
    analogWrite(led, i);  //led brightness
    delay(10);            //to see the change
  }
  
  for (i = 255; i>0; i--){  //fade out 255->1
    analogWrite(led, i);
    delay(10);
  }
  
}

