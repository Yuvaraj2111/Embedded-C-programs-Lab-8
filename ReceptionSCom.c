#include <reg51.h>
void main(void){
	unsigned char mybyte;
	TMOD=0x20; //use Timer 1, mode 2
	TH1=0xFA; //4800 baud rate
	SCON=0x50;
	TR1=1; //start timer
	while (1) { //repeat forever
		while (RI==0); //wait to receive
		mybyte=SBUF; //save value
		P1=mybyte; //write value to port
		RI=0;
	}
}