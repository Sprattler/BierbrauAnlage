#include "main.h"

// ****************************************************************
// ** Defines / Konstanten                                    **
// ****************************************************************
Button taster_enter     = Button();  
Button taster_further   = Button();
Button taster_back      = Button();


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
    taster_enter.update();

    // State Machine
    switch (state)
    {
    case Start:

      MeinDisplay.text1="Start -> Enter";

      if (taster_enter.pressed())
        state = Bierauswahl;
      break;

    case Bierauswahl:
          
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