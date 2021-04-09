/*
 * Ce code permet d'émuler l'appuie de touches ppur contrôler le chariot d'une découpeuse laser K40 avec K40W hisperer
 * Le téléversement doit se faire sur un Arduino ATmega32U4 (Arduino Pro Micro)
 * 
 * MIT Licence 
*/


#define KEYPAD A0 // Broche où est branchée le clavier
#define DEBOUNCE_DELAY 100 

#include "Keyboard.h"

void setup() {
  Serial.begin(9600);
  pinMode(KEYPAD, INPUT);
  Keyboard.begin();
}
int lastVal = 10;
void loop() {
  int keypad = analogRead(KEYPAD);
  // Heuristique pour identifier la touche appuyée sans avoir trop d'erreur
  int val = (keypad+130) / 180;
  
  if (val != lastVal) {
    if (val < 6) {
      Keyboard.press(KEY_LEFT_CTRL);
      if (val == 0) {
        Serial.println("UP");
        Keyboard.press(KEY_UP_ARROW);
      } else if (val == 2) {
        Serial.println("LEFT");
        Keyboard.press(KEY_LEFT_ARROW);
      } else if (val == 3) {
        Serial.println("DOWN");
        Keyboard.press(KEY_DOWN_ARROW);
      } else if (val == 1) {
        Serial.println("RIGHT");
        Keyboard.press(KEY_RIGHT_ARROW);
      } else if (val == 5) {
        Keyboard.press('h');
        Keyboard.releaseAll();
        delay(1000);
      } else {
        Serial.println("UNKNOWN KEY : RELEASE");
        Keyboard.releaseAll();           
      }
    } else {
      Serial.println("RELEASE");
      Keyboard.releaseAll();
    }
  }
  lastVal = val;
  delay(DEBOUNCE_DELAY);
}
