/*
   PIR sensor tester
*/

int speakerPin = 13;           
int inputPin = 2;               // choose the input pin (for PIR sensor)

// using this variable to show text message only when change occurrs
bool previousValue = LOW; 
int val = 0;                    // variable for reading the pin status


void setup() {
  pinMode(speakerPin, OUTPUT);      // declare speaker as output
  pinMode(inputPin, INPUT);     // declare sensor as input
  Serial.begin(9600);
}

void loop() {
  val = digitalRead(inputPin);  // read input value
  if (val == HIGH) {        
      tone(speakerPin, 262, 3000);
    if (previousValue == LOW) { 
      Serial.println("Motion detected!");
      previousValue = HIGH;
    }
  } else {
       noTone(speakerPin);
    if (previousValue == HIGH) {
      Serial.println("Motion ended!");
      // We only want to print on if change happened
      previousValue = LOW;
    }
  }
}
