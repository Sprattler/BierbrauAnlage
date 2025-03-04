#include "bier.h"
#include "Arduino.h"
#include "BierGPIO.h"

int8_t seite = 0;
int8_t spalte = 1;
int8_t auswahl = 0;

Bier bierauswaehlen(LiqDisplay *anzeige)
{
    char text1Buff[20];
    char buffer[20];

    anzeige->spalte2 =  1;
    anzeige->text2   = biersorten[1+seite*3].name;
    anzeige->spalte3 =  1;
    anzeige->text3   = biersorten[2+seite*3].name;
    anzeige->spalte4 =  1;
    anzeige->text4   = biersorten[3+seite*3].name;



    tasterAbfrage();
    seite = 0; //Dummy weil die 2 Seite Fehlt
    sprintf(buffer, "> %s", biersorten[spalte].name);
    switch (spalte)
    {
    case 1:
        //memset(anzeige, 0, sizeof(LiqDisplay)); //Alle Display-zeilen auf 0 Setzen 
        anzeige->spalte2 =  0;
        anzeige->text2 = buffer;
        break;
    case 2:
        //memset(anzeige, 0, sizeof(LiqDisplay));
        anzeige->spalte3 =  0;
        anzeige->text3 = buffer;
        break;
    case 3:
        //memset(anzeige, 0, sizeof(LiqDisplay));
        anzeige->spalte4 =  0;
        anzeige->text4 = buffer;
        break;

    case 0: //Enter
        break;

    default:
        break;
    }

    sprintf(text1Buff, "Auswaehlen  [Seite%d]", seite+1);
    anzeige->text1 = text1Buff;

    if (seite ==1){ 
        auswahl = spalte+3; //Auf der der 1 Seite hat das erste Bier(in der ersten Spalte) die Nr.1 auf dem 2 Seite die Nr.4 -> Somit Spalte +3
    }else auswahl = spalte;

    return biersorten[auswahl];
}

void tasterAbfrage()
{   

    if (taster_enter.pressed()) // Die Auswahl wird beendet und die aktive Spalte und damit gewähle bier wird zurück gegeben 
    {
        spalte = 0;
    }
    

    if (taster_rechts.pressed())
    {
        if (seite < 1){
            seite++;

        }
    }
    if (taster_links.pressed())
    {
        if (seite > 0){
            seite--;
        }
    }

    if (taster_hoch.pressed())
    {
        if (spalte > 1)
            spalte--;

        lcd.clear();  // Dei Anzeige clearen, damit die leeren Textfelder auch wirklich leer angezeigt werden 
    }
    if (taster_rechts.pressed())
    {
        if (spalte < 3)
            spalte++;

        lcd.clear();
    }
}