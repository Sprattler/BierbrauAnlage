
// ****************************************************************
// ** Includes                                                **
// ****************************************************************
#include "display.h"
#include "isr.h"
#include "BierGPIO.h"
#include "bier.h"

// ****************************************************************
// ** Defines / Konstanten                                    **
// ****************************************************************
 enum{
    Start,
    Bierauswahl,
    checkAuswahl,
    

} state;

// ****************************************************************
// ** Typdefinitionen / Strukturdefinitionen                   **
// ****************************************************************
bool run_main = false;

// ****************************************************************
// ** Functions                                                **
// ****************************************************************


// ****************************************************************
// ** Private Variablen / Datenfelder                            **
// ****************************************************************
