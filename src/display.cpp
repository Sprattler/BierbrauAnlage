#include "display.h"


// LCD mit I2C-Adresse (standardmäßig 0x27 oder 0x3F)
LiquidCrystal_I2C lcd(0x27, 20, 4);

LiqDisplay display;

// ****************************************************************
// ** Functions                                                **
// ****************************************************************

void initHMI() {
    // Display
    Wire.begin();  
    lcd.init();       // LCD initialisieren
    lcd.backlight();  // Hintergrundbeleuchtung aktivieren
    
}

void updateDisplay(){
    
    lcd.setCursor(display.Zeile1, 0);
    lcd.print(display.text1); 

    lcd.setCursor(display.Zeile2, 1);
    lcd.print(display.text2);

    lcd.setCursor(display.Zeile3, 2);
    lcd.print(display.text3); 

    lcd.setCursor(display.Zeile4, 3);
    lcd.print(display.text4);



}

