// 3.	Write an embedded C program to generate checksum for the payload received at port PI;
// assume P1 receives three segments of payload within a duration of 15ms(one segment every 5ms).
// Transmit the payload along with the checksum on the UART

#include <reg51.h>
sbit WAVE =P3^1;

void timer0() interrupt 1 {
	WAVE=~WAVE;
}
void serial0() interrupt 4 {
	if (TI==1) {
		TI=0; //clear interrupt
	}
	else {
		P1+=SBUF; //put value on pins
		TR0=1;
		RI=0; //clear interrupt
	}
		
	
}


void main() {
	P1=0;
	TMOD=0x21;
	TH1=0xF6; //4800 baud rate
	SCON=0x50;
	TH0=0xFE; //500us
	TL0=0x0C;
	IE=0x92; //enable interrupts
	TR1=1; //start timer 1
	while (RI==0);
	SBUF=P1; 
}