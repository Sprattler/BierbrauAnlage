#pragma once
#include "Arduino.h"
#include "Bounce2.h"
using namespace Bounce2;
// ****************************************************************
// ** Defines / Konstanten                                    **
// ****************************************************************

#define PIN_ENTER       0 //TODO:
#define PIN_FURTHER     0
#define PIN_BACK        0

#define PIN_MODE INPUT_PULLUP
#define INTERVAL_IN_MS  5
#define PRESSED_STATE   HIGH 



// ****************************************************************
// ** Taster                                                **
// ****************************************************************


extern Button taster_enter;
extern Button taster_further;
extern Button taster_back;




// ****************************************************************
// ** Functions                                                **
// ****************************************************************

void initGPIO();