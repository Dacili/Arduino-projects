#include <Keypad.h>
#include <LiquidCrystal.h>


LiquidCrystal lcd(A0, A1, 10, 9, A2, A3);

const int rows = 4;
const int cols = 4;
char keys[rows][cols] = {
  { '1', '2', '3', 'A' },
  { '4', '5', '6', 'B' },
  { '7', '8', '9', 'C' },
  { '*', '0', '#', 'D' }
};

uint8_t colPins[cols] = { 7, 6, 5, 4}; // Pins connected to C1, C2, C3, C4
uint8_t rowPins[rows] = { 13, 12, 11, 8 };

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, rows, cols);

void setup() {
// put your setup code here, to run once:
Serial.begin(9600);
 lcd.begin(20, 4);
 lcd.setCursor(3, 0);
 lcd.print("Mediii hakleeeeer   ");
 lcd.print("Password: ");
}

int counter = 0;

void loop() {
  char pw [4];
  char key = keypad.getKey();

  if (key != NO_KEY) {
    Serial.println(key);
    lcd.print(key);
    pw[counter] = key;
    bool isPwMatched = true;
    if(counter == 3){
      for(int i=0; i<4; i++){
        if(pw[i]=='0') continue;
        else {
          isPwMatched = false;
          counter = -1;
          Serial.println("Password is incorrect.");
          lcd.clear();
          lcd.setCursor(3, 0);
          lcd.print("Password is          incorrect.   ");
          break;
          } 
      }
      if(isPwMatched){
          Serial.println("Password is correct.");
          lcd.clear();
          lcd.print("Password is correct.     ");
          counter = -1;
      }
    }
 counter++;
  }
}
