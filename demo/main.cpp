#include "mbed.h"
#include "TextLCD.h"

TextLCD lcd(D2, D3, D4, D5, D6, D7);

int main()
{
    int i;
    lcd.printf("106061229\n");

    while(1) {
        for (i = 30; i >= 0; i--) {
            lcd.locate(5,1);
            lcd.printf(%5i, i);
            wait(1);
        }
    }
}