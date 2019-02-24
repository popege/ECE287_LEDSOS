
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
  delay(3000);                // 3 second delay wich acts 1: before loop to make sure your ready and 2: act as a delay for when it starts all over again :)
  digitalWrite(ledPin, HIGH);   //"S" signal starts after the one second delay
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
  delay(3000);                  //3 second delay for the second letter (fisrt of 2)
  digitalWrite(ledPin, HIGH);
  delay(3000);                  // First dash of 3 wich represents the O
  digitalWrite(ledPin, LOW);
  delay(500);
  digitalWrite(ledPin, HIGH);
  delay(3000);
  digitalWrite(ledPin, LOW);
  delay(500);
  digitalWrite(ledPin, HIGH);
  delay(3000);                   
  digitalWrite(ledPin, LOW);
  delay(3000);                  //second 3 second delay for the third letter
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
