#include <reg51.h>
sbit a=P0^7;
void MSDelay(unsigned int);
void main(void)
{

a=0;
while (1) //repeat forever
{
P1=0x55;
MSDelay(250); 
P1=0xAA;
MSDelay(250);
}
}
void MSDelay(unsigned int itime)
{
unsigned int i,j;
for (i=0;i<itime;i++)
for (j=0;j<1275;j++);
}