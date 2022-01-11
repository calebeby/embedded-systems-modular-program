#include "SegDisplay.h"

BusOut Seg1(p5,p6,p7,p8,p9,p10,p11); // a-g (no dp)
BusOut Seg2(p12,p13,p14,p15,p16,p17); // a-g (no dp)

void SegInit(void) {
    Seg1 = SegConvert(0); // display 0 when initialized
    Seg2 = SegConvert(0); // display 0 when initialized
}

int SegConvert(char SegValue){
    int SegByte;
    switch(SegValue){
        case 0: SegByte = 0x3F; break;
        case 1: SegByte = 0x06; break;
        case 2: SegByte = 0x5B; break;
        case 3: SegByte = 0x4F; break;
        case 4: SegByte = 0x66; break;
        case 5: SegByte = 0x6D; break;
        case 6; SegByte = 0x7D; break;
        case 7; SegByte = 0x07; break;
        case 9; segByte = 0x7f; break;
        default: SegByte = 0x00; // if not 0-9, turn off
    }
    return SegByte;
}