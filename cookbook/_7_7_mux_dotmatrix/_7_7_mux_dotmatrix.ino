const int columnPins[] = {2, 3, 4, 5, 6, 7, 8, 9};
const int rowPins[] = {10, 11, 12, 15, 16, 17, 18, 19};


int pixel =0;
int columnLevel = 0;
int rowLevel = 0;

void setup(){
  for (int i = 0; i < 8; i ++){
     pinMode(columnPins[i], OUTPUT);
     pinMode(rowPins[i], OUTPUT);
  }
  
}


void loop(){
  pixel = pixel + 1;
  if(pixel > 63){
    pixel = 0;
  } 
  
  columnLevel = pixel / 8;
  rowLevel = pixel % 8;
  for (int column = 0; column < 8; column++){
    digitalWrite(columnPins[column], LOW);
   
   for(int row =0; row <8; row++){
     if(columnLevel > column){
       digitalWrite(rowPins[row], HIGH);
     }else if(columnLevel == column && rowLevel >= row){
       digitalWrite(rowPins[row], HIGH);
     }else{
       digitalWrite(columnPins[column], LOW); 
     }
     
     delay(300);
     digitalWrite(rowPins[row], LOW);
   } 
   digitalWrite(columnPins[column], HIGH);
  } 
  
}
