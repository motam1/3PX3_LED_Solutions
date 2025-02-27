const int INCAN1 = 13;   
const int INCAN2 = 12;  
const int INCAN3 = 11;  



void setup() {
  pinMode(INCAN1, OUTPUT);
  pinMode(INCAN2, OUTPUT);
  pinMode(INCAN3, OUTPUT);
}

void loop() {
  for (int i = 0; i < 3 ; i++)
  {
    digitalWrite(INCAN1, HIGH);
    delay(1000);    
    digitalWrite(INCAN1, LOW);
    digitalWrite(INCAN2, HIGH);
    delay(1000);    
    digitalWrite(INCAN2, LOW);
    digitalWrite(INCAN3, HIGH);
    delay(1000);    
    digitalWrite(INCAN3, LOW);
  } 
  for (int j = 0; j < 5; j++)
  {
    delay(150);
    digitalWrite(INCAN1, HIGH);
    digitalWrite(INCAN2, HIGH);
    digitalWrite(INCAN3, HIGH);
    delay(150); 
    digitalWrite(INCAN1, LOW);
    digitalWrite(INCAN2, LOW);
    digitalWrite(INCAN3, LOW);
  }
  delay(3000);
}