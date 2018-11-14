// include the library code:
#include <LiquidCrystal.h>

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  // Print a message to the LCD.
}

void loop() {
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0): 
  int sv=analogRead(A0);
  int sv1=analogRead(A1);
  if (sv>=200)
  {
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.print("Congo WINNER B");
  lcd.print(millis() / 1000);
  delay(1000);
}
else if(sv1>=200)
{
 lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.print("Congo WINNER A");
  lcd.print(millis() / 1000);
  delay(1000); 
}
}
