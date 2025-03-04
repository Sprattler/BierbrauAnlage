#include "display.h"



// LCD mit I2C-Adresse (standardmäßig 0x27 oder 0x3F)
LiquidCrystal_I2C lcd(0x27, 20, 4);

// ****************************************************************
// ** Functions                                                **
// ****************************************************************

void initHMI() {
    // Display
    Wire.begin();  
    lcd.init();       // LCD initialisieren
    lcd.backlight();  // Hintergrundbeleuchtung aktivieren
    
}


void updateDisplay(LiqDisplay *anzeige){
    
    lcd.setCursor(anzeige->Zeile1, 0);
    lcd.print(anzeige->text1); 

    lcd.setCursor(anzeige->Zeile2, 1);
    lcd.print(anzeige->text2);

    lcd.setCursor(anzeige->Zeile3, 2);
    lcd.print(anzeige->text3); 

    lcd.setCursor(anzeige->Zeile4, 3);
    lcd.print(anzeige->text4);



}

