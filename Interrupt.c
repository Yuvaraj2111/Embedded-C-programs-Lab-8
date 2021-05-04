#include <reg51.h>
sbit WAVE =P0^1;

void timer0() interrupt 1 {
	WAVE=~WAVE; //toggle pin
}
void serial0() interrupt 4 {
	if (TI==1) {
		TI=0; //clear interrupt
	}
	else {
		P0=SBUF; //put value on pins
		RI=0; //clear interrupt
	}
}


void main() {
	unsigned char x;
	P1=0xFF; //make P1 an input
	TMOD=0x22;
	TH1=0xF6; //4800 baud rate
	SCON=0x50;
	TH0=0xA4; //5 kHz has T=200us
	IE=0x92; //enable interrupts
	TR1=1; //start timer 1
	TR0=1; //start timer 0
	while (1) {
		x=P1; //read value from pins
		SBUF=x; //put value in buffer
		P2=x; //write value to pins
	}
}