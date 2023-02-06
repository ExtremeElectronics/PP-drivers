
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <signal.h>
#include <time.h>
#include <unistd.h>
#include <errno.h>
#include "hardware/gpio.h"


#include "midiNotes.h"

//############################################################################################################
//################################################# Sound ####################################################
//############################################################################################################

//spo256al2
//pico SDK includes
#include "hardware/pwm.h"

//sp0256al2 includes
#include "allophones.c"
#include "allophoneDefs.h"
#define MAXALLOPHONE 64
//sound
//must be pins on the same slice
#define soundIO1 6
#define soundIO2 7
#define PWMrate 90

uint PWMslice;
uint8_t SPO256Port=0x28;
uint8_t SPO256FreqPort=0x2a;
volatile static uint8_t SPO256DataOut;
volatile static uint8_t SPO256DataReady=0;
volatile static uint8_t SPO256FreqPortData=90;

uint8_t BeepPort=0x29;
volatile static uint8_t BeepDataOut;
volatile static uint8_t BeepDataReady=0;



void PlayAllophone(int al){
    int b,s;
    uint8_t v;
    int pwmr=MidiNoteWrap[SPO256FreqPortData & 0x7f]/4;

    //reset pwm settings (play notes may change them)
    pwm_set_clkdiv(PWMslice,16);
    pwm_set_wrap (PWMslice, 256);
    
    if(al>MAXALLOPHONE) al=0;
    
    //get length of allophone sound bite
    s=allophonesizeCorrected[al];
    //and play
    for(b=0;b<s;b++){
        v=allophoneindex[al][b]; //get delta value
//        sleep_us(PWMrate);
        sleep_us(pwmr);
        pwm_set_both_levels(PWMslice,v,v);

    }

}

void PlayAllophones(uint8_t *alist,int listlength){
   int a;
   for(a=0;a<listlength;a++){
     PlayAllophone(alist[a]);
   }
}

void SetPWM(void){
    gpio_init(soundIO1);
    gpio_set_dir(soundIO1,GPIO_OUT);
    gpio_set_function(soundIO1, GPIO_FUNC_PWM);

    gpio_init(soundIO2);
    gpio_set_dir(soundIO2,GPIO_OUT);
    gpio_set_function(soundIO2, GPIO_FUNC_PWM);

    PWMslice=pwm_gpio_to_slice_num (soundIO1);
    pwm_set_clkdiv(PWMslice,16);
    pwm_set_both_levels(PWMslice,0x80,0x80);

    pwm_set_output_polarity(PWMslice,true,false);

    pwm_set_wrap (PWMslice, 256);
    pwm_set_enabled(PWMslice,true);

}

void Beep(uint8_t note){
    int w;     
    //set frequency    
    pwm_set_clkdiv(PWMslice,256);
    if (note>0 && note<128){
      //get divisor from Midi note table.
      w=MidiNoteWrap[note];  
      pwm_set_both_levels(PWMslice,w>>1,w>>1);
      //set frequency from midi note table.
      pwm_set_wrap(PWMslice,w);
    }else{
      pwm_set_both_levels(PWMslice,0x0,0x0);  
    }
}
