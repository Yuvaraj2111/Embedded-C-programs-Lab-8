#include<reg51.h>
           // Assign P0.0 pin in led
void delay(unsigned char );
main(){
	P0=0xFF; 
	delay(100);       
	P0=0x00;
	delay(100);
}

void delay(unsigned char x){	//delay function	
	for(;x>0;x--);
}
