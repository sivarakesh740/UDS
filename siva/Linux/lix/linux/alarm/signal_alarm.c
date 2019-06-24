#include<stdio.h>
#include<signal.h>
void isr(int n)
{
	printf("in isr..\n");
	signal(2,SIG_DFL);
	signal(3,SIG_DFL);
}
main()
{
        printf("hello..\n");
	signal(SIGINT,SIG_IGN);
	signal(SIGQUIT,SIG_IGN);
	signal(SIGALRM,SIG_IGN);
	alarm(10);
	while(1);
}



