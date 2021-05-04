#include<reg51.h>
void delay(unsigned char );
main(){
	P1=0x00;
	delay(1);
	P1=0xFF;
	delay(1);
}

void delay(unsigned char d){
	unsigned int i;
	for(;d>0;d++){
			for(i=255;i>0;i--);
		for(i=255;i>0;i--);
	}
}