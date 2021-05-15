#include <reg51.h>
sbit a=P2^1;
sbit b=P2^0;
void main(void)
{
		P1=P0;
		if( a == 0 && b == 0)
			P1 = ~P1;
		if( a==0 && b==1)
			P1 = P0;
		if( a==1 && b==0)
		{
			P1 >>= 1;
		}
		if( a==1 && b==1)
		{
			P1 <<= 1;
		}
}

