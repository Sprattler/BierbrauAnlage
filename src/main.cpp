
#include "main.h"


Bier gebraeu;

void setup()
{
  initPins();
  initHMI();
  init_ISR();
  // init_Motor();
  // init_TempSens();
}

void loop()
{

  if (run_main == true)
  {
 


    // State Machine
    switch (state)
    {
    case Start:

      LCD_TXT = "Drücke Enter zur Bierauswahl";

      if (digitalRead(EnterPIN) == HIGH)
        state = Bierauswahl;

      break;

    case Bierauswahl:
      /* code */
      break;

    default:
      break;



      updateDisplay(LCD_TXT);
      run_main = false;
    }
  }
}






// Jede ms
ISR(TIMER2_COMPA_vect)
{
  if (run_main == false)
    run_main = true;
}