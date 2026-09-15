#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// Defining screen
//##############################################################
// fill in screen variables using connect_to_screen_module 



// Button pins - keep out 
const int BTN_P1 = 3;
const int BTN_P2 = 4;

bool lastBtnP1 = HIGH;
bool lastBtnP2 = HIGH;

const int p1Dir = 0;
const int p2Dir = 0;

unsigned long  gameTime = 0;
unsigned long  startTime = 0;

// don't forget to add definitions as you go through the bonuses!

enum GameState {
  // Don't worry about game states for now! 
  // In your own time, how and why you would trigger a new state. Come to the ideasclinic workshop to learn!! 
  PLAYING,
  GAME_OVER
};

// Starting state
GameState state = PLAYING;

void setup() {
  //############################################################## 
  // - Configure screen using connect_to_screen module
  // - Init Button 1 and 2 as I/O using pinMode();

  startTime = millis();
}


void loop() {
  // Button polls
  bool btnP1 = digitalRead(BTN_P1);
  bool btnP2 = digitalRead(BTN_P2);

  //############################################################## 
  // - input button functionality from the instructions
  
  // BONUS: add constraints to the paddles so they don't leave the screen
  // BONUS: start the game when both players are ready 
  // BONUS: add ball movement
  // BONUS: collision with ball and paddles 
  // BONUS: what should happen when the ball hits the top and bottom of the screen? 


  //############################################################## 
  // - add your code from the timer module challenge 

  // BONUS: have the timer start when both players are ready 
  // BONUS: keep track of players' score
  // BONUS: create win criteria 


  //############################################################## 
  // - draw the paddles using code from connect_to_screen 


  // Store button state for button detection
  lastBtnP1 = btnP1;
  lastBtnP2 = btnP2;
}

void resetGame(){
  // BONUS: reset the game with a pushbutton!

}

void resetRound(){
  // BONUS: reset the round after a point is scored!

}
