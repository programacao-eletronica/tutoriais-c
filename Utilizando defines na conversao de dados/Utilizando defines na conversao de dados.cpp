#include <iostream>

int main()
{
    printf("\r\n#############################################");
    printf("\r\n#  Programacao Eletronica: tutorial start!  #");
    printf("\r\n#############################################");

    // Simple define
    #define A   5
    #define B   10

    int result = 5 + 10;

    printf("\r\nThe result is: %d", result);

    // ADC read
    #define POTENCIMETER_ANGLE(ADC)     ((ADC*180)/1023)
    printf("\r\nPOTENCIMETER_ANGLE(ADC): %d", POTENCIMETER_ANGLE(512));

    // Non magical numbers ADC read
    #define MAX_POT_ANGLE               180
    #define VCC_AD_SCALE                1023

    #define POTENCIMETER_ANGLE_PAR(ADC) ((ADC*MAX_POT_ANGLE)/VCC_AD_SCALE)
    printf("\r\nPOTENCIMETER_ANGLE_PAR(ADC): %d", POTENCIMETER_ANGLE_PAR(512));


    (void)getchar();
}