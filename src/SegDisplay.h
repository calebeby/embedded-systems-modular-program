#ifndef SEGDISPLAY_H
#define SEGDISPLAY_H

#include <mbed.h>
extern BusOut Seg1; // allows Seg1 to be manipulated by other files
extern BusOut Seg2; // allows Seg2 to be manipulated by other files
void SegInit(void);
int SegConvert(char SegValue);

#endif