const int XENON = 13;   



void setup() {
  pinMode(XENON, OUTPUT);

}

void loop() {
  digitalWrite(XENON, HIGH);
  delay(150);    
  digitalWrite(XENON, LOW);
  delay(150); 
  digitalWrite(XENON, HIGH);
  delay(150);    
  digitalWrite(XENON, LOW);
  delay(150); 
  digitalWrite(XENON, HIGH);
  delay(150);    
  digitalWrite(XENON, LOW);
  delay(150); 
  digitalWrite(XENON, HIGH);
  delay(5000);    
  digitalWrite(XENON, LOW);
  delay(150); 
}