#include<stdio.h>
void isr(int n)
{
printf("in  isr...\n ");
return;
}

main()
{
 printf("hello..\n");
 signal(2,isr);
 printf("after the signal..\n");
 while(1);
}
