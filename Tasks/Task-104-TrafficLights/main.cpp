#include "uop_msb.h"
using namespace uop_msb;

#define WAIT_TIME_MS 500 
#define SECONDS 1000000


DigitalOut red(TRAF_RED1_PIN,1);         //Note the initial state
DigitalOut amber(TRAF_YEL1_PIN,0);
DigitalOut green(TRAF_GRN1_PIN,0);

LCD_16X2_DISPLAY lcd;

int main()
{
  
  while(true)
  {
    red = 1; amber = 0; green = 0;
    lcd.cls();
    lcd.puts("Red");
    wait_us(10*SECONDS);

    red = 1; amber = 1; green = 0;
    lcd.cls();
    lcd.puts("Red + Amber");
    wait_us(2*SECONDS);

    red = 0; amber = 0; green = 1;
    lcd.cls();
    lcd.puts("Green");    
    wait_us(10*SECONDS);

    red = 0; amber = 1; green = 0;
    lcd.cls();
    lcd.puts("Amber 1");
    wait_us(0.5*SECONDS);

    red = 0; amber = 0; green = 0;
    lcd.cls();
    lcd.puts("Amber 1");
    wait_us(0.5*SECONDS);

    red = 0; amber = 1; green = 0;
    lcd.cls();
    lcd.puts("Amber 2");
    wait_us(0.5*SECONDS);

    red = 0; amber = 0; green = 0;
    lcd.cls();
    lcd.puts("Amber 2");
    wait_us(0.5*SECONDS);

    red = 0; amber = 1; green = 0;
    lcd.cls();
    lcd.puts("Amber 3");
    wait_us(0.5*SECONDS);

    red = 0; amber = 0; green = 0;
    lcd.cls();
    lcd.puts("Amber 3");
    wait_us(0.5*SECONDS);

    red = 0; amber = 1; green = 0;
    lcd.cls();
    lcd.puts("Amber 4");
    wait_us(0.5*SECONDS);

    red = 0; amber = 0; green = 0;
    lcd.cls();
    lcd.puts("Amber 4");
    wait_us(0.5*SECONDS);

  }
}