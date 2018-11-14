const int  buttonPin = 8;    // the pin that the pushbutton is attached to
const int ledPin = 2;    // the pin that the LED is attached to
const int ledPin1 = 3; 
const int ledPin2 = 4;
const int ledPin3 = 5;
int pin=11;
// Variables will change:
int buttonPushCounter = 0;   // counter for the number of button presses
int buttonState = 0;         // current state of the button
int lastButtonState = 0;     // previous state of the button

void setup() {
  // initialize the button pin as a input:
  pinMode(buttonPin, INPUT);
  // initialize the LED as an output:
  pinMode(pin,OUTPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(ledPin1,OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3,OUTPUT);
  // initialize serial communication:
  Serial.begin(9600);
}


void loop() {
  // read the pushbutton input pin:
  buttonState = digitalRead(buttonPin);

  // compare the buttonState to its previous state
  if (buttonState != lastButtonState) {
    // if the state has changed, increment the counter
    if (buttonState == HIGH) {
      // if the current state is HIGH then the button went from off to on:
      buttonPushCounter++;
      Serial.println("on");
      Serial.print("number of button pushes: ");
      Serial.println(buttonPushCounter);
    } else {
      // if the current state is LOW then the button went from on to off:
      Serial.println("off");
    }
    // Delay a little bit to avoid bouncing
    delay(50);
  }
  // save the current state as the last state, for next time through the loop
  lastButtonState = buttonState;


  // turns on the LED every four button pushes by checking the modulo of the
  // button push counter. the modulo function gives you the remainder of the
  // division of two numbers:
  if (buttonPushCounter  <= 26) 
    {
      if(buttonPushCounter %2==0)
      {
      digitalWrite(ledPin,HIGH);
      }
  else{
    digitalWrite(ledPin,LOW);
  }
    }
  if (buttonPushCounter  >= 26 && buttonPushCounter  <= 50 )
     {
      if(buttonPushCounter %2==0)
      {
    digitalWrite(ledPin1,HIGH);
  }
   else {
    digitalWrite(ledPin1, LOW);
  }
     } 
      if (buttonPushCounter  >= 50 && buttonPushCounter  <= 76 )
     {
      if(buttonPushCounter %2==0)
      {
    digitalWrite(ledPin2,HIGH);
  }
   else {
    digitalWrite(ledPin2, LOW);
  }
     } 
      if (buttonPushCounter  >= 76 && buttonPushCounter  <= 100 )
     {
      if(buttonPushCounter %2==0)
      {
    digitalWrite(ledPin3,HIGH);
  }
   else {
    digitalWrite(ledPin3, LOW);
  }
     } 
      if (buttonPushCounter  >= 100)
       {
       digitalWrite(ledPin,LOW);
       digitalWrite(ledPin1,LOW);
       digitalWrite(ledPin2,LOW);
       digitalWrite(ledPin3,LOW);
       delay(300);
       digitalWrite(ledPin,HIGH);
       digitalWrite(ledPin1,HIGH);
       digitalWrite(ledPin2,HIGH);
       digitalWrite(ledPin3,HIGH);
       delay(300);
       digitalWrite(pin,HIGH);
       }
       
}
