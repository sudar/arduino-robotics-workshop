/**
    BasicBot - The basic working bot, using library.

    Part of the Asimi project - http://sudarmuthu.com/arduino/asimi

   Copyright 2011  Sudar Muthu  (email : sudar@sudarmuthu.com)
/*
 * ----------------------------------------------------------------------------
 * "THE BEER-WARE LICENSE" (Revision 42):
 * <sudar@sudarmuthu.com> wrote this file. As long as you retain this notice you
 * can do whatever you want with this stuff. If we meet some day, and you think
 * this stuff is worth it, you can buy me a beer or coffee in return - Sudar
 * ----------------------------------------------------------------------------
 */
#include <AsimiBot.h>

#define LED1 1
#define LED2 0
#define BUZZER 6

AsimiBot asimiBot;

void setup() {

    pinMode(LED1, OUTPUT);     
    pinMode(LED2, OUTPUT);     
    pinMode(BUZZER, OUTPUT);     

    // initialize Asimi bot
    asimiBot.setEnablePins(3, 5);
    asimiBot.setControlPins(2, 4, 7, 8);

}

void loop() {
    digitalWrite(LED1, HIGH);   // set the LED1 on
    digitalWrite(LED2, LOW);   // set the LED1 on
    asimiBot.moveForward();

    delay(10000);

    // change direction
    digitalWrite(LED1, LOW);    // set the LED1 off
    digitalWrite(LED2, HIGH);    // set the LED1 off
    asimiBot.moveBackward();

    delay(10000);
}

