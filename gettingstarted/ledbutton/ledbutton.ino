int led = 13; // ping dor the led
int button =7; // input pin where the pushbutton is connected

int val = 0; //val will be used to store the state of the input pin

void setup(){
 pinMode(led, OUTPUT); // tell Arduino is an output 
 pinMode(button, INPUT); //and button is an input
}

void loop(){
 val = digitalRead(button);  // tell arduino LED is an output 
 if (val == HIGH){
  digitalWrite(led, HIGH);
 
 }else{
  digitalWrite(led, LOW); 
 } 
  
}
