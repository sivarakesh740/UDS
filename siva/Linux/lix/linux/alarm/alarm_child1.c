#include<stdio.h>
#include<signal.h>
void isr(int n)
{
	if(n==17)
		printf("received signal\n");
}
main()
{
	if(fork()==0)
	{
		printf("in child..\n");
		sleep(4);
		printf("child exit..\n");
	}
	else
	{
		signal(17,isr);
		while(1);
	}
}
