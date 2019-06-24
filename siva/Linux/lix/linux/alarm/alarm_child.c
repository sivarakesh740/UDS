#include<stdio.h>
#include<signal.h>
void isr(int n)
{
                
		printf("received signal\n");
		wait(0);
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
