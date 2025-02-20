#include "hmi.h"


// LCD mit I2C-Adresse (standardmäßig 0x27 oder 0x3F)
LiquidCrystal_I2C lcd(0x27, 20, 4); 

void initHMI() {
    // Display
    Wire.begin();  
    lcd.init();       // LCD initialisieren
    lcd.backlight();  // Hintergrundbeleuchtung aktivieren
    lcd.setCursor(0, 0);
    lcd.print("Hallo, LCD2004!");
    lcd.setCursor(0, 1);
    lcd.print("PlatformIO & ESP32");
    lcd.setCursor(0, 2);
    lcd.print("Sekunden: ");


    //init Buttons
}

Bier bierauswaehlen(){

uint8_t auswahl = 0;

//user Input.. 


return biersorten[auswahl] ;

}



//wird jede ms aufgerufen 
void updateDisplay(String &TXT) {
    lcd.setCursor(10, 2);
    lcd.print(TXT); 
    
}