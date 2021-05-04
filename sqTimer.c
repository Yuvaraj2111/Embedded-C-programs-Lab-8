// Wave using Hardware timer 
#include<reg51.h>
void delay1(void);
void delay2(void);
main(){
	while(1){
		P0=0xFF; 
		delay1();       
		P0=0x00;
		delay2();
		P0=0xFF;
		delay2();
		P0=0x00;
		delay2();
	}
}

void delay1(void){	//delay function for 25
	TMOD=01;
	TH0=0xFF;
	TL0=0xDE;
	TR0=1;
	while(TF0==0);
	TR0=0;
	TF0=0;
}

void delay2(void){	//delay function	
	TMOD=01;
	TH0=0xFF;
	TL0=0xF2;
	TR0=1;
	while(TF0==0);
	TR0=0;
	TF0=0;
}