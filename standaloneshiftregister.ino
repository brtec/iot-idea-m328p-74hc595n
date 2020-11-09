/*
Atmega m328p Standalone + Shift Register
By: Bruno Rezende
Acionamento sequencial temporizados de portas I/O
Versão de Testes
*/

//74HC595n
int pindata = 10;
int pinlatch = 11;
int pinclock = 12;
int regis[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int counter = 0;

void changeValues(int val, int acao){
  
  if (val <16){
    regis[val] = acao;
  }
  digitalWrite(pinlatch, LOW);
  //gravar_porta(1, LOW);
  for(int i=15; i >=  0; i--){
    digitalWrite(pinclock, LOW);
    int PIN = regis[i];
    digitalWrite(pindata, PIN);
    digitalWrite(pinclock, HIGH);
  }
  //gravar_porta(1, HIGH);
  digitalWrite(pinlatch, HIGH);
  
}

//Baixa todos os pinos do 74HC595
void clear(){
  for(int i=15; i >=  0; i--){
     regis[i] = LOW;
  }
} 

void setup() {
  
  Serial.begin(9600);

  pinMode(pinlatch,OUTPUT);
  pinMode(pinclock,OUTPUT);
  pinMode(pindata,OUTPUT);
  digitalWrite(pinlatch, LOW);
  digitalWrite(pinclock, LOW);
  
  digitalWrite(pinlatch, HIGH);
  
  Serial.print("Iniciado");
}

void loop(){
   
   for(int i=1;i<=7;i++){

     
      /*    if(i == 0 || i > 16){
             changeValues(i, 0);
        }else{
             changeValues(i, 1);
             delay(200);
            changeValues(i, 0);
            clear();
            //delay(200);
        }
      
     */
      
    
     changeValues(i, 1);
      delay(100);
  }
  delay(100);
   for(int i=1;i<=7;i++){

     
      /*    if(i == 0 || i > 16){
             changeValues(i, 0);
        }else{
             changeValues(i, 1);
             delay(200);
            changeValues(i, 0);
            clear();
            //delay(200);
        }
      
     */
      
    
     changeValues(i, 0);
     delay(100);
    
  }
  delay(100);

  for(int i=7;i>=0;i--){

     
      /*    if(i == 0 || i > 16){
             changeValues(i, 0);
        }else{
             changeValues(i, 1);
             delay(200);
            changeValues(i, 0);
            clear();
            //delay(200);
        }
      
     */
      
    
     changeValues(i, 1);
      delay(100);
  }
  delay(100);
   for(int i=7;i>=0;i--){

     
      /*    if(i == 0 || i > 16){
             changeValues(i, 0);
        }else{
             changeValues(i, 1);
             delay(200);
            changeValues(i, 0);
            clear();
            //delay(200);
        }
      
     */
      
    
     changeValues(i, 0);
     delay(100);
    
  }
  delay(100);
   for(int i=7;i>=0;i--){

     
      /*    if(i == 0 || i > 16){
             changeValues(i, 0);
        }else{
             changeValues(i, 1);
             delay(200);
            changeValues(i, 0);
            clear();
            //delay(200);
        }
      
     */
      
    
     changeValues(i, 1);
    
  }
  delay(100);
    for(int i=7;i>=0;i--){

     
      /*    if(i == 0 || i > 16){
             changeValues(i, 0);
        }else{
             changeValues(i, 1);
             delay(200);
            changeValues(i, 0);
            clear();
            //delay(200);
        }
      
     */
      
    
     changeValues(i, 0);
    
  }
  delay(100);
  for(int i=7;i>=0;i--){

     
      /*    if(i == 0 || i > 16){
             changeValues(i, 0);
        }else{
             changeValues(i, 1);
             delay(200);
            changeValues(i, 0);
            clear();
            //delay(200);
        }
      
     */
      
    
     changeValues(i, 1);
    
  }
  delay(100);
    for(int i=7;i>=0;i--){

     
      /*    if(i == 0 || i > 16){
             changeValues(i, 0);
        }else{
             changeValues(i, 1);
             delay(200);
            changeValues(i, 0);
            clear();
            //delay(200);
        }
      
     */
      
    
     changeValues(i, 0);
    
  }
  delay(100);for(int i=7;i>=0;i--){

     
      /*    if(i == 0 || i > 16){
             changeValues(i, 0);
        }else{
             changeValues(i, 1);
             delay(200);
            changeValues(i, 0);
            clear();
            //delay(200);
        }
      
     */
      
    
     changeValues(i, 1);
    
  }
  delay(100);
    for(int i=7;i>=0;i--){

     
      /*    if(i == 0 || i > 16){
             changeValues(i, 0);
        }else{
             changeValues(i, 1);
             delay(200);
            changeValues(i, 0);
            clear();
            //delay(200);
        }
      
     */
      
    
     changeValues(i, 0);
    
  }
  delay(100);for(int i=7;i>=0;i--){

     
      /*    if(i == 0 || i > 16){
             changeValues(i, 0);
        }else{
             changeValues(i, 1);
             delay(200);
            changeValues(i, 0);
            clear();
            //delay(200);
        }
      
     */
      
    
     changeValues(i, 1);
    
  }
  delay(100);
    for(int i=7;i>=0;i--){

     
      /*    if(i == 0 || i > 16){
             changeValues(i, 0);
        }else{
             changeValues(i, 1);
             delay(200);
            changeValues(i, 0);
            clear();
            //delay(200);
        }
      
     */
      
    
     changeValues(i, 0);
    
  }
  delay(100);for(int i=7;i>=0;i--){

     
      /*    if(i == 0 || i > 16){
             changeValues(i, 0);
        }else{
             changeValues(i, 1);
             delay(200);
            changeValues(i, 0);
            clear();
            //delay(200);
        }
      
     */
      
    
     changeValues(i, 1);
    
  }
  delay(100);
    for(int i=7;i>=0;i--){

     
      /*    if(i == 0 || i > 16){
             changeValues(i, 0);
        }else{
             changeValues(i, 1);
             delay(200);
            changeValues(i, 0);
            clear();
            //delay(200);
        }
      
     */
      
    
     changeValues(i, 0);
    
  }
  delay(100);for(int i=7;i>=0;i--){

     
      /*    if(i == 0 || i > 16){
             changeValues(i, 0);
        }else{
             changeValues(i, 1);
             delay(200);
            changeValues(i, 0);
            clear();
            //delay(200);
        }
      
     */
      
    
     changeValues(i, 1);
    
  }
  delay(100);
    for(int i=7;i>=0;i--){

     
      /*    if(i == 0 || i > 16){
             changeValues(i, 0);
        }else{
             changeValues(i, 1);
             delay(200);
            changeValues(i, 0);
            clear();
            //delay(200);
        }
      
     */
      
    
     changeValues(i, 0);
    
  }
  delay(100);for(int i=7;i>=0;i--){

     
      /*    if(i == 0 || i > 16){
             changeValues(i, 0);
        }else{
             changeValues(i, 1);
             delay(200);
            changeValues(i, 0);
            clear();
            //delay(200);
        }
      
     */
      
    
     changeValues(i, 1);
    
  }
  delay(100);
    for(int i=7;i>=0;i--){

     
      /*    if(i == 0 || i > 16){
             changeValues(i, 0);
        }else{
             changeValues(i, 1);
             delay(200);
            changeValues(i, 0);
            clear();
            //delay(200);
        }
      
     */
      
    
     changeValues(i, 0);
    
  }
  delay(100);for(int i=7;i>=0;i--){

     
      /*    if(i == 0 || i > 16){
             changeValues(i, 0);
        }else{
             changeValues(i, 1);
             delay(200);
            changeValues(i, 0);
            clear();
            //delay(200);
        }
      
     */
      
    
     changeValues(i, 1);
    
  }
  delay(100);
    for(int i=7;i>=0;i--){

     
      /*    if(i == 0 || i > 16){
             changeValues(i, 0);
        }else{
             changeValues(i, 1);
             delay(200);
            changeValues(i, 0);
            clear();
            //delay(200);
        }
      
     */
      
    
     changeValues(i, 0);
    
  }
  delay(100);for(int i=7;i>=0;i--){

     
      /*    if(i == 0 || i > 16){
             changeValues(i, 0);
        }else{
             changeValues(i, 1);
             delay(200);
            changeValues(i, 0);
            clear();
            //delay(200);
        }
      
     */
      
    
     changeValues(i, 1);
    
  }
  delay(100);
    for(int i=7;i>=0;i--){

     
      /*    if(i == 0 || i > 16){
             changeValues(i, 0);
        }else{
             changeValues(i, 1);
             delay(200);
            changeValues(i, 0);
            clear();
            //delay(200);
        }
      
     */
      
    
     changeValues(i, 0);
    
  }
  delay(100);for(int i=7;i>=0;i--){

     
      /*    if(i == 0 || i > 16){
             changeValues(i, 0);
        }else{
             changeValues(i, 1);
             delay(200);
            changeValues(i, 0);
            clear();
            //delay(200);
        }
      
     */
      
    
     changeValues(i, 1);
    
  }
  delay(100);
    for(int i=7;i>=0;i--){

     
      /*    if(i == 0 || i > 16){
             changeValues(i, 0);
        }else{
             changeValues(i, 1);
             delay(200);
            changeValues(i, 0);
            clear();
            //delay(200);
        }
      
     */
      
    
     changeValues(i, 0);
    
  }
  delay(100);
  for(int i=7;i>=0;i--){

     
      /*    if(i == 0 || i > 16){
             changeValues(i, 0);
        }else{
             changeValues(i, 1);
             delay(200);
            changeValues(i, 0);
            clear();
            //delay(200);
        }
      
     */
      
    
     changeValues(i, 1);
    
  }
  delay(100);
   
    
     changeValues(5, 1);
     delay(400);
     changeValues(5, 0);
     delay(100);
     changeValues(6, 1);
     changeValues(4, 1);
     delay(400);
     changeValues(6, 0);
     changeValues(4, 0);
     delay(100);
     changeValues(7, 1);
     changeValues(3, 1);
     delay(400);
     changeValues(7, 0);
     changeValues(3, 0);
     delay(100);
     changeValues(2, 1);
     changeValues(1, 1);
     delay(400);
     changeValues(2, 0);
     changeValues(1, 0);
     delay(100);
     changeValues(7, 1);
     changeValues(3, 1);
     delay(400);
     changeValues(7, 0);
     changeValues(3, 0);
     delay(100);
  

  
}
