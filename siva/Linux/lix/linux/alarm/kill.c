#include<stdio.h>
void isr(int n)
{
	printf("in isr..\n");
	return;
}
main()
{
	printf("pid=%d\n",getpid());
	signal(9,isr);
	while(1);
}
