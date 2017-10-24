/*
  Set a state of a variable when you press a pushbutton ( the 
  button went from off to on ). 
  
  created 01-12-2009 by kasperkamperman.com
  based on example 'State change detection' by Tom Igoe
*/

#include <Keyboard.h>

const int buttonPin2  = 2;     // the pin that the pushbutton is attached to
const int buttonPin3  = 3;     // the pin that the pushbutton is attached to
const int buttonPin4  = 4;     // the pin that the pushbutton is attached to
const int buttonPin5  = 5;     // the pin that the pushbutton is attached to
const int buttonPin6  = 6;     // the pin that the pushbutton is attached to
const int buttonPin7  = 7;     // the pin that the pushbutton is attached to
const int buttonPin8  = 8;     // the pin that the pushbutton is attached to
const int buttonPin9  = 9;     // the pin that the pushbutton is attached to
const int buttonPin10 = 10;     // the pin that the pushbutton is attached to
const int buttonPin11 = 11;     // the pin that the pushbutton is attached to
const int buttonPin12 = 12;     // the pin that the pushbutton is attached to
const int buttonPin13 = 13;     // the pin that the pushbutton is attached to

int buttonState2      = 0;     // current state of the button
int lastButtonState2  = 0;     // previous state of the button
int buttonState3      = 0;     // current state of the button
int lastButtonState3  = 0;     // previous state of the button
int buttonState4      = 0;     // current state of the button
int lastButtonState4  = 0;     // previous state of the button
int buttonState5      = 0;     // current state of the button
int lastButtonState5  = 0;     // previous state of the button
int buttonState6      = 0;     // current state of the button
int lastButtonState6  = 0;     // previous state of the button
int buttonState7      = 0;     // current state of the button
int lastButtonState7  = 0;     // previous state of the button
int buttonState8      = 0;     // current state of the button
int lastButtonState8  = 0;     // previous state of the button
int buttonState9      = 0;     // current state of the button
int lastButtonState9  = 0;     // previous state of the button
int buttonState10      = 0;     // current state of the button
int lastButtonState10  = 0;     // previous state of the button
int buttonState11      = 0;     // current state of the button
int lastButtonState11  = 0;     // previous state of the button
int buttonState12      = 0;     // current state of the button
int lastButtonState12  = 0;     // previous state of the button
int buttonState13      = 0;     // current state of the button
int lastButtonState13  = 0;     // previous state of the button

void setup() {
  pinMode(buttonPin2, INPUT);  // initialize the button pin as a input

  Serial.begin(9600);
}
void loop() {

  Keyboard.begin();
  // read the pushbutton input pin
  buttonState2 = digitalRead(buttonPin2);

//Button 1
  if (buttonState2 != lastButtonState2) {
    Serial.write("Button1");
    Keyboard.write('a');
	  delay(1000);
    digitalWrite(buttonPin2, HIGH);
    // remember the current state of the button
    lastButtonState2 = buttonState2;
    }
  }

  //Button 1
  if (buttonState2 != lastButtonState2) {
    Serial.write("Button1");
    Keyboard.write('a');
    delay(1000);
    digitalWrite(buttonPin2, HIGH);
    // remember the current state of the button
    lastButtonState2 = buttonState2;
    }
  }

  //Button 1
  if (buttonState2 != lastButtonState2) {
    Serial.write("Button1");
    Keyboard.write('a');
    delay(1000);
    digitalWrite(buttonPin2, HIGH);
    // remember the current state of the button
    lastButtonState2 = buttonState2;
    }
  }

  //Button 1
  if (buttonState2 != lastButtonState2) {
    Serial.write("Button1");
    Keyboard.write('a');
    delay(1000);
    digitalWrite(buttonPin2, HIGH);
    // remember the current state of the button
    lastButtonState2 = buttonState2;
    }
  }

  //Button 1
  if (buttonState2 != lastButtonState2) {
    Serial.write("Button1");
    Keyboard.write('a');
    delay(1000);
    digitalWrite(buttonPin2, HIGH);
    // remember the current state of the button
    lastButtonState2 = buttonState2;
    }
  }

  //Button 1
  if (buttonState2 != lastButtonState2) {
    Serial.write("Button1");
    Keyboard.write('a');
    delay(1000);
    digitalWrite(buttonPin2, HIGH);
    // remember the current state of the button
    lastButtonState2 = buttonState2;
    }
  }

  //Button 1
  if (buttonState2 != lastButtonState2) {
    Serial.write("Button1");
    Keyboard.write('a');
    delay(1000);
    digitalWrite(buttonPin2, HIGH);
    // remember the current state of the button
    lastButtonState2 = buttonState2;
    }
  }

  //Button 1
  if (buttonState2 != lastButtonState2) {
    Serial.write("Button1");
    Keyboard.write('a');
    delay(1000);
    digitalWrite(buttonPin2, HIGH);
    // remember the current state of the button
    lastButtonState2 = buttonState2;
    }
  }

  //Button 1
  if (buttonState2 != lastButtonState2) {
    Serial.write("Button1");
    Keyboard.write('a');
    delay(1000);
    digitalWrite(buttonPin2, HIGH);
    // remember the current state of the button
    lastButtonState2 = buttonState2;
    }
  }

  //Button 1
  if (buttonState2 != lastButtonState2) {
    Serial.write("Button1");
    Keyboard.write('a');
    delay(1000);
    digitalWrite(buttonPin2, HIGH);
    // remember the current state of the button
    lastButtonState2 = buttonState2;
    }
  }

  //Button 1
  if (buttonState2 != lastButtonState2) {
    Serial.write("Button1");
    Keyboard.write('a');
    delay(1000);
    digitalWrite(buttonPin2, HIGH);
    // remember the current state of the button
    lastButtonState2 = buttonState2;
    }
  }

  //Button 1
  if (buttonState2 != lastButtonState2) {
    Serial.write("Button1");
    Keyboard.write('a');
    delay(1000);
    digitalWrite(buttonPin2, HIGH);
    // remember the current state of the button
    lastButtonState2 = buttonState2;
    }
  }
  

