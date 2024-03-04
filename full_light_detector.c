/**
 * 
 * Light detector for night/day light on off switch
 *
 * Date: Mar 05, 2024
 * 
 */




#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/adc.h"
#include "pico/float.h"




#define SENSE_PIN 26
#define OUTPUT_PIN 7
#define CYCLES 120
#define GPIO_ON 1
#define GPIO_OFF 0


int main()
{
    stdio_init_all();
    adc_init();
    adc_gpio_init(SENSE_PIN);

    gpio_init(OUTPUT_PIN);  
    gpio_set_dir(OUTPUT_PIN, GPIO_OUT);


    float adc, adc_sum, avr_adc;
    int i;


    // 12-bit conversion, assume max value == ADC_VREF == 3.3 V 
    const float conversionFactor = 3.3f / (1 << 12);


    gpio_put(OUTPUT_PIN, GPIO_OFF);
    adc_select_input(0);


    while (1) 
    {
     
        adc_sum = 0;
        i = 0;
        sleep_ms(100);

        // Spectral voltage level read
        for ( i = 0; i <= CYCLES; ++i) {
             adc = (float)adc_read() * conversionFactor;
             adc_sum = adc_sum + adc;           
             sleep_ms(100);
        }

        avr_adc = adc_sum / 120; 

        if( avr_adc >= 2.00) 
            {

               gpio_put(OUTPUT_PIN, GPIO_ON);

            }

        if(avr_adc < 1.55) 
            {

               gpio_put(OUTPUT_PIN, GPIO_OFF);

            }
        
        // Sleep for 2 minutes
        sleep_ms(120000);

    }





    //-------------------------

    return 0;

}























