/******************************************************
   Circuit
 *******************************************************/
/*
 * 
 *        _____  __________ 
 *       /  _  \ \______   \
 *      /  /_\  \ |     ___/
 *     /    |    \|    |    
 *     \____|__  /|____|    
 *             \/           
 *             
 * 
 *  Player      Adduino
 *  +5             +5
 *  Gnd            Gnd
 *  RX/IO0         D10
 *  TX/IO1         D11
 *  Con3           +5V
 *  Con2           GND
 *  Con1           GND
 * 
 * 
 */

/******************************************************
   Libraries
 *******************************************************/
#include "DYPlayerArduino.h"
#include <SoftwareSerial.h>


// Initialise on software serial port.
SoftwareSerial SoftSerial(10, 11);
DY::Player player(&SoftSerial);
/******************************************************
   SETUP
 *******************************************************/
void setup() {
  Serial.begin(9600);

  player.begin();
  player.setVolume(30);
  player.stop();


  //attachInterrupt(digitalPinToInterrupt(buttonPin), btn_pressed, CHANGE);

}

/******************************************************
   MAIN LOOP
 *******************************************************/
void loop() {
  player.playSpecified(1);
  delay(2000);
  player.stop();
  delay(1000);
}
