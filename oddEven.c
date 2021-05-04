#include <reg51.h>

void main()
{
	while(1){ 
			unsigned char num=P1; //asigned p1 value to num
			
			if(num %2)
				P0 = 0x00; //If p1 is even
			else
				P0 = 0xFF; //if p1 is odd
	}
	
}