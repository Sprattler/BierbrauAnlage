#pragma once 
// ****************************************************************
// ** Includes                                                **
// ****************************************************************
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include "Arduino.h"

// ****************************************************************
// ** typedefs                                                **
// ****************************************************************



typedef struct 
{
    String text1;
    uint8_t spalte1;

    String text2;
    uint8_t spalte2;

    String text3;
    uint8_t spalte3;

    String text4;
    uint8_t spalte4;


}LiqDisplay;



// ****************************************************************
// ** Functions                                                **
// ****************************************************************


void initHMI();

void updateDisplay(LiqDisplay *anzeige);

