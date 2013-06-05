const int columnPins[] = {2, 3, 4, 5, 6, 7, 8, 9};
const int rowPins[] = {10, 11, 12, 15, 16, 17, 18, 19};

int currRow = 0;


void setup(){
  for (int i = 0; i < 8; i ++){
     pinMode(columnPins[i], OUTPUT);
     pinMode(rowPins[i], OUTPUT);
  }
  for(int i=0; i<8; i ++){
    for(int j =0; j<8; j++){
      digitalWrite(columnPins[i], LOW);
      digitalWrite(rowPins[j], LOW);
    } 
      
  }
  
}


void loop(){
    
  
    //for(int j =0; j<8; j++){
      digitalWrite(columnPins[4], HIGH);
      digitalWrite(rowPins[5], HIGH);
    //} 
  
  
}
