#include <reg51.h>
void main(void)
{
	if(P1<0x7F)
		P0=0x0A;
	else if(P1<0xBF)
		P0=0x0B;
	else if(P1<0xDF)
		P0=0x0C;
	else if(P1<0xEF)
		P0=0x0D;
	else
		P0=0x0E;
}

