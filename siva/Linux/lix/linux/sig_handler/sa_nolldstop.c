#include<stdio.h>
#include<signal.h>
void isr(int n)
{
	printf("isr ...\n");
	wait(0);
}
main()
{
	if(fork()==0)
	{
		printf("in child pid=%d\n",getpid());
		sleep(10);
		printf("child exit..\n");
		exit(0);
	}
	else
	{
		struct sigaction v;
		sigemptyset(&v.sa_mask);
		v.sa_flags=SA_NOCLDSTOP;
		sigaction(17,&v,0);
		while(1);
	}
}
