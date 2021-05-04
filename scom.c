#include <reg51.h>
void main(void){
	unsigned char name[]="IOT ";
	unsigned char i;
	TMOD=0x20; //use Timer 1, mode 2
	TH1=0xFA; //4800 baud rate
	SCON=0x50;
	TR1=1;
	while (1) {
		for(i=0;i<5;i++){
			SBUF=name[i]; //place value in buffer
			while (TI==0);
			TI=0;
		}
	}
}