/************************************************************************
**                                                                     **
**                             TITOL: Programa_2                       **
**                                                                     **
**                                                                     **
**   Nom : Yassine hakar                             DATA: 12/01/2017  **
************************************************************************/

//****************************INCLUDE ***********************************

//*************************** VARIABLES *********************************

const int leds4 = 5;          // donar nom al pin 5 de l’Arduino
const int leds3 = 6;          
const int leds2 = 7;          
const int led1 = 8;           
const int buttonPin = 2;      
boolean buttonEstat = LOW;    // definir variable d'estat pel polsador
int num = 1;        
//**************************** SERUP ************************************

void setup()
{
  pinMode(leds4, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(leds3, OUTPUT);    
  pinMode(leds2, OUTPUT);    
  pinMode(led1, OUTPUT); 
  pinMode(buttonPin, INPUT);  
  
  digitalWrite(leds4, LOW);   // posar a 0V el pin 5
  digitalWrite(leds3, LOW);   
  digitalWrite(leds2, LOW);  
  digitalWrite(led1, LOW);    
  }   

//******************************LOOP*************************************


void loop() {                        //inicia el bucle del probrama void loop()  {


  buttonEstat = digitalRead(buttonPin);
  if (buttonEstat == HIGH)
  { 
    num = random(1,7);
    digitalWrite(leds2,LOW);
    digitalWrite(leds3,LOW);
    digitalWrite(leds4,LOW);
    digitalWrite(led1,LOW);
  }
  switch(num)
  {
    //1
      digitalWrite(led1, HIGH);    // mostrar el 1
   //2     
      digitalWrite(leds2, HIGH);   // mostrar el 2  
      break;
  //3  
      digitalWrite(led1, HIGH);    // mostrar el 3
      digitalWrite(leds3, HIGH);  
      break;
 //4 
      digitalWrite(leds2, HIGH);   // mostrar el 4
      digitalWrite(leds3, HIGH); 
      break;
//5
      digitalWrite(leds2, HIGH);   // mostrar el 5
      digitalWrite(leds3, HIGH);
      digitalWrite(led1, HIGH);    
      break;
   //6   
      digitalWrite(leds2, HIGH);   // mostrar el 6
      digitalWrite(leds3, HIGH);
      digitalWrite(leds4, HIGH);
      break;  
  }
}
//****************************** FUNCIONES ******************************}
