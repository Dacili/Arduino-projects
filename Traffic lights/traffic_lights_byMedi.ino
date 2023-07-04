void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(12, HIGH);
    delay(2500);
  digitalWrite(12, LOW);
  delay(500);
  
  digitalWrite(10, HIGH);
  delay(1000);
  digitalWrite(10, LOW);
  delay(500);
  digitalWrite(8, HIGH);
  delay(2500);
  digitalWrite(8, LOW);
  delay(500);
  digitalWrite(10, HIGH);
  delay(1000);
  digitalWrite(10, LOW);
  delay(500);
}
