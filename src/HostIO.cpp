#include "HostIO.h"

void HostInit(void){
 printf("\r\nType two digit numbers to be displayed\r\n");   
}

char GetKeyInput(void){
    char c;
    c=getchar();
    putchar(c);
    return (c & 0x0F);

}