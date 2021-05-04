#include<reg51.h> 
void MSDelay(unsigned int);
void main(void) {
	 unsigned char mybyte;
	 P1=0xFE; //Assign value to p1
	 while (1) {
		 mybyte=P1; //store in temp variable
		 MSDelay(500); //5millsec delay
		 P2=mybyte; //Store into P2
	 }
 }
void MSDelay(unsigned int itime){
	unsigned int i,j;
	for (i=0;i<itime;i++)
	for (j=0;j<1275;j++);
}
