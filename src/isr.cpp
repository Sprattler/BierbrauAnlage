
#include "isr.h"



void init_ISR(){
    noInterrupts();                // Alle Interrupts deaktivieren

    setupTimer2();

    interrupts();                  // Interrupts wieder aktivieren
}



/**
 * @brief    Timer um das Display alle ms zu aktualisieren
 * 
 * @note     ...
 */

void setupTimer2() {

    TCCR2A = 0;                    // Timer2 Steuerregister A zurücksetzen
    TCCR2B = 0;                    // Timer2 Steuerregister B zurücksetzen
    TCNT2  = 0;                    // Timer2 Zähler auf 0 setzen
    
    // Timer2 -> 1 ms 
    OCR2A = ((F_CPU / 64)/ 2000) - 1;       // Ftimer = Fcpu/pre  -> OCRA2A = Ftimer/Hz             
    TCCR2B |= (1 << WGM21);                 // CTC Mode aktivieren
    TCCR2B |= (1 << CS22);                  // Prescaler auf 64 setzen
    TIMSK2 |= (1 << OCIE2A);                // Timer/Counter2 Output Compare Match A Interrupt aktivieren

}
 
