#include "main.h"

// ****************************************************************
// ** Defines / Konstanten                                    **
// ****************************************************************


Bier gebraeu {0};
LiqDisplay MeinDisplay = {"Hallo",0,"",0}; 
 int test = 0;



void setup()
{


  initGPIO();  // init_Motor();   // init_TempSens(); ...
  initHMI();
  init_ISR();


  state = Start;
}

void loop()
{
if (run_main == true)
  {


    run_main = false;
    tasterupdate();

    // State Machine
    switch (state)
    {
    case Start:

      MeinDisplay.text1="Start -> Enter";

      if (taster_enter.pressed())
        state = Bierauswahl;
      break;

    case Bierauswahl:
          gebraeu = bierauswaehlen(&MeinDisplay);
      break;

    case checkAuswahl:
      /* code */
      break;    

    default:
      break;

    }

    updateDisplay(&MeinDisplay);
  }
}






// Jede 0,5 ms
ISR(TIMER2_COMPA_vect)
{
  run_main = true;
}