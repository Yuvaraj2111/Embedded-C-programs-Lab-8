#include <reg51.h>

void main()
{
	while(1){ 
			unsigned char num=P1; //asigned p1 value to num
			unsigned char res=1;
			unsigned char i;
			for(i=2;i<num;i++){
				if(num<2){
					res=0;
					break;
				}
				if(num==2){
					break;
				}
				if(num%i==0){
					res=0;
					break;
				}
			}
		
			if(res == 0)
				P0 = 0x00; //If p1 is not a prime
			else
				P0 = 0xFF; //if p1 is prime
	}
	
}