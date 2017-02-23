/************************************************************************
**                                                                     **
**                             TITOL: Programa_1                      **
**                                                                     **
**                                                                     **
**   Nom : Yassine hakar                             DATA: 12/01/2017  **
************************************************************************/

//****************************INCLUDE ***********************************

//*************************** VARIABLES *********************************

const int led5 = 5;          // donar nom al pin 5 de l’Arduino
const int led6 = 6;          
const int led7 = 7;          
const int led8 = 8;           
  
//**************************** SERUP ************************************

void setup()
{
  pinMode(led5, OUTPUT);     // definir el pin 5 com una sortida
  pinMode(led6, OUTPUT);    
  pinMode(led7, OUTPUT);    
  pinMode(led8, OUTPUT); 
  
  }   

//******************************LOOP*************************************


void loop() {                        //inicia el bucle del probrama void loop()  {

    //1
      digitalWrite(led5, LOW);   
      digitalWrite(led6, LOW); 
      digitalWrite(led7, LOW); 
      digitalWrite(led8, HIGH);  

       delay(700);
   //2     
      digitalWrite(led5, LOW);   
      digitalWrite(led6, LOW); 
      digitalWrite(led7, HIGH); 
      digitalWrite(led8, LOW);
      
      delay(700);

  //3  
      digitalWrite(led5, LOW);   
      digitalWrite(led6, HIGH); 
      digitalWrite(led7, LOW); 
      digitalWrite(led8, HIGH); 
       
    delay(700);
 //4 
      digitalWrite(led5, LOW);   
      digitalWrite(led6, HIGH); 
      digitalWrite(led7, HIGH); 
      digitalWrite(led8, LOW);
     delay(700); 
        
//5
      digitalWrite(led5, LOW);   
      digitalWrite(led6, HIGH); 
      digitalWrite(led7, HIGH); 
      digitalWrite(led8, HIGH);
   delay(700);    
      
   //6   
      digitalWrite(led5, HIGH);   
      digitalWrite(led6, HIGH); 
      digitalWrite(led7, HIGH); 
      digitalWrite(led8, LOW);        
  delay(700);
}
//****************************** FUNCIONES ******************************}
