#include <Servo.h>

int ledPinVerde = 13;
int inPin = 8;
int ledPinRojo = 12;  
int val = 0;    

Servo servoMotor;
 
void setup() {
  Serial.begin(9600);

  servoMotor.attach(9);
  pinMode(ledPinVerde, OUTPUT); 
pinMode (ledPinRojo, OUTPUT);
  pinMode(inPin, INPUT);   
}
 
void loop() {
val = digitalRead(inPin);  
  if (val == 1) {         
    digitalWrite(ledPinVerde, HIGH);  
    digitalWrite(ledPinRojo, LOW); 
    
    servoMotor.write(0);
    delay(1000);
  
    servoMotor.write(180);
    delay(1000);
  } 
  if (val == 0) {         
    digitalWrite(ledPinVerde, LOW);  
    digitalWrite(ledPinRojo, HIGH); 
  }
  }
  



