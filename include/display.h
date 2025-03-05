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
    uint8_t Zeile1;

    String text2;
    uint8_t Zeile2;

    String text3;
    uint8_t Zeile3;

    String text4;
    uint8_t Zeile4;


}LiqDisplay;

extern LiquidCrystal_I2C lcd; 
extern LiqDisplay display;  //Struct für die Display Strings und Cursor


// ****************************************************************
// ** Functions                                                **
// ****************************************************************


void initHMI();

void updateDisplay();

