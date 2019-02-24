
int ledPin = 5;

void setup() {
  // put your setup code here, to run once:
   pinMode(ledPin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(3000);                
  digitalWrite(ledPin, HIGH);   //Signal for S begins, which is three short blinks
  delay(1000);                  
  digitalWrite(ledPin, LOW);    
  delay(500);   
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(500);
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(3000);                  //First 3 second delay before the O begins
  digitalWrite(ledPin, HIGH);
  delay(3000);                  //"O" begins, which is 3 long blinks
  digitalWrite(ledPin, LOW);
  delay(500);
  digitalWrite(ledPin, HIGH);
  delay(3000);
  digitalWrite(ledPin, LOW);
  delay(500);
  digitalWrite(ledPin, HIGH);
  delay(3000);                   
  digitalWrite(ledPin, LOW);
  delay(3000);                  //3 second delay again before last "S" begins
  digitalWrite(ledPin, HIGH);   
  delay(1000);                  
  digitalWrite(ledPin, LOW);    
  delay(500);   
  digitalWrite(ledPin, HIGH);
  delay(1000);
  digitalWrite(ledPin, LOW);
  delay(500);
  digitalWrite(ledPin, HIGH);

}
