#include "BierGPIO.h"


Button taster_enter     = Button();  
Button taster_rechts   = Button();
Button taster_links      = Button();
Button taster_hoch      = Button();
Button taster_runter      = Button();


void initGPIO(){

    /*init taster    
    PIN_MODE to INPUT_PULLUP if using an internal pullup, or INPUT if using an external pullup.
    INTERVAL_IN_MS to the debounce interval in millisecons. 5 is a good value.
    PRESSED_STATE to LOW if the button outputs a LOW when pressed, or to HIGH if the button outputs a HIGH when pressed.          
    */


    taster_enter.attach     ( A1       , PIN_MODE );
    taster_rechts.attach    ( A2         , PIN_MODE );
    taster_links.attach     ( A3       , PIN_MODE );
    taster_hoch.attach     ( 0       , PIN_MODE );
    taster_runter.attach     ( 0       , PIN_MODE );

    taster_enter.interval   ( INTERVAL_IN_MS );
    taster_rechts.interval  ( INTERVAL_IN_MS );
    taster_links.interval   ( INTERVAL_IN_MS );
    taster_hoch.interval   ( INTERVAL_IN_MS );
    taster_runter.interval   ( INTERVAL_IN_MS );
    

    taster_enter.setPressedState( PRESSED_STATE ); 
    taster_rechts.setPressedState( PRESSED_STATE );  
    taster_links.setPressedState( PRESSED_STATE );
    taster_hoch.interval    ( INTERVAL_IN_MS );
    taster_runter.interval    ( INTERVAL_IN_MS );  
    

}

void tasterupdate(){

    taster_enter.update();
    taster_rechts.update();
    taster_links.update();
    taster_hoch.update();
    taster_runter.update();


}