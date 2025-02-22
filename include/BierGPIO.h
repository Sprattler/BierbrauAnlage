#pragma once
#include "Arduino.h"
#include "Bounce2.h"
using namespace Bounce2;
// ****************************************************************
// ** Defines / Konstanten                                    **
// ****************************************************************



#define PIN_MODE INPUT
#define INTERVAL_IN_MS  5
#define PRESSED_STATE   HIGH 



// ****************************************************************
// ** Taster                                                **
// ****************************************************************

extern Button taster_enter;
extern Button taster_rechts;
extern Button taster_links;
extern Button taster_hoch;
extern Button taster_runter;




// ****************************************************************
// ** Functions                                                **
// ****************************************************************

void initGPIO();
void tasterupdate();