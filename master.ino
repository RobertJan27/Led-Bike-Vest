
// constants won't change. They're used here to set pin numbers:
#include <SoftwareSerial.h>

const int buttonStanga = 8;    
const int buttonDreapta = 9; 

int buttonStateStanga = 0;
int buttonStateDreapta = 0;          
int buttonstanga=LOW;
int buttondreapta=LOW;

SoftwareSerial mySerial(3,2);

void setup() {
  // initialize the pushbutton pin as an input:
  pinMode(buttonStanga, INPUT_PULLUP);
  pinMode(buttonDreapta, INPUT_PULLUP);
  mySerial.begin(9600);
  Serial.begin(9600);
  Serial.println("Enter AT command");
}

void loop() {
  
  buttonStateDreapta = digitalRead(buttonDreapta);
  buttonStateStanga = digitalRead(buttonStanga);
  
  if(buttonStateStanga!=buttonstanga){
  if (buttonStateStanga == LOW) {
    mySerial.println("1");
    Serial.println("1");
    buttonstanga=LOW;
  } 
  else
  {
    delay(100);
    buttonstanga=buttonStateStanga;}
  }

   if(buttonStateDreapta!=buttondreapta){
  if (buttonStateDreapta == LOW) {
    mySerial.println("0");
    Serial.println("0");
    buttondreapta=LOW;
  } 
  else
  {
    delay(100);
    buttondreapta=buttonStateDreapta;}
  }
  
  /*
   if(mySerial.available())
  {
  Serial.write((mySerial.read()));
  }
  if(Serial.available())
  {
   mySerial.write((Serial.read())); 
   }*/

}
