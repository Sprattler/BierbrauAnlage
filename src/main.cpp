#include "main.h"

// ****************************************************************
// ** Defines / Konstanten                                    **
// ****************************************************************


Bier gebraeu {0};
 int test = 0;



void setup()
{


  initGPIO();  // init_Motor();   // init_TempSens(); ... // Generall purpose input output
  initHMI();  //init Display
  init_ISR();
 // init_PID();

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

      display.text1="Start -> Enter";

      if (taster_enter.pressed())
        state = Bierauswahl;
      break;

    case Bierauswahl:
          gebraeu = bierauswaehlen();
      break;

    case Maischen:
      /* code */
      break;    
    case Laeutern:
      /* code */
      break;
    case Wuerzekochen:
      /* code */
      break;
    case Kuehlen:
      /* code */
      break;         

    default:
      break;

    }

    updateDisplay();
  }
}






// Jede 0,5 ms
ISR(TIMER2_COMPA_vect)
{
  run_main = true;
}