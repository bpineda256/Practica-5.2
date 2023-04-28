int digitos;
int digitos2;
int digitos3 = 0;
int contador = 0;
void mostrarNumero (int x);

void setup()
{
  Serial.begin(9600);
  for(int i=2; i<9;i++)
    pinMode(i, OUTPUT);
  pinMode(A0,OUTPUT);
  pinMode(A1,OUTPUT);
  
  pinMode(9,INPUT);
  
}

void loop()
{
  
  //numeroEnDigitos(36,arreglo,&digitos);
  digitos = digitalRead(9);
  Serial.println(digitos);
  delay(50);
  if(digitos == HIGH){
contador++;
Serial.println(contador);
delay(200);
}
 
  if(contador  == 0){
    mostrarNumero (0);
  digitalWrite(A1,LOW);
  digitalWrite(A0,HIGH);
  delay(5);
  
  mostrarNumero (2);
  digitalWrite(A1,HIGH);
  digitalWrite(A0,LOW);
  delay(5);
  }

 if(contador == 1){
     mostrarNumero (2);
  digitalWrite(A1,LOW);
  digitalWrite(A0,HIGH);
  delay(5);
  
  mostrarNumero (2);
  digitalWrite(A1,HIGH);
  digitalWrite(A0,LOW);
  delay(5);
  }
  if(contador == 2){
      mostrarNumero (2);
  digitalWrite(A1,LOW);
  digitalWrite(A0,HIGH);
  delay(5);
  
  mostrarNumero (1);
  digitalWrite(A1,HIGH);
  digitalWrite(A0,LOW);
  delay(5);
    }
if(contador == 3){
    mostrarNumero (1);
  digitalWrite(A1,LOW);
  digitalWrite(A0,HIGH);
  delay(5);
  }
  if(contador == 4){
   contador = contador-4;
delay(50);  }

}


// FUNCIONES

// La función va a mostrar un número
void mostrarNumero (int x)
{
   switch(x){
    case 0:
      digitalWrite(2,HIGH);
      digitalWrite(3,HIGH);
      digitalWrite(4,HIGH);
      digitalWrite(5,HIGH);
      digitalWrite(6,HIGH);
      digitalWrite(7,HIGH);
      digitalWrite(8,LOW);
      break;
    
  case 1:
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,LOW);
    break;
    
   case 2:
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
     break;
     
        
   case 3:
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(7,LOW);
    digitalWrite(8,HIGH);
    break;
    

  }
  
}  