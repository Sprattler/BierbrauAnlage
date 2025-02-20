#pragma once 
// ****************************************************************
// ** Includes                                                **
// ****************************************************************
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include "Arduino.h"
#include "biersorten.h"



// ****************************************************************
// ** Functions                                                **
// ****************************************************************


void initHMI();
void updateDisplay(String &TXT); // TIMER1 ISR: 1ms
Bier bierauswaehlen();



