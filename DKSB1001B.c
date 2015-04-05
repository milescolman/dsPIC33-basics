/* 
 * File:   DKSB1001B.c
 * Author: mcolman
 *
 * Created on April 3, 2015, 5:58 PM
 */

#include "p33FJ256GP710.h"


_FGS(GWRP_OFF & GCP_OFF);
_FOSCSEL(FNOSC_FRC);
_FOSC(FCKSM_CSDCMD & OSCIOFNC_OFF & POSCMD_XT);
_FWDT(FWDTEN_OFF);


int main ( void )
{
    int i = 0;
 /* set LED pins (RF3) as outputs */
 TRISF = 0xFFF7;

 /* Infinite Loop */
 while ( 1 )
 {
    PORTFbits.RF3 = !PORTFbits.RF3;
    for (i = 0; i < 512; i++) 
    { 
        asm("nop");
    }
 };
} 
