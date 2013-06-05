/********************************
  ROBOCORE ARDUINO KIT INICIANTE
  Modulo 1
********************************/
int ledPin = 13;    //led pino 13
int botao = 2;      //botao no pino 2
int estadoBotao = 0;//vairavel para ler o status do push button

void setup(){
  pinMode (ledPin, OUTPUT);  //pino do led sera saida
  pinMode (botao, INPUT);    //pino com botao sera entrada
  
}

void loop(){
  estadoBotao = digitalRead(botao); 
      /* novo estado do botao vai ser igual ao que Arduino ler no pino onde 
      esta o botao. Podera ser ALTO (HIGH) se o botao estiver pressionado
      ou BAIXO (LOW) se o botao estiver solto*/
      
  if (estadoBotao == HIGH){
     digitalWrite(ledPin, HIGH); //se bota estuver pressianado(HIGH) acende o led do pino 13
    
  }else{
    digitalWrite(ledPin, LOW); //se nao estiver pressionado deixa o led do pino 13 apagado
    
  }
}
