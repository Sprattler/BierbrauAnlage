
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
    
    // Timer2 -> 10 ms 
    OCR2A = (F_CPU / (256  * Desired_Frequency)) - 1;                            
    TCCR2B |= (1 << WGM21);                 // CTC Mode aktivieren
    TCCR2B |= (1 << CS22);                  // Prescaler auf 256 setzen
    TCCR2B |= (1 << CS22) | (1 << CS21) ;       // Prescaler auf 256 setzen
    TIMSK2 |= (1 << OCIE2A);                // Timer/Counter2 Output Compare Match A Interrupt aktivieren

}
 
