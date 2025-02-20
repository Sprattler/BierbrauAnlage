
#include "main.h"




void setup() {

  initHMI();
  init_ISR();
  //init_Motor();
  //init_TempSens();


  
}





void loop() {

if (run_main == true) {
  run_main =false;


  updateDisplay();










}


}






// Jede ms
ISR(TIMER2_COMPA_vect) {

run_main = true;

}