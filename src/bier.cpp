#include "bier.h"
#include "Arduino.h"
#include "BierGPIO.h"
int page = 1;
int8_t auswahl = 0;

Bier bierauswaehlen(LiqDisplay *anzeige){

        char buffer[50];
        sprintf(buffer, "Auswaehlen  [Seite%d]", page);
        anzeige->text1 = buffer;

   
    for (uint8_t curser  = 1; curser <= 3;)
    {
      break;  /* code */
    }
    
    
   
    if(taster_rechts.pressed()){
        if (page<=2)
        page++;
    }
    if(taster_links.pressed()){
        if (page>=1)
            page--;
    }

    return biersorten[auswahl] ;
    
    }
    
    