#define pinLED1 8
#define pinLED2 9
#define pinLED3 10

void setup() {

 pinMode(pinLED1, OUTPUT);  
 pinMode(pinLED2, OUTPUT);  
 pinMode(pinLED3, OUTPUT);  

}

void loop() {
  
 digitalWrite(pinLED1, HIGH); // enciende
 digitalWrite(pinLED2, LOW); // apaga
 digitalWrite(pinLED3, LOW); // apaga
 delay(500);
 digitalWrite(pinLED1, LOW);   
 digitalWrite(pinLED2, HIGH); 
 digitalWrite(pinLED3, LOW); 
 delay(500); 
 digitalWrite(pinLED1, LOW); 
 digitalWrite(pinLED2, LOW); 
 digitalWrite(pinLED3, HIGH); 
 delay(500);
  
}
