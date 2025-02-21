#include "BierGPIO.h"




void initGPIO(){

    /*init taster    
    PIN_MODE to INPUT_PULLUP if using an internal pullup, or INPUT if using an external pullup.
    INTERVAL_IN_MS to the debounce interval in millisecons. 5 is a good value.
    PRESSED_STATE to LOW if the button outputs a LOW when pressed, or to HIGH if the button outputs a HIGH when pressed.          
    */

    taster_enter.attach     ( PIN_ENTER     , PIN_MODE );
    taster_further.attach   ( PIN_FURTHER , PIN_MODE );
    taster_back.attach      ( PIN_BACK       , PIN_MODE );

    taster_enter.interval   ( INTERVAL_IN_MS );
    taster_further.interval  ( INTERVAL_IN_MS );
    taster_back.interval    ( INTERVAL_IN_MS );

    taster_enter.setPressedState( PRESSED_STATE ); 
    taster_further.setPressedState( PRESSED_STATE );  
    taster_back.setPressedState( PRESSED_STATE );  




}

