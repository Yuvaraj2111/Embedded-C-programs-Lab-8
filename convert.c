#include <reg51.h>
unsigned char seq_2421(unsigned char );

void timer1() interrupt 3{
		if(P0<0x64){
			P3=seq_2421(P2);
		}
}

void main(){
	TMOD = 0x20;//0000 0010 timer 0 mode 2
	TH1 = -92;
	TR1 = 1;
	IE = 0x88;//1000 0010 enable timer 0 interrupt
}

unsigned char seq_2421(unsigned char digit){
	unsigned char temp;
	if(digit<5){
		return digit;
	}else if(digit>9){
		return 0x0F;
	}else{
		temp= (digit<<4)>>4;
		temp = 0x09-temp;
		temp = ~temp;
		return (temp<<4)>>4;
	}
}