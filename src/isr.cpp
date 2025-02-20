
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
    
    // Timer1 -> 1 ms 
    OCR2A = 249;                            // Für eine Frequenz von 1ms (16 MHz / (256 * 1000) = 249)
    TCCR2B |= (1 << WGM12);                 // CTC Mode aktivieren
    TCCR2B |= (1 << CS22);                  // Prescaler auf 256 setzen
    TIMSK2 |= (1 << OCIE2A);                // Timer/Counter2 Output Compare Match A Interrupt aktivieren

}

