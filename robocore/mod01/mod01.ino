/*************************************
      ROBOCORE ARDUINO KIT INICIANTE
          Modulo 1
*************************************/
int ledPin = 13;
int botao = 2;
int estadoBotao = 0; //button reading

void setup(){
  pinMode(ledPin, OUTPUT);
  pinMode(botao, INPUT);

}

void loop(){
  estadoBotao = digitalRead(botao);
 
  if(estadoBotao == HIGH){
    digitalWrite(ledPin, HIGH);
  }else{
    digitalWrite(ledPin, LOW);
  }
  
  
}

