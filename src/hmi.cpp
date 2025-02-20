#include "hmi.h"


// LCD mit I2C-Adresse (standardmäßig 0x27 oder 0x3F)
LiquidCrystal_I2C lcd(0x27, 20, 4); 

void initHMI() {

    //init Display
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




void updateDisplay() {
    lcd.setCursor(10, 2);
    lcd.print(millis() / 1000); // Zeigt die Sekunden seit Start an
    
}