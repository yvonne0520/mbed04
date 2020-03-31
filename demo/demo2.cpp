#include "mbed.h"
#include "uLCD_4DGL.h"

uLCD_4DGL uLCD(D1, D0, D2);

int main()
{
    int i;

    uLCD.background_color(WHITE);
    uLCD.cls();

    uLCD.color(BLUE);
    uLCD.textbackground(WHITE);
    uLCD.printf("\n106061229\n");
    uLCD.text_width(4);
    uLCD.text_height(4);

    uLCD.color(GREEN);
    for (i = 30; i >= 0; i--) {
        uLCD.locate(1, 2);
        uLCD.printf("%2d", i);
        wait(1);
    }
}