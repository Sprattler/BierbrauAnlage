
// ****************************************************************
// ** Includes                                                **
// ****************************************************************
#include <Arduino.h>

/*
Timer zur PWM Generation 
Timer 0: Steuert die Pins D4 und D5 auch                    / millis() micros()
Timer 1: Steuert die Pins D11 und D12                       
Timer 2: Steuert die Pins D3 und D11 (siehe auch Timer 1)   /Display
Timer 3: Steuert die Pins D2 und D3                     
Timer 4: Steuert die Pins D6, D7, und D8
Timer 5: Steuert die Pins D46, D45, und D44
*/

// ****************************************************************
// ** Functions                                                **
// ****************************************************************

void init_ISR();
void setupTimer2();
ISR(TIMER2_COMPA_vect) ;


