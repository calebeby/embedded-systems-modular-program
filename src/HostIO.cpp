#include "HostIO.h"

void HostInit(void){
    char c;
    c=getchar();
    putchar(c);
    return (c & 0x0F);
    
}